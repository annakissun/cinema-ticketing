#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

// Meow meow meow meow
using namespace std;

float concessionStand() {
    // TODO: Ask user for concessions they want to buy. Return total value of all concessions.
    // Assigned to : Adrin
}

int movieSelection() {
    // TODO: Ask user which movie they want to watch. Return the movieCode.
    // Assigned to : Nayli
}

float ticketOrdering() {
    // TODO: Ask user how many tickets they want to buy and of which type. Return the total price of all tickets.
    // Assigned to : Ada
}

int main() {
	cout << "Welcome to Rinlidana Cinema Booking System!" << endl;

    do {
	    cout << "Please place your order." << endl;

        int movieCode;
        float concessionTotal = 0.0f, ticketTotal = 0.0f;

        concessionTotal = concessionStand();

        movieCode = movieSelection();

        ticketTotal = ticketOrdering();

        // TODO: Output order totals
        // Assigned to : Ada
        // Sum all of the price of concessions and tickets and display summary of totals    
        cout << "Your total is: " << concessionTotal + ticketTotal << endl;

        // TODO: Ask user if they want to place another order
        // Assigned to : Ada

    } while (false); // Check if user wants to place another order
    
	cout << "Thank you for ordering with Rinlidana Cinema Booking System. Goodbye!" << endl;

    return 0;
}


