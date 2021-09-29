/* 
	Problem: 
		Given an expression of parenthesis, which also
		includes curly braces and brackets, fiind out 
		if it's syntactically correct or not.

	Pseudocode for solution;
	for i from 0 to n-1
	{
		if expr[i] is '(' or '{' or '['
			push on the stack(exp[i])
		else if exp[i] is ')' or '}' or ']'
		{
			if stack is empty (it doesn't 
			pair with anything) or stack[top]
			dosent match
				return false
			else pop()
		}
	}
	if stack is empty
		return true
	else 
		return false
 */

#include <iostream>
#include <fstream>

using namespace std;
char arr[30];
int topI = 0;

void pop()
{
	arr[topI--] = 0;
} 

char top()
{
	return arr[topI];
}

void push(char c)
{
	arr[++topI] = c;
}

bool empty()
{
	return (topI == 0 ? true : false);
}

bool checker()
{
	ifstream file("expr.in");
	char d;
	file >> d;
	while(!isalpha(d))
	{
		if(d == '(' || d == '{' || d == '[')
		{
			push(d);
		}
		else if(d == ')' || d == '}' || d == ']')
		{
			if(empty())
				return false;
			else pop();
		}
		file >> d;
	}
	if(empty())
		return true;
	else return false;
}

int main()
{
	cout << checker();
	return 0;
}