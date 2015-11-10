#include <iostream>
using std::cout;

#include <string.h>

using std::string;

class Device {
    public:
    	Device(const string & = "Linux", int = 2000, int = 0);
    	Device(const Device &);
    	virtual void ligaDispositivo() = 0;
    	virtual void desligaDispositivo() = 0;
    	virtual int verificaMemoria() = 0;
    	
   	private:
		const string sistema;
		int tamMemPrinc;
		bool estado;
	
	
};
