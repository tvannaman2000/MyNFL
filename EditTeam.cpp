//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditTeam.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmeditteam *frmeditteam;
//---------------------------------------------------------------------------
__fastcall Tfrmeditteam::Tfrmeditteam(TComponent* Owner)
	: TForm(Owner)
{
	FDQuery3->SQL->Text = "select div_name from divisions";

	FDQuery3->Open();
	while (not FDQuery3->Eof)
	  {
		 //aNum =   FDQuery1->Fields->Fields[0]->AsString;
		 DBCdivision->Items->Add(FDQuery3->Fields->Fields[0]->AsString);
		 FDQuery3->Next();
	   }


	FDQuery3->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmeditteam::BpriorClick(TObject *Sender)
{
	FDQuery1->Prior();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmeditteam::BnextClick(TObject *Sender)
{
	FDQuery1->Next();
	//Memo1->Lines->Add(DBCdivision->Text);
}
//---------------------------------------------------------------------------
void __fastcall Tfrmeditteam::BpostClick(TObject *Sender)
{      char sql_stmt[2048], div_name[30] ;
	   AnsiString adivcd;
	   TBookmark Bookmark;

	FDQuery1->Edit();
   //	adivcd =  DBCdivision->Text ;
   //	strcpy(div_name,adivcd.c_str());
   //	sprintf(sql_stmt,"select div_code from divisions where \
						div_name = '%s'",div_name);
   //	Memo1->Lines->Add(sql_stmt);
	//FDQuery3->SQL->Text = sql_stmt;
   //	FDQuery3->Open();
	//   Edivcode->Text = FDQuery3->Fields->Fields[0]->AsString;
	//   Memo1->Lines->Add(Edivcode->Text);
	//FDQuery3->Close();



	 FDQuery1->Post();

	 Bookmark = FDQuery1->GetBookmark();

	 NflConnection->ExecSQL("set sql_safe_updates=0; update teams a  \
						  set a.div_code = (select b.div_code from divisions b \
						  where a.division = b.div_name)");
	 FDQuery1->Refresh();
     FDQuery1->GotoBookmark(Bookmark);
}
//---------------------------------------------------------------------------
void __fastcall Tfrmeditteam::BfindClick(TObject *Sender)
{
	 //FDQuery1->Locate(Ename);
}
//---------------------------------------------------------------------------
void __fastcall Tfrmeditteam::BaddteamClick(TObject *Sender)
{
	 FDQuery1->Edit();
	 FDQuery1->Append();
}
//---------------------------------------------------------------------------



void __fastcall Tfrmeditteam::BdeleteteamClick(TObject *Sender)
{
	 FDQuery1->Edit();
	 FDQuery1->Delete();
}
//---------------------------------------------------------------------------

