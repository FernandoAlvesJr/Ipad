#include <iostream>
#include <string.h>

using std::string;

class Device {
    public:
    	Device(const string & = "iOS", int = 2000, const string & = "usb", bool = 0, bool = 0, int = 0);
    	Devide(const Device &);
    	int verificaMemoria();
    	void modificaConex(const string &);
    	void ligaDispositivo();
    	void desligaDispositivo();
    	void ligaWifi();
    	void desligaWifi();
    	void aumentaVolume();
    	void diminuiVolume();
   	
   	protected:
   		bool estadoWifi;
		int volume;

	private:
		const string sistema;
		int tamMemPrinc;
		string conexaoComp;
		bool estado;
		const static maxVolume = 10;
	
};
