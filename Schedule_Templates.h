//---------------------------------------------------------------------------

#ifndef Schedule_TemplatesH
#define Schedule_TemplatesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.Bind.Controls.hpp>
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
#include <Vcl.Bind.Navigator.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
//---------------------------------------------------------------------------
class Tfrmsched_template : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
	TFDConnection *NflConnection;
	TFDQuery *Sched_templateTable;
	TFDQuery *FDQuery1;
	TDBGrid *DBGrid1;
	TBindNavigator *BindNavigator1;
	TIntegerField *Sched_templateTablesched_type;
	TStringField *Sched_templateTablev_division;
	TIntegerField *Sched_templateTablev_finish;
	TStringField *Sched_templateTableh_division;
	TIntegerField *Sched_templateTableh_finish;
	TIntegerField *Sched_templateTableweek;
	TIntegerField *Sched_templateTableno_teams;
	TIntegerField *Sched_templateTableno_divisions;
	TIntegerField *Sched_templateTableno_games;
	TDataSource *DataSource1;
	TBindSourceDB *BindSourceDB1;
	TRadioButton *R28teams;
	TRadioButton *R32teams;
	TRadioGroup *RadioGroup1;
private:	// User declarations
public:		// User declarations
	__fastcall Tfrmsched_template(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tfrmsched_template *frmsched_template;
//---------------------------------------------------------------------------
#endif
