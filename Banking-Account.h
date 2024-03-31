//Header guard. This makes sure that the file isn't called twice into a program.
//This is the old way of doing it.
#ifndef Banking_Account
#define Banking_Account

/*
Name: Israel Showell
Date: 3/12/2024
Project: Banking Program
Desc:
This is a basic banking program that I made to practice my knowledge of classes.
*/

//You can use the newer version which is just #pragma once
#include <string>
#include <iostream>
using namespace std;


class Account
{
public:
	Account();
	~Account();
	void setName(string newName);
	void setID(string newID);
	void addBalance(double addBal);
	void subBalance(double subBal);
	void printAccountInfo();
private:
	string name;
	string ID;
	double balance;
};
#endif