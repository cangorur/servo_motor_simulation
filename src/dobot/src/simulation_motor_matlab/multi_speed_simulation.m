% initial values for basic parameters
warning off
load best_params.mat
req_torque = 0.0;

starting_speed = 35.0;
ending_speed = 0.0;
step = -0.5;

speed_array = starting_speed:step:ending_speed;
req_speed = starting_speed;

for i = speed_array
    req_speed = i
    sim('simulation_servo_agent_1219.slx');
    [rows, ~] = size(rpm);
    outArray = [req_rpm(floor(rows/2):rows-10,:) rpm(floor(rows/2):rows-10,:) I_raw(floor(rows/2):rows-10,:) V_in(floor(rows/2):rows-10,:)];
    powerArray =  [req_rpm(floor(rows/2):rows-10,:) rpm(floor(rows/2):rows-10,:) I_raw(floor(rows/2):rows-10,:).*V_in(floor(rows/2):rows-10,:)];

    dlmwrite ( 'output_0.5_simulation_conveyor_new_setting_0320.csv', outArray, '-append');
    dlmwrite ( 'output_0.5_sim_conveyor_power_new_setting_0320.csv', powerArray, '-append');
end