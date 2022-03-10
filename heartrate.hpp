#ifndef HEARTRATE_HPP
#define HEARTRATE_HPP
#include <iostream>
#include <string>

class HeartRates {
	private: 
	std::string _fname;
	std::string _lname;
	int _day, _month, _year;
	int _age;
	public:
	
	//Constructors 
	HeartRates();
	HeartRates(std::string fname, std::string lname, int day, int month, int year, int age);
	HeartRates(const HeartRates &h);

	//setters
	void set_fname(std::string fname);
	void set_lname(std::string lname);
	void set_day(int day);
	void set_month(int month);
	void set_year(int year);
	void set_age(int year); 
	//getters
	std::string fname();
	std::string lname();
	int day() const;
	int month() const;
	int year() const;

	int age() const;
	int getMaxHeartRate(int age);
	int getTargetHeartRateupper(int age);
	int getTargetHeartRatelower(int age);
};
#endif // HEARTRATE_HPP
