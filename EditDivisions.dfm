object frmdivisions: Tfrmdivisions
  Left = 0
  Top = 0
  Caption = 'Edit Divisions'
  ClientHeight = 394
  ClientWidth = 761
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    761
    394)
  PixelsPerInch = 96
  TextHeight = 13
  object Lnflchallengemgr: TLabel
    Left = 427
    Top = 332
    Width = 326
    Height = 37
    Anchors = [akLeft, akTop, akRight, akBottom]
    Caption = 'NFL Challenge Manager'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -32
    Font.Name = 'Calibri'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label1: TLabel
    Left = 80
    Top = 40
    Width = 146
    Height = 25
    Caption = 'Division Name: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 87
    Top = 96
    Width = 139
    Height = 25
    Caption = 'Division Code: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Ediv_name: TEdit
    Left = 232
    Top = 41
    Width = 169
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = 'NFC Central'
  end
  object Ediv_code: TEdit
    Left = 232
    Top = 96
    Width = 169
    Height = 33
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = 'NC'
  end
  object Bprevious: TButton
    Left = 192
    Top = 212
    Width = 107
    Height = 41
    Caption = '<-- Previous'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = BpreviousClick
  end
  object Bnext: TButton
    Left = 320
    Top = 212
    Width = 89
    Height = 41
    Caption = 'Next -->'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = BnextClick
  end
  object Bsave: TButton
    Left = 427
    Top = 212
    Width = 86
    Height = 41
    Caption = 'Save'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object Bappend: TButton
    Left = 64
    Top = 212
    Width = 113
    Height = 41
    Caption = 'Add Division'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = BappendClick
  end
  object Bdelete: TButton
    Left = 240
    Top = 280
    Width = 121
    Height = 41
    Caption = 'Delete Division'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    OnClick = BdeleteClick
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    Connected = True
    LoginPrompt = False
    Left = 712
    Top = 64
  end
  object FDQuery1: TFDQuery
    Active = True
    Connection = FDConnection1
    SQL.Strings = (
      'select * from divisions')
    Left = 688
    Top = 136
    object FDQuery1div_code: TStringField
      FieldName = 'div_code'
      Origin = 'div_code'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
      Required = True
      FixedChar = True
      Size = 2
    end
    object FDQuery1div_name: TStringField
      AutoGenerateValue = arDefault
      FieldName = 'div_name'
      Origin = 'div_name'
      Size = 25
    end
  end
  object BindSourceDB1: TBindSourceDB
    DataSet = FDQuery1
    ScopeMappings = <>
    Left = 600
    Top = 8
  end
  object BindingsList1: TBindingsList
    Methods = <>
    OutputConverters = <>
    Left = 20
    Top = 5
    object LinkControlToField1: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'div_name'
      Control = Ediv_name
      Track = True
    end
    object LinkControlToField2: TLinkControlToField
      Category = 'Quick Bindings'
      DataSource = BindSourceDB1
      FieldName = 'div_code'
      Control = Ediv_code
      Track = True
    end
  end
end
