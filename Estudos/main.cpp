#include <iostream>
#include <vector>

using namespace std;

void InitializingVectors() 
{
	vector <char> vowels{ 'a', 'e', 'i', 'o', 'u' };
	std::cout << "First vowel: " << vowels[0] << std::endl;
	std::cout << "Last vowel: " << vowels[4] << std::endl;
	std::cout << "Last vowel: " << vowels[4] << std::endl;
}

void UsingVectorSyntax() 
{
	vector <int> test_scores { 100, 98, 89 };

	std::cout << "Test scores using vector syntax:" << std::endl;
	std::cout << test_scores.at(0) << std::endl;
	std::cout << test_scores.at(1) << std::endl;
	std::cout << test_scores.at(2) << std::endl;

	std::cout << "There are " << test_scores.size() << " scores in the vector";
}

void ModifyingVectors()
{
	vector <int> heights_in_centimeters(1);
	std::cout << "First value in vector: " << heights_in_centimeters.at(0) << std::endl;

	int heights_to_add;
	std::cin >> heights_to_add;
	heights_in_centimeters.push_back(heights_to_add);
	std::cout << "Second value in vector: " << heights_in_centimeters.at(1) << std::endl;
}

void MultidimensionalVector()
{
	vector <vector<int>> telephone_numbers
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};

	std::cout << "Line 1: " << telephone_numbers.at(0).at(0) << " "
		<< telephone_numbers.at(0).at(1) << " "
		<< telephone_numbers.at(0).at(2)
		<< std::endl;

	std::cout << "Line 2: " << telephone_numbers.at(1).at(0) << " "
		<< telephone_numbers.at(1).at(1) << " "
		<< telephone_numbers.at(1).at(2)
		<< std::endl;

	std::cout << "Line 3: " << telephone_numbers.at(2).at(0) << " "
		<< telephone_numbers.at(2).at(1) << " "
		<< telephone_numbers.at(2).at(2)
		<< std::endl;;
}

int main() 
{	
	//InitializingVectors();
	//UsingVectorSyntax();
	//ModifyingVectors();
	MultidimensionalVector();

	return 0;
}