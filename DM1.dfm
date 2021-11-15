object DataModule1: TDataModule1
  OldCreateOrder = False
  Height = 454
  Width = 674
  object NflConnection: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    Connected = True
    LoginPrompt = False
    Left = 531
    Top = 59
  end
  object NflTable: TFDQuery
    Active = True
    Connection = NflConnection
    SQL.Strings = (
      'SELECT * FROM nfl.nfl where complete = '#39'N'#39' '
      'order by season desc')
    Left = 531
    Top = 107
    object NflTableseason: TIntegerField
      FieldName = 'season'
      Origin = 'season'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
    end
    object NflTablesched_type: TIntegerField
      FieldName = 'sched_type'
      Origin = 'sched_type'
      Required = True
    end
    object NflTablecomplete: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'complete'
      Origin = 'complete'
      FixedChar = True
      Size = 1
    end
    object NflTableteams: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'teams'
      Origin = 'teams'
    end
    object NflTableweeks: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'weeks'
      Origin = 'weeks'
    end
  end
  object DataSource1: TDataSource
    DataSet = StandingsTable
    Left = 416
    Top = 256
  end
  object Qweek: TFDQuery
    Active = True
    Connection = NflConnection
    SQL.Strings = (
      'SELECT max(wins+losses) as week FROM nfl.standings')
    Left = 592
    Top = 225
    object Qweekweek: TLargeintField
      AutoGenerateValue = arDefault
      FieldName = 'week'
      Origin = '`week`'
      ProviderFlags = []
      ReadOnly = True
    end
  end
  object StandingsTable: TFDQuery
    Active = True
    Connection = NflConnection
    SQL.Strings = (
      'SELECT * FROM nfl.standings'
      'order by division, rnk ')
    Left = 619
    Top = 300
    object StandingsTablename: TStringField
      AutoGenerateValue = arDefault
      DisplayWidth = 12
      FieldName = 'name'
      Origin = '`name`'
    end
    object StandingsTabledivision: TStringField
      AutoGenerateValue = arDefault
      DisplayWidth = 16
      FieldName = 'division'
      Origin = 'division'
      Size = 30
    end
    object StandingsTablewins: TIntegerField
      AutoGenerateValue = arDefault
      DisplayWidth = 10
      FieldName = 'wins'
      Origin = 'wins'
    end
    object StandingsTablelosses: TIntegerField
      AutoGenerateValue = arDefault
      DisplayWidth = 10
      FieldName = 'losses'
      Origin = 'losses'
    end
  end
end
