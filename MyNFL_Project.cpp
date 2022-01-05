//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("Owner.cpp", frmowner);
USEFORM("OffSeason.cpp", frmoffseason);
USEFORM("Weekly.cpp", frmweekly);
USEFORM("Teams.cpp", frmteams);
USEFORM("Statistics.cpp", frmstatistics);
USEFORM("Setup.cpp", frmsetup);
USEFORM("DM1.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("DAC_test.cpp", frmdactest);
USEFORM("Commish.cpp", frmcommish);
USEFORM("Coaches.cpp", frmcoaches);
USEFORM("MyNFL.cpp", Form1);
USEFORM("Initialize_League.cpp", frminitleague);
USEFORM("EditTeam.cpp", frmeditteam);
USEFORM("EditDivisions.cpp", frmdivisions);
USEFORM("Schedule_Templates.cpp", frmsched_template);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TDataModule1), &DataModule1);
		Application->CreateForm(__classid(Tfrmsetup), &frmsetup);
		Application->CreateForm(__classid(Tfrmoffseason), &frmoffseason);
		Application->CreateForm(__classid(Tfrmteams), &frmteams);
		Application->CreateForm(__classid(Tfrmcommish), &frmcommish);
		Application->CreateForm(__classid(Tfrmweekly), &frmweekly);
		Application->CreateForm(__classid(Tfrmstatistics), &frmstatistics);
		Application->CreateForm(__classid(Tfrminitleague), &frminitleague);
		Application->CreateForm(__classid(Tfrmdactest), &frmdactest);
		Application->CreateForm(__classid(Tfrmowner), &frmowner);
		Application->CreateForm(__classid(Tfrmeditteam), &frmeditteam);
		Application->CreateForm(__classid(Tfrmdivisions), &frmdivisions);
		Application->CreateForm(__classid(Tfrmcoaches), &frmcoaches);
		Application->CreateForm(__classid(Tfrmsched_template), &frmsched_template);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
