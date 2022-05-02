#pragma once
#include "Runner.h"
class RunnersRace {
private:
	Runner storeRunner;
	Runner storeTime;

public:
	RunnersRace();
	RunnersRace(Runner _myRunner, Runner _time);
	~RunnersRace();

	//setter
	void setRunner(Runner _myRunner);
	void setTime(Runner _time);

	//getter

	Runner getRunner();
	Runner getTime();

	//overload

	friend ostream& operator<<(ostream& out, const RunnersRace& myRunner);


	friend istream& operator>>(istream& in, RunnersRace& myRunner);


	
};

