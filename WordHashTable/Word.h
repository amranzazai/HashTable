/*
 * Word.h
 *
 *  Created on: Mar 1, 2021
 *      Author: amranzazai
 */
#ifndef WORD_H_
#define WORD_H_
#include <string>
using namespace std;

class Word
{
private:
	string word;

public:
	Word();
	string getWord() const;
	void setWord(string);
};

#endif
