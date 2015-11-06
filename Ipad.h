#include "Device.h"

using std::string;

class Ipad : public Device{
	public:
		Ipad(const string & = "Clouddefault", const string & = "123456", const string & = "Storedefault", const string & = "123456", long = 0);
		Ipad(const Ipad &);
		int logCloud(const string &, const string &);
		int logAppleStore(const string &, const string &);
		void addCreditCard(long);
	  
	private:
		string loginiCloud;
		string senhaiCloud;
		string loginAppleStore;
		string senhaAppleStore;
		long cartaoCredito;
};
