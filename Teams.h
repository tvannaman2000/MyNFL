//---------------------------------------------------------------------------

#ifndef TeamsH
#define TeamsH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DM1.h"
#include <Vcl.Dialogs.hpp>
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
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <Vcl.ExtCtrls.hpp>
#include "EditTeam.h"
//---------------------------------------------------------------------------
class Tfrmteams : public TForm
{
__published:	// IDE-managed Components
	TOpenDialog *OpenDialog1;
	TButton *Button1;
	TMemo *Memo1;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TLabel *Lnflchallengemgr;
	TShape *Shape1;
	TLabel *Label1;
	TButton *Bwriteteam;
	TShape *Shape2;
	TLabel *Label2;
	TLabel *Label3;
	TSaveDialog *SaveDialog1;
	TFDQuery *FDQuery2;
	TButton *Beditteam;
	TShape *Shape3;
	TLabel *Label4;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall BwriteteamClick(TObject *Sender);
	void __fastcall BeditteamClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmteams(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmteams *frmteams;
//---------------------------------------------------------------------------
#endif
