//---------------------------------------------------------------------------

#ifndef CoachesH
#define CoachesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
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
#include <Vcl.DBCtrls.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include <Data.Bind.Controls.hpp>
#include <Vcl.Bind.Navigator.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class Tfrmcoaches : public TForm
{
__published:	// IDE-managed Components
	TButton *Bnext;
	TButton *Bprior;
	TButton *Bpost;
	TButton *Baddteam;
	TButton *Bdeleteteam;
	TLabel *Lnflchallengemgr;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TFDAutoIncField *FDQuery1coach_id;
	TStringField *FDQuery1name;
	TStringField *FDQuery1isactive;
	TStringField *FDQuery1team;
	TIntegerField *FDQuery1wins;
	TIntegerField *FDQuery1losses;
	TBCDField *FDQuery1winpct;
	TStringField *FDQuery1offense;
	TStringField *FDQuery1defense;
	TEdit *Ename;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TDBComboBox *DBCoffense;
	TDBComboBox *DBCdefense;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TLinkPropertyToField *LinkPropertyToFieldText;
	TLinkPropertyToField *LinkPropertyToFieldText2;
	TMemo *Memo1;
	TFDQuery *FDQuery2;
	TFDQuery *FDQuery3;
	TFDQuery *FDQuery4;
	TLabel *Label4;
	TDBComboBox *DBCteam;
	TLinkPropertyToField *LinkPropertyToFieldText3;
	TLabel *Label5;
	TDBComboBox *DBCactive;
	TLinkPropertyToField *LinkPropertyToFieldText4;
	TButton *Badd1coach;
	TDataSource *DataSource1;
	TEdit *Ewins;
	TEdit *Elosses;
	TLabel *Label6;
	TLinkControlToField *LinkControlToField2;
	TLabel *Label7;
	TLinkControlToField *LinkControlToField3;
	TIntegerField *FDQuery1age;
	TLabel *Label8;
	TEdit *Eage;
	TBindNavigator *NavigatorBindSourceDB1;
	TLinkControlToField *LinkControlToField4;
	TLabel *Label9;
	TEdit *Ecnt;
	void __fastcall BaddteamClick(TObject *Sender);
	void __fastcall BnextClick(TObject *Sender);
	void __fastcall BpriorClick(TObject *Sender);
	void __fastcall Badd1coachClick(TObject *Sender);
	void __fastcall BpostClick(TObject *Sender);
	void __fastcall BdeleteteamClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall Tfrmcoaches(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmcoaches *frmcoaches;
//---------------------------------------------------------------------------
#endif
