#include "stringUtil.hpp"

void StringUtil::split(const string &str, char delimiter, vector<string> &vector)
{
	stringstream ss;
	ss.str(str);
	
	string word;
	
	while (getline(ss, word, delimiter))
	{
		vector.push_back(word);
	}
}


vector<string> StringUtil::split(const string &str, char delimiter)
{
	vector<string> vec;
	split(str, delimiter, vec);
	
	return vec;
}
