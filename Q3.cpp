// -----------------------------------------------------
// Assignment: 1
// Question: 3
// File name: A1Q3.cpp
// Written by: Ajwad Hossain 
// For Comp 218 Section EC/Fall 2019
// -----------------------------------------------------

// Input a word with four letters and the program will identify letter positions

#include <iostream>

using namespace std;

int main()

{
	string str;

	cout<< "**************************************************\n"
		<< "    Welcome to the String Converter Program\n"
		<< "**************************************************\n";

	cout << "\nEnter a word with atleast 4 characters: ";
	cin >> str;
	cout << "\nThe length of the word is: " << str.size() << " characters." << endl;
	cout << "\nThe word you entered is: " << str << endl;
	cout << "\tThe 2nd letter is: " << str.at(1) << endl;
	cout << "\tThe 2nd to the last letter is: " << str.at(str.size() - 2) << endl << endl;

	char temp = str[1];

	str[1] = str.at(str.size() - 2);
	str[str.size() - 2] = temp;

	cout << "The swapped word is: " << str << endl << endl;
	cout << "\tThe 2nd letter is: " << str.at(1) << endl;
	cout << "\tThe 2nd to the last letter is: " << str.at(str.size() - 2) << endl << endl;

	cout << "Thank you for using the String Converter Program!" << endl;

}