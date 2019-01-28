/* Faruqui, Nishat
Week3: Variables   Homework #3    Program #3
*/

#include <iostream>
using namespace std;

int main()
{
//declaring char datatype for variable c
char c;
cout << "Input a lowercase letter:\t"; //requesting an input of lowercase letter to store for the char variable
cin >> c; //input is stored into variable c

//Explicit Casting step: converting the datatype from char to int
int i = static_cast<int>(c); //converting the letter input to its respective decimal code, which is then stored into variable i. ASCII decimal code = letter
i = i - 32; //by subtracting 32 from the decimal code, this equates to the decimal code for the Upper case letter, which is then stored into variable i

c = static_cast<char>(i); //converting the decimal code to the respective ASCII character, which is then stored into variable c
cout << "THe uppercase equivalent is " << c << "." << endl; //outputs variable c, which should display the Upper case letter


  return 0;
}
