#ifndef NEURO_HPP
#define NEURO_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include "constants.hpp"

//#include "simulation.hpp"



class Neuro
{
	public:
	
	Neuro(long);
	double getMembranePotential() const;
	unsigned int getNumberOfSpikes() const;
	std::vector<int> getTimeOfSPike() const;
	bool isInRefractoryState();
	void setToRefactoryState();
	void update(double);
	void setMembranePotential(double);
	double getMembraneResistance() const;
	long getLocalTime() const;
	void setInputCurrent(double);
	double getInputCurrent() const;
	void add_time_of_spike(long);
	void setLocalTime(long);
	~Neuro();
	
	private:
	
	double MembranePotential;
	unsigned int NumberOfSpikes;
	/// we use a vector where we stock each value of "pas de temps" where a recorded a spike 
	std::vector<int> TimeOfSpike;
	double MembraneResistance;
	long localTime;
	double inputcurrent;
	bool state;
	
};
#endif 
