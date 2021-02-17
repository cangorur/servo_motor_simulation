% initial values for basic parameters
warning off
load best_params.mat

starting_speed = 0;
ending_speed = 55;
step_speed = 0.5;
speed_array = starting_speed:step_speed:ending_speed;
req_speed = starting_speed;

starting_torque = -0.6;
ending_torque = 0;
step_torque = 0.005;
torque_array = starting_torque:step_torque:ending_torque;
req_torque = starting_torque;
% sign_torque = sign(req_speed);

max_torque = zeros(111,1);

for i = speed_array
    req_speed = i;
    if i ~= 0
        torque_array = max_torque(floor(i/0.5),:):step_torque:ending_torque;
    end
    for j = torque_array
        req_torque = j;
        disp(['speed = ', num2str(req_speed), ', torque = ',num2str(req_torque)])
        sim('simulation_servo_agent_1219.slx');
        [rows, ~] = size(rpm);
        mean_rpm = mean(rpm(floor(rows/2):rows-10,:));
        std_rpm = std(rpm(floor(rows/2):rows-10,:));
        if abs(req_speed - mean_rpm) <= 0.5
            max_torque(floor(i/0.5)+1, :) = req_torque;
            disp(['***speed = ', num2str(req_speed), ', max torque = ',num2str(req_torque)])
            break;
        end
    end
%     powerArray =  [req_rpm(floor(rows/2):rows-10,:) rpm(floor(rows/2):rows-10,:) I_raw(floor(rows/2):rows-10,:).*V_in(floor(rows/2):rows-10,:)];

%     mean_rpm = mean(I_raw(floor(rows/2):rows-10,:));
%     mean_current = mean(I_raw(floor(rows/2):rows-10,:));
%     D = [req_speed mean_rpm, mean_current];
%     dlmwrite ( 'output_0.5_simulation_conveyor.csv', outArray, '-append');
%     dlmwrite ( 'output_0.5_sim_conveyor_power.csv', powerArray, '-append');
end