#ifndef FLIPPINFLAPJACKS_ACCOUNTS_H
#define FLIPPINFLAPJACKS_ACCOUNTS_H
#include <iostream>
#include <string>

struct Accounts {

public:
	int num;
	std::string name;
	bool active;
	float balance;
        bool student;
};

#endif // FLIPPINFLAPJACKS_ACCOUNTS_H