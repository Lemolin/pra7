#include"PrefixMatcher.h"

int PrefixMatcher::selectRouter(string networkAddress) {}
	
void PrefixMatcher::insert(string address, int routerNumber) {
	addr.push_back(address);
	num.push_back(routerNumber);
}