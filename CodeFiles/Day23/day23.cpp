#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

/* Write a function to open a file for input and read its
contents into a vector of strings, storing each line as a separate
element in the vector.
 */
vector<string> fileReader(string inputFile)
{
    fstream file(inputFile);
	if(!file)
	{
		cerr << "Could not open: File not found.";
	}
    vector<string> storage;
    string line;

    while(file)
    {
		if(!file.good()) break;
        std::getline(file, line);
        storage.push_back(line);                                                                                       
    }

    file.close();
    return storage;
}

vector<string> fileWordReader(string inputFile)
{
    vector<string> storage;
    string line;

    fstream file(inputFile);
    while(file)
    {
        // std::getline(file, line);
		//Store each word in a file;
		if(!file.good())
			break;
		file >> line;
        storage.push_back(line); 
    }

    file.close();
    return storage;
}


/* // allow the file name to be passed to the app via the terminal;
int main(int argv, char *argc[])
{
    // auto fileContents = fileReader("testFile.txt");
    // for (auto content : fileContents)
    // {
    //     cout << content << endl;
    // }

	if(argv > 1) // ensure that there is a filename given
	{
		//for (auto p = argv+1; p < )
		auto fileContents = fileReader(argc[1]);
		for(auto content : fileContents)
		{
			cout << content << endl;
		}
	}
	else
	{
		cerr <<"couldn't open: Invalid filename" ; 
	}
	
    return 0;
} */


// Make user input be written to the file;
//Pass the name of that file as a second argument to main.
int main(int argv, char *argc[])
{
	if(argv > 1) // ensure that there is a filename given
	{
		string userInput;
		ofstream output(argc[1], ofstream::app);

		cout << "Input your string: \n";
		while(cin)
		{
			getline(cin, userInput);
			output << userInput << '\n';	
		}
		output.close();
		

		auto fileContents = fileReader(argc[1]);
		for(auto content : fileContents)
		{
			cout << content << endl;
		}
	}
	else
	{
		cerr <<"couldn't open: Invalid filename" ; 
	}
	
    return 0;
}