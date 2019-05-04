#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int gallon;
	cout << "Please enter the gallons of water you have consumed based on the meter reading: ";
	do{
		cin >> gallon;
		if (gallon<0){
			cout << "Invalid data. Check the amount you entered. Please try again. : ";
		}
	}while(gallon<0);
	double demandCharge = 35.00, consumptionCharge = 1.10, pay;
	double totalCost = demandCharge+(gallon*consumptionCharge);
	double totalCostLate = totalCost + 20;
	cout << "Enter amount paid: P ";
	do{
		cin >> pay;
		if (pay < 0)
			cout << "Invalid data. Check the amount you entered. Please try again. : P ";
	}while(pay < 0);
	if(pay<totalCost){
		cout << "Your total bill costs P " << totalCost << " with a late charge fee of P20.\n";
		cout << "Please enter the right amount:  P ";
		cin >> pay;
		if( pay < 0)
		{
			cout << "Payment entered invalid. Please try again. ";
			for(int i=0; i<=80; i++)
			{
		  		for(long int j=0; j<16000000; j++)
		  		{ }
		  	}
		  	return 0;
		}
		else if(pay < totalCostLate){
			cout << "Payment entered insufficient. Please try again. ";
			for(int i=0; i<=80; i++)
			{
		  		for(long int j=0; j<16000000; j++)
		  		{ }
		  	}
		  	return 0;
		}
		else
			cout << "Payment accepted. " << " You have a total change of P " << pay - totalCostLate;
	}
	else
		cout << "Payment accepted. Your total bill costs P " << totalCost << ". You have a total change of P " << pay - totalCost << ".";
	_getch();
	return 0; 
}
