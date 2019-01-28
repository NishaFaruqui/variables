/* Faruqui, Nishat
Week3: Variables   Homework #3    Program #2
*/

#include <iostream>
using namespace std;

int main()
{
float value; //12.5
int int_value; //12
float decimal_value;
cout << "Input a floating-point value:\t";
cin >> value;
cout << endl;

int_value = value; //changes 12.5 to whole number, 12
cout << "Integer data is " << int_value << endl;

decimal_value = value - static_cast<double>(int_value); //12.5-12 = 0.5
cout << "Fractional data is " << decimal_value;

  return 0;
}
