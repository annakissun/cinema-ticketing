#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int movieSelection() {
    
    const int movieCount = 2;
    string movies [movieCount] = {"Wicked", "Inside Out 2"};
    int movieCode = -1;

    cout << endl; //space
    cout << "-----------------------------------------------------------------------------"<<endl;
    cout << "-------------------------------MOVIE SELECTION-------------------------------"<<endl;
    cout << "-----------------------------------------------------------------------------"<<endl;  
    cout << "----------------------------STUDENTS GET 15% OFF!----------------------------"<<endl;
    cout << "-----------------------------------------------------------------------------"<<endl;  
    
	do {
		cout << "Please choose the movie you would like to watch from the selection below." << endl;
	    cout << endl; //space
	    
	    for (int i = 0; i < movieCount; i++) {
	    	
	    	if (i + 1 == 1) {
	    		cout << "[1]" << movies[i]; 
          		cout << " : RM30.00 (Adult) // RM22.50 (Child)" << endl; 
			}
			else if (i + 1 == 2) {
				cout << "[2]" << movies[i]; 
          		cout << " : RM24.00 (Adult) // RM12.50 (Child)" << endl; 
			}
    	}
    	
    	cout << endl; //space
    	cout << "Children: 12 and under // Adult: 13 and above" << endl;
    	cout << endl; //space
    	cout << "If you don't want to purchase any movie tickets, enter 0."<< endl;
    	cout << endl; //space
    	
	    cout << "Your movie choice : " << movies[movieCode - 1];
	    cin >> movieCode;
		
		if (movieCode < 0 || movieCode > 2 && movieCode != 0) {
			cout << "Please enter a valid choice" << endl;
			cout << endl; //space
			}
	
		
	} while (movieCode < 0 || movieCode > 2 && movieCode != 0); 

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

float fnbCounter(int &concessionSet) {
    
    char answer = 'O';
    float concessionTotal = 0;
    int concessionQuantity = 0;
    concessionSet = 0;
    
    cout << endl; //space
    cout << "-----------------------------------------------------------------------------"<<endl;
    cout << "-----------------------------CONCESSION SELECTION----------------------------"<<endl;
    cout << "-----------------------------------------------------------------------------"<<endl;
    
	while (answer != 'Y' && answer != 'N') {
		
		cout << "Would you like to order any food and beverages? [Y/N]" << endl;
	
	   	cout << "Your choice : " ;
	   	cin >> answer;
	 
		if ( answer == 'N' || answer == 'n' ) {
			
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

        ticketTotal = fnbCounter(movieCode);
        
        concessionTotal = fnbCounter(concessionSet);
    
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


