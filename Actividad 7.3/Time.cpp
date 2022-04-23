#include "Time.h"
#include <iomanip>
#include <iostream>
#include <stdexcept>
using namespace std;

Time::Time(int hr, int min, int sec)
{
	setTime(hr, min, sec);
}
// end Time constructor

Time& Time::setTime(int h, int m, int s) {
	setHour(h);
	setMinute(m);
	setSecond(s);
	return *this;
}

Time& Time::setHour(int h) {
	if (h >= 0 && h < 24)
	{
		hour = h;
	}
	else
		throw invalid_argument("hour must be 0-23");

	return *this;
}

Time& Time::setMinute(int m) {
	if (m >= 0 && m < 60)
	{
		minute = m;
	}
	else
		throw invalid_argument("minute must be 0-59");
	return *this;
}

Time& Time::setSecond(int s) {
	if (s >= 0 && s < 60)
	{
		second = s;
	}
	else
		throw invalid_argument("second must be 0-59");
	return *this;
}

int Time::getHour() const
{
	return this->hour;
}
// end function getHour

int Time::getMinute() const
{
	return this->minute;
}
// end function getMinute

int Time::getSecond() const
{
	return this->second;
}
// end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
		<< ":" << setfill('0') << setw(2) << minute
		<< ":" << setw(2) << second; //<< //(hour < 12 ? " AM" : " PM");
} // end function printStandard

bool Time::operator>(const Time& myTime)
{
	bool flag = true;
	if ((getHour() * 3600 + getMinute() * 60 + getSecond()) > (myTime.getHour() * 3600 + myTime.getMinute() * 60 + myTime.getSecond()))
	{
		flag = true;
	}
	else
	{
		flag = false;
	}
	return flag;
}

bool Time::operator<(const Time& myTime)
{
	bool flag = true;
	if ((getHour() * 3600 + getMinute() * 60 + getSecond()) < (myTime.getHour() * 3600 + myTime.getMinute() * 60 + myTime.getSecond()))
	{
		flag = true;
	}
	else
	{
		flag = false;
	}
	return flag;
}

ostream& operator<<(ostream& out, const Time& myTime)
{
	// // O: insert return statement here
	out << ((myTime.getHour() == 0 || myTime.getHour() == 12) ? 12 : myTime.getHour() % 12)
		<< ":" << setfill('0') << setw(2) << myTime.getMinute()
		<< ":" << setw(2) << myTime.getSecond() << endl; //<< //(myTime.getHour() < 12 ? " AM" : " PM");
	return out;
}

istream& operator>>(istream& in,  Time& myTime)
{
	// // O: insert return statement here

	cout << "Enter hours , minutes and seconds : " << endl;
	cout << "Hour: ";
	in >> myTime.hour;
	cout << "Minutes: ";
	in >> myTime.minute;
	cout << "Seconds: ";
	in >> myTime.second;

	return in;

}
