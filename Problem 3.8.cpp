// Problem 3.8.cpp : Defines the entry point for the console application.
//
/*8. Write a program that repeatedly asks the user to enter two money amounts expressed in
old-style British currency: pounds, shillings, and pence. (See Exercises 10 and 12 in
Chapter 2, “C++ Programming Basics.”) The program should then add the two amounts
and display the answer, again in pounds, shillings, and pence. Use a do loop that asks the
user whether the program should be terminated. Typical interaction might be
Enter first amount: £5.10.6
Enter second amount: £3.2.6
Total is £8.13.0
Do you wish to continue (y/n)?
To add the two amounts, you’ll need to carry 1 shilling when the pence value is greater
than 11, and carry 1 pound when there are more than 19 shillings.*/
#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{

	int pound = 0;
	int shilling = 0;
	int pence = 0;  //initializa three variables to store the sum

	int pound1, shilling1, pence1;//initilize three variables to store the first amount from user
	int pound2, shilling2, pence2;//initilize three variables to store the secound amount from user
	char currency = '£';//initialize a variable of type char to store currency sign
	char dot; //initialize a variable of type char to store the dot
			  // to let the user enter the amount in form £3.2.6
	char yes_no;
	do {
		cout << "Enter first amount" << endl;//prompt user to to enter first amount
		cin >> currency >> pound1 >> dot >> shilling1 >> dot >> pence1 ;//store first amount
		cout << "Enter secound amount" << endl;//prompt user to enter secound amount 
		cin >> currency >> pound2 >> dot >> shilling2 >> dot >> pence2 ;//store secound amount
		pence = pence1 + pence2;
		if(pence>11){
			shilling += 1;
			pence -= 12;
		}//sum two pence together if the sum is more than 11 add one to shilling
		shilling = shilling + shilling1 + shilling2;
		if (shilling > 19) {
			pound += 1;
			shilling -= 20;
		}//sum two silling together if the sum is more than 19 add one to pound
		pound = pound + pound1 + pound2;//sum two pound together 
		cout << "Total is" << currency << pound << dot << shilling << dot << pence<<endl;//display sum
		cout << "Do you wish to continue (y / n) ?" << endl;//ask the user 
		cin >> yes_no;
	} while (yes_no=='y');//while true that the user enter y the loop will continue
    return 0;
}

