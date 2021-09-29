#include <iostream>
#include <vector>
#include <sstream>
#include <list>
#include <array>
#include <cmath>
#include <algorithm>

using namespace std;

// vector<int>::iterator search(vector<int>::iterator begin, vector<int>::iterator end, int value)
// {
// 	while(begin++ != end)
// 		if (value == *begin) return begin;
// 	return end;
// }

int main()
{
	
	/* vector<int> items;
	for(int i = 0; i < 30; i+=8)
	{
		items.push_back(i);
	}

	list<int> litems;
	litems.assign(items.begin(), items.end());

	for( auto l : items)
		cout << l << '\t';

	cout << endl;
	for (auto l : litems)
	{
		cout << l << '\t';
	}

	if(items.size() == litems.size())
	{
		auto litemsI = litems.begin();
		for(decltype(items.size()) i = 0; i < items.size(); i++)
		{
			if(items[i] == *(litemsI++))
			{
				continue;
			}
			else
			{
				cout << "Containers are not equal." << endl;
				break;
			}
		}
		if(*items.rbegin() == *litems.rbegin())
			cout << "Containers are equal" << endl;
	} */


	vector<int> one{1,2,3,4,6,67,32};
	search(one.begin(), one.end(), 1);
	// cout << count;

	return 0;
}