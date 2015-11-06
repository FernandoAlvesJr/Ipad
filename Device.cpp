#include "Device.h"

using std::Device;

Device(const string & sis  , int memoria , const string & tipoConex , int vol)
:sistema(sis)
{
	memoria >= 0? this->tamMemPrinc = memoria : this->sistema = 2000;
	tipoConex != "" ? this->conexaoComp = tipoConex : this->conexaoComp = "usb";
	this->estadoDisp = 0;
	this->estadoWifi = 0;
	(volume >= 0 && volume <= maxVolume) ? vol = volume : vol = 0;
}
