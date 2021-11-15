object frmeditteam: Tfrmeditteam
  Left = 0
  Top = 0
  Caption = 'Modify / Create Team'
  ClientHeight = 417
  ClientWidth = 852
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 19
  object Lnflchallengemgr: TLabel
    Left = 531
    Top = 364
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
  object Lname: TLabel
    Left = 56
    Top = 34
    Width = 47
    Height = 19
    Caption = 'Name:'
  end
  object Label1: TLabel
    Left = 72
    Top = 84
    Width = 33
    Height = 19
    Caption = 'City:'
  end
  object Label2: TLabel
    Left = 45
    Top = 139
    Width = 60
    Height = 19
    Caption = 'Offense:'
  end
  object Label3: TLabel
    Left = 45
    Top = 195
    Width = 62
    Height = 19
    Caption = 'Defense:'
  end
  object Label4: TLabel
    Left = 366
    Top = 34
    Width = 67
    Height = 19
    Caption = 'Division: '
  end
  object Bfind: TButton
    Left = 56
    Top = 264
    Width = 97
    Height = 25
    Caption = 'Find'
    TabOrder = 0
    OnClick = BfindClick
  end
  object Bnext: TButton
    Left = 336
    Top = 264
    Width = 97
    Height = 25
    Caption = 'Next ->'
    TabOrder = 1
    OnClick = BnextClick
  end
  object Bprior: TButton
    Left = 200
    Top = 264
    Width = 97
    Height = 25
    Caption = '<- Previous'
    TabOrder = 2
    OnClick = BpriorClick
  end
  object Bpost: TButton
    Left = 464
    Top = 264
    Width = 97
    Height = 25
    Caption = 'Save'
    TabOrder = 3
    OnClick = BpostClick
  end
  object Ename: TEdit
    Left = 119
    Top = 31
    Width = 121
    Height = 27
    TabOrder = 4
    Text = 'Cowboys'
  end
  object Ecity: TEdit
    Left = 120
    Top = 81
    Width = 121
    Height = 27
    TabOrder = 5
    Text = 'Dallas'
  end
  object DBCoffense: TDBComboBox
    Left = 120
    Top = 136
    Width = 145
    Height = 27
    DataField = 'offense'
    Items.Strings = (
      'Aggressive'
      'Balanced'
      'Conservative')
    TabOrder = 6
  end
  object DBCdefense: TDBComboBox
    Left = 120
    Top = 192
    Width = 145
    Height = 27
    DataField = 'defense'
    Items.Strings = (
      'Aggressive'
      'Balanced'
      'Conservative')
    TabOrder = 7
  end
  object Baddteam: TButton
    Left = 224
    Top = 311
    Width = 97
    Height = 25
    Caption = 'Add Team'
    TabOrder = 8
    OnClick = BaddteamClick
  end
  object Bdeleteteam: TButton
    Left = 376
    Top = 311
    Width = 97
    Height = 25
    Caption = 'Delete Team'
    TabOrder = 9
    OnClick = BdeleteteamClick
  end
  object DBCdivision: TDBComboBox
    Left = 440
    Top = 31
    Width = 145
    Height = 27
    DataField = 'division'
    DataSource = TDataSource2
    TabOrder = 10
  end
  object Edivcode: TEdit
    Left = 440
    Top = 92
    Width = 121
    Height = 27
    TabOrder = 11
    Text = 'NE'
    Visible = False
  end
  object NflConnection: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    UpdateOptions.AssignedValues = [uvAutoCommitUpdates]
    UpdateOptions.AutoCommitUpdates = True
    Connected = True
    LoginPrompt = False
    Left = 775
    Top = 21
  end
  object FDQuery1: TFDQuery
    Active = True
    Connection = NflConnection
    UpdateOptions.AssignedValues = [uvEDelete, uvEInsert, uvEUpdate, uvUpdateMode, uvRefreshMode, uvUpdateNonBaseFields, uvAutoCommitUpdates]
    UpdateOptions.UpdateMode = upWhereChanged
    UpdateOptions.RefreshMode = rmAll
    UpdateOptions.AutoCommitUpdates = True
    UpdateOptions.UpdateTableName = 'nfl.teams'
    SQL.Strings = (
      'select * from teams')
    Left = 280
    Top = 352
    object FDQuery1team_id: TFDAutoIncField
      FieldName = 'team_id'
      Origin = 'team_id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object FDQuery1name: TStringField
      FieldName = 'name'
      Origin = '`name`'
      Required = True
    end
    object FDQuery1city: TStringField
      FieldName = 'city'
      Origin = 'city'
      Required = True
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
    object FDQuery1division: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'division'
      Origin = 'division'
      Size = 12
    end
    object FDQuery1last_finish: TIntegerField
      AutoGenerateValue = arDefault
      FieldName = 'last_finish'
      Origin = 'last_finish'
    end
    object FDQuery1div_code: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'div_code'
      Origin = 'div_code'
      Size = 2
    end
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = FDQuery1
    ScopeMappings = <>
    Left = 16
    Top = 360
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 108
    Top = 357
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'name'
      Control = Ename
      Track = True
    end
    object LinkControlToField2: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'city'
      Control = Ecity
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
    object LinkControlToField3: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'div_code'
      Control = Edivcode
      Track = True
    end
  end
  object TDataSource
    DataSet = FDQuery1
    Left = 736
    Top = 248
  end
  object FDQuery2: TFDQuery
    Active = True
    Connection = NflConnection
    SQL.Strings = (
      'select distinct div_name from divisions')
    Left = 200
    Top = 352
  end
  object TDataSource2: TDataSource
    DataSet = FDQuery1
    Left = 352
    Top = 360
  end
  object FDQuery3: TFDQuery
    Connection = NflConnection
    SQL.Strings = (
      'select div_code from divisions where division = :div')
    Left = 728
    Top = 304
    ParamData = <
      item
        Name = 'DIV'
        DataType = ftString
        ParamType = ptInput
        Value = Null
      end>
  end
end
