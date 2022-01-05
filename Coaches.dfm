object frmcoaches: Tfrmcoaches
  Left = 0
  Top = 0
  Caption = 'Coaches'
  ClientHeight = 510
  ClientWidth = 1055
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
    Left = 734
    Top = 463
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
  object Label1: TLabel
    Left = 39
    Top = 26
    Width = 61
    Height = 25
    Caption = 'Name:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 21
    Top = 83
    Width = 79
    Height = 25
    Caption = 'Offense:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 18
    Top = 134
    Width = 82
    Height = 25
    Caption = 'Defense:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 41
    Top = 190
    Width = 59
    Height = 25
    Caption = 'Team:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 34
    Top = 238
    Width = 66
    Height = 25
    Caption = 'Active?'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 34
    Top = 289
    Width = 59
    Height = 25
    Caption = 'Wins: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 178
    Top = 287
    Width = 73
    Height = 25
    Caption = 'Losses: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 201
    Top = 238
    Width = 50
    Height = 25
    Caption = 'Age: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label9: TLabel
    Left = 585
    Top = 236
    Width = 106
    Height = 25
    Caption = '# Coaches:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Bnext: TButton
    Left = 154
    Top = 376
    Width = 97
    Height = 25
    Caption = 'Next ->'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = BnextClick
  end
  object Bprior: TButton
    Left = 34
    Top = 376
    Width = 97
    Height = 25
    Caption = '<- Previous'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = BpriorClick
  end
  object Bpost: TButton
    Left = 274
    Top = 376
    Width = 97
    Height = 25
    Caption = 'Save'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = BpostClick
  end
  object Baddteam: TButton
    Left = 645
    Top = 278
    Width = 97
    Height = 50
    Caption = 'Batch Add Coaches'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    WordWrap = True
    OnClick = BaddteamClick
  end
  object Bdeleteteam: TButton
    Left = 194
    Top = 423
    Width = 111
    Height = 25
    Caption = 'Delete Coach'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = BdeleteteamClick
  end
  object Ename: TEdit
    Left = 106
    Top = 24
    Width = 183
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    Text = 'Lonny Dupille'
  end
  object DBCoffense: TDBComboBox
    Left = 106
    Top = 80
    Width = 145
    Height = 27
    DataField = 'offense'
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      'Aggressive'
      'Balanced'
      'Conservative')
    ParentFont = False
    TabOrder = 6
  end
  object DBCdefense: TDBComboBox
    Left = 106
    Top = 136
    Width = 145
    Height = 27
    DataField = 'defense'
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      'Aggressive'
      'Balanced'
      'Conservative')
    ParentFont = False
    TabOrder = 7
  end
  object Memo1: TMemo
    Left = 376
    Top = 24
    Width = 657
    Height = 191
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 8
  end
  object DBCteam: TDBComboBox
    Left = 106
    Top = 188
    Width = 145
    Height = 27
    DataField = 'team'
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 9
  end
  object DBCactive: TDBComboBox
    Left = 106
    Top = 240
    Width = 71
    Height = 27
    DataField = 'isactive'
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      'Y'
      'N')
    ParentFont = False
    TabOrder = 10
  end
  object Badd1coach: TButton
    Left = 58
    Top = 423
    Width = 111
    Height = 25
    Caption = 'Add A Coach'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    OnClick = Badd1coachClick
  end
  object Ewins: TEdit
    Left = 99
    Top = 289
    Width = 56
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 12
    Text = '0'
  end
  object Elosses: TEdit
    Left = 257
    Top = 289
    Width = 64
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 13
    Text = '0'
  end
  object Eage: TEdit
    Left = 248
    Top = 240
    Width = 41
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 14
    Text = '40'
  end
  object NavigatorBindSourceDB1: TBindNavigator
    Left = 432
    Top = 392
    Width = 240
    Height = 25
    DataSource = BindSourceDB1
    Orientation = orHorizontal
    TabOrder = 15
  end
  object Ecnt: TEdit
    Left = 712
    Top = 238
    Width = 30
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    NumbersOnly = True
    ParentFont = False
    TabOrder = 16
    Text = '30'
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    Connected = True
    LoginPrompt = False
    Left = 56
    Top = 512
  end
  object FDQuery1: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'select * from coaches')
    Left = 192
    Top = 544
    object FDQuery1coach_id: TFDAutoIncField
      FieldName = 'coach_id'
      Origin = 'coach_id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object FDQuery1name: TStringField
      FieldName = 'name'
      Origin = '`name`'
      Required = True
      Size = 30
    end
    object FDQuery1isactive: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'isactive'
      Origin = 'isactive'
      FixedChar = True
      Size = 1
    end
    object FDQuery1team: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'team'
      Origin = 'team'
      Size = 35
    end
    object FDQuery1wins: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'wins'
      Origin = 'wins'
    end
    object FDQuery1losses: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'losses'
      Origin = 'losses'
    end
    object FDQuery1winpct: TBCDField
      AutoGenerateValue = arDefault
      FieldName = 'winpct'
      Origin = 'winpct'
      Visible = False
      Precision = 5
      Size = 1
    end
    object FDQuery1offense: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'offense'
      Origin = 'offense'
      Size = 15
    end
    object FDQuery1defense: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'defense'
      Origin = 'defense'
      Size = 15
    end
    object FDQuery1age: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'age'
      Origin = 'age'
    end
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = FDQuery1
    ScopeMappings = <>
    Left = 144
    Top = 504
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 76
    Top = 509
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'name'
      Control = Ename
      Track = True
    end
    object LinkPropertyToFieldText: TLinkPropertyToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'offense'
      Component = DBCoffense
      ComponentProperty = 'Text'
    end
    object LinkPropertyToFieldText2: TLinkPropertyToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'defense'
      Component = DBCdefense
      ComponentProperty = 'Text'
    end
    object LinkPropertyToFieldText3: TLinkPropertyToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'team'
      Component = DBCteam
      ComponentProperty = 'Text'
    end
    object LinkPropertyToFieldText4: TLinkPropertyToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'isactive'
      Component = DBCactive
      ComponentProperty = 'Text'
    end
    object LinkControlToField2: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'wins'
      Control = Ewins
      Track = True
    end
    object LinkControlToField3: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'losses'
      Control = Elosses
      Track = True
    end
    object LinkControlToField4: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'age'
      Control = Eage
      Track = True
    end
  end
  object FDQuery2: TFDQuery
    Connection = FDConnection1
    Left = 376
    Top = 552
  end
  object FDQuery3: TFDQuery
    Connection = FDConnection1
    Left = 248
    Top = 528
  end
  object FDQuery4: TFDQuery
    Connection = FDConnection1
    Left = 312
    Top = 536
  end
  object DataSource1: TDataSource
    DataSet = FDQuery1
    Left = 120
    Top = 544
  end
end
