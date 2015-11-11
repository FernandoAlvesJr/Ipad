#include "Tablet.h"


Tablet::Tablet(const string &sistema, int tamMemoria, bool estado, bool estadoWifi, int volume, const string &conexao)
:Device (sistema, tamMemoria, estado)
{
	((estadoWifi >= 0) && (estadoWifi <=1 )) ? this->estadoWifi = estadoWifi : this->estadoWifi = 0;
	((volume >= 0) && (volume <= MAXVOLUME)) ? this->volume = volume : this->volume = 0;
	((conexao == "USB") || (conexao == "WIFI")) ? this->conexaoComp = conexao : this->conexaoComp = "USB";
}

Tablet::~Tablet()
{
	
}
