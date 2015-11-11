#include "Tablet.h"

using std::string;

class Ipad : public Tablet{
	public:
		Ipad(const string & = "Linux", int = 2000, bool = 0, bool = 0, int =0, const string & = "USB", const string & = "Clouddefault", const string & = "123456", const string & = "Storedefault", const string & = "123456", long = 0);
		//Ipad(const Ipad &);
		int logCloud(const string &, const string &);
		int logAppleStore(const string &, const string &);
		void addCreditCard(long);
		virtual void ligaDispositivo();
    	virtual void desligaDispositivo();
    	virtual int verificaMemoria() = 0;
    	virtual void modificaConex(const string &);
    	virtual void ligaWifi();
    	virtual void desligaWifi();
    	virtual void aumentaVolume();
    	virtual void diminuiVolume();
	  
	private:
		string loginiCloud;
		string senhaiCloud;
		string loginAppleStore;
		string senhaAppleStore;
		long cartaoCredito;
};
