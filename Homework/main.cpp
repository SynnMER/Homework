#include <iostream>
#include <string>
#include <vector>
#include "Abonents.h"
int main() {
	PhoneBook a("Misha", 890);
	PhoneBook b("Elena", 890556);
	abonents one("Pavel", 900);
	abonents two("Axe", 900232);
	abonents three("Dzamshut", 9004444);

	std::vector <PhoneBook> sub;
	std::vector <abonents> subsribers;

	sub.push_back(a);
	sub.push_back(b);
	subsribers.push_back(one);
	subsribers.push_back(two);
	subsribers.push_back(three);
	std::cout << func(sub,subsribers) << std::endl;
	return 0;
}