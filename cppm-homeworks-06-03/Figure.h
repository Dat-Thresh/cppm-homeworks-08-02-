#pragma once
#include <string>
#include "FigureExceptions.h"
class Figure {
protected:
	std::string name;
	Figure();
public:
	virtual void get_info();

};