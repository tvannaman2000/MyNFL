//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "DAC_test.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmdactest *frmdactest;
//---------------------------------------------------------------------------
__fastcall Tfrmdactest::Tfrmdactest(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmdactest::BtestClick(TObject *Sender)
{

	FDQuery1->SQL->Text = "select * from active_players where team_id =7";
	FDQuery1->Open();

	while (not FDQuery1->Eof)
	  {
		  Memo1->Lines->Add(FDQuery1->Fields->Fields[1]->AsString);
		  Memo1->Lines->Add(FDQuery1->Fields->Fields[2]->AsString);
		  FDQuery1->Next();
	  }
	FDQuery1->Close();
}
//---------------------------------------------------------------------------
