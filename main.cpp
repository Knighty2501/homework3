#include "heartrate.hpp"


int main() {
	char yorn; //yes or no
	int yn = 0;
//	std::cout<< "test!\n"; print statments... the BEST debugging tool
	//I needed the above because I tottaly space out, and for got I need yn to have == and not just =
	while(yn == 0) { // this while loop is my entire main pretty much.. yn = YesNo which gets adjusted at the end
		HeartRates h1;
		std::cout<<"Hello!\n" << "Please enter the requested information for this program to calculate your" 
			<< " target and max heart rate.\n";
	h1.set_fname(h1.fname()); 
	h1.set_lname(h1.lname());
	h1.set_month(h1.month());
	h1.set_day(h1.day());
	h1.set_year(h1.year());
	h1.set_age(h1.year());
	std::cout << "\nHere is the info you provided\n" << "Name: " << h1.fname() << ' ' << h1.lname() 
		<< "\nDate of Birth in Day/Month/Year format: " << h1.day() << "/" << h1.month() << "/" << h1.year() 
		<< " making you " << h1.age() << " years old this year." << "\nYour Max heart rate is: " 
		<< h1.getMaxHeartRate(h1.age()) << " bpm.\nYour Target heart rate is: "
		<< h1.getTargetHeartRatelower(h1.age()) << "-" << h1.getTargetHeartRateupper(h1.age()) << " bpm.\n\n";
	//below is my way of asking the user if they want to add new info or restart the program
	ask: //this ask: is part of a goto in the switch statement below
	std::cout << "Would you like to restart with a new entry? [Y/N]: "; 
	std::cin >> yorn; //yes or no
		switch(yorn) {
			case 'Y': //I account for lower and upper in this statement
			case 'y':
				std::cout<< "\nrestarting!\n\n"; //restarts the loop by not adjusting yn thus sending it back up
				break;
			case 'N':
			case 'n': 
				std::cout<<"Thank you for using this program, we hope that it helped you!" << std::endl;
				yn++; //adds 1 to yn thus breaking the loop
				break;
			default:
				std::cout<< "Error in proccessing request" << std::endl;
				goto ask; //here I didn't want to restart the whole while loop but also didn't want to exit
				break; // I've used goto statements in 131 much to my instructor's surpise..but they work okay!? XD
		}
	}
	return 0;
}
//end of main 
