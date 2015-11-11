#include "Ipad.h"

//using std::Ipad;

Ipad::Ipad(const string & sistema, int tamMemoria, bool estado, bool estadoWifi, int volume, const string &tipoConex, const string & loginCloud, const string & senhaCloud, const string & loginStore, const string & senhaStore, long creditCard)
:Tablet( sistema, tamMemoria, estado, estadoWifi, volume, tipoConex)
{
	
	loginCloud != "" ? this->loginiCloud = loginCloud : this->loginiCloud = "Clouddefault";
	senhaCloud != "" ? this->senhaiCloud = senhaCloud : this->senhaiCloud = "123456";
	loginStore != "" ? this->loginAppleStore = loginStore : this->loginAppleStore = "Storedefault";
	senhaStore != "" ? this->senhaAppleStore = senhaStore : this->senhaAppleStore = "123456";
	creditCard >= 0 ? this->cartaoCredito = creditCard : this->cartaoCredito = 0;
	
}

/*
Ipad::Ipad (const Ipad &ipadOut)
:Tablet(static_cast<Tablet>(ipadOut))
{
	this->loginiCloud = ipadOut.loginiCloud;
	this->senhaiCloud = ipadOut.senhaiCloud;
	this->loginAppleStore = ipadOut.loginAppleStore;
	this->senhaAppleStore = ipadOut.senhaAppleStore;
	this->cartaoCredito = ipadOut.cartaoCredito;
	
}

*/

void Ipad::ligaDispositivo()
{
	estado_ == false ? estado = true : cout << "\nO dispositivo ja esta ligado\n";
}

void Ipad::desligaDispositivo()
{
	estado_ = true ? estado_ = false : "\nO dispositivo ja esta desligado\n";
}

int Ipad::verificaMemoria()
{
	return tamMemPrinc;
}

void Ipad::modificaConex(const string &tipoConex)
{
	conexaoComp = tipoConex;	//Falta controle
}

void Ipad::ligaWifi()
{
	estadoWifi = true;			//Falta controle
}

void Ipad::desligaWifi
{
	estadoWifi = false; 		//Falta controle
}

void Ipad::aumentaVolume()
{
	volume++;					//Falta controle
}

void Ipad::diminuiVolume()
{
	volume--;					//Falta controle
}

/*
int logCloud(const string &, const string &)
{
	
}
int logAppleStore(const string &, const string &);
void addCreditCard(long);

*/
