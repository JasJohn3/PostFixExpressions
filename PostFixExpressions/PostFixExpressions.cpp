// PostFixExpressions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<math.h>
#include<stack>

using namespace std;

int main()
{
	
	string exp = "6 2 + 5 * 8 4 / - ";

	stack<int> Evaluate;

	// Scan all characters one by one  

	for (string::size_type i=0; i < exp.size(); ++i)
	{
		// If the scanned character is a Number, push it to the stack.

		if (isdigit(exp[i]))
		{
			cout << "Pushing: "<<exp[i]<<endl;
			Evaluate.push(exp[i] - '0');
		}
		else if (exp[i]==' ')
		{
			cout << "space detected." << endl;
			continue;
		}
		// If the scanned character is an operator, pop two elements from stack apply the operator  
		else
		{
			int first_Value = Evaluate.top(); Evaluate.pop();
			int second_Value = Evaluate.top(); Evaluate.pop();
			switch (exp[i])
			{
			case '+':Evaluate.push(second_Value + first_Value); break;
			case '-': Evaluate.push(second_Value - first_Value); break;
			case '*': Evaluate.push(second_Value * first_Value); break;
			case '/': Evaluate.push(second_Value / first_Value); break;
			}
		}
	}
	cout << Evaluate.top();
	

	return 0;
}

/*
int evaluatePostfix(char* exp);
int evaluatePostfix(char* exp)
{

	return Evaluate.top();
}
*/

/*		
	std::cout << "This program Evaluates a string created by the user in a post fix format." << endl;
	std::cout << "The Test string is: "<< string_input<< endl;
	for (std::size_t i = 0; i < string_input.length(); i++)
	{
		if (string_input[i] == ' ')
		{
			//detecting if spaces exist in the user string input
			std::cout << "Space Detected, continuing" << endl;
			continue;

		}
		else if (isdigit(string_input[1]))
		{
			//If a Number exists, add that number to the stack.
			Evaluate.push(string_input[i] - '0');
			std::cout << "User input Added: " << Evaluate.top() << endl;
		}

	}
	result = Evaluate.top();
	std::cout << "Result: " << result << endl;

	std::system("pause");

		else if (string_input[i] == '+' || string_input[i] == '-' || string_input[i] == '*' || string_input[i] == '/' || string_input[i] == '^' || string_input[i] == '%')
		{
			std::cout << "Evaluation to be performed is: " << string_input[i] << endl;
			int First_Expression = Evaluate.top();
			std::cout << "First Expression: " << Evaluate.top() << endl;
			int Second_Expression = Evaluate.top();
			std::cout << "Second Expression: " << Evaluate.top() << endl;
			Evaluate.pop();
			switch (string_input[i])
			{
			case '+':
			{
				Evaluate.push(First_Expression + Second_Expression);
				break;
			}
			case '-':
			{
				Evaluate.push(First_Expression - Second_Expression);
				break;
			}
			case '*':
			{
				Evaluate.push(First_Expression * Second_Expression);
				break;
			}
			case '/':
			{
				Evaluate.push(First_Expression / Second_Expression);
				break;
			}
			case '^':
			{
				Evaluate.push(First_Expression ^ Second_Expression);
				break;
			}
			case '%':
			{
				Evaluate.push(First_Expression % Second_Expression);
				break;
			}
			default:
				break;
			}
		}*/
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
