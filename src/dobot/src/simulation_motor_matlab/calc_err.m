% this m file is used for searching the best parameters for friction,
% including C (Coulomb friction torque, i.e. constant friction), 
% and F (Viscous friction coefficient, i.e. dynamic friction).

% 3.20
% middle(overall) linear regression
slope_mid = 0.00295109;
intercept_mid = 0.12371663;
% linear regression upper bound 
slope_up =   0.00348037;
intercept_up = 0.12440587;
% linear regression lower bound 
slope_low = 0.0023434;
intercept_low = 0.1248949;


cnt = 0;
speed_list = [5, 15, 25, 35];
s = size(speed_list);
speed_array = zeros(s(2),1);
current_array = zeros(s(2),1);
in_cnt = 0;

for i = speed_list
    cnt = cnt+1;
    in_cnt = in_cnt + 1;
    req_speed = i;
    disp( ['No.', num2str(cnt), ': C=', num2str(C), ' ,F=', num2str(F), ' ,v=', num2str(req_speed)])
    sim('simulation_servo_agent_1219.slx');
%     outArray = [sim_time rpm I_raw I_aver];

    [rows, ~] = size(rpm);
    std_rpm = std(rpm(floor(rows/2):rows-10,:));
    mean_rpm = mean(I_raw(floor(rows/2):rows-10,:));
    std_current = std(I_raw(floor(rows/2):rows-10,:));
    mean_current = mean(I_raw(floor(rows/2):rows-10,:));
    D = [cnt, C, F, mean_rpm, std_rpm, std_current, mean_current];
    dlmwrite ( 'output_whole_1219.csv', D, '-append');

    speed_array(in_cnt,:) = req_speed;
    current_array(in_cnt,:) = mean_current;        
end

% calculate the slope and intercept
lm = fitlm(speed_array,current_array);
slope = lm.Coefficients.Estimate(2);
intercept = lm.Coefficients.Estimate(1);
rmse = lm.RMSE;
Result = [slope, intercept, rmse];
disp("Results [slope, intercept, rmse]: ")
disp(Result)
err_slope = abs(slope - slope_mid);
err_intercept = abs(intercept - intercept_mid);
in = (slope <= slope_up) && (slope >= slope_low) && (intercept <= intercept_up) && (intercept >= intercept_low);
Error = [err_slope, err_intercept, in];
disp("Error [err_slope, err_intercept, within_err_range]: ")
disp(Error)
integration = [iter, slope, intercept, rmse, err_slope, err_intercept, in];
dlmwrite ( 'output_results.csv', integration, '-append');
