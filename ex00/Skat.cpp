#include <iostream>
#include <string>
#include "Skat.h"
using namespace std;

Skat::Skat(std::string const &name, int stimpaks)
{
	this->_name = name;
	this->stimpaks = stimpaks;
}

Skat::~Skat()
{
}

int	&Skat::stimPaks()
{
	return this->stimpaks;
}

const string &Skat::name()
{
	return this->_name;
}

void	Skat::shareStimPaks(int number, int &stock)
{
	if (this->stimpaks < number)
		cout << "Don't be greedy" << endl;
	else
	{
		this->stimpaks -= number;
		stock = stock + number;
		cout << "Keep the change." << endl;
	}
}

void	Skat::addStimPaks(unsigned int number)
{
	if (number == 0)
		cout << "Hey boya, did you forget something ?" << endl;
	this->stimpaks += number;
}

void	Skat::useStimPaks()
{
	if (this->stimpaks > 0)
	{
		this->stimpaks -= 1;
		cout << "Time to kick some ass and chew bubble gum." << endl;
	}
	else
		cout << "Mediiiiiic" << endl;
}

void	Skat::status()
{
	cout << "Soldier " << this->_name << " reporting " << this->stimpaks << " stimpaks remaining sir !" << endl;
}