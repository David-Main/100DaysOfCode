#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <istream>
#include <sstream>

using std::istringstream;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::istream;


int main()

{
/*    string all("this is they way to go.");

   decltype(all.size()) index = 0;

   string result;
   string::size_type n;
   string hexdigits = "0123456789ABCDEF"; //pOSSIBLE HEX DIGITS
   
   for (auto &c : hexdigits)
   {
      c = 'X';
   }

   while(char &c = hexdigits[index++])
   {
      c = 'X';      
   }

   for (string::size_type index = 0; index < hexdigits.size(); ++index )
   {
      hexdigits[index] = 'X';
   }

   cout << hexdigits << endl;
   cout << hexdigits.size();

   string chars;
   char c;
   while(cin >> c)
   {
      chars += (ispunct(c) ? '-' : (isspace(c) ? ' ' : c));
   }

   cout << chars << endl;

   vector<string> v1;
   string i;
   while(cin >> i)
   {
      v1.push_back(i);
   }

   for(auto vec : v1)
   {
      cout << std::setw(3) << std::right 
           << std::setfill('0') << vec << "\t";
   } */


  /*  vector<unsigned> clusters(11, 0);
   unsigned grade;
   while(cin>> grade) 
   {
      (grade <= 100) ? ++(clusters[grade/10]) : clusters[grade/10];
   }

   for(auto g : clusters)
   {
      cout << std::setw(2) << std::right
           << std::setfill('0') << g << "   ";
   } */



   /* vector<int>v1;
   vector<int>v2(10);
   vector<int>v3(10, 42);
   vector<int>v4{10};
   vector<int>v5{10, 42};
   vector<string>v6;
   vector<string>v7{10, "string"};
   
   cout << "Size of v7 = " << v7.size() << endl;
   for(auto v: v7)
      cout << v << endl; */



// Write a program to read the standard input a line
// at a time. Modify your program to read a word at a time.

/*    vector<string> words;
   string word;
   while(cin >> word)
   {
      words.push_back(word);
   }

   for(auto &w : words)
   {
      for(auto &c : w)
      {
         c = toupper(c);
      }
   }

   int i = 0;
   for(auto line : words)
   {
      cout << line << ' ';
      ++i;
      if(8 <= i) 
      {
         cout << endl;
         i = 0;   
      }
   }
 */



   /* vector<int> nums;
   int iter;

   while(cin >> iter)
   {
      nums.push_back(iter);
   }

   for (auto num: nums)
   {
      cout << num <<  " ";
   }
   cout << endl << "";


   for(int i = 0; i < (nums.size()/2)+1; i++)
   {
      cout << std::setw(3) << std::setfill(' ');
      cout << nums[i] 
            << "+" <<  nums[nums.size()-(i+1)] 
            << "="
            << nums[i] + nums[nums.size() - (i+1)] << endl;


      cin.get();
   } */



   return 0;
}