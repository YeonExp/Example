#include "HTMLWriter.h"
#include <fstream>

HTMLWriter::HTMLWriter()
{
	std::cout << "HTMLWriter()" << std::endl;
	_fileName = "NoName.html";

	_fontName = "����";
	_fontSize = 3;
	_fontColor = "black";
}

HTMLWriter::~HTMLWriter() {
	std::cout << "~HTMLWriter()" << std::endl;
}
void HTMLWriter::Write()
{
	std::ofstream of(_fileName.c_str());
	of << "<HTML><HEAD><TITLE>\
			This document was generated by HTMLWriter \
		   </TITLE></HEAD><BODY>";
	of << "<H1>Content</H1>";
	of << "<Font name=" << _fontName << "' size='"
		<< _fontSize << "' color='" << _fontColor << "'>";

	of << _content;
	of << "</FONT>";
	of << "</BODY></HTML>";
}

void HTMLWriter::SetFont(const std::string& fontName,
	int fontSize, const std::string& fontColor)
{
	_fontName = fontName;
	_fontSize = fontSize;
	_fontColor = fontColor;
}