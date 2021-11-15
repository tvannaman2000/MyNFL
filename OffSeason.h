//---------------------------------------------------------------------------

#ifndef OffSeasonH
#define OffSeasonH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DM1.h"
//---------------------------------------------------------------------------
class Tfrmoffseason : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
	TLabel *Lmainmenu;
	TButton *Bdraft;
	TButton *Btrainingcamp;
	TButton *Bretire;
	TButton *Brosters;
	TButton *Bplayercut;
	TButton *Button5;
	TButton *Bnxtyrsched;
	TButton *Breturn;
	void __fastcall BreturnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmoffseason(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmoffseason *frmoffseason;
//---------------------------------------------------------------------------
#endif
