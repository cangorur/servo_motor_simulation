% initial values for basic parameters
warning off
load best_params.mat

starting_speed = 0;
step_speed = 0.5;

% starting_torque = -0.575;
% ending_torque = 0;
% step_torque = 0.005;
% torque_array = starting_torque:step_torque:ending_torque;

% size_tq_arr = size(torque_max_speed_new);
torque_list = linspace(0, -0.3, 61);
size_tq = size(torque_list);
for j = 1:size_tq(2)%size_tq_arr(1)
%     req_torque = torque_max_speed_new(j,1)
%     ending_speed = torque_max_speed_new(j,2);
    req_torque = torque_list(j);
    ending_speed = 38;
    speed_array = starting_speed:step_speed:ending_speed;
    for i = speed_array
        req_speed = i;
        disp(['speed = ', num2str(req_speed), ', torque = ',num2str(req_torque)])
        sim('simulation_servo_agent_1219.slx');
        
        [rows, ~] = size(rpm);
        outArray = [req_rpm(floor(rows/2):rows-10,:) rpm(floor(rows/2):rows-10,:) I_raw(floor(rows/2):rows-10,:) V_in(floor(rows/2):rows-10,:) req_tq(floor(rows/2):rows-10,:) tq(floor(rows/2):rows-10,:)];
        powerArray =  [req_rpm(floor(rows/2):rows-10,:) rpm(floor(rows/2):rows-10,:) I_raw(floor(rows/2):rows-10,:).*V_in(floor(rows/2):rows-10,:) tq(floor(rows/2):rows-10,:)];
        
        dlmwrite ( 'output_1_sim_conveyor_full_1.28.csv', outArray, '-append');
        dlmwrite ( 'output_1_sim_conveyor_V_P_T_1.28.csv', powerArray, '-append');
    end
end