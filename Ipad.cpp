#include "Ipad.h"

using std::Ipad;

Ipad(const string & sis  , int memoria , const string & tipoConex , int vol, const string & loginCloud, const string & senhaCloud, const string & loginStore, const string & senhaStore, long creditCard = 0)
:Device( sis,  memoria , tipoConex , vol)
{
	
	loginCloud != "" ? this->loginiCloud = loginCloud : this->loginiCloud = "Clouddefault";
	senhaCloud != "" ? this->senhaiCloud = senhaCloud : this->senhaiCloud = "123456";
	loginStore != "" ? this->loginAppleStore = loginStore : this->loginAppleStore = "Storedefault";
	senhaStore != "" ? this->senhaAppleStore = senhaStore : this->senhaAppleStore = "123456";
	creditCard >= 0 ? this->cartaoCredito = creditCard : this->cartaoCredito = 0;
	
}
