//---------------------------------------------------------------------------

#ifndef MyNFLH
#define MyNFLH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "DM1.h"
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <Vcl.Bind.DBEngExt.hpp>
#include <Vcl.Bind.Editors.hpp>
#include "Setup.h"
#include "OffSeason.h"
#include "Statistics.h"
#include "Teams.h"
#include "Schedule.h"
#include "Weekly.h"
#include "Initialize_League.h"
#include "Commish.h"
#include "Owner.h"
#include "EditTeam.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Lnflchallengemgr;
	TLabel *Lmainmenu;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Eseason;
	TEdit *Eweek;
	TDBGrid *DBGrid1;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TLinkControlToField *LinkControlToField1;
	TBindSourceDB *BindSourceDB2;
	TLinkControlToField *LinkControlToField2;
	TButton *Bweekly;
	TButton *Bschedule;
	TButton *Bowner;
	TButton *Bstats;
	TButton *Boffseason;
	TButton *Bsetup;
	void __fastcall BsetupClick(TObject *Sender);
	void __fastcall BoffseasonClick(TObject *Sender);
	void __fastcall BstatsClick(TObject *Sender);
	void __fastcall BweeklyClick(TObject *Sender);
	void __fastcall BownerClick(TObject *Sender);
	void __fastcall BscheduleClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
