/*
Troy Smith
IT-312-J4007
2022.03.27
4-2 Formatting Assignment: Looping Through Arrays
*/

// LoopingArrays.cpp : This program loops through to create an array based on user input and then 
// sorts the array in order of smallest integer to largest.  Format the code following the code
// styling document.
//


#include <iostream>
#include <cstdlib>

using namespace std;

void main()
{
	// Set the size of the array
	int array[10], temp;
		for (int userNum = 0; userNum < 10; userNum++) {
			cout << "Enter Integer No. " << userNum + 1 << " : " ; //Prompt user for input
			cin >> array[userNum];
			}

		// Read user input into the array
		for (int userNum = 0; userNum < 10; userNum++) {
			for (int systemReply = 0; systemReply < 9; systemReply++) {
				if (array[systemReply] > array[systemReply + 1]) {
					temp = array[systemReply];
					array[systemReply] = array[systemReply + 1];
					array[systemReply + 1] = temp;
				}
			}
		}

		// Print all input in Ascending order
		cout << endl << "Array in ascending order is : ";
			for (int userNum = 0; userNum < 10; userNum++)
				cout << endl << array[userNum];
				cout << endl;
	return;
}