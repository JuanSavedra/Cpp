#include <iostream>

using namespace std;

void DeclaringArrays()
{
	int test_scores[5] { 100, 95, 99, 87, 88 };
	const int days_in_year { 365 };
	int temperatures_in_year[days_in_year] { 0 };

	std::cout << test_scores[0] << std::endl;
	std::cout << days_in_year << std::endl;
	std::cout << temperatures_in_year[0] << std::endl;
}

void ModifyingArrays()
{
	char vowels[]{ 'a', 'e', 'i', 'o', 'u' };

	std::cout << "The first vowel is: " << vowels[0] << std::endl;
	std::cout << "The last vowel is: " << vowels[4] << std::endl;

	double temperatures[] {26.4, 28.9, 32.4, 19.7};
	std::cout << "The first temperature is: " << temperatures[0] << std::endl;

	temperatures[0] = 28.3;
	std::cout << "My nem first temperature is: " << temperatures[0] << std::endl;

	std::cout << "Memory reference (adress): " << temperatures;
}

void MultidimensionalArray()
{
	int telephone_keyboard_numbers[3][3] =
	{
		{ 0, 0, 0 },
		{ 0, 0, 0 },
		{ 0, 0, 0 }
	};

	// Typing numbers
	std::cin >> telephone_keyboard_numbers[0][0];
	std::cin >> telephone_keyboard_numbers[0][1];
	std::cin >> telephone_keyboard_numbers[0][2];

	std::cin >> telephone_keyboard_numbers[1][0];
	std::cin >> telephone_keyboard_numbers[1][1];
	std::cin >> telephone_keyboard_numbers[1][2];

	std::cin >> telephone_keyboard_numbers[2][0];
	std::cin >> telephone_keyboard_numbers[2][1];
	std::cin >> telephone_keyboard_numbers[2][2];

	// Printing numbers
	std::cout << telephone_keyboard_numbers[0][0] << " ";
	std::cout << telephone_keyboard_numbers[0][1] << " ";
	std::cout << telephone_keyboard_numbers[0][2] << std::endl;

	std::cout << telephone_keyboard_numbers[1][0] << " ";
	std::cout << telephone_keyboard_numbers[1][1] << " ";
	std::cout << telephone_keyboard_numbers[1][2] << std::endl;

	std::cout << telephone_keyboard_numbers[2][0] << " ";
	std::cout << telephone_keyboard_numbers[2][1] << " ";
	std::cout << telephone_keyboard_numbers[2][2] << std::endl;
}

int main() 
{	
	//DeclaringArrays();
	//ModifyingArrays();
	MultidimensionalArray();
}