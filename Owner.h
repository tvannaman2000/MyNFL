//---------------------------------------------------------------------------

#ifndef OwnerH
#define OwnerH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tfrmowner : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmowner(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmowner *frmowner;
//---------------------------------------------------------------------------
#endif
