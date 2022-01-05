//---------------------------------------------------------------------------

#include <vcl.h>
#include <time.h>
#include <stdlib.h>
#pragma hdrstop

#include "Coaches.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmcoaches *frmcoaches;
//---------------------------------------------------------------------------
__fastcall Tfrmcoaches::Tfrmcoaches(TComponent* Owner)
	: TForm(Owner)
{
	FDQuery3->SQL->Text = "select name from teams order by name";

	FDQuery3->Open();
	while (not FDQuery3->Eof)
	  {
		 //aNum =   FDQuery1->Fields->Fields[0]->AsString;
		 DBCteam->Items->Add(FDQuery3->Fields->Fields[0]->AsString);
		 FDQuery3->Next();
	   }


	FDQuery3->Close();
}
//---------------------------------------------------------------------------

void escape_string( char *str)
{
	char tmp_str[31], esc_str[31];
	int i, j, k;
	strcpy(esc_str,str);  // copy into a non-pointer
	j=0;
	for (i=0; i<strlen(esc_str);i++)
	{
	  if ( esc_str[i] == '\'' || esc_str[i] == '\"' )
		{
		   tmp_str[j] = '\\'; j++;
		   tmp_str[j] = esc_str[i]; j++;
		}
	  else
		{
		   tmp_str[j] = esc_str[i]; j++;
		}
	 }
	  tmp_str[j] = '\0';
	  strcpy(str,tmp_str);
}

void __fastcall Tfrmcoaches::BaddteamClick(TObject *Sender)
{
	int i, j, lcnt, fcnt,Rnd,Age, Cnt;
	TBookmark Bookmark, Bookmark2;
	AnsiString fname, lname, FullName, aOff, aDef, Qry, aAge;
	char sql_stmt[4096], first[50], last[75];


	Randomize();

	lcnt = FDConnection1->ExecSQLScalar("select count(*) from lastnames");
	fcnt = FDConnection1->ExecSQLScalar("select count(*) from firstnames");

	//Memo1->Lines->Add(lcnt);
	FDQuery2->SQL->Text = "select surname from lastnames order by rnk";
	FDQuery3->SQL->Text = "select name from firstnames order by rnk";
	FDQuery2->Open();
	FDQuery3->Open();
	Bookmark = FDQuery2->GetBookmark();
	Bookmark2 = FDQuery3->GetBookmark();
	Cnt = StrToInt(Ecnt->Text);  // The # of Coaches to create
	for (i=0;i<Cnt;i++)
	   {
		  Age = Random(30) + 40;

		  aAge = IntToStr(Age);
		  //  This gets the first and last names
		  FDQuery2->GotoBookmark(Bookmark);
		  FDQuery3->GotoBookmark(Bookmark2);
		  Rnd=Random(fcnt);
		  for (j=0; j<Rnd; j++)
			FDQuery3->Next();
		  fname = FDQuery3->Fields->Fields[0]->AsString;
		  strcpy(first,fname.c_str());
		  escape_string(first);
		  fname = first;

		  Rnd=Random(lcnt);
		  for (j=0; j<Rnd; j++)
			FDQuery2->Next();
		  lname = FDQuery2->Fields->Fields[0]->AsString;
		  strcpy(last,lname.c_str());
		  escape_string(last);
		  lname = last;
		  FullName = fname + ' ' + lname;


		  j=Random(3);
			if (j == 0)
			  aOff = "Conservative" ;
			else if (j == 1)
			   aOff = "Balanced" ;
			   else
			   aOff = "Aggressive";
			//Memo1->Lines->Add(aOff);

           j=Random(3);
			if (j == 0)
			  aDef = "Conservative" ;
			else if (j == 1)
			   aDef = "Balanced" ;
			   else
			   aDef = "Aggressive";
			//Memo1->Lines->Add(aDef);
            Memo1->Lines->Add(FullName + ":  Off: " +aOff + ",  Def: " + aDef + ",  Age: " + aAge);

			Qry = "insert into coaches(name,offense, defense,age) \
				 values ('" + FullName + "','" + aOff + "','" + aDef + "'," + aAge + ")";

				 //Memo1->Lines->Add(Age);
			//Memo1->Lines->Add(Qry);
			FDConnection1->ExecSQL(Qry);

	   }
	FDQuery2->Close();
	FDQuery3->Close();
    Memo1->Lines->Add("Complete");
}
//---------------------------------------------------------------------------
void __fastcall Tfrmcoaches::BnextClick(TObject *Sender)
{
    FDQuery1->Next();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmcoaches::BpriorClick(TObject *Sender)
{
     FDQuery1->Prior();
}
//---------------------------------------------------------------------------

void __fastcall Tfrmcoaches::Badd1coachClick(TObject *Sender)
{
		FDQuery1->Edit();
		FDQuery1->Append();

}
//---------------------------------------------------------------------------

void __fastcall Tfrmcoaches::BpostClick(TObject *Sender)
{   String Qry;

	FDQuery1->Edit();
	FDQuery1->Post();

	if ( ByteLength(DBCteam->Text) > 0)
	  {
		 Qry = "set SQL_SAFE_UPDATES=0; update teams set coach = '" \
			 + Ename->Text + "' where name = '" + DBCteam->Text + "'";
		 FDConnection1->ExecSQL(Qry);
	  }
	//Memo1->Lines->Add(ByteLength(DBCteam->Text));


}
//---------------------------------------------------------------------------


void __fastcall Tfrmcoaches::BdeleteteamClick(TObject *Sender)
{
     FDQuery1->Edit();
	 FDQuery1->Delete();
}
//---------------------------------------------------------------------------

