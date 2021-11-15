//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "OffSeason.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmoffseason *frmoffseason;
//---------------------------------------------------------------------------
__fastcall Tfrmoffseason::Tfrmoffseason(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmoffseason::BreturnClick(TObject *Sender)
{
    frmoffseason->Close();
}
//---------------------------------------------------------------------------

