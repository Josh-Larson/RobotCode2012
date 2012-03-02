#include <WPILib.h>
#include "Robot.h"
#include <fstream>

#define PI 3.14159265358979323

Robot::Robot() {
	left = new Jaguar(1);
	right = new Jaguar(2);
}

Robot::~Robot() {
	delete left;
	delete right;
}

void Robot::Autonomous() {
	while (IsAutonomous()) {
		left->Set(0.0);
		right->Set(0.0);
	}
}

void Robot::OperatorControl() {
	Joystick joy1(1);
	Gyro gyro(1);
	gyro.Reset();
	float speed = .3;
	Encoder leftWheel(1, 2);
	Encoder rightWheel(3, 4);
	leftWheel.Start();
	rightWheel.Start();
	double distanceLeft = 0.0;
	double distanceRight = 0.0;
	double distancePerCount = (8.0 * PI) / 128;
	double pulseDistance = 8.0 * PI / 128.0;
	leftWheel.SetDistancePerPulse(pulseDistance);
	rightWheel.SetDistancePerPulse(pulseDistance);
	int leftCount = 0;
	int rightCount = 0;
	bool alreadyRun = false;
	while (IsOperatorControl()) {
		float y = 0;
		float z = 0;
		y = -joy1.GetRawAxis(Joystick::kDefaultYAxis);
		z = joy1.GetRawAxis(Joystick::kDefaultZAxis);
		z *= .7;
		if (joy1.GetTrigger()) {
			gyro.Reset();
		}
		leftCount = leftWheel.GetDistance();
		rightCount = rightWheel.GetDistance();
		//Balance(gyro, leftWheel, rightWheel);
		float angle = gyro.GetAngle();

		//DriverStationLCD::GetInstance()->PrintfLine(DriverStationLCD::kUser_Line1, "Left: %f", distanceLeft);
		//DriverStationLCD::GetInstance()->PrintfLine(DriverStationLCD::kUser_Line2, "Right: %f", distanceRight);
		DriverStationLCD::GetInstance()->PrintfLine(DriverStationLCD::kUser_Line3, "Gyro: %f", angle);
		DriverStationLCD::GetInstance()->PrintfLine(DriverStationLCD::kUser_Line4, "Wheels-L: ", leftCount);
		DriverStationLCD::GetInstance()->PrintfLine(DriverStationLCD::kUser_Line5, "Wheels-R: ", rightCount);
		DriverStationLCD::GetInstance()->UpdateLCD();

		left->Set(y-z);
		right->Set(y+z);
	}
}

void Robot::Balance(Gyro gyro, Encoder leftWheel, Encoder rightWheel) {
	float angle = gyro.GetAngle();
	int leftCount = 0;
	int rightCount = 0;
	double distanceLeft = 0.00;
	double distanceRight = 0.00;
	double distancePerCount = (8.0 * PI) / 128;
	double speed;
	leftCount = leftWheel.Get();
	rightCount = rightWheel.Get();
	distanceLeft = leftCount * distancePerCount;
	distanceRight = rightCount * distancePerCount;
	time_t balancePerSecond = time(NULL);
	double distanceSinceUpdate = 0.00;
	while (distanceLeft < 33) {
		leftCount = leftWheel.Get();
		rightCount = rightWheel.Get();
		distanceLeft = leftCount * distancePerCount;
		distanceRight = rightCount * distancePerCount;
		angle = gyro.GetAngle();
		if (time(NULL) - balancePerSecond >= 1) {
			if (distanceSinceUpdate < 10) {
				speed += .05;
			} else if (distanceSinceUpdate > 12){
				speed -= .05;
			} else {
				balancePerSecond = time(NULL);
				speed = .3;
			}
		} else {
			distanceSinceUpdate = distanceLeft;
			if (distanceSinceUpdate > 12){
				speed -= .05;
			}
		}
	}
	while (distanceLeft < 44) {
		leftCount = leftWheel.Get();
		rightCount = rightWheel.Get();
		distanceLeft = leftCount * distancePerCount;
		distanceRight = rightCount * distancePerCount;
		angle = gyro.GetAngle();
		if (time(NULL) - balancePerSecond >= 1) {
			if (distanceSinceUpdate < 2) {
				speed += .05;
			} else if (distanceSinceUpdate > 4){
				speed -= .05;
			} else {
				balancePerSecond = time(NULL);
				speed = .3;
			}
		} else {
			distanceSinceUpdate = distanceLeft;
			if (distanceSinceUpdate > 4){
				speed -= .05;
			}
		}
	}
	if (true) {
		int switchPerSecond = 1;
		while (switchPerSecond > 0) {
			switchPerSecond = 0;
			float lastAngle = 0.0;
			time_t startTime = time(NULL);
			angle = gyro.GetAngle();
			while (startTime <= 3) {
				left->Set(0);
				right->Set(0);
				angle = gyro.GetAngle();
				if (angle < -3 && lastAngle > 0) {
					switchPerSecond++;
					lastAngle = angle;
				} else if (angle > 3 && lastAngle < 0) {
					switchPerSecond--;
					lastAngle = angle;
				}
			}
		}
	}
}

START_ROBOT_CLASS(Robot)
