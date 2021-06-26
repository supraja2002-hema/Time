#include<iostream>
using namespace std;
class Time{
	private:
		int hours;
		int minutes;
		int seconds;
		int sec;
	public:
	    input();
		convert();
		display();	
};
Time::input()
{
	cout<<"Enter the values:";
	cout<<"\nHours:";
	cin>>hours;
	cout<<"\nMinutes:";
	cin>>minutes;
	cout<<"\nSeconds:";
	cin>>seconds;
}
Time::convert()
{
	sec=seconds+minutes*60+hours*3600;
}
Time::display()
{
	cout<<"\nTime is "<<hours<<":"<<minutes<<":"<<seconds;
	cout<<"\nTime in seconds is "<<sec;
}
main()
{
	Time t;
	t.input();
	t.convert();
	t.display();
}
