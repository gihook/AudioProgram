#ifndef STRING_UTIL_HPP
#define STRING_UTIL_HPP

#include <string>
#include <vector>
#include <sstream>

using namespace std;

class StringUtil
{
public:
	void split(const string &str, char delimiter, vector<string> &vector);
	vector<string> split(const string &str, char delimiter);
};

#endif
