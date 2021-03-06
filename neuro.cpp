#include "neuro.hpp"

using namespace std;

Neuro::Neuro (long time)
:MembranePotential(0.0), NumberOfSpikes(0), state(false)
{
	setLocalTime(time);
}
double Neuro::getMembranePotential() const
{
	return MembranePotential;
}


unsigned int Neuro::getNumberOfSpikes() const
{
	return NumberOfSpikes;
}
std::vector<int> Neuro::getTimeOfSPike() const
{
	return TimeOfSpike;
}

bool Neuro::isInRefractoryState()
{

	if(TimeOfSpike.size()>=1)
	return ((TimeOfSpike[TimeOfSpike.size()-1]+10*h)-getLocalTime()<=h) ;
	else return false;
	
}
void Neuro::update(double current)
{
	double potential(getMembranePotential());
	setMembranePotential(exp(-h/tau_excitation)*potential+current*(membrane_resistance)*(1-exp(-h/tau_excitation)));
}

void Neuro::setMembranePotential(double potential)
{
	MembranePotential=potential;
}
double Neuro::getMembraneResistance() const
{
	return MembraneResistance;
}
long Neuro::getLocalTime() const
{
	return localTime;
}
void Neuro::setInputCurrent(double in)
{
	inputcurrent=in;
}
double Neuro::getInputCurrent() const
{
	return inputcurrent;
}

void Neuro::add_time_of_spike(long time)
{
	TimeOfSpike.push_back(time);
}
void Neuro::setLocalTime(long time)
{
	localTime=time;
}
void::Neuro::setToRefactoryState()
{
	setMembranePotential(Vr);
	state=true; //isrefractory
}

Neuro::~Neuro() 
{
	
}
