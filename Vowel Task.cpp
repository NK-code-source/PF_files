#include <iostream>
using namespace std;
int main() {
   char c ;
   cout<<"Enter any character : ";
   cin>> c;
   if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
   cout <<c<< " is a Vowel" << endl;
   else
   cout <<c<< " is a Consonant" << endl;
   return 0;
}
