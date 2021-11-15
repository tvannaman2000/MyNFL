//---------------------------------------------------------------------------

#ifndef DAC_testH
#define DAC_testH
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
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
//---------------------------------------------------------------------------
class Tfrmdactest : public TForm
{
__published:	// IDE-managed Components
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TButton *Btest;
	TEdit *Edit1;
	TFDAutoIncField *FDQuery1player_id;
	TIntegerField *FDQuery1jersey_no;
	TStringField *FDQuery1name;
	TStringField *FDQuery1posi;
	TStringField *FDQuery1ht;
	TIntegerField *FDQuery1wt;
	TIntegerField *FDQuery1yrs;
	TBCDField *FDQuery1spd;
	TIntegerField *FDQuery1rush;
	TIntegerField *FDQuery1rcv;
	TIntegerField *FDQuery1pass;
	TIntegerField *FDQuery1kick;
	TStringField *FDQuery1starter;
	TIntegerField *FDQuery1team_id;
	TStringField *FDQuery1team;
	TIntegerField *FDQuery1blk;
	TStringField *FDQuery1KR;
	TStringField *FDQuery1PR;
	TStringField *FDQuery1active;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TEdit *Edit2;
	TLinkControlToField *LinkControlToField2;
	TMemo *Memo1;
	void __fastcall BtestClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmdactest(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmdactest *frmdactest;
//---------------------------------------------------------------------------
#endif
