#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int fibnum = 0, subsnum = 1, sum=0;
	cout << fibnum << "," << subsnum <<",";
	for(int i=1; i<=20; i++)
	{
		sum=fibnum+subsnum;
		if(i==20)
		{
			cout << sum;
			return 0;
		}
		cout << sum << ",";
		fibnum = subsnum;
		subsnum = sum;	
	}
	_getch();
	return 0;
}
