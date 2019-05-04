#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
	double hours, total, limit;
	char package;
	
	cout << "Which package you purchased? A, B, or C? : ";
	package = cin.get();
	
	if(package == 'A' || package == 'B' || package == 'C')
	{
	
	cout << "How many hours were used: ";
	cin >> hours;
	
	if(hours < 0)
	{
		cout << "Invalid hours. " ;
		for(int i=0; i<=80; i++)
		{
	  		for(long int h=0; h<16000000; h++)
	  		{ }
	  	}
	  	return 0;
	}
	
	if(package == 'A')
	{
	limit = 995;
	if(hours < 10)
	{   
	total = limit;
	}
	else
	total = ((hours - 10) * 20) + limit;
	
	cout << "The amount due is: P " << total ;
	}
	
	if(package == 'B')
	{
	limit = 1495;
	if(hours < 20)
	total = limit;
	else
	total = ((hours - 20) * 10) + limit;
	
	cout << "The amount due is: P " << total ;
	}
	
	if(package == 'C')
	{
	limit = 1995;
	total = limit;
	cout << "The amount due is: P " << total ;
	}
	}
	else
	{
		cout << "Invalid package. Package not available. ";
		for(int i=0; i<=80; i++)
		{
	  		for(long int h=0; h<16000000; h++)
	  		{ }
	  	}
	}
	_getch();
	return 0;
	
}
