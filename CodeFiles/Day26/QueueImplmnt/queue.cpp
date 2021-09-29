#include <iostream>

using namespace std;

int frontInd = 0;
int backInd = -1;
int queue[30];
void push(int);
void pop();
bool isEmpty();
int front();


int main()
{
	push(3);
	push(4);
	pop();
	pop();
	push(8);
	cout<< isEmpty();
	cout << front();
	pop();
	cout << isEmpty();

	return 0;
}

void push( int val)
{
	queue[++backInd] = val;
}

void pop()
{
	queue[frontInd++] = 0;
}

bool isEmpty()
{
	return (backInd < frontInd ? true : false);
}

int front()
{
	return queue[frontInd];
}