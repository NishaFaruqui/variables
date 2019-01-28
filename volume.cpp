/* Faruqui, Nishat
Week3: Variables   Homework #3    Program #1
*/

#include <iostream>
using namespace std;

int main()
{
int height;
int length;
int width;

cout << "Input the height of the box in inches:\t";
cin >> height;
cout << "Input the length of the box in inches:\t";
cin >> length;
cout << "Input the width of the box in inches:\t";
cin >> width;
cout << endl;

int volume = length*width*height;
cout << "The volume of the box is " << volume << " cubic inches." << endl;
  return 0;
}
