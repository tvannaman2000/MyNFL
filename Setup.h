//---------------------------------------------------------------------------

#ifndef SetupH
#define SetupH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DM1.h"
#include "MyNFL.h"
#include "Initialize_League.h"
#include "Schedule_Templates.h"
//---------------------------------------------------------------------------
class Tfrmsetup : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
	TLabel *Lmainmenu;
	TButton *Binitleague;
	TButton *BSchedform;
	TButton *Bcoaches;
	TButton *Balterleague;
	TButton *Bseason;
	void __fastcall BinitleagueClick(TObject *Sender);
	void __fastcall BSchedformClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall Tfrmsetup(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmsetup *frmsetup;
//---------------------------------------------------------------------------
#endif
