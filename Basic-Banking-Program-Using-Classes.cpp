/*
Name: Israel Showell
Date: 3/12/2024
Project: Banking Program 
Desc:
This is a simple banking program that I made to practice my knowledge of classes in C++ and various concepts of Object-Oriented Programming.
*/


#include <iostream>
#include <string>
#include "Banking-Account.h"
using namespace std;

int main()
{
	Account Person1;

	Person1.setName("Israel Showell");
	Person1.setID("83943");
	Person1.addBalance(231.32);

	Person1.printAccountInfo();

	system("PAUSE");
}
