#!/bin/bash

source ../../../devel/setup.bash

# launch the real motor
# roslaunch dobot motor.launch

# node killing handler when given "ctrl+c" signal
function int_handler()
{
	echo "Ctrl-C caught...performing clean up"
	for ((i=1; i<=$1; ++i ))
	do
		rosnode kill /simulation_servo_agent_$i
	done
	echo "Cleanup finished."

	exit 0
}

trap "int_handler" SIGINT SIGTERM

# launch the simulation
for ((i=1; i<=$1; ++i ))
do
	if [ $i = 1 ]
	then
		roslaunch dobot simu.launch motor_id:=$i &
	else
		roslaunch --wait dobot simu.launch motor_id:=$i &
	fi
done

# your script goes here
echo "Revoking the script..."
sleep infinity
