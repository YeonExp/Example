#include "DocWriter.h"
#include <fstream>

DocWriter::DocWriter()
{
	std::cout << "HTMLWriter()" << std::endl;
	_fileName = "NoName.txt";
	_content = "There is no content.";
}

DocWriter::DocWriter(const std::string& fileName,
	const std::string& content)
{
	_fileName = fileName;
	_content = content;
}

DocWriter::~DocWriter() {
	std::cout << "~DocWriter()" << std::endl;
}

void DocWriter::SetFileName(const std::string& fileName)
{
	_fileName = fileName;
}

void DocWriter::SetContent(const std::string& content)
{
	_content = content;
}

void DocWriter::Write()
{
	std::ofstream of(_fileName.c_str());

	of << "# Content #\n\n";

	of << _content;
}