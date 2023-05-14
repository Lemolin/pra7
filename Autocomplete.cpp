#include"Autocomplete.h"

vector<string> Autocomplete::getSuggestions(string partialWord) {
	vector<string> result;
	for (int i = 0; i < w.size(); i++) {
		int j = 0;
		if (partialWord.length() <= w[i].length()) {
			while (j <= partialWord.length() - 1 && w[i][j] == partialWord[j]) {
				if (j >= partialWord.length() - 1) {
					result.push_back(w[i]);
				}
				j++;
			}
		}
	}
	return result;
}

void Autocomplete::insert(string word) {
	w.push_back(word);
}