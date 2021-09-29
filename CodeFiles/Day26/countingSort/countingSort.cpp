#include <iostream>
#include <fstream>

using namespace std;

ifstream f("data.in");
ofstream g("data.out");
int A[100], n, c;
int main()
{

	f >> n;
	for (int i = 0; i < n; i++)
	{
		f >> c;
		A[c] += 1; 
	}

	for (int i = 0; i < n; i++)
	{
		if(A[i] > 0)
		for(int j=1; j <= A[i]; ++j)
			g << i << " ";
	}
	

	return 0;
}