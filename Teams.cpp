//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Teams.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmteams *frmteams;
//---------------------------------------------------------------------------
__fastcall Tfrmteams::Tfrmteams(TComponent* Owner)
	: TForm(Owner)
{
}

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

//---------------------------------------------------------------------------
void __fastcall Tfrmteams::Button1Click(TObject *Sender)
{
	FILE *fp, *fil;
	char iline[81], teamname[41],team[51],filedir[150], sql_stmt[1024];
	char roster_file[256], FilePath[200], Ros_File[55],Mem_Output[81];
	char InBuf[81], Name[31];
	int team_id,x, Num_Players,i,j,k,Cnt, player_id;
	AnsiString FileName, FileDir,ateamid;
	char Jersey_No[3], Posi[3], Height[8], Weight[4], Ht2[7], Years[3], Run[3];
    char Speed[4], Rcv[3], Blk[3], Pass[3], Kick[3], Starts[9], T_Starts[9], t_num[3];

	int count;

    OpenDialog1->Filter = "NFL Files (*.NFL)|(*.nfl)";
	if (OpenDialog1->Execute())
	 {
		if (FileExists(OpenDialog1->FileName))
		  {
			//fil = fopen(OpenDialog1->FileName,"r");


			//teamname=ExtractFileName(OpenDialog1->FileName);
			// strcpy(teamname,ExtractFileName(OpenDialog1->FileName));
			FileName = ExtractFileName(OpenDialog1->FileName);
			FileDir = ExtractFilePath(OpenDialog1->FileName);
			strcpy(Ros_File,FileName.c_str());
			strcpy(FilePath,FileDir.c_str());
			x = strlen(Ros_File) - 4;    // remove the .nfl
			strncpy(team,Ros_File,x);
			team[x] = '\0';



			sprintf(sql_stmt,"select team_id from nfl.teams \
						   where upper(name) = upper('%s')",team);

			team_id = FDConnection1->ExecSQLScalar(sql_stmt);  // lookup PK

			sprintf(sql_stmt,"select count(*) from nfl.active_players \
						   where team_id = %d",team_id);

			Cnt = FDConnection1->ExecSQLScalar(sql_stmt);

			if ( Cnt > 0 )
			  {
				//sprintf(Mem_Output, "Duplicate Alert!!  Players exist for this team!");
				//Memo1->Lines->Add(Mem_Output);
				throw(Exception("Duplicate Alert!!  Players exist for this team!t"));
              }


			sprintf(roster_file,"%s%s",FilePath,Ros_File);

			sprintf(Mem_Output,"Team ID: %i",team_id); // build output string
			//Memo1->Lines->Add(Mem_Output);

			fil = fopen(roster_file,"r");  // Open Roster file for reading
			fgets(InBuf,sizeof(InBuf),fil);
			//Memo1->Lines->Add(InBuf);
			fgets(InBuf,sizeof(InBuf),fil);
			fgets(InBuf,sizeof(InBuf),fil);  // Read & throwaway first 3 lines

			for (i=0;i<49;i++)
			{  // Clear out the following variables
			   memset(Jersey_No,0,sizeof(Jersey_No));
			   memset(Posi,0,sizeof(Posi));
			   memset(Height,0,sizeof(Height));
			   memset(Weight,0,sizeof(Weight));
			   memset(Years,0,sizeof(Years));
			   memset(Speed,0,sizeof(Speed));
			   memset(Run,0,sizeof(Run));
			   memset(Rcv,0,sizeof(Rcv));
			   memset(Blk,0,sizeof(Blk));
			   memset(Pass,0,sizeof(Pass));
			   memset(Kick,0,sizeof(Kick));

			   fgets(InBuf,sizeof(InBuf),fil);   // Read player
			   InBuf[strlen(InBuf)-1] = '\0';    // Add NULL to end of string
				Memo1->Lines->Add(InBuf);
			   strncpy(Jersey_No,&InBuf[3],2);   Jersey_No[2] = '\0';
			   //Memo1->Lines->Add(Jersey_No);
			   strncpy(Posi,&InBuf[7],2);   Posi[2] = '\0';
			   //Memo1->Lines->Add(Posi);

			   strncpy(Height,&InBuf[12],5);  Height[7] = '\0';
			   escape_string(Height);



			   //Memo1->Lines->Add(Height);
			   strncpy(Weight,&InBuf[19],3);   Weight[3] = '\0';
			   strncpy(Years,&InBuf[24],2);   Years[2] = '\0';
				//Memo1->Lines->Add(Years);
			   strncpy(Speed,&InBuf[28],3);   Speed[3] = '\0';
			   strncpy(Run,&InBuf[33],2);   Run[2] = '\0';
			   strncpy(Rcv,&InBuf[38],2);   Rcv[2] = '\0';
			   strncpy(Blk,&InBuf[43],2);   Blk[2] = '\0';
			   strncpy(Pass,&InBuf[48],2);   Pass[2] = '\0';
			   strncpy(Kick,&InBuf[53],2);   Kick[2] = '\0';
			   strcpy(Name,&InBuf[58]);
			   escape_string(Name);
			   //Memo1->Lines->Add(Name);

			   sprintf(sql_stmt,"insert into active_players(yrs,team_id,jersey_no,name,posi,ht,wt,spd,rush,rcv,blk,pass,kick,team) \
					   values (%s,%d,%s,'%s','%s','%s',%s,%s,%s,%s,%s,%s,%s,'%s');\n",   \
						   Years,team_id,Jersey_No,Name,Posi,Height,Weight,Speed,Run,Rcv,Blk,Pass,Kick,team);
			   //Memo1->Lines->Add(sql_stmt);
				FDConnection1->ExecSQL(sql_stmt);
			}   // for i<49

				 // Players are loaded, time to do starters
		   fgets(InBuf,sizeof(InBuf),fil);
		   fgets(InBuf,sizeof(InBuf),fil);
		   for (i=0;i<32;i++)
		   {
				fgets(InBuf,sizeof(InBuf),fil);
				InBuf[strlen(InBuf)-1] = '\0';

				strncpy(Starts,&InBuf[0],4);
				Starts[4] = '\0';

				strncpy(t_num,&InBuf[6],2);
				t_num[2] = '\0';

				memset(sql_stmt,0,sizeof(sql_stmt));
				sprintf(sql_stmt,"select player_id from active_players where jersey_no = %s and team_id = '%d'",t_num,team_id);
				player_id = FDConnection1->ExecSQLScalar(sql_stmt);  // lookup PK

				sprintf(sql_stmt,"insert into starters (player_id, team_id, player_num, starts) values \
				   (%d, %d, '%s', '%s')", player_id, team_id, t_num,Starts);

				FDConnection1->ExecSQL(sql_stmt);
           }
			fclose(fil);
		  }
		else
		   throw(Exception("File Does Not Exit"));
     }
}
//---------------------------------------------------------------------------

void __fastcall Tfrmteams::BwriteteamClick(TObject *Sender)
{
	 AnsiString aFileName, aFileDir, aName, aCity, aOffense, aDefense,aTeamID;
	 AnsiString aNum, aPos, aHt, aWt, aYrs, aSpd, aRun, aRcv, aBlk, aPass, aKick;
	 AnsiString aPlayer, aStarts;

	 char Num[3], Posi[3], Ht[7], Wt[4], Yrs[3], Spd[4], Run[3], Rcv[3];
	 char Blk[3], Pass[3], Kick[3], Player[30], Starts[5];
	 char Ros_File[51], FilePath[256], sql_stmt[2048], Team[31];
	 char City[31], Offense[30], Defense[30], Team_ID[4];
	 FILE *fil, *fp;
	 int NflYear,x;


		 // Get current year for 1st line of Roster file
	 NflYear = -1;
	 NflYear = FDConnection1->ExecSQLScalar("select max(season) from nfl.nfl" );
	 if ( NflYear  == -1 )
		   throw(Exception("NFL table empty!"));


	 SaveDialog1->Filter = "NFL Files (*.NFL)|(*.nfl)|Any File (*.*)|*.*";
	 if (SaveDialog1->Execute())
		{
			if (FileExists(SaveDialog1->FileName))
			   if (Application->MessageBox(L"File Exists, continue?",L"Save As",MB_YESNO)== IDNO)
				 throw(Exception("File exists!"));
		}
	 aFileName = ExtractFileName(SaveDialog1->FileName);
	 aFileDir = ExtractFilePath(SaveDialog1->FileName);

	 strcpy(Ros_File,aFileName.c_str()); // copy filename to char
	 strcpy(FilePath,aFileDir.c_str());  // copy to char for fopen

	 x = strlen(Ros_File) - 4;    // remove the .nfl
	 strncpy(Team,Ros_File,x);
	 Team[x] = '\0';

	 strcat(FilePath,Ros_File);      // create full path filename

	// Lookup all the team info needed for roster file
	sprintf(sql_stmt,"select team_id, name, city, offense, defense from teams where \
					  upper(name) = upper('%s')",Team);
	FDQuery1->SQL->Text = sql_stmt;
	FDQuery1->Open();
	while (not FDQuery1->Eof)
	  {
		  aTeamID = FDQuery1->Fields->Fields[0]->AsString;
		  strcpy(Team_ID,aTeamID.c_str());

		  aName = FDQuery1->Fields->Fields[1]->AsString;
		  strcpy(Team,aName.c_str());

		  aCity = FDQuery1->Fields->Fields[2]->AsString;
		  strcpy(City,aCity.c_str());

		  aOffense = FDQuery1->Fields->Fields[3]->AsString;
		  strcpy(Offense,aOffense.c_str());

		  aDefense = FDQuery1->Fields->Fields[4]->AsString;
		  strcpy(Defense,aDefense.c_str());
		  FDQuery1->Next();
	  }
	FDQuery1->Close();

	Memo1->Lines->Add(FilePath);
	fil = fopen(FilePath,"w");
	fprintf(fil,"                         %4d %s %s\n",NflYear,City,Team);
	fprintf(fil,"  No.  Pos   Ht.   Wt. Yrs. Spd  Run  Rcv  Blk  Pass Kick    Players: 47\n");
	fprintf(fil,"-----------------------------------------------------------------------------\n");


	sprintf(sql_stmt,"select jersey_no, name, posi, ht, wt, yrs, format(spd,1), rush, rcv, pass, kick, blk  from active_players where team_id = %s and active = 'Y'",Team_ID);

	FDQuery1->SQL->Text = sql_stmt;
	FDQuery1->Open();

	while (not FDQuery1->Eof)
	  {
		  aNum =   FDQuery1->Fields->Fields[0]->AsString;
		  strcpy(Num,aNum.c_str());
		  aPlayer = FDQuery1->Fields->Fields[1]->AsString;
		  strcpy(Player,aPlayer.c_str());
		  aPos = FDQuery1->Fields->Fields[2]->AsString;
		  strcpy(Posi,aPos.c_str());
		  aHt = FDQuery1->Fields->Fields[3]->AsString;
		  strcpy(Ht,aHt.c_str());
		  aWt = FDQuery1->Fields->Fields[4]->AsString;
		  strcpy(Wt,aWt.c_str());
		  aYrs =   FDQuery1->Fields->Fields[5]->AsString;
		  strcpy(Yrs,aYrs.c_str());
		  aSpd = FDQuery1->Fields->Fields[6]->AsString;
		  strcpy(Spd,aSpd.c_str());
		  Memo1->Lines->Add(aSpd);
		  aRun = FDQuery1->Fields->Fields[7]->AsString;
		  strcpy(Run,aRun.c_str());
		  aRcv =   FDQuery1->Fields->Fields[8]->AsString;
		  strcpy(Rcv,aRcv.c_str());
		  aPass =  FDQuery1->Fields->Fields[9]->AsString;
		  strcpy(Pass,aPass.c_str());
		  aKick =  FDQuery1->Fields->Fields[10]->AsString;
		  strcpy(Kick,aKick.c_str());
          aBlk =   FDQuery1->Fields->Fields[11]->AsString;
		  strcpy(Blk,aBlk.c_str());

		  Memo1->Lines->Add(Spd);
		  fprintf(fil,"   %2s  %2s   %5s  %s  %2s  %3s  %s   %s   %s   %s   %s   %s\n",Num,Posi,Ht,Wt,Yrs,Spd,Run,Rcv,Blk,Pass,Kick,Player);
		  FDQuery1->Next();
	  }
	FDQuery1->Close();

    fprintf(fil,"\n");
	fprintf(fil,"STARTERS\n");

	sprintf(sql_stmt,"select player_num, starts from starters where team_id = %s",Team_ID);
	FDQuery1->SQL->Text = sql_stmt;
	FDQuery1->Open();

	while (not FDQuery1->Eof)
	  {
		 aNum =   FDQuery1->Fields->Fields[0]->AsString;
		 strcpy(Num,aNum.c_str());
		 aStarts =   FDQuery1->Fields->Fields[1]->AsString;
		 strcpy(Starts,aStarts.c_str());
		 fprintf(fil,"%4s  %s\n",Starts,Num);
		 FDQuery1->Next();
       }
	fprintf(fil,"Offense:\n");
	fprintf(fil,"%s\n",Offense);
	fprintf(fil,"Defense:\n");
	fprintf(fil,"%s\n",Defense);
	fclose(fil);
}
//---------------------------------------------------------------------------


void __fastcall Tfrmteams::BeditteamClick(TObject *Sender)
{
	TPoint pt;


	pt = Form1->ClientOrigin;
	frmeditteam->Left = pt.x + 2;
	frmeditteam->Top = pt.y + 5;
	frmeditteam->Show();
}
//---------------------------------------------------------------------------

