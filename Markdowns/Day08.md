# Day08
Today I built a file reader which prints out the   
contents of a file in hexadecimal format as well as   
the actual contents to the console.

## The code
```cpp
#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>

using namespace std;
const int block_length = 52;

void usage(const char* msg)
{
	cout << "Usage::" << endl;
	cout << "filedump filename blocks" << endl;
	cout << "filename (mandatory): the name of the file to dump" << endl;
	cout << "blocks (optional): the number of 16 byte blocks to dump" << endl;
	if (nullptr == msg) return;
	cout << endl << "Error!!! ";
	cout << msg;
}

int read16(ifstream& stm)
{
	if (stm.eof()) return -1;
	int flags = cout.flags();
	cout << hex;
	string line;

	//print bytes 
	for (int i = 0; i < block_length; ++i)
	{
		//read a single character from the stream
		unsigned char c = stm.get();
		if (stm.eof())
		{
			break;
		}
		//need to make sure that all hex are printed
		//two character padded with zeros
		if(i < (block_length/3)) 
		{
			cout << setw(2) << setfill('0');
			cout << static_cast<short>(c) << " ";
		}
		if (isprint(c) == 0) line += '.';
		else				  line += c;
		//cout << line;
	}
	string padding = " ";
	if (line.length() < block_length)
	{
		padding += string(3 * (block_length - line.length()), '  ');
	}
		//line += string((line.length() / 2), '.');
		cout << padding;
		cout << line << endl;

	cout.setf(flags);
	return line.length();
}


int main(int argc, char* argv[])
{
	if (2 > argc)
	{
		usage("not enough parameters");
		return 1;
	}
	if (3 < argc)
	{
		usage("too many parameters");
		return 1;
	}

	string filename = argv[1];

	int blocks = 1; // default value of blocks
	if (3 == argc)
	{
		//We have passed the number of blocks
		istringstream ss(argv[2]);
		ss >> blocks;
		if (ss.fail() || 0 >= blocks)
		{
			//cannot convert to a number 
			usage("second parameter: must be a number," " and greater than zero");
			return 1;

		}
	}

	ifstream file(filename, ios::binary);
	if (!file.good())
	{
		usage("first parameter: file does not exist");
		return 1;
	}

	while (blocks-- && read16(file) != -1);
	file.close();
  
	return 0;
}
```

#100daysofcode
