#ifndef AUTOCOMPLETE_H
#define AUTOCOMPELETE_H
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Autocomplete {

public:
	vector<string> getSuggestions(string partialWord);
	void insert(string word);

private:
	vector<string> w;
};
#endif
