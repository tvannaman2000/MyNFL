//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Owner.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmowner *frmowner;
//---------------------------------------------------------------------------
__fastcall Tfrmowner::Tfrmowner(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
