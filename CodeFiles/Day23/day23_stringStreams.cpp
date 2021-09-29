#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;

/* int main()
{
	
		// Write a program to store each line from a file in
		// a vector<string>.
		// Now use an istringstream to read each element
		// from the vector a word at a time.
	

	// //Store each line from a file in a vector<string>
	// ifstream fileLine("testFile.txt");
	// vector<string> lines;
	// string line;
	// while(getline(fileLine, line))
	// {
	// 	lines.push_back(line);
	// }

	// //use an istringsteam to read from lines word by word;
	// for(auto l : lines)	//get line from vector
	// {
	// 	istringstream word(l);	//bind word to line
	// 	string output;
	// 	while(word >> output)	//output the word to the stdout;
	// 	{
	// 		cout << output << endl;
	// 	}
	// }

		// EXERCISE 8.11:
		// The program in this section defined its
		// istringstream object inside the outer while loop. What changes
		// would you need to make if record were defined outside that
		// loop? Rewrite the program, moving the definition of record
		// outside the while, and see whether you thought of all the
		// changes that are needed.
	
	// members are public by default; see § 7.2 (p. 268)
	struct PersonInfo
	{
		string name;
		vector<string> phones;
	};

	string line, word;		   // will hold a line and word from input, respectively
	vector<PersonInfo> people; // will hold all the records from the input
	istringstream record;	   // bind record to the line we just read

	// read the input a line at a time until cin hits end-of-file (or another error)
	while (getline(cin, line))
	{
		PersonInfo info;
		record.clear();				 	 // create an object to hold this record's data
		record.str(line);				 // bind record to the line we just read
		record >> info.name;			 // read the name
		while (record >> word)			 // read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info);			 // append this record to people
	}

	for(auto person : people)
	{
		cout << person.name << '\n';
		for(auto num : person.phones)
		{
			cout << num << '\t';
		}
		cout << "\n\n";
	}

	return 0;
}

// morgan 2015552368 8625550123
// drew 9735550130
// lee 6095550132 2015550175 8005550000 */


/* 
// Exercise 8.13: Rewrite the phone number program from this
// section to read from a named file rather than from cin.

int main() 
{
	struct PersonInfo
	{
		string name;
		vector<string> phones;
	};

	string line, word;		   // will hold a line and word from input, respectively
	vector<PersonInfo> people; // will hold all the records from the input
	istringstream record;	   // bind record to the line we just read
	ifstream fileInput("testFile.txt");

	// read the input a line at a time until cin hits end-of-file (or another error)
	while (getline(fileInput, line))
	{
		PersonInfo info;
		record.clear();				 	// create an object to hold this record's data
		record.str(line);				 // bind record to the line we just read
		record >> info.name;			 // read the name
		while (record >> word)			 // read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info);			 // append this record to people
	}

	for(auto person : people)
	{
		cout << person.name << '\n';
		for(auto num : person.phones)
		{
			cout << num << '\t';
		}
		cout << "\n\n";
	}

	return 0;
} */