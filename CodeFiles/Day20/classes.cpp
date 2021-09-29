#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

class point 
{
	double x;
	double y;

	public:
		point(double x, double y) : x(x), y(y) {};

		friend ostream& operator<< (ostream& stm, const point pt);

		static point polar(double r, double th)
		{
			return point(r * cos(th), r * sin(th));
		}

};




class factor
{
	double f = 1.0;
	public:
		factor(double d) : f(d) {}
		double operator() (double x) const { return f * x; }

	friend ostream& operator<<(ostream& stm, factor obj);
};

class mytype
{
	int i;
public:
	mytype(int i) : i(i) {}
	explicit mytype(string s) : i(s.size()) {}
	operator int () const { return i; }

	friend ostream& operator<<(ostream& stm, mytype obj);

};

ostream& operator<<(ostream& stm, factor obj)
{
	stm << obj.f;
	return stm;
}
ostream& operator<<(ostream& stm, mytype obj)
{
	stm << obj.i;
	return stm;
}


int main()
{
	
	string line;
	//read input a line at a time until end-of-file
	while(getline(cin, line))
	{
		if(80 < line.size())
			cout << line << endl;
	}

	return 0;

}