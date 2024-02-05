//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include "SNClientTCP.h"
#include "SNServeurTcpMonoClient.h"
//---------------------------------------------------------------------------
class ThClientServeur : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	String information;
	SNClientTCP modeClient;
    SNServeurTcpMonoClient modeServeur;
	__fastcall ThClientServeur(bool CreateSuspended);
    __fastcall ~ThClientServeur();
	void __fastcall MiseAJourInterfacePrincipale();
};
//---------------------------------------------------------------------------
#endif
