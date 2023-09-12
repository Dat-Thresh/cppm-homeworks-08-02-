#include "FigureExceptions.h"

FigureExceptions::FigureExceptions(const char* str):std::domain_error::domain_error(str){
	this->str = str;
};

const char* FigureExceptions::what() const { return str; }
