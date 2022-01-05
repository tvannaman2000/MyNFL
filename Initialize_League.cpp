//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Initialize_League.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrminitleague *frminitleague;
//---------------------------------------------------------------------------
__fastcall Tfrminitleague::Tfrminitleague(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall Tfrminitleague::BinitleagueClick(TObject *Sender)
{
	Application->NormalizeTopMosts();
	if (Application->MessageBox(L"Caution, This will delete all data!",L"Clear Data",MB_OKCANCEL) == IDOK)
	   {
		 FDConnection1->ExecSQL("truncate table nfl.draft_players");
		 FDConnection1->ExecSQL("truncate table nfl.coaches");
		 FDConnection1->ExecSQL("truncate table nfl.interceptions");
		 FDConnection1->ExecSQL("truncate table nfl.kickers");
		 FDConnection1->ExecSQL("truncate table nfl.kick_returns");
		 FDConnection1->ExecSQL("truncate table nfl.passing");
		 FDConnection1->ExecSQL("truncate table nfl.player_history");
		 FDConnection1->ExecSQL("truncate table nfl.playoffs");
		 FDConnection1->ExecSQL("truncate table nfl.punt_returns");
		 FDConnection1->ExecSQL("truncate table nfl.results");
		 FDConnection1->ExecSQL("truncate table nfl.results_history");
		 FDConnection1->ExecSQL("truncate table nfl.receiving");
		 FDConnection1->ExecSQL("truncate table nfl.rankings");
		 FDConnection1->ExecSQL("truncate table nfl.rushing");
		 FDConnection1->ExecSQL("truncate table nfl.sacks");
		 FDConnection1->ExecSQL("truncate table nfl.schedule");
		 FDConnection1->ExecSQL("truncate table nfl.sched_template");
		 FDConnection1->ExecSQL("truncate table nfl.standings");
		 FDConnection1->ExecSQL("truncate table nfl.standings_history");
		 FDConnection1->ExecSQL("truncate table nfl.starters");
		 FDConnection1->ExecSQL("truncate table nfl.team_stats");
		 FDConnection1->ExecSQL("truncate table nfl.tmp_standings");
		 FDConnection1->ExecSQL("truncate table nfl.schedule");
		 FDConnection1->ExecSQL("truncate table nfl.teams");
		 FDConnection1->ExecSQL("truncate table nfl.active_players");
		 FDConnection1->ExecSQL("truncate table nfl.divisions");
		 FDConnection1->ExecSQL("truncate table nfl.nfl");
	   }
	Application->RestoreTopMosts();

}
//---------------------------------------------------------------------------

void __fastcall Tfrminitleague::BcreatetablesClick(TObject *Sender)
{
	Memo1->Lines->Add("Creating coaches table");
	FDConnection1->ExecSQL("create table if not exists nfl.coaches\
							 ( coach_id int not null auto_increment primary key,\
							   name varchar(30) not null,\
							   isactive char(1) default 'Y', \
							   team varchar(35), \
							   wins int default 0,\
							   losses int default 0, \
							   winpct decimal(5,1) default 0.0,\
							   offense varchar(15),\
							   defense varchar(15), \
							   age int default 40 \
							   ) ENGINE=INNODB");
	FDConnection1->ExecSQL("DELIMITER $$  \
							create trigger pct_upd before update on coaches   \
							for each row   \
							  begin   \
								  if new.wins > 0 then \
									set new.winpct = (new.wins / (new.wins + new.losses)) * 100;  \
								  end if;  \
							  end; \
							  $$");

	FDConnection1->ExecSQL("DELIMITER $$ \
	                        create trigger pct_ins before insert on coaches \
							for each row  \
							  begin   \
								 if new.wins > 0 then   \
								   set new.winpct = (new.wins / (new.wins + new.losses)) * 100;  \
								 end if; \
							  end; \
                              $$") ;
	Sleep(5);

	Memo1->Lines->Add("Creating nfl table");
	FDConnection1->ExecSQL(" CREATE TABLE if not exists `nfl` (    \
							 `season` int NOT NULL,      \
							 `sched_type` int NOT NULL,  \
							 `complete` char(1) DEFAULT NULL,  \
							 `teams` int DEFAULT NULL,     \
							 `weeks` int DEFAULT NULL,    \
							  PRIMARY KEY (`season`)    \
							 ) ENGINE=InnoDB  ");


    Memo1->Lines->Add("Creating teams table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `teams` (    \
							`team_id` int NOT NULL AUTO_INCREMENT,  \
							`name` varchar(20) NOT NULL,        \
							 `city` varchar(20) NOT NULL,         \
							 `offense` varchar(15) DEFAULT NULL,  \
							 `defense` varchar(15) DEFAULT NULL,  \
							 `division` varchar(12) DEFAULT NULL,  \
							 `last_finish` int DEFAULT NULL,     \
							  `div_code` varchar(2) DEFAULT NULL, \
							  coach varchar(45) ,\
							 PRIMARY KEY (`team_id`)  \
							) ENGINE=InnoDB ");


	Memo1->Lines->Add("Creating active_players table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists active_players (  \
							player_id int NOT NULL AUTO_INCREMENT,  \
							jersey_no int NOT NULL,        \
							name varchar(40) NOT NULL,    \
							 posi varchar(2) DEFAULT NULL,   \
							ht varchar(6) NOT NULL,      \
							wt int NOT NULL,      \
							yrs int NOT NULL,   \
							spd decimal(3,1) DEFAULT NULL,\
							 rush int NOT NULL,    \
							rcv int NOT NULL,    \
							pass int NOT NULL,   \
							kick int NOT NULL,   \
							starter varchar(4) DEFAULT NULL, \
							 team_id int NOT NULL,  \
							team varchar(20) DEFAULT NULL,  \
							blk int NOT NULL,  \
							KR char(1) DEFAULT NULL, \
							PR char(1) DEFAULT NULL,     \
							 active char(1) DEFAULT 'Y', \
							PRIMARY KEY (player_id),   \
							KEY FK_Team_idx (team_id), \
							CONSTRAINT FK_Team FOREIGN KEY (`team_id`) REFERENCES `teams` (`team_id`)\
						) ENGINE=InnoDB");



	Memo1->Lines->Add("Creating divisions table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `divisions` (   \
							 `div_code` char(2) NOT NULL, \
							 `div_name` varchar(25) DEFAULT NULL, \
							  PRIMARY KEY (`div_code`)   \
							) ENGINE=InnoDB  ");


	Memo1->Lines->Add("Creating draft_players table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists`draft_players` (  \
							`player_id` int NOT NULL AUTO_INCREMENT, \
							 `name` varchar(40) NOT NULL,       \
							 `posi` varchar(2) DEFAULT NULL,  \
							 `ht` varchar(6) NOT NULL,      \
							 `wt` int NOT NULL,    \
							 `yrs` int NOT NULL,   \
							 `spd` decimal(3,1) DEFAULT NULL,  \
							 `rush` int NOT NULL,   \
							 `rcv` int NOT NULL,  \
							 `pass` int NOT NULL, \
							  `kick` int NOT NULL,  \
							 `blk` int NOT NULL,   \
							  PRIMARY KEY (`player_id`)  \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating firstnames table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `firstnames` (   \
							`name` varchar(20) NOT NULL,     \
							 PRIMARY KEY (`name`)    \
							) ENGINE=InnoDB");


	Memo1->Lines->Add("Creating interceptions table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `interceptions` (   \
							`season` int NOT NULL,   \
							 `week` int NOT NULL,    \
							  `player_id` int NOT NULL, \
							 `team_id` int NOT NULL,  \
							  `cnt` int DEFAULT NULL, \
							 `yards` int DEFAULT NULL, \
							 `tds` int DEFAULT NULL,   \
							 `longest` int DEFAULT NULL, \
							 `average` decimal(4,1) DEFAULT NULL, \
							 `opp_team_id` int NOT NULL  \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating kickers table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists`kickers` (  \
							`season` int NOT NULL,               \
							 `week` int NOT NULL,          \
							 `player_id` int NOT NULL,    \
							 `team_id` int NOT NULL,     \
							 `ep` int DEFAULT NULL,     \
							 `epatt` int DEFAULT NULL,  \
							 `fg` int DEFAULT NULL,     \
							 `fgatt` int DEFAULT NULL,    \
							 `lg` int DEFAULT NULL,      \
							 `opp_team_id` int DEFAULT NULL  \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating kick_returns table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `kick_returns` (    \
							 `season` int NOT NULL,       \
							 `week` int NOT NULL,    \
							 `player_id` int NOT NULL, \
							 `team_id` int NOT NULL,   \
							 `cnt` int DEFAULT NULL,   \
							 `yards` int DEFAULT NULL, \
							 `avg` decimal(5,1) DEFAULT NULL, \
							 `lg` int DEFAULT NULL,     \
							 `tds` int DEFAULT NULL,   \
							 `opp_team_id` int DEFAULT NULL \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating lastnames table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `lastnames` (  \
							`surname` varchar(60) NOT NULL,  \
							 `approx_cnt` int NOT NULL,     \
							 `freq` decimal(6,3) NOT NULL,  \
							  `rank` int DEFAULT NULL,    \
							 PRIMARY KEY (`surname`)   \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating passing table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `passing` (  \
							 `season` int NOT NULL,       \
							 `week` int DEFAULT NULL,      \
							 `player_id` int DEFAULT NULL,   \
							 `team_id` int DEFAULT NULL,   \
							 `attempts` int DEFAULT NULL,   \
							 `complete` int DEFAULT NULL,   \
							 `yards` int DEFAULT NULL,      \
							 `tds` int DEFAULT NULL,       \
							 `intercepts` int DEFAULT NULL,  \
							 `lg` int DEFAULT NULL,        \
							 `opp_team_id` int DEFAULT NULL \
							) ENGINE=InnoDB ");

	Memo1->Lines->Add("Creating player_history table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `player_history` (    \
							 `player_id` int NOT NULL DEFAULT '0',    \
							 `jersey_no` int NOT NULL,            \
							  `name` varchar(40) NOT NULL,      \
							 `posi` varchar(2) DEFAULT NULL,    \
							 `ht` varchar(6) NOT NULL,         \
							 `wt` int NOT NULL,                \
							 `yrs` int NOT NULL,                \
							  `spd` decimal(3,1) DEFAULT NULL,  \
							 `rush` int NOT NULL,                \
							 `rcv` int NOT NULL,                 \
							  `pass` int NOT NULL,                \
							 `kick` int NOT NULL,                \
							 `starter` varchar(4) DEFAULT NULL,    \
							 `team_id` int NOT NULL,              \
							  `team` varchar(20) DEFAULT NULL,    \
							 `blk` int NOT NULL,                   \
							 `KR` char(1) DEFAULT NULL,            \
							 `PR` char(1) DEFAULT NULL,           \
							 `active` char(1) DEFAULT 'Y',         \
							 `year` int DEFAULT NULL               \
							) ENGINE=InnoDB ");

	Memo1->Lines->Add("Creating playoffs table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `playoffs` (  \
							 `div_name` varchar(15) NOT NULL,    \
							 `team` varchar(20) NOT NULL,     \
							 `wins` int NOT NULL,            \
							 `div_wins` int NOT NULL,        \
							 `conf_wins` int NOT NULL,      \
							  `div_winner` char(1) DEFAULT NULL,   \
							 `bye` char(1) DEFAULT NULL,     \
							  `seed` int DEFAULT NULL,       \
							  `week` int DEFAULT NULL,       \
							 `season` int DEFAULT NULL       \
							) ENGINE=InnoDB");


	Memo1->Lines->Add("Creating punt_returns table");
	FDConnection1->ExecSQL( "CREATE TABLE if not exists `punt_returns` (     \
							`season` int NOT NULL,  \
							 `week` int NOT NULL,     \
							 `player_id` int NOT NULL,  \
							  `team_id` int NOT NULL,   \
							 `cnt` int DEFAULT NULL,    \
							 `yards` int DEFAULT NULL,   \
							  `avg` decimal(5,1) DEFAULT NULL,  \
							  `lg` int DEFAULT NULL,      \
							 `tds` int DEFAULT NULL,    \
							 `opp_team_id` int DEFAULT NULL   \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating rankings table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `rankings` (  \
							`year` int NOT NULL,                \
							 `team` varchar(45) NOT NULL,        \
							  `category` varchar(45) NOT NULL,   \
							 `value` int NOT NULL,             \
							 `rnk` int NOT NULL            \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating rarelastnames table");
	FDConnection1->ExecSQL( "CREATE TABLE if not exists `rarelastnames` (    \
							 `surname` varchar(40) NOT NULL,      \
							 `rank` int NOT NULL,          \
							 `cnt` int NOT NULL,        \
							 `per_100k` decimal(7,2) DEFAULT NULL, \
							 `pct_white` decimal(5,1) DEFAULT NULL,  \
							 `pct_black` decimal(5,1) DEFAULT NULL,  \
							 `pct_api` decimal(5,1) DEFAULT NULL,   \
							  `pct_aiam` decimal(5,0) DEFAULT NULL,  \
							 `pct_multi` decimal(5,1) DEFAULT NULL,   \
							 `pct_hispanic` decimal(5,1) DEFAULT NULL,  \
							 `rank_in_2000` int DEFAULT NULL,   \
							 `cnt_in_2000` int DEFAULT NULL,    \
							 `chg_since_2000` int DEFAULT NULL,   \
							 `pct_change` decimal(5,1) DEFAULT NULL,  \
							 `rank_change` int DEFAULT NULL, \
							 PRIMARY KEY (`surname`)     \
							) ENGINE=InnoDB ");

	Memo1->Lines->Add("Creating receiving table");
	FDConnection1->ExecSQL( "CREATE TABLE if not exists `receiving` (    \
							 `season` int NOT NULL,           \
							 `week` int NOT NULL,           \
							 `player_id` int NOT NULL,      \
							 `team_id` int NOT NULL,        \
							 `cnt` int DEFAULT NULL,          \
							 `yards` int DEFAULT NULL,            \
							 `average` decimal(5,1) DEFAULT NULL,    \
							 `lg` int DEFAULT NULL,           \
							 `tds` int DEFAULT NULL,          \
							 `opp_team_id` int DEFAULT NULL    \
							) ENGINE=InnoDB   ");

	Memo1->Lines->Add("Creating results table");
	FDConnection1->ExecSQL( "CREATE TABLE if not exists `results` (   \
							 `season` int NOT NULL,        \
							 `week` int NOT NULL,    \
							 `home_team` int NOT NULL,     \
							 `away_team` int NOT NULL,     \
							 `home_score` int NOT NULL,    \
							 `away_score` int NOT NULL,    \
							 `winner` int NOT NULL,      \
							  `loser` int NOT NULL,       \
							  KEY `fk_season_idx` (`season`),   \
							  KEY `fk_home_idx` (`home_team`),   \
							  KEY `fk_away_idx` (`away_team`),     \
							  CONSTRAINT `fk_away` FOREIGN KEY (`away_team`) REFERENCES `teams` (`team_id`),  \
							  CONSTRAINT `fk_home` FOREIGN KEY (`home_team`) REFERENCES `teams` (`team_id`),  \
							 CONSTRAINT `fk_season` FOREIGN KEY (`season`) REFERENCES `nfl` (`season`)     \
							) ENGINE=InnoDB ");

	Memo1->Lines->Add("Creating results_history table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `results_history` ( \
							 `season` int NOT NULL,   \
							 `week` int NOT NULL,      \
							  `home_team` int NOT NULL,  \
							 `away_team` int NOT NULL,   \
							 `home_score` int NOT NULL,  \
							  `away_score` int NOT NULL, \
							 `winner` int NOT NULL,  \
							 `loser` int NOT NULL  \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating rushing table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `rushing` (    \
							`season` int NOT NULL,  \
							`week` int NOT NULL,     \
							 `player_id` int NOT NULL,  \
							 `team_id` int NOT NULL,   \
							 `att` int DEFAULT NULL,   \
							  `yds` int DEFAULT NULL,   \
							 `avg` decimal(4,1) DEFAULT NULL, \
							 `lg` int DEFAULT NULL,        \
							  `td` int DEFAULT NULL,    \
							 `opp_team_id` int DEFAULT NULL  \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating sacks table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `sacks` (   \
							 `season` int NOT NULL,    \
							 `week` int NOT NULL,      \
							 `player_id` int NOT NULL,  \
							 `team_id` int NOT NULL,   \
							 `cnt` int DEFAULT NULL,    \
							 `opp_team_id` int DEFAULT NULL  \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating sched_template table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `sched_template` ( \
							`sched_type` int NOT NULL,               \
							 `v_division` varchar(3) NOT NULL,      \
							 `v_finish` int NOT NULL,              \
							 `h_division` varchar(3) NOT NULL,   \
							  `h_finish` int NOT NULL,         \
							 `week` int NOT NULL,    \
							  no_teams int,       \
							  no_divisions int,  \
                              no_games int   \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating schedule table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `schedule` (  \
							 `season` int NOT NULL,              \
							 `week` int NOT NULL,               \
							 `home_team` varchar(40) NOT NULL,  \
							 `away_team` varchar(40) NOT NULL,  \
							 PRIMARY KEY (`season`,`week`,`home_team`) \
							) ENGINE=InnoDB");



	Memo1->Lines->Add("Creating standings table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `standings` (    \
							`team_id` int NOT NULL,     \
							`name` varchar(20) DEFAULT NULL,   \
							 `division` varchar(30) DEFAULT NULL,   \
							 `wins` int DEFAULT NULL,         \
							 `losses` int DEFAULT NULL,     \
							`div_wins` int DEFAULT NULL,   \
							 `div_losses` int DEFAULT NULL,  \
							 `conf_wins` int DEFAULT NULL,    \
							 `conf_losses` int DEFAULT NULL,   \
							 `rnk` int DEFAULT NULL,       \
							 PRIMARY KEY (`team_id`) \
							) ENGINE=InnoDB ");


	Memo1->Lines->Add("Creating standings_history table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `standings_history` ( \
							 `team_id` int NOT NULL,                    \
							 `name` varchar(20) DEFAULT NULL,       \
							 `division` varchar(30) DEFAULT NULL,    \
							 `wins` int DEFAULT NULL,          \
							  `losses` int DEFAULT NULL,        \
							 `div_wins` int DEFAULT NULL,       \
							 `div_losses` int DEFAULT NULL,     \
							 `conf_wins` int DEFAULT NULL,      \
							 `conf_losses` int DEFAULT NULL,    \
							 `season` int DEFAULT NULL        \
							) ENGINE=InnoDB");

	Memo1->Lines->Add("Creating starters table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `starters` (  \
							 `player_id` int NOT NULL,            \
							 `team_id` int NOT NULL,         \
							 `player_num` int NOT NULL,       \
							 `starts` varchar(4) NOT NULL,       \
							 PRIMARY KEY (`player_id`,`team_id`,`starts`,`player_num`)  \
							) ENGINE=InnoDB ");

	Memo1->Lines->Add("Creating team_statas table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `team_stats` (  \
							 `season` int NOT NULL,   \
							 `week` int NOT NULL,      \
							 `team_id` int NOT NULL,    \
							 `opp_id` int NOT NULL,     \
							 `points` int NOT NULL,      \
							 `pts_q1` int NOT NULL,     \
							 `pts_q2` int NOT NULL,     \
							 `pts_q3` int NOT NULL,      \
							 `pts_q4` int NOT NULL,      \
							 `fdowns` int DEFAULT NULL,  \
							  `frushes` int DEFAULT NULL,   \
							  `fpass` int DEFAULT NULL,      \
							 `fpen` int DEFAULT NULL,         \
							 `thirdmade` int DEFAULT NULL,     \
							 `thirdtried` int DEFAULT NULL,     \
							 `tot_yards` int DEFAULT NULL,       \
							 `tot_plays` int DEFAULT NULL,        \
							 `net_rush` int DEFAULT NULL,          \
							 `rush_plays` int DEFAULT NULL,         \
							 `net_pass` int DEFAULT NULL,            \
							 `pass_atts` int DEFAULT NULL,            \
							 `completes` int DEFAULT NULL,             \
							 `intercepts` int DEFAULT NULL,             \
							  `sacks` int DEFAULT NULL,                  \
							 `sack_yds` int DEFAULT NULL,                 \
							 `punts` int DEFAULT NULL,                     \
							 `punt_avg` decimal(5,1) DEFAULT NULL,          \
							 `return_yds` int DEFAULT NULL,        \
							 `penalties` int DEFAULT NULL,          \
							 `pen_yds` int DEFAULT NULL,             \
							 `fumbles` int DEFAULT NULL,              \
							 `fumlost` int DEFAULT NULL,               \
							 `top_mins` int DEFAULT NULL,               \
							 `top_secs` int DEFAULT NULL                 \
							) ENGINE=InnoDB ");

	Memo1->Lines->Add("Creating tmp_standings table");
	FDConnection1->ExecSQL("CREATE TABLE if not exists `tmp_standings` (    \
							`name` varchar(20) DEFAULT NULL,  \
							`wins` int DEFAULT NULL,        \
							 `losses` int DEFAULT NULL,    \
							 `div_wins` int DEFAULT NULL,   \
							 `conf_wins` int DEFAULT NULL,  \
							 `team_id` int DEFAULT NULL    \
							) ENGINE=InnoDB");



}
//---------------------------------------------------------------------------

void __fastcall Tfrminitleague::BloadteamClick(TObject *Sender)
{
	TPoint pt;


	pt = frminitleague->ClientOrigin;
	frmteams->Left = pt.x + 2;
	frmteams->Top = pt.y + 5;
	frmteams->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tfrminitleague::BwriteteamClick(TObject *Sender)
{
    frmdactest->Show();
}
//---------------------------------------------------------------------------

void __fastcall Tfrminitleague::BeditdivisionsClick(TObject *Sender)
{
	TPoint pt;


	pt = frminitleague->ClientOrigin;
	frmdivisions->Left = pt.x + 2;
	frmdivisions->Top = pt.y + 5;
	frmdivisions->Show();

}
//---------------------------------------------------------------------------

void __fastcall Tfrminitleague::BcoachesClick(TObject *Sender)
{
     TPoint pt;


	pt = frminitleague->ClientOrigin;
	frmcoaches->Left = pt.x + 2;
	frmcoaches->Top = pt.y + 5;
	frmcoaches->Show();
}
//---------------------------------------------------------------------------

