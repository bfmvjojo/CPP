#include<bits/stdc++.h>
using namespace std;

// The input of program mainly consists of numbers and strings.

int main()
{
	int a, b; // Integer refers to the integer type of data 
	string name; // Strings refers to collection of character
	cin >> a >> b >> name; // cin use to take input from user
	cout << a << " " << b  << " " << name;

	int x = 1;
	int y = 2;
	cout << x <<"\n"; // \n used for new line
	cout << y << "\n";

	// Clear the input buffer before using getline
    cin.ignore();

	// Sometime the program should read a whole line including space.

	string s;
	getline(cin,  s);
	cout << s;

}