#ifndef COLLECTOR_H
#define COLLECTOR_H

#include <WPILib.h>
#include "Constants.h"
#include "SharpIR.h"

enum CollectorState {
	OFF,
	LOOKING_FOR_BALLS,
	STAGE1,
	STAGE2,
	PREPARE_TO_SHOOT,
	SHOOTING,
	EJECTING
};

enum RampState {
	RAMP_OFF,
	UP,
	DOWN
};

class Collector
{
public:
	Collector();
	~Collector();
	
	bool Shoot();
	void ManipulateRamp(RampState state);
	void Stop();
	void Eject();
	void Start();
	static void SetBallCount( int balls );
	void PrepareToShoot();
	
private:
	static unsigned balls;
	static Victor *grabber;
	static Victor *lifter;
	static SharpIR *frontIR;
	static SharpIR *frontMiddleIR;
	static SharpIR *middleIR;
	static SharpIR *topIR;
	Task *collectorTask;
	Relay *strike1;
	Relay *strike2;
	static CollectorState collectorState;
	static void ThreadLoop();
	static void RejectBall();

};

#endif
