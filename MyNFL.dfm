object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'NFL Challenge Manager'
  ClientHeight = 587
  ClientWidth = 802
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
    Left = 472
    Top = 540
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
  object Lmainmenu: TLabel
    Left = 336
    Top = 16
    Width = 155
    Height = 39
    Caption = 'Main Menu'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label1: TLabel
    Left = 456
    Top = 88
    Width = 73
    Height = 25
    Caption = 'Season:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 624
    Top = 88
    Width = 58
    Height = 25
    Caption = 'Week:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Eseason: TEdit
    Left = 535
    Top = 85
    Width = 66
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
    Text = '1988'
  end
  object Eweek: TEdit
    Left = 688
    Top = 85
    Width = 41
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 1
    Text = '5'
  end
  object DBGrid1: TDBGrid
    Left = 456
    Top = 124
    Width = 321
    Height = 410
    DataSource = DataModule1.DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgConfirmDelete, dgCancelOnExit, dgMultiSelect, dgTitleClick, dgTitleHotTrack]
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Bweekly: TButton
    Left = 48
    Top = 106
    Width = 137
    Height = 53
    Caption = 'Weekly'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = BweeklyClick
  end
  object Bschedule: TButton
    Left = 48
    Top = 260
    Width = 137
    Height = 53
    Caption = 'Commissioner/League'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    WordWrap = True
    OnClick = BscheduleClick
  end
  object Bowner: TButton
    Left = 48
    Top = 173
    Width = 137
    Height = 69
    Caption = 'Owner / GM'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    WordWrap = True
    OnClick = BownerClick
  end
  object Bstats: TButton
    Left = 48
    Top = 340
    Width = 105
    Height = 33
    Caption = 'Statistics'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = BstatsClick
  end
  object Boffseason: TButton
    Left = 48
    Top = 411
    Width = 105
    Height = 66
    Caption = 'Off Season'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    WordWrap = True
    OnClick = BoffseasonClick
  end
  object Bsetup: TButton
    Left = 48
    Top = 501
    Width = 105
    Height = 33
    Caption = 'Setup'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 8
    OnClick = BsetupClick
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = DataModule1.NflTable
    ScopeMappings = <>
    Left = 128
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 20
    Top = 5
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'season'
      Control = Eseason
      Track = True
    end
    object LinkControlToField2: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB2
      FieldName = 'week'
      Control = Eweek
      Track = True
    end
  end
  object BindSourceDB2: TBindSourceDB
    DataSet = DataModule1.Qweek
    ScopeMappings = <>
    Left = 72
  end
end
