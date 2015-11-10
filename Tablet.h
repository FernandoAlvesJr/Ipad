#include "Device.h"

//using std::Device;

class Tablet:Device{
	public:
    	Tablet(bool = 0, int = 0, const string & = "usb");
    	Tablet(const Tablet &);
    	virtual void modificaConex(const string &) = 0;
    	virtual void ligaWifi() = 0;
    	virtual void desligaWifi() = 0;
    	virtual void aumentaVolume() = 0;
    	virtual void diminuiVolume() = 0;
   	
   	protected:
   		bool estadoWifi;
		int volume;
	
	private:
		string conexaoComp;
		const static int maxVolume = 10;
};
