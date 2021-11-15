object frmdactest: Tfrmdactest
  Left = 0
  Top = 0
  Caption = 'frmdactest'
  ClientHeight = 411
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
  object Btest: TButton
    Left = 104
    Top = 16
    Width = 105
    Height = 41
    Caption = 'Test Me'
    TabOrder = 0
    OnClick = BtestClick
  end
  object Edit1: TEdit
    Left = 104
    Top = 104
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object Edit2: TEdit
    Left = 104
    Top = 144
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Memo1: TMemo
    Left = 320
    Top = 176
    Width = 321
    Height = 145
    TabOrder = 3
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    Connected = True
    LoginPrompt = False
    Left = 648
    Top = 32
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      '')
    Left = 536
    Top = 32
    object FDQuery1player_id: TFDAutoIncField
      FieldName = 'player_id'
      Origin = 'player_id'
      ProviderFlags = [pfInWhere, pfInKey]
      ReadOnly = True
    end
    object FDQuery1jersey_no: TIntegerField
      FieldName = 'jersey_no'
      Origin = 'jersey_no'
      Required = True
    end
    object FDQuery1name: TStringField
      FieldName = 'name'
      Origin = '`name`'
      Required = True
      Size = 40
    end
    object FDQuery1posi: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'posi'
      Origin = 'posi'
      Size = 2
    end
    object FDQuery1ht: TStringField
      FieldName = 'ht'
      Origin = 'ht'
      Required = True
      Size = 6
    end
    object FDQuery1wt: TIntegerField
      FieldName = 'wt'
      Origin = 'wt'
      Required = True
    end
    object FDQuery1yrs: TIntegerField
      FieldName = 'yrs'
      Origin = 'yrs'
      Required = True
    end
    object FDQuery1spd: TBCDField
      AutoGenerateValue = arDefault
      FieldName = 'spd'
      Origin = 'spd'
      Precision = 3
      Size = 1
    end
    object FDQuery1rush: TIntegerField
      FieldName = 'rush'
      Origin = 'rush'
      Required = True
    end
    object FDQuery1rcv: TIntegerField
      FieldName = 'rcv'
      Origin = 'rcv'
      Required = True
    end
    object FDQuery1pass: TIntegerField
      FieldName = 'pass'
      Origin = 'pass'
      Required = True
    end
    object FDQuery1kick: TIntegerField
      FieldName = 'kick'
      Origin = 'kick'
      Required = True
    end
    object FDQuery1starter: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'starter'
      Origin = 'starter'
      Size = 4
    end
    object FDQuery1team_id: TIntegerField
      FieldName = 'team_id'
      Origin = 'team_id'
      Required = True
    end
    object FDQuery1team: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'team'
      Origin = 'team'
    end
    object FDQuery1blk: TIntegerField
      FieldName = 'blk'
      Origin = 'blk'
      Required = True
    end
    object FDQuery1KR: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'KR'
      Origin = 'KR'
      FixedChar = True
      Size = 1
    end
    object FDQuery1PR: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'PR'
      Origin = 'PR'
      FixedChar = True
      Size = 1
    end
    object FDQuery1active: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'active'
      Origin = 'active'
      FixedChar = True
      Size = 1
    end
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = FDQuery1
    ScopeMappings = <>
    Left = 736
    Top = 64
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 20
    Top = 5
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'name'
      Control = Edit1
      Track = True
    end
    object LinkControlToField2: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'player_id'
      Control = Edit2
      Track = True
    end
  end
end
