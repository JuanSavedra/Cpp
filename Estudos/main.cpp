#include <iostream>

using namespace std;

/*
	Primitive Data Types
	Size (in bits) - Representable Values
	5				 2'8 (256)
	16				 2'16
	32				 2'32
	64				 2'64

	1 byte = 8 bits.

	=============================================================

	char = 8 bits
	char16_t = 16 bits
	char32_t = 32 bits
	wchar_t = Largest avaiable character set

	=============================================================

	short int = 16 bits
	int = 16 bits
	long int = 32 bits
	long long int = 64 bits

	=============================================================

	float / 7 decimal digits = 1.2x10'-38 to 3.4x10'38
	double / 15 decimal digits = 2.2x10'-308 to 1.8x10'308
	long double / 19 decimal digits = 3.3x10'-4932 to 1.2x10'4932

	=============================================================

	bool = 8 bits (true (Non-zero) or false (0))
	*/

int global_variable { 0 };

void Variables()
{
	std::cout << "Global variable: " << global_variable;

	int room_width{ 0 };
	int room_length{ 0 };

	std::cout << "Enter the width of the room: ";
	std::cin >> room_width;

	std::cout << "Enter the length of the room: ";
	std::cin >> room_length;

	std::cout << "The area of the room is " << room_width * room_length << " square feet" << std::endl;
}

void SizeOffVariables() 
{
	std::cout << "char: " << sizeof(char) << " bytes." << std::endl;
	std::cout << "int: " << sizeof(int) << " bytes." << std::endl;
	std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes." << std::endl;
	std::cout << "short: " << sizeof(short) << " bytes." << std::endl;
	std::cout << "long: " << sizeof(long) << " bytes." << std::endl;
	std::cout << "long long: " << sizeof(long long) << " bytes." << std::endl;
	std::cout << "float: " << sizeof(float) << " bytes." << std::endl;
	std::cout << "double: " << sizeof(double) << " bytes." << std::endl;
	std::cout << "long double: " << sizeof(long double) << " bytes." << std::endl;
}

void MinimumValues()
{
	std::cout << "char: " << CHAR_MIN << std::endl;
	std::cout << "int: " << INT_MIN << std::endl;
	std::cout << "short: " << SHRT_MIN << std::endl;
	std::cout << "long: " << LONG_MIN << std::endl;
	std::cout << "long long: " << LLONG_MIN << std::endl;
	std::cout << "float: " << FLT_MIN << std::endl;
	std::cout << "double: " << DBL_MIN << std::endl;
	std::cout << "long double: " << LDBL_MIN << std::endl;
}

void MaximumValues()
{
	std::cout << "char: " << CHAR_MAX << std::endl;
	std::cout << "int: " << INT_MAX << std::endl;
	std::cout << "short: " << SHRT_MAX << std::endl;
	std::cout << "long: " << LONG_MAX << std::endl;
	std::cout << "long long: " << LLONG_MAX << std::endl;
	std::cout << "float: " << FLT_MAX << std::endl;
	std::cout << "double: " << DBL_MAX << std::endl;
	std::cout << "long double: " << LDBL_MAX << std::endl;
}

void ConstantsVariables()
{
	const double pi = { 3.14159265358979323846 };

	std::cout << "Value of pi: " << pi;
}

int main() 
{	
	//Variables();
	//SizeOffVariables();
	//MinimumValues();
	//MaximumValues();
	ConstantsVariables();

	return 0;
}