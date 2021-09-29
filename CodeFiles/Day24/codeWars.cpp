#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <list>
#include <deque>

using namespace std;


std::string reverse_words(std::string str)
{ 	// A function to reverse each word in a string but maintain 
	// the order of the words in the string.
  std::string reversedString, tempString;

	for(auto c: str)
	{
		if(isspace(c))
		{
			reverse(tempString.begin(), tempString.end());
			reversedString += tempString;
			tempString.clear();
			reversedString += c;
		}
		else
		{
			tempString += c;
		}
	}

	reverse(tempString.begin(), tempString.end());
	reversedString += tempString;
	tempString.clear();
  
  return reversedString;
}
