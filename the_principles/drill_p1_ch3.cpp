//
// Part I
// Chapter 3 - Objects, Types and Values
// Drill
//

#include "drill_p1_ch3.h"

int run_code()
{
	/*cout << endl
		<< "|================|\n"
		<< "|...This works...|\n"
		<< "|================|\n"
		<< endl;*/

		// Step 1 - get name of person

	string first_name = "";

	cout << "Please, enter name of person you want to write a letter to: ";
	cin >> first_name;
	cout << endl;

	cout << "Dear " << first_name << "," << endl;

	// Step 2 - add introductory lines

	cout << "    How are you?"
		<< endl
		<< "I myself am fine. I miss the discussions and conversations we used to do back in days."
		<< endl
		<< "I was wondering what you've been busy with."
		<< endl;

	// Step 3 - add another friend name

	string friend_name = "";

	cout << "Have you heard from ";
	cin >> friend_name;
	cout << "lately?"
		<< endl;

	// Step 4 - handle gender related information

	char friend_sex = 0;

	while (friend_sex != 'm' && friend_sex != 'f')
	{
		cout << "If friend is male, enter m. If female, enter f."
			<< endl;
		cin >> friend_sex;
	}

	string friend_pronoun;

	if (friend_sex == 'm')
	{
		friend_pronoun = "him";
	}

	if (friend_sex == 'f')
	{
		friend_pronoun = "her";
	}

	cout << endl;
	cout << "If you see "
		<< friend_name
		<< " please ask "
		<< friend_pronoun
		<< " to call me."
		<< endl;

	// Step 5 - get age

	int age = 0;

	cout << "Enter recipent's age: ";
	cin >> age;
	cout << endl;

	if (0 <= age && age <= 110)
	{
		cout << "I hear you just had a birthday and you are "
			<< age
			<< " old."
			<< endl
			<< endl;
	}
	else {
		simple_error("You're kidding!");
	}

	// Step 6 - add phrases for different age groups

	if (age < 12)
	{
		cout << "Next year you will be "
			<< age + 1
			<< "."
			<< endl;
	}
	
	if (age == 17)
	{
		cout << "Next year you will be able to vote."
			<< endl;
	}

	if (age > 70)
	{
		cout << "I hope you are enjoying retirement."
			<< endl;
	}

	// Step 7 - add letter ending

	cout << endl 
		<< "Your sincerely,"
		<< endl << endl << endl 
		<< "Krisjanis" 
		<< endl;

	return 0;
}

