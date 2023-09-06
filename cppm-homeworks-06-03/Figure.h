#pragma once
#include <string>

class Figure {
protected:
	std::string name;
	Figure();
public:
	virtual void get_info();
};