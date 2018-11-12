#pragma once
#include"DocumentContent.h"
class Document
{
public:
	Document();
	virtual ~Document();
private:
	long id;
	long length;
	DocumentContent* content;
};

