//---------------------------------------------------------------------------

#ifndef CommishH
#define CommishH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DM1.h"
//---------------------------------------------------------------------------
class Tfrmcommish : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmcommish(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmcommish *frmcommish;
//---------------------------------------------------------------------------
#endif
