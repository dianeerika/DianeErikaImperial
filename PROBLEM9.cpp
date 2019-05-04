#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int row, column;
	cout << "How many rows: "; 
	cin >> row;
	cout << "How many columns: ";
	cin >> column;
	char table[row][column];
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<row; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	_getch();
	return 0;
}
