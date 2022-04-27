#include "Runner.h"
#include "Time.h"
#include "iostream"

using namespace std;

Runner::Runner()
{
	setRunner("");
	setTime(0, 0, 0);
}

Runner::Runner(string _runner, int _hours, int _minutes, int _seconds):time(_hours,_minutes,_seconds)
{
	
}

Runner::Runner(string _runner, Time _time)
{
	this->runner = _runner;
	setTime(_time.getHour(), _time.getMinute(), _time.getSecond());
}

Runner::~Runner()
{
	//destructor
}

void Runner::setRunner(string _runner)
{
	this->runner = _runner;
}

void Runner::setTime(int _hours, int _minutes, int _seconds)
{
	time.setTime(_hours, _minutes, _seconds);
}

void Runner::setTime(Time _time)
{
	time.setTime(_time.getHour(), _time.getMinute(), _time.getSecond());
}

 string Runner::getRunner()
{
	return runner;
}

 Time Runner::getTime() const
 {
	 return time;
 }
 bool Runner::operator>(const Runner& myRunner)
 {
	 bool flag = false;
	 if(time > myRunner.getTime()){
	 	return true;
	}
	return flag;
 }
 bool Runner::operator<(const Runner& myRunner)
 {
	 bool flag = false;
	 if (time < myRunner.getTime()) {
		 return true;
	 }
	 return flag;
 }
 ostream& operator<<(ostream& out, const Runner& myRunner)
 {
	 out << "Runner's name:  ";
	 out << myRunner.runner << endl;
	 out << "Runner time: ";
	 out << myRunner.time;
	 return out;
 }
 istream& operator>>(istream& in, Runner& myRunner)
 {
	 cout << "Runner's name:  ";
	 in >> myRunner.runner;
	 cout << "Runner time: ";
	 in >> myRunner.time;
	
	 return in;
 }