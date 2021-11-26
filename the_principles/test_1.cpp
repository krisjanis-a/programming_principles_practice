#include "test_1.h"

string test_number (int number) {

	cout << "Here is the value passed in: " << number;

	bool larger_than_0 = false;
	string result = "false";
	
	if (number > 0) { 
		larger_than_0 = true; 
		result = "true"; 
	};

	cout << "\nThe number is larger than zero: " << result;

	return result;
}