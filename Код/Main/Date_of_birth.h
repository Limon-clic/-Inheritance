#pragma once
#include<string>

class Date			// дата 
{
private:
	int year;		// год
	int month;		// ме€ц
	int day;		// день

public:
	void set_date_year(int new_year);							// указать год
	void set_date_month(int new_month);							// мес€ц
	void set_date_day(int new_day);								// день
	int get_date_year() const;									// получить год
	int get_date_month() const;									// мес€ц
	int get_date_day() const;									// день
	Date();														// конструктор по умолчанию
	Date(int new_year, int new_month, int new_day);				// конструктор не по умолчанию
	void set_props(int new_year, int new_month, int new_day);	// указать всЄ
	std::string get_string() const;								// получить информацию об объекте класса в виде строки 
};