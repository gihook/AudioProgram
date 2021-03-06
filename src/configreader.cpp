#include "configreader.hpp"

ConfigReader::ConfigReader(const std::string filePath)
{
	file = new std::ifstream(filePath.c_str());
}

ConfigReader::~ConfigReader()
{
	delete file;
}

std::vector<FileInfo> ConfigReader::GetFileInfos()
{
	std::vector<FileInfo> fileInfos;
	StringUtil stringUtil;

	if (file->is_open())
	{
		while (getline((*file), line))
		{
			if (line[0] != ' ')
			{
				FileInfo fileInfo;
				std::vector<std::string> results = stringUtil.Split(line, ' ');
				fileInfo.filePath = results[0];
				fileInfo.chordName = results[1];
			
				fileInfos.push_back(fileInfo);
			}
			else
			{
				// TODO: Treba dodati odgovarajuce Exceptione
				throw "Error for line: " + line;
			}
		}
		
		file->close();
	}
	else
	{
		std::cout << "Cannot open file" << std::endl;
	}
	
	return fileInfos;
}
