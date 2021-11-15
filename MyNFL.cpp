//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MyNFL.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{


}
//---------------------------------------------------------------------------
void __fastcall TForm1::BsetupClick(TObject *Sender)
{
	TPoint pt;


	pt = Form1->ClientOrigin;
	frmsetup->Left = pt.x + 2;
	frmsetup->Top = pt.y + 5;

	frmsetup->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BoffseasonClick(TObject *Sender)
{
	TPoint pt;


	pt = Form1->ClientOrigin;
	frmoffseason->Left = pt.x + 2;
	frmoffseason->Top = pt.y + 5;
    frmoffseason->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BstatsClick(TObject *Sender)
{
	TPoint pt;


	pt = Form1->ClientOrigin;
	frmstatistics->Left = pt.x + 2;
	frmstatistics->Top = pt.y + 5;
    frmstatistics->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BweeklyClick(TObject *Sender)
{
	TPoint pt;


	pt = Form1->ClientOrigin;
	frmweekly->Left = pt.x + 2;
	frmweekly->Top = pt.y + 5;
    frmweekly->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BownerClick(TObject *Sender)
{
	TPoint pt;


	pt = Form1->ClientOrigin;
	frmowner->Left = pt.x + 2;
	frmowner->Top = pt.y + 5;
    frmowner->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BscheduleClick(TObject *Sender)
{
	TPoint pt;


	pt = Form1->ClientOrigin;
	frmcommish->Left = pt.x + 2;
	frmcommish->Top = pt.y + 5;
	frmcommish->Show();
}
//---------------------------------------------------------------------------

