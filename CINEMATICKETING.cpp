#include <iostream>
#include <string>

using namespace std;

int movieSelection()
{
	string movies[2] = {"Wicked", "Inside Out 2"};
	float adultprices[2] = {30.00, 24.00};
	float childprices[2] = {22.50, 12.50};
	int movieCode = -1;

	cout << endl; // space
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "-------------------------------MOVIE SELECTION-------------------------------" << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "----------------------------STUDENTS GET 15% OFF!----------------------------" << endl;
	cout << "-----------------------------------------------------------------------------" << endl;

	cout << "Please choose the movie you would like to watch from the selection below." << endl;
	cout << endl; // space

	for (int i = 0; i < 2; i++)
	{
		cout << "[" << i + 1 << "] " << movies[i] << " : RM" << adultprices[i] << " (Adult) // RM" << childprices[i] << " (Child)" << endl;
	}

	cout << endl; // space
	cout << "Children: 12 and under // Adult: 13 and above" << endl;
	cout << endl; // space
	cout << "If you don't want to purchase any movie tickets, enter 0." << endl;
	cout << endl; // space

	while (movieCode < 0 || movieCode > 2)
	{

		cout << "Your movie choice : ";
		cin >> movieCode;

		if (movieCode < 0 || movieCode > 2)
		{
			cout << "Please enter a valid movie code. (0/1/2)" << endl;
			cout << endl; // space
		}
	}

	return movieCode;
}

int adultTicket(int movieCode)
{

	int adultQuantity;

	if (movieCode != 0)
	{

		cout << "-----------------------------------------------------------------------------" << endl;
		cout << "--------------------------------TICKET COUNTER-------------------------------" << endl;
		cout << "-----------------------------------------------------------------------------" << endl;
		cout << "Please enter the quantity of adult tickets you would like to purchase." << endl;
		cout << "The quantity of tickets ordered : ";
		cin >> adultQuantity;
		cout << endl; // space
	}
	else
	{

		adultQuantity = 0;
	}
	return adultQuantity;
}

int childTicket(int movieCode)
{

	int childQuantity;

	if (movieCode != 0)
	{

		cout << "Please enter the quantity of child tickets you would like to purchase." << endl;
		cout << "The quantity of tickets ordered : ";
		cin >> childQuantity;
		cout << endl; // space
	}
	else
	{

		childQuantity = 0;
	}
	return childQuantity;
}

float adultPrice(int adultQuantity, int movieCode)
{

	float adultTotal;

	if (movieCode == 1)
	{

		adultTotal = adultQuantity * 30;
	}
	else if (movieCode == 2)
	{

		adultTotal = adultQuantity * 24;
	}
	else if (movieCode == 0)
	{

		adultTotal = 0;
	}
	return adultTotal;
}

float childPrice(int childQuantity, int movieCode)
{

	float childTotal;

	if (movieCode == 1)
	{

		childTotal = childQuantity * 22.50;
	}
	else if (movieCode == 2)
	{

		childTotal = childQuantity * 12.50;
	}
	else if (movieCode == 0)
	{

		childTotal = 0;
	}
	return childTotal;
}

string movieName(int movieCode)
{

	string movieTitle;

	if (movieCode == 1)
	{

		movieTitle = "WICKED";
	}
	else if (movieCode == 2)
	{

		movieTitle = "INSIDE OUT 2";
	}
	else
	{

		movieTitle = "NO MOVIE CHOSEN";
	}
	return movieTitle;
}

float student(float adultTotal, float childTotal, int movieCode)
{

	float studentDiscount;
	string studentAnswer = "0";

	if (movieCode != 0)
	{

		while (studentAnswer != "Y" && studentAnswer != "y" && studentAnswer != "N" && studentAnswer != "n")
		{

			cout << "Are you a student? [Y/N]" << endl;
			cout << "Your answer : ";
			cin >> studentAnswer;

			if (studentAnswer != "Y" && studentAnswer != "y" && studentAnswer != "N" && studentAnswer != "n")
			{

				cout << "Please enter Y or N only." << endl;
				cout << endl; // space
			}
		}

		if (studentAnswer == "Y" || studentAnswer == "y")
		{

			studentDiscount = (adultTotal * 15 / 100) + (childTotal * 15 / 100);
		}
		else if (studentAnswer == "N" || studentAnswer == "n")
		{

			studentDiscount = 0;
		}
	}
	else
	{

		studentDiscount = 0;
	}
	return studentDiscount;
}

float fnbCounter()
{

	string fnb[3] = {"Rinlinada signature soda + caramel popcorn", "Rinlinada signature soda", "Caramel popcorn"};
	float price[3] = {14.5, 2.5, 12};
	string answer = "0";
	string fnbSet = "0";
	float fnbPrice, fnbTotal;
	int fnbQuantity = 0;

	cout << endl; // space
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "------------------------------FOOD AND BEVERAGES-----------------------------" << endl;
	cout << "-----------------------------------------------------------------------------" << endl;

	while (answer != "Y" && answer != "y" && answer != "N" && answer != "n")
	{

		cout << "Would you like to order any food and beverages? [Y/N]" << endl;

		cout << "Your choice : ";
		cin >> answer;

		if (answer != "Y" && answer != "y" && answer != "N" && answer != "n")
		{
			cout << "Please enter Y or N only." << endl;
			cout << endl; // space
		}
	}

	if (answer == "N" || answer == "n")
	{

		cout << "You did not order any food and beverages." << endl;

		fnbTotal = 0;

		return 0;
	}
	else if (answer == "Y" || answer == "y")
	{

		while (fnbSet != "1" && fnbSet != "2" && fnbSet != "3")
		{

			cout << endl; // space
			cout << "Please order any food and beverages set from the selection below." << endl;
			cout << endl; // space

			for (int i = 0; i < 3; i++)
			{

				cout << "[" << i + 1 << "] " << fnb[i] << " : RM" << price[i] << endl;
			}

			cout << endl; // space

			cout << "Your food and beverages set choice : ";
			cin >> fnbSet;

			if (fnbSet != "1" && fnbSet != "2" && fnbSet != "3")
			{
				cout << "Please enter a valid code for the set you want." << endl;

				fnbPrice = 0;
			}
		}

		cout << "The quantity of sets ordered : ";
		cin >> fnbQuantity;
	}
	if (fnbSet == "1")
	{

		fnbPrice = 14.50;
	}
	else if (fnbSet == "2")
	{

		fnbPrice = 2.50;
	}
	else if (fnbSet == "3")
	{

		fnbPrice = 12.00;
	}

	fnbTotal = fnbPrice * fnbQuantity;

	return fnbTotal;
}

int main()
{

	string answer = "Y";
	string movieTitle;
	int childQuantity, adultQuantity, movieCode;
	float adultTotal, childTotal, fnbTotal, studentDiscount;

	cout << "Welcome to Rinlinada Cinema Booking System!" << endl;

	do
	{

		fnbTotal = fnbCounter();
		movieCode = movieSelection();
		adultQuantity = adultTicket(movieCode);
		adultTotal = adultPrice(adultQuantity, movieCode);
		childQuantity = childTicket(movieCode);
		childTotal = childPrice(childQuantity, movieCode);
		studentDiscount = student(adultTotal, childTotal, movieCode);
		movieTitle = movieName(movieCode);

		// Summary of all totals calculated
		cout << "-----------------------------------------------------------------------------" << endl;
		cout << "-----------------------------------RECEIPT-----------------------------------" << endl;
		cout << "-----------------------------------------------------------------------------" << endl;
		cout << "MOVIE TITLE : " << movieTitle << endl;
		cout << "ADULT TICKETS PURCHASED : " << adultQuantity << endl;
		cout << "CHILD TICKETS PURCHASED : " << childQuantity << endl;
		cout << "ADULT TOTAL (RM) : " << adultTotal << endl;
		cout << "CHILD TOTAL (RM) : " << childTotal << endl;
		cout << "AMOUNT TO BE PAID FOR F&B (RM) : " << fnbTotal << endl;
		cout << "TOTAL AMOUNT TO BE PAID (RM) : " << fnbTotal + ((adultTotal + childTotal) - studentDiscount) << endl;

		cout << "------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "------------------------------------------------------------------------------" << endl;
		cout << endl; // space

		do
		{

			cout << "Would you like to make another purchase ? [Y/N]" << endl;
			cout << "Your choice : ";

			cin >> answer;

			if (answer != "Y" && answer != "y" && answer != "N" && answer != "n")
			{

				cout << "Please enter only Y or N" << endl;
				cout << endl; // space
			}

		} while (answer != "Y" && answer != "y" && answer != "N" && answer != "n");

	} while (answer == "Y" || answer == "y"); // Check if user wants to place another order

	cout << endl; // space
	cout << "Thank you for ordering with Rinlinada Cinema Booking System. Goodbye!";
	return 0;
}
