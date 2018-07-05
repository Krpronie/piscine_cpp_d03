#ifndef SKAT_H_
#define SKAT_H_

#include <string>
#include <iostream>
using namespace std;

class Skat
{
	string _name;
	int stimpaks;

	public:
		Skat(string const &_name = "bob", int stimpaks = 15);
		~Skat();

		int &stimPaks();
		const string &name();
		
		void shareStimPaks(int number, int &stock);
		void addStimPaks(unsigned int number);
		void useStimPaks();
		void status();
};

#endif