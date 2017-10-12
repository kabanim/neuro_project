#include "neuro.hpp"
#include <fstream>
using namespace std;
int main()
{
	
int a(0),b(10);
double Iext(1);
double PotentialThreshold(20);
int tstart(0);
int tstop(20);
       
		
		long simtime(tstart);
		Neuro neurone(simtime);
		ofstream file;
        file.open ("MembranePotential.txt");

	 do
		{

			file << neurone.getMembranePotential();
			file<<" ";
			neurone.setInputCurrent(Iext);
			if (neurone.getMembranePotential()> PotentialThreshold)
				 {
					 neurone.add_time_of_spike(simtime);
					 neurone.setToRefactoryState();
				 }
			if (neurone.isInRefractoryState())
			{
				neurone.setMembranePotential(0.0);
			}
				else 
		    if (simtime>=a and simtime<=b)	
		      neurone.update(Iext);
			else 
			    neurone.update(0);
			     
		simtime=simtime+h;
		} while (simtime<tstop);
		file.close();
		
cout<<"spike times"<<endl;
for (auto t: neurone.getTimeOfSPike())
{
	cout<<t<<" ";
} 

 return 0;
}
