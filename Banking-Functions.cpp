/*
Name: Israel Showell
Date: 3/12/2024
Project: Banking Program
Desc:
This is a basic banking program that I made to practice my knowledge of classes.
*/

#include <string>
#include <iostream>
#include "Banking-Account.h"
using namespace std;

Account::Account() {
	name = "Blank";
	ID = "39129";
	balance = 400.50;
}

Account::~Account() {
	//This is the class's destructor
}

void Account::setName(string newName) {
	name = newName;
}

void Account::setID(string newID) {
	ID = newID;
}

void Account::addBalance(double addBal) {
	balance += addBal;
}

void Account::subBalance(double subBal) {
	balance += subBal;
}

void Account::printAccountInfo() {
	cout << "Name: " << name << endl;
	cout << "ID: " << ID << endl;
	cout << "Balance: " << balance << endl;
}
