//---------------------------------------------------------------------------

#ifndef EditDivisionsH
#define EditDivisionsH
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
//---------------------------------------------------------------------------
class Tfrmdivisions : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Ediv_name;
	TEdit *Ediv_code;
	TFDConnection *FDConnection1;
	TFDQuery *FDQuery1;
	TStringField *FDQuery1div_code;
	TStringField *FDQuery1div_name;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TLinkControlToField *LinkControlToField2;
	TButton *Bprevious;
	TButton *Bnext;
	TButton *Bsave;
	TButton *Bappend;
	TButton *Bdelete;
	void __fastcall BnextClick(TObject *Sender);
    void __fastcall BsaveClick(TObject *Sender);
	void __fastcall BappendClick(TObject *Sender);
	void __fastcall BdeleteClick(TObject *Sender);
	void __fastcall BpreviousClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmdivisions(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmdivisions *frmdivisions;
//---------------------------------------------------------------------------
#endif
