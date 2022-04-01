/*
 * HashTable.h
 *
 *  Created on: May 1, 2021
 *      Author: amranzazai
 */

#ifndef HASHTABLE_H_
#define HASHTABLE_H_
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <chrono>
#include "Word.h"
using namespace std;
using namespace std::chrono;

class HashTable {
private:
	struct node {
		Word word;
		node *next;
	};
public:
	const int SIZE=10000;
	node *table[10000];
	HashTable(){
		// TODO Auto-generated constructor stub
		for (int i=0; i<10000; i++){
				node * n= new node;
				n->next = nullptr;
				table[i] = n;
			}
	};
	unsigned int hashStr(const string &, int);
	int readFile();
	string find(string &);
};

#endif /* HASHTABLE_H_ */
