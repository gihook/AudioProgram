#ifndef CONFIG_READER_HPP
#define CONFIG_READER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "fileinfo.hpp"
#include "stringutil.hpp"

class ConfigReader
{
public:
	ConfigReader(const std::string filePath);
	~ConfigReader();
	std::vector<FileInfo> GetFileInfos();
private:
	std::string line;
	std::ifstream* file;
	//std::vector<FileInfo>* fileInfos;
	
	void Split(const string &str, char delimiter, vector<string> &vector);
	vector<string> Split(const string &str, char delimiter);
};

#endif
