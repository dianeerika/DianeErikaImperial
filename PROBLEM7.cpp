#include<iostream>
#include<conio.h>>
using namespace std;

int main()
{
	int number, sum;
	do
	{
		sum=0;
		cout << "Enter a number: ";
		cin >> number;
		if(number<=0){
			cout << "Thank you!";
			return 0;
		}
		for(int i=1; i<=number; i++)
		{
			sum = sum + i;
		}
		cout << "The sum of all whole numbers from 1 to " << number << " is " << sum << ".\n";
	}while(number>0);
	_getch();
	return 0;
}
