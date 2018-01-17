#pragma once
#ifndef DOCWRITER_H
#define DOCWRITER_H

#include <string>
#include <iostream>

class DocWriter
{
public:
	DocWriter();
	DocWriter(const std::string& fileName,
		const std::string& content);
	~DocWriter();

	void SetFileName(const std::string& fileName);
	void SetContent(const std::string& content);
	void Write();

protected:
	std::string _fileName;
	std::string _content;
};

#endif