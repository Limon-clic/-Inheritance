#include "Professor.h"
#include <iostream>
#include <vector>

void Professor::set_subject(std::string new_subject)						// указать предмет
{	
	if (new_subject != "")
		this->subject.push_back(new_subject);
	else
		throw std::invalid_argument("Invalid argument");
}

void Professor::set_wage(int new_wage)										// указатьзарплату
{
	if (new_wage > 0)
		this->wage = new_wage;
	else throw std::invalid_argument("Param cant be empty");

}

void Professor::set_academic_degree(const std::string& new_academic_degree)	// указать академ. степень
{
	if (new_academic_degree != "")
		this->academic_degree = new_academic_degree;
	else
		throw std::invalid_argument("Ты что, инвалид? Вводи нормально!");
}

void Professor::set_length_of_work(unsigned short new_length_of_work)		// указать стаж работы
{
	if (new_length_of_work > 0)
		this->length_of_work = new_length_of_work;
	else throw std::invalid_argument("Param cant be empty");
}

std::string Professor::get_academic_degree() const							// получить академ. степень
{
	return this->academic_degree;
}

int Professor::get_wage() const												// получить зарплату
{
	return this->wage;
}

std::vector<std::string> Professor::get_subject() const						// получить предметы
{
	return subject;
}

unsigned short Professor::get_length_of_work() const						// получить стаж работы
{
	return this->length_of_work;
}

void Professor::del_subject(std::string element)							// удалить предмет
{
	for (int i = 0; i < subject.size(); i++)
	{
		if (this->subject[i] == element)
		{
			this->subject.erase(subject.begin() + i);
			break;
		}
	}
}

Professor::Professor()														// конст. по умолч.
{
	set_name("Андрей");
	Date();
	set_secondname("Дрон");
	set_lastname("Андреевич");
	set_subject("Математика");
	this->wage = 21750;
	set_academic_degree("Мастер");
	set_length_of_work(3);
}

Professor::Professor(std::string new_academic_degree, unsigned short new_length_of_work, std::string new_subject, int new_wage, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)		// конст. с параметрами
{
	set_props(new_academic_degree, new_length_of_work, new_subject, new_wage, new_name, new_secondname, new_lastname, new_date_of_birth);
}

void  Professor::set_props(std::string new_academic_degree, unsigned short new_length_of_work, std::string new_subject, int new_wage, const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)	// указать все значения
{
	set_wage(new_wage);
	set_subject(new_subject);
	set_academic_degree(new_academic_degree);
	set_length_of_work(new_length_of_work);
	set_name(new_name);
	set_secondname(new_secondname);
	set_lastname(new_lastname);
	set_date_of_birth(new_date_of_birth);
}

std::string  Professor::get_string() const									// получить строку
{
	std::string str;
	str =
	"Имя: " + get_name() + "\n" +
	"Фамилия: " + get_secondname() + "\n" +
	"Отчество: " + get_lastname() + "\n" +
	"Дата рождения: " + date_of_birth.get_string() + "\n" +
	"Предмет(ы): ";
	for (int i = 0; i < subject.size(); i++)								// в цикле записяваем вектор subject в str
	{
		str += this->subject[i] + "; ";
	}

	str += "\n";
	str += 
	"Опыт работы: " + std::to_string(get_length_of_work()) + "\n" +
	"Зарплата: " + std ::to_string(get_wage()) + "\n";
		
	return str;
}