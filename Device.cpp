#include "Device.h"


Device::Device(const string & sis  , int memoria , bool estado)
{
	sis != "" ? this->sistema = sis : this->sistema = "Linux";
	memoria >= 0? this->tamMemPrinc = memoria : this->tamMemPrinc = 2000;
	((estado >= 0) && (estado <= 1)) ? this->estado_ = estado : this->estado_ = 0;
}

Device::~Device()
{
}


/*
int Device::verificaMemoria()
{
	return this->tamMemPrinc;
}

void Device::modificaConex(const string  & modo)
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
			cout<<"\nModo de Conexao ja utilizado\n";
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
			cout<<"\nModo de Conexao ja utilizado\n";
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

void Device::ligaDispositivo()
{
	this->estado = 0 ? this->estado = 1 : cout << "\nO Dispositivo ja esta ligado\n";
}

void Device::desligaDispositivo()
{
	this->estado = 1 ? this->estado = 0 : cout << "\nO Dispositivo ja esta desligado\n";
}

void Device::ligaWifi()
{
	this->estadoWifi = 0 ? this->estadoWifi = 1 : cout << "\nO Wifi ja esta ligado\n";
}

void Device::desligaWifi()
{
	this->estadoWifi = 1 ? this->estadoWifi = 0 : cout << "\nO Wifi ja esta desligado\n";
}

void Device::aumentaVolume()
{
	if ((this->volume >= 0) && (this->volume <= maxVolume))
	{
		this->volume++;
	}
}
*/
