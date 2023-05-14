#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include<iostream>
#include<vector>
using namespace std;

class PrefixMatcher {
private:
	vector<string>addr;
	vector<int>num;
public:
	int selectRouter(string networkAddress);
	void insert(string address, int routerNumber);
};

#endif
