#pragma once
#include "Human.h"
#include "String"

class Student : public Human // студент
{
private:
	std ::string group;													// группа
	int cours;															// курс
	long int record_book;												// зачетная книжка (зачетка)
	unsigned int grants;												// стипендия

public:
	void set_grants(unsigned int new_grants);							// указать стипендию
	void set_group(const std::string& new_group);						// группу
	void set_record_book(long int new_record_book);						// зачетную книжку
	void set_cours(int new_cours);										// курс
	int get_cours() const;												// получить группу
	std::string get_group() const;										// курс
	long int get_record_book() const;									// зачетную книжку
	unsigned int get_grants() const;									// стипендию
	Student();															// конструктор по умолчанию
	Student(unsigned int grants, long int record_book, const std::string& new_group, int new_course, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);	// конструктор не по умолчанию
	void  set_props(unsigned int new_grants, long int new_record_book, const std::string& new_group, int new_course, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth);	// указать всё
	std::string get_string() const;										// получить информацию об объекте класса в виде строки 
};