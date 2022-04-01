/*
 * HashTable.cpp
 *
 *  Created on: May 1, 2021
 *      Author: amranzazai
 */

#include "HashTable.h"



unsigned int HashTable::hashStr(const string &z, int size) {
	unsigned int h = z[0];
	for (int i = 1; i < z.length(); i++)
		//h = (h*i)+s[i];	//My hash
		h+=z[i]*26*i;
	return h % size ;
}

int HashTable::readFile(){
	int count = 0;
	ifstream in;
	in.open("words.txt");
	Word s;
	string x;
	while (in){
		in >> x;
		s.setWord(x);
		if (in) {
			unsigned int index = hashStr(x,10000);
			node *n = new node;
			node *temp = new node;
			temp = table[index]; //setting temp pointer to value in array location
			table[index] = n; //setting the array index to n
			n->next = temp; //linking n to the rest of list
			n->word = s; //setting n's word value to s
			count++; //incrementing counter variable
		}
	}
return count;
}

string HashTable::find(string &y){
	int index = hashStr(y,10000);
	node *n = table[index];
    auto start = high_resolution_clock::now();
	while(n != nullptr){
		if(n->word.getWord()==y){
		    auto stop = high_resolution_clock::now();
		    auto duration = duration_cast<microseconds>(stop - start);
			cout << "Found " << y
					<< "\nSearch time: " << duration.count()
					<< " microseconds\n";
			return "Found";
		}
		else n=n->next;
	}
	return "Not Found";
}
