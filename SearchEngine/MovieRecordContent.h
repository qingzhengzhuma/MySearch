#pragma once
#include "DocumentContent.h"
class MovieRecordContent :
	public DocumentContent
{
public:
	MovieRecordContent();
	~MovieRecordContent();
	std::vector<std::string> GetKeyWords();
};

