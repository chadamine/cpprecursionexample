/*
 * Ch15_Ex6.cpp
 *
 *  Created on: Oct 18, 2015
 *      Author: chadamine
 */

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string word);

int main() {

	string testWord;

	cout << "Enter word to test for palindromicity: ";
	cin >> testWord;

	if(isPalindrome(testWord))
		cout << "It's a palindrome!";
	else
		cout << "Word is not palindromic.";

	return 0;
}

bool isPalindrome(string word) {

	// Pivot letter base conditions
	// Execution while valid letter qty remains
	// Halt at base letter qty or failed match
	if((word.size() % 2 == 0 && word.size() != 0)		// Even halts at 0
	|| (word.size() % 2 == 1 && word.size() != 1)) {	// Odd halts at 1

		// if(func.timesUsed > 1) aVar = func;
		int l = word.length() - 1;

		// Compare head to tail
		if(word.at(0) == word.at(l))
			// Recurse sans start/end bits
			isPalindrome(word.substr(1, l - 1));
		else
			// Fail at any false match
			return false;
	}

	// Valid when letter qty at base and no failed matches above
	return true;
}
