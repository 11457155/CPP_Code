//============================================================================
// Name        : CPP1-18.cpp
// Author      : bobby
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Designing a program to output numbers based on the boundary of two the user once input*/
#include <iostream>
using namespace std;

int input1 = 1;
int input2 = 10;

	void PrintDesiredOutput()
	{
		//int x,y;
		cout << "please input two numbers:" << endl;
		//cin >> x >> y >>endl;


		if (input1 == input2)
		{
			cout << "there are no numbers between these two input" << endl;
		}
		else if(input1 < input2)
		{
			cout << "the numbers between the these two input is:" <<endl;
			for(int i = input1+1; i < input2; i++)
			{
				cout << i << endl;
			}
		}
		else if (input1 > input2)
		{
			cout << "the numbers between the these two input is:" <<endl;
			for(int i = input1-1; i > input2; i--)
			{
				cout << i << endl;
			}
		}
	}


int main() {
	cout << "!!!Starting running this program!!!" << endl;
	PrintDesiredOutput();
	return 0;
}
