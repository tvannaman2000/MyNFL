//---------------------------------------------------------------------------

#ifndef EditTeamH
#define EditTeamH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Phys.MySQL.hpp>
#include <FireDAC.Phys.MySQLDef.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <Vcl.DBCtrls.hpp>
//---------------------------------------------------------------------------
class Tfrmeditteam : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
	TButton *Bfind;
	TButton *Bnext;
	TButton *Bprior;
	TButton *Bpost;
	TFDConnection *NflConnection;
	TEdit *Ename;
	TEdit *Ecity;
	TLabel *Lname;
	TLabel *Label1;
	TDBComboBox *DBCoffense;
	TDBComboBox *DBCdefense;
	TLabel *Label2;
	TLabel *Label3;
	TFDQuery *FDQuery1;
	TFDAutoIncField *FDQuery1team_id;
	TStringField *FDQuery1name;
	TStringField *FDQuery1city;
	TStringField *FDQuery1offense;
	TStringField *FDQuery1defense;
	TStringField *FDQuery1division;
	TIntegerField *FDQuery1last_finish;
	TStringField *FDQuery1div_code;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TLinkControlToField *LinkControlToField2;
	TLinkPropertyToField *LinkPropertyToFieldText;
	TLinkPropertyToField *LinkPropertyToFieldText2;
	TButton *Baddteam;
	TButton *Bdeleteteam;
	TLabel *Label4;
	TFDQuery *FDQuery2;
	TDataSource *TDataSource2;
	TFDQuery *FDQuery3;
	TDBComboBox *DBCdivision;
	TEdit *Edivcode;
	TLinkControlToField *LinkControlToField3;
	void __fastcall BpriorClick(TObject *Sender);
	void __fastcall BnextClick(TObject *Sender);
	void __fastcall BpostClick(TObject *Sender);
	void __fastcall BfindClick(TObject *Sender);
	void __fastcall BaddteamClick(TObject *Sender);
	void __fastcall BdeleteteamClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmeditteam(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmeditteam *frmeditteam;
//---------------------------------------------------------------------------
#endif
