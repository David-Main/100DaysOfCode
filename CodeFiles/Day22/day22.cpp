#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::istream;


//Exercise 8.1;
   /* 
      Write a function that takes and returns an istraem&.
      The function should read the stream until it hits the end of file.
      The function should print what it reads to the standard output.
      Reset the stream so that it is valid before returning the stream
    */

   istream& reader(istream& stream)
   {
      string content;
      char word;
      while(stream >> word)
      {
         content += word;
      }
      cout << content << endl;   // Print out contents to std output
      stream.clear();            // Reset the stream
      return stream;
   }  



int main()
{
   
   /* //Exercise 3.23
   vector<int> nums(10, 3);

   for(auto iter = nums.begin(); iter != nums.end(); ++iter)
   {
      *iter *= 2;
   }

   for(auto n : nums)
   {
      cout << n << ' ';
   } */


/* //Exercise 8.1;
   reader(cin);
*/   

//Personal Practice;
   std::fstream file;
   file.open("testFile.txt");

   cout << (file.is_open() ?
            "File open successful." :
            "File open failed error: Invalid filename.");



   return 0;
}
