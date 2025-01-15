#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int movieSelection() {
    
    int movieCode = 0;

    cout << endl; //space
    cout << "-----------------------------------------------------------------------------"<<endl;
    cout << "-------------------------------MOVIE SELECTION-------------------------------"<<endl;
    cout << "-----------------------------------------------------------------------------"<<endl;
    
	while (movieCode < 1 || movieCode > 2)  {
		cout << "Please order a movie ticket from the selection below." << endl;
	    
	    cout << "[1] Wicked" << endl;
	    cout << "[2] Inside Out 2" << endl;
	    cout << endl; //space
			    
	    cout << "Your movie choice : " ;
	    cin >> movieCode;

		if (movieCode < 1 || movieCode > 2) {
			
			cout << "Please enter a valid choice" << endl;
			cout << endl; //space
		}
	}  

	return movieCode;
}

float ticketOrdering(int movieCode) {
 	
 	int adultQuantity = -1, childQuantity = -1;
 	float ticketTotal, adultPrice, childPrice;
 	string movieName; 
 	
 	cout << endl; //space
    cout << "-----------------------------------------------------------------------------"<<endl;
    cout << "------------------------------TICKET QUANTITIES------------------------------"<<endl;
    cout << "-----------------------------------------------------------------------------"<<endl;
        
 	if ( movieCode == 1 ) {
 		
 		adultPrice = 28.00;
 		childPrice = 12.00;
 		movieName = "Wicked";
	}
	else if ( movieCode == 2 ) {
	 	
	 	adultPrice = 18.00;
 		childPrice = 5.00;
 		movieName = "Inside Out 2";
	}
	
	cout << "Your chosen movie is " << movieName << endl;
	cout << endl; //space
	cout << "Children are all of those who are under 12 years old." << endl;
	cout << "Everyone above that age are considered adults and will need adult tickets." << endl;
	cout << endl; //space
	cout << "Adult price per ticket : RM " << adultPrice << endl;
	cout << "Child price per ticket : RM " << childPrice << endl;
	cout << endl; //space
	
	while (adultQuantity < 0) {
		cout << "Enter the quantity of adult tickets you wish to purchase : ";
		cin >> adultQuantity;
		
		if (adultQuantity < 0) {
			
			cout << "Please enter a valid quantity" << endl;
		} 
	}
	
	while (childQuantity < 0) {
		cout << "Enter the quantity of child tickets you wish to purchase : ";
		cin >> childQuantity;
		
		if (childQuantity < 0) {
			
			cout << "Please enter a valid quantity" << endl;
		} 
	}
	
	ticketTotal = (adultQuantity * adultPrice) + (childQuantity * childPrice);
	
	return ticketTotal;
}

float concessionStand(int &concessionSet) {
    
    char answer = 'O';
    float concessionTotal = 0;
    int concessionQuantity = 0;
    concessionSet = 0;
    
    cout << endl; //space
    cout << "-----------------------------------------------------------------------------"<<endl;
    cout << "-----------------------------CONCESSION SELECTION----------------------------"<<endl;
    cout << "-----------------------------------------------------------------------------"<<endl;
    
	while (answer != 'Y' && answer != 'N') {
		
		cout << "Would you like to order a set of concession? [Y/N]" << endl;
	
	   	cout << "Your choice : " ;
	   	cin >> answer;
	 
		if ( answer == 'N') {
			
			cout << "You did not order anything from the concession stand" << endl;
			
			return 0;
		}
		else if ( answer != 'Y') {
			
			cout << "Please only input either Y or N" << endl;
		}
	
	}     

	while (concessionSet < 1 || concessionSet > 3) {
			
		cout << "Please order a concession set from the selection below." << endl;
	    
		cout << "[1] Rilidana signature soda + caramel popcorn : RM 14.50" << endl;
		cout << "[2] Rilindana signature soda                  : RM  2.50" << endl;
		cout << "[3] Caramel popcorn                           : RM 12.00" << endl;
		cout << endl; //space
		
		cout << "Your concession set choice : " ;
		cin >> concessionSet;
		cout << "Your concession set quantity : " ;
		cin >> concessionQuantity;
	
		if (concessionSet < 1 || concessionSet > 3) {
			
			cout << "Please enter a valid concession set"<<endl;
		}
	}
	
	if ( concessionSet == 1) {
		
		concessionTotal = 14.50 * concessionQuantity;
	}
	else if ( concessionSet == 2) {
		
		concessionTotal = 2.50 * concessionQuantity;
	}
	else if ( concessionSet == 3) {
		
		concessionTotal = 12.00 * concessionQuantity;
	}
	
	return concessionTotal;
}
	
int main() {

	char answer;
	int movieCode, concessionSet = 0, adultQuantity, childQuantity;
    float concessionTotal, ticketTotal;
    
	cout << "Welcome to Rinlidana Cinema Booking System!" << endl;

	
    do {
	
        movieCode = movieSelection();

        ticketTotal = ticketOrdering(movieCode);
        
        concessionTotal = concessionStand(concessionSet);
    
        // Sum all of the price of concessions and tickets and display summary of totals    
        cout << "-----------------------------------------------------------------------------"<<endl;
        cout << "-----------------------------------RECEIPT-----------------------------------"<<endl;
        cout << "-----------------------------------------------------------------------------"<<endl;
        cout << "Movie code chosen : " << movieCode << endl;
        cout << "Concession set chosen : " << concessionSet << endl;
        cout << "Total price of tickets ordered : RM " << ticketTotal << endl;
        cout << "Total price of concessions ordered : RM " << concessionTotal << endl;
        
        cout << "Your total is : RM " << concessionTotal + ticketTotal << endl;
        cout << "------------------------------------------------------------------------------"<<endl;
        cout << "------------------------------------------------------------------------------"<<endl;
        cout << "------------------------------------------------------------------------------"<<endl;
		cout << endl; //space
		
        cout << "Would you like to order more tickets ? [Y/N] " << endl;
        cout << "Your choice : " ;
        
        cin >> answer;

    } while ( answer != 'N'); // Check if user wants to place another order
    
    cout << "Thank you for ordering with Rinlidana Cinema Booking System. Goodbye!" << endl;
	
    return 0;
}


