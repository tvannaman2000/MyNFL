object frminitleague: Tfrminitleague
  Left = 0
  Top = 0
  Caption = 'Initialize  League'
  ClientHeight = 326
  ClientWidth = 717
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    717
    326)
  PixelsPerInch = 96
  TextHeight = 13
  object Lnflchallengemgr: TLabel
    Left = 396
    Top = 279
    Width = 313
    Height = 39
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
    Left = 48
    Top = 121
    Width = 72
    Height = 25
    Caption = 'Output:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Binitleague: TButton
    Left = 48
    Top = 40
    Width = 105
    Height = 57
    Caption = 'Initialize League'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    WordWrap = True
    OnClick = BinitleagueClick
  end
  object Bcreatetables: TButton
    Left = 376
    Top = 182
    Width = 81
    Height = 59
    Caption = 'Create Tables'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    WordWrap = True
    OnClick = BcreatetablesClick
  end
  object Memo1: TMemo
    Left = 48
    Top = 152
    Width = 289
    Height = 161
    TabStop = False
    Anchors = [akLeft, akTop, akRight, akBottom]
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 2
  end
  object Bloadteam: TButton
    Left = 208
    Top = 40
    Width = 97
    Height = 57
    Caption = 'Team Utilities'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    WordWrap = True
    OnClick = BloadteamClick
  end
  object Beditdivisions: TButton
    Left = 360
    Top = 40
    Width = 97
    Height = 57
    Caption = 'Edit Divisions'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    WordWrap = True
    OnClick = BeditdivisionsClick
  end
  object Bcoaches: TButton
    Left = 512
    Top = 40
    Width = 97
    Height = 57
    Caption = 'Coaches'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    OnClick = BcoachesClick
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    Left = 752
    Top = 8
  end
end
