#pragma once
#include <iostream>
#include <string>
#include <vector>
class abonents {
public:
	abonents(std::string name, int number);



	void setName(std::string Name) {
		_names.push_back(Name);
	}
	std::string getName() {
		for (size_t i = 0; i < _names.size(); i++)
		{
			return _names[i];
		}
	}



	void setNumber(int Number) {
		_numbers.push_back(Number);
	}
	int getNumber() {
		for (size_t i = 0; i < _numbers.size(); i++)
		{
			return _numbers[i];
		}
	}
private:
	std::vector <std::string> _names;
	std::vector<int> _numbers;
};
class PhoneBook {
public:
	PhoneBook(std::string name, int number);



	void setName(std::string Name) {
		_names.push_back(Name);
	}
	std::string getName() {
		for (size_t i = 0; i < _names.size(); i++)
		{
			return _names[i];
		}
	}


	void setNumber(int Number) {
		_numbers.push_back(Number);
	}
	int getNumber() {
		for (size_t i = 0; i < _numbers.size(); i++)
		{
			return _numbers[i];
		}
	}
	
	bool operator>(PhoneBook& rhs) {
		return _names.size() > rhs._names.size();
	}

	bool operator==(PhoneBook& rhs) {
		return _abonents[0].getName() == rhs._a
	}
	
	bool operator!() {
		return !_names.size()
	}
private:
	// std::vector<abonents> _abonents
	std::vector <std::string> _names;
	std::vector<int> _numbers;
};
bool operator >(abonents& other,PhoneBook & obj) {
	return true;
}
bool func(std::vector <std::string> _namesAbonents, std::vector <std::string> namesPhoneBook) {
	if (_namesAbonents.size() > namesPhoneBook.size())
		return true;
	return false;
}