/*************************** RUNNER.h *****************************/
#include <string>
#include "Time.h"
using namespace std;

class Runner
{
private:

	string runner;
	Time time;

public:
	//Runner Constructors
	Runner();
	Runner(string _runner, int _hours, int _minutes, int _seconds); // all parameters
	Runner(string _runner, Time _time); // 2 parameters
	~Runner(); // destructor

	//Runner Setters

	void setRunner(string _runner); // set runner name
	void setTime(int _hours, int _minutes, int _seconds); //set runner time 
	void setTime(Time _time);

	//runner getters

	string getRunner();
	Time getTime() const;

	//function overload

	friend ostream& operator<<(ostream& out, const Runner& myRunner);
	

	friend istream& operator>>(istream& in, Runner& myRunner);

	

	bool operator > (const Runner& myRunner);
	bool operator < (const Runner& myRunner);




};
/*************************** END RUNNER.h *****************************/