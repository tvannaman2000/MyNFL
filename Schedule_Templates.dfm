object frmsched_template: Tfrmsched_template
  Left = 0
  Top = 0
  Caption = 'Schedule Templates'
  ClientHeight = 613
  ClientWidth = 852
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Lnflchallengemgr: TLabel
    Left = 531
    Top = 556
    Width = 313
    Height = 39
    Caption = 'NFL Challenge Manager'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -32
    Font.Name = 'Calibri'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object RadioGroup1: TRadioGroup
    Left = 64
    Top = 8
    Width = 169
    Height = 65
    Caption = 'Number of Teams'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      '28'
      '32')
    ParentFont = False
    TabOrder = 4
  end
  object DBGrid1: TDBGrid
    Left = 64
    Top = 96
    Width = 569
    Height = 393
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object BindNavigator1: TBindNavigator
    Left = 248
    Top = 512
    Width = 240
    Height = 25
    DataSource = BindSourceDB1
    Orientation = orHorizontal
    TabOrder = 1
  end
  object R28teams: TRadioButton
    Left = 496
    Top = 24
    Width = 113
    Height = 17
    Caption = '28 Teams'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object R32teams: TRadioButton
    Left = 631
    Top = 48
    Width = 113
    Height = 17
    Caption = '32 Teams'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object NflConnection: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    Connected = True
    LoginPrompt = False
    Left = 788
    Top = 247
  end
  object Sched_templateTable: TFDQuery
    Active = True
    Connection = NflConnection
    SQL.Strings = (
      'SELECT * FROM nfl.sched_template')
    Left = 788
    Top = 295
    object Sched_templateTablesched_type: TIntegerField
      Alignment = taCenter
      DisplayLabel = 'Sched Type'
      DisplayWidth = 11
      FieldName = 'sched_type'
      Origin = 'sched_type'
      Required = True
    end
    object Sched_templateTablev_division: TStringField
      Alignment = taCenter
      DisplayLabel = 'V Div'
      DisplayWidth = 6
      FieldName = 'v_division'
      Origin = 'v_division'
      Required = True
      Size = 3
    end
    object Sched_templateTablev_finish: TIntegerField
      Alignment = taCenter
      DisplayLabel = 'V Place'
      DisplayWidth = 8
      FieldName = 'v_finish'
      Origin = 'v_finish'
      Required = True
    end
    object Sched_templateTableh_division: TStringField
      Alignment = taCenter
      DisplayLabel = 'H Div'
      DisplayWidth = 6
      FieldName = 'h_division'
      Origin = 'h_division'
      Required = True
      Size = 3
    end
    object Sched_templateTableh_finish: TIntegerField
      Alignment = taCenter
      DisplayLabel = 'H Place'
      DisplayWidth = 8
      FieldName = 'h_finish'
      Origin = 'h_finish'
      Required = True
    end
    object Sched_templateTableweek: TIntegerField
      Alignment = taCenter
      DisplayLabel = 'Week'
      DisplayWidth = 6
      FieldName = 'week'
      Origin = '`week`'
      Required = True
    end
    object Sched_templateTableno_teams: TIntegerField
      Alignment = taCenter
      AutoGenerateValue = arDefault
      DisplayLabel = '# Teams'
      DisplayWidth = 8
      FieldName = 'no_teams'
      Origin = 'no_teams'
    end
    object Sched_templateTableno_divisions: TIntegerField
      Alignment = taCenter
      AutoGenerateValue = arDefault
      DisplayLabel = '# Divs'
      DisplayWidth = 7
      FieldName = 'no_divisions'
      Origin = 'no_divisions'
    end
    object Sched_templateTableno_games: TIntegerField
      Alignment = taCenter
      AutoGenerateValue = arDefault
      DisplayLabel = '# Games'
      DisplayWidth = 10
      FieldName = 'no_games'
      Origin = 'no_games'
    end
  end
  object FDQuery1: TFDQuery
    Connection = NflConnection
    Left = 792
    Top = 192
  end
  object DataSource1: TDataSource
    DataSet = Sched_templateTable
    Left = 776
    Top = 360
  end
  object BindSourceDB1: TBindSourceDB
    DataSource = DataSource1
    ScopeMappings = <>
    Left = 784
    Top = 136
  end
end
