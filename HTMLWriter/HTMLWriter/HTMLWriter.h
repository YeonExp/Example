#pragma once
#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include "DocWriter.h"

class HTMLWriter : public DocWriter
{
public:
	HTMLWriter();
	~HTMLWriter();

	void Write();
	void SetFont(const std::string& fontName,
		int fontSize, const std::string& fontColor);

protected:
	std::string _fontName;
	int _fontSize;
	std::string _fontColor;
};

#endif