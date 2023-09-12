#pragma once
#include <stdexcept>

class FigureExceptions : public std::domain_error {
	const char* str;

	
public: 

	FigureExceptions(const char* str);
	const char* what() const override;

};