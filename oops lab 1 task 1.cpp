// laiba
#include<iostream>
using namespace std;
double kilo(double kilometers)
{
	return kilometers*0.621;
}
double temp(double celcius)
{
	return (celcius*9/5)+32;
}
void time(int totalseconds)
{
	int hours=totalseconds/3600;
	totalseconds%=3600;
	int min=totalseconds/60;
	int second=totalseconds%60;
	cout<<"Hours"<<hours<<" Min"<<min<<" Sec"<<second;
	
}
int main()
{
	int choice,sec;
    double km,celcius;
    cout<<"Display menu:";
    cout<<"Convert kilo into miles:";
    cout<<"Convert celcius into fahrenheit:";
    cout<<"Convert seconds into hours,min,sec:";
    cout<<"Enter the choice:";
    cin>>choice;
    switch(choice)
    {
    	case 1:
    	cout<<"kilo to meter:";
	cin>>km;
 double miles=kilo(km);	
 	cout<<"Miles:"<<miles<<endl;
 	break;
 	case2:
 		cout<<"Celcius:";
	cin>>celcius;
	float fahrenheit=temp(celcius);
	cout<<"Fahrenheit:"<<fahrenheit<<endl;
	break;
	case3:
		cout<<"Seconds:";
	cin>>sec;
	time(sec);
	deafault:
		cout<<"Invalid choices:";
		break;
	}
	
	

}