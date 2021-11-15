//---------------------------------------------------------------------------

#ifndef DM1H
#define DM1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
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
#include "Initialize_League.h"
//---------------------------------------------------------------------------
class TDataModule1 : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *NflConnection;
	TFDQuery *NflTable;
	TIntegerField *NflTableseason;
	TIntegerField *NflTablesched_type;
	TStringField *NflTablecomplete;
	TIntegerField *NflTableteams;
	TIntegerField *NflTableweeks;
	TDataSource *DataSource1;
	TFDQuery *Qweek;
	TLargeintField *Qweekweek;
	TFDQuery *StandingsTable;
	TStringField *StandingsTablename;
	TStringField *StandingsTabledivision;
	TIntegerField *StandingsTablewins;
	TIntegerField *StandingsTablelosses;
private:	// User declarations
public:		// User declarations
	__fastcall TDataModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
#endif
