#include "Device.h"

using std::Device;

Device::Device(const string & sis  , int memoria , const string & tipoConex , int vol)
:sistema(sis)
{
	memoria >= 0? this->tamMemPrinc = memoria : this->sistema = 2000;
	tipoConex != "" ? this->conexaoComp = tipoConex : this->conexaoComp = "usb";
	this->estadoDisp = 0;
	this->estadoWifi = 0;
	(volume >= 0 && volume <= maxVolume) ? vol = volume : vol = 0;
}

Device::Device(const Device &d)
{
	this->sistema = d.sistema;
	this->tamMemPrinc = d.tamMemPrinc;
	this->conexaoComp = d.conexaoComp;
	this->estado = d.estado;
	this->estadoWifi = d.estadoWifi;
	this->volume = d.volume;
}

int Device::verificaMemoria()
{
	return this->tamMemPrinc;
}

void Device::modificaConex(const string modo &)
{
	if (this->conexaoComp == "USB")
	{
		if(modo == "Wifi")
		{
			this->conexaoComp = modo;
			cout<<"\nConexao com PC modificada para "<< modo << "\n";
		}
		else if (modo == "USB")
		{
			cout<<"\nModo de Conexao ja utilizado\n;
		}
		else
		{
			cout<<"\nModo de conexao invalido\n";
		}
	}
	else
	{
		if(modo == "Wifi")
		{
			cout<<"\nModo de Conexao ja utilizado\n;
		}
		else if (modo == "USB")
		{
			this->conexaoComp = modo;
			cout<<"\nConexao com PC modificada para "<< modo << "\n";
		}
		else
		{
			cout<<"\nModo de conexao invalido\n";
		}cout<<"Modo Invalido\n";
	}
}
