/*
 * Word.cpp
 *
 *  Created on: Mar 1, 2021
 *      Author: amranzazai
 */

#include "Word.h"

Word::Word() {
	// TODO Auto-generated constructor stub
	word = " ";
}

string Word::getWord() const{
	return word;
}

void Word::setWord(string x){
	word = x;
}
