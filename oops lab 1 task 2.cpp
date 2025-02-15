// la
#include<iostream>
using namespace std;
double grosssalary(int Basicsalary,int allowanceper)
{
	return Basicsalary+(Basicsalary*allowanceper/100);
}
double netsalary(int grosssalary,int deductionper)
{
	return grosssalary-(grosssalary*deductionper/100);
}
int main()
{
	int bs,ap,dp,gs;
	cout<<"Basicsalary:"<<endl;
	cin>>bs;
	cout<<"Allowance:"<<endl;
	cin>>ap;

	cout<<"Deduction:"<<endl;
	cin>>dp;
	int GrossSalary=grosssalary(bs,ap);
	int NetSalary=netsalary(gs,dp);
	cout<<"GS:"<<GrossSalary<<endl;
	cout<<"NS:"<<NetSalary<<endl;
	return 0;
}