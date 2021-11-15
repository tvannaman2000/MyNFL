//---------------------------------------------------------------------------

#ifndef Initialize_LeagueH
#define Initialize_LeagueH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DM1.h"
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include "MyNFL.h"
#include <Vcl.ExtCtrls.hpp>
#include "Teams.h"
#include "DAC_test.h"
#include "EditDivisions.h"
//---------------------------------------------------------------------------
class Tfrminitleague : public TForm
{
__published:	// IDE-managed Components
	TButton *Binitleague;
	TButton *Bcreatetables;
	TLabel *Lnflchallengemgr;
	TFDConnection *FDConnection1;
	TMemo *Memo1;
	TLabel *Label1;
	TButton *Bloadteam;
	TButton *Beditdivisions;
	void __fastcall BinitleagueClick(TObject *Sender);
	void __fastcall BcreatetablesClick(TObject *Sender);
	void __fastcall BloadteamClick(TObject *Sender);
	void __fastcall BwriteteamClick(TObject *Sender);
	void __fastcall BeditdivisionsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfrminitleague(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrminitleague *frminitleague;
//---------------------------------------------------------------------------
#endif
