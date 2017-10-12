#ifndef CONSTANTS_HPP
#define CONSTANTS_HPP

///tau=RC in ms
double const tau_excitation = 20;
///tau decharge in ms
double const tau_rp=2;
///V resetpotentiel de la membrane in mV
double const Vr=10;
///firing threshold in mV
double const teta=20;
///membrane resistance
double const membrane_resistance=2;
///relative strength of the inhibitory synapses
double const g=4; // J_E/J_I
///the frequency of the external input in mV
double const vext=1;
///refractory time of one 1 ms
int const refrac=1;
///the EPSP amplitude in mV
double const J_E=10;  //EXCITATORY
double const J_I=2;  //INHIBITORY
///the number of recurrent excitatory connections (equals also the number of connections from outside the network
double const C_E=0.8; 
///the transmission delay
double const D=1; 
/// simulation step
long const h=1; 
///h equals 0,1ms
double const hequals=0.1;

#endif 
