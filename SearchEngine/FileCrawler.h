#pragma once
#include "Crawler.h"
class FileCrawler :
	public Crawler
{
public:
	FileCrawler();
	virtual ~FileCrawler();

	void SetFilePath(std::string path) { FilePath = path; }

	virtual std::vector<Document> Fetch();
private:
	std::string FilePath;
};

