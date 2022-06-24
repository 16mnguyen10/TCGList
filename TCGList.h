/*
	Michael Nguyen
	
	June 24, 2022
*/

#ifndef TCGLIST_H
#define TCGLIST_H

#include <iostream>
#include <string>

using namespace std;

class TCGList
{
public:
	TCGList();
	TCGList(const string& cardName, int setNumber);

	// Get list of cards depending on name or set
	string getCardName() const;
	int getSetNumber() const;

	// Store cards
	void setCardName(const string& cardName);
	void setSetNumber(int setNumber);

	// Get list of stored cards
	void printList() const;

	~TCGList();

private:
	string cardName;
	int setNumber;
};

#endif