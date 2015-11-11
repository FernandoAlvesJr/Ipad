#include "Device.h"

//using std::Device;

class Tablet : public Device{
	public:
    	Tablet(const string & = "Linux", int tamMemoria = 2000, bool estado = 0, bool = 0, int = 0, const string & = "USB");
    	virtual ~Tablet();
    	virtual void ligaDispositivo() = 0;
    	virtual void desligaDispositivo() = 0;
    	virtual int verificaMemoria() = 0;
    	virtual void modificaConex(const string &) = 0;
    	virtual void ligaWifi() = 0;
    	virtual void desligaWifi() = 0;
    	virtual void aumentaVolume() = 0;
    	virtual void diminuiVolume() = 0;
   	
   	protected:
   		bool estadoWifi;
		int volume;
		string conexaoComp;
	
	private:
		const static int MAXVOLUME = 10;
};
