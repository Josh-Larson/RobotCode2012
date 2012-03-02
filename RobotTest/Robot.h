#include <WPILib.h>

class Robot : public SimpleRobot {
public:
	Robot();
	~Robot();
	void Autonomous();
	void OperatorControl();
	void Balance(Gyro gyro, Encoder leftWheel, Encoder rightWheel);
	
	
private:
	Jaguar *left;
	Jaguar *right;
};
