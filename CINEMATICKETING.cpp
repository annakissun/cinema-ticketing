#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

// Meow meow meow meow
using namespace std;

int main() {
	cout << "Welcome to Rinlidana Cinema Booking System!" << endl;

    do {
	    cout << "Please place your order." << endl;

        int movieCode;
        float concessionTotal = 0f, ticketTotal = 0f;

        concessionTotal = concessionStand();

        movieCode = movieSelection();

        ticketTotal = ticketOrdering();

        // TODO: Output order totals
        // Sum all of the price of concessions and tickets and display summary of totals
        cout << "Your total is: " << concessionTotal + ticketTotal;

        // TODO: Ask user if they want to place another order

    } while (); // Check if user wants to place another order
    
	cout << "Thank you for ordering with Rinlidana Cinema Booking System. Goodbye!" << endl;

    return 0;
}

float concessionStand() {
    // TODO: Ask user for concessions they want to buy. Return total value of all concessions.
}

int movieSelection() {
    // TODO: Ask user which movie they want to watch. Return the movieCode.
}

float ticketOrdering() {
    // TODO: Ask user how many tickets they want to buy and of which type. Return the total price of all tickets.
}
