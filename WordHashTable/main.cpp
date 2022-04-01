/*
 * main.cpp
 *
 *  Created on: May 1, 2021
 *      Author: amranzazai
 */
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <chrono>
using namespace std;
using namespace std::chrono;
#include "HashTable.h"
int main(){
	HashTable tablehash;
	cout << "Created table\n";
	int count = tablehash.readFile();
	cout << count << " words read in " << endl;
	string search;
	do{
	cout << "Enter a word to find\n Enter ! to quit" << endl;
	cin >> search;

	cout << tablehash.find(search)<< endl;

	}while(search!="!");
	cout << "Program Terminated" << endl;

	system("pause");
	return 0;
}



