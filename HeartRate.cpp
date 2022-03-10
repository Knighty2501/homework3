#include "heartrate.hpp"
//OKAY THIS WORKS! Comment timeeeee!
//below are my constructors, including an unperamertized, peramertized, & a copy constructor
HeartRates::HeartRates() : _fname{"Steven"}, _lname{"Wyman"}, _day{29}, _month{12}, _year{1989}, _age{32} {}
HeartRates::HeartRates(std::string fname, std::string lname, int day, int month, int year, int age) :
	 _fname{"Steven"}, _lname{"Wyman"}, _day{29}, _month{12}, _year{1989}, _age{32} {
		 set_fname(fname);
		 set_lname(lname);
		 set_day(day);
		 set_month(month);
		 set_year(year);
		 set_age(year);
	 }
HeartRates::HeartRates(const HeartRates &h) : _fname{h._fname}, _lname{h._lname}, _day{h._day}, _month{h._month},
	_year{h._year}, _age{h._age} {}
//bellow is going to be my function calls for my setters and getters
void HeartRates::set_fname(std::string fname) { //this sets first name
	std::cout<<"Please enter your first name: ";
	std::cin >> fname;
	while(fname.size() > 30) {
		std::cout<< "Can not have a first name of over 30 characters please re-enter your name\n"; 
		std::cin >> fname;
	}
	_fname = fname;
}

void HeartRates::set_lname(std::string lname) { //this sets last name
	std::cout<<"Please enter your last name: ";
	std::cin >> lname;
	while(lname.size() > 30) {
		std::cout<< "Can not have a last name of over 30 characters please re-enter your name\n"; 
		std::cin >> lname;
	}
	_lname = lname;
}
void HeartRates::set_day(int day) { //sets day
	std::cout<<"Please enter the day you were born: ";
	std::cin >> day;
	//below is how I'm making sure that the input is a int and not a char or anything that can break the prog.
	while(std::cin.fail()) {
		std::cout << "Error please re-enter!: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> day;
	}
	while(day > 31 || day <= 0) { //not accounting for february or leap year
		std::cout<<"Error please re-enter the day you were born: ";
		std::cin >> day;
	}
	_day = day;
}

void HeartRates::set_month(int month) { //sets month
	std::cout<<"Please enter the month # you were born: ";
	std::cin >> month;
	while(std::cin.fail()) {
		std::cout << "Error please re-enter!: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> month;
	}
	while(month > 12 || month <= 0) {
		std::cout<<"Error please re-enter the month # you were born: ";
		std::cin >> month;
	}
	_month = month;
}

void HeartRates::set_year(int year) { //sets year
	std::cout<<"Please enter the year you were born: ";
	std::cin >> year;
	while(std::cin.fail()) {
		std::cout << "Error please re-enter!: ";
		std::cin.clear();
		std::cin.ignore(256, '\n');
		std::cin >> year;
	}
	while(year < 1900 || year > 2018) {
		std::cout<<"Error please re-enter the year you were born: ";
		std::cin >> year;
	}
	_year = year;
}
std::string HeartRates::fname(){ //returns the class attribute of _fname
	return _fname;
}

std::string HeartRates::lname(){ //returns the class attribute of _lname
	return _lname;
}
int HeartRates::day() const { //returns the class attribute of _day
	return _day;
} 

int HeartRates::month() const { //returns the class attribute of _month
	return _month;
}

int HeartRates::year() const { //returns the class attribute of _year
	return _year;
}
void HeartRates::set_age(int year) { //this sets the age attribute
	_age = 2022 - year;
}
int HeartRates::age() const{ //this returns the class attribute of_age
	return _age;
}

int HeartRates::getMaxHeartRate(int age) { //this will give the max heart rate
  int MHR = 220 - age;
   return MHR; //MHR = Max Heart Rate
}

int HeartRates::getTargetHeartRatelower(int age) { //this will give the Lower target heart rate
	int mhr = getMaxHeartRate(age);
  	int LTHR = mhr * .5;
	return LTHR; //LTHR = Lower Target Heart Rate
}

int HeartRates::getTargetHeartRateupper(int age) { //this will give the upper target heart rate
	int mhr = getMaxHeartRate(age);
  	int UTHR = mhr * .85;
  	return UTHR; //UTHR = Upper Target Heart Rate
}
	//end of HeartRate.cpp
