#pragma once
#include<vector>
#include<string>
class DocumentContent
{
public:
	DocumentContent();
	virtual ~DocumentContent();
	virtual std::vector<std::string> GetKeyWords() = 0;
};

