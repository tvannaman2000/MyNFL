//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Setup.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmsetup *frmsetup;
//---------------------------------------------------------------------------
__fastcall Tfrmsetup::Tfrmsetup(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//void __fastcall Tfrmsetup::BsetupreturnClick(TObject *Sender)
//{
//	frmsetup->Close();
//}
//---------------------------------------------------------------------------

void __fastcall Tfrmsetup::BinitleagueClick(TObject *Sender)
{
	TPoint pt;


	pt = frmsetup->ClientOrigin;
	frminitleague->Left = pt.x + 2;
	frminitleague->Top = pt.y + 5;
    frminitleague->Show();
}
//---------------------------------------------------------------------------


