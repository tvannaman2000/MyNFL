//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditDivisions.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmdivisions *frmdivisions;
//---------------------------------------------------------------------------
__fastcall Tfrmdivisions::Tfrmdivisions(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmdivisions::BsaveClick(TObject *Sender)
{
	 FDQuery1->Edit();
	 FDQuery1->Post();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmdivisions::BnextClick(TObject *Sender)
{
    FDQuery1->Next();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmdivisions::BappendClick(TObject *Sender)
{
	 FDQuery1->Edit();
	 FDQuery1->Append();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmdivisions::BdeleteClick(TObject *Sender)
{
	 FDQuery1->Edit();
	 FDQuery1->Delete();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmdivisions::BpreviousClick(TObject *Sender)
{
	 FDQuery1->Prior();
}
//---------------------------------------------------------------------------
