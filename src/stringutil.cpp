#include "stringutil.hpp"

void StringUtil::Split(const string &str, char delimiter, vector<string> &vector)
{
	stringstream ss;
	ss.str(str);
	
	string word;
	
	while (getline(ss, word, delimiter))
	{
		vector.push_back(word);
	}
}


vector<string> StringUtil::Split(const string &str, char delimiter)
{
	vector<string> vec;
	Split(str, delimiter, vec);
	
	return vec;
}
