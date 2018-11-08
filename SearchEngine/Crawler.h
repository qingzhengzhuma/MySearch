#pragma once

#include<vector>
#include"Document.h"
class Crawler
{
public:
	Crawler();
	virtual ~Crawler();

	virtual std::vector<Document> Fetch() = 0;
};

