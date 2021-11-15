object frmsetup: Tfrmsetup
  Left = 0
  Top = 0
  Caption = 'League Setup'
  ClientHeight = 384
  ClientWidth = 737
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
    Left = 385
    Top = 327
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
    Left = 296
    Top = 8
    Width = 195
    Height = 39
    Caption = 'League Setup'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Binitleague: TButton
    Left = 72
    Top = 88
    Width = 105
    Height = 53
    Caption = 'Initialize League'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    WordWrap = True
    OnClick = BinitleagueClick
  end
  object BSchedform: TButton
    Left = 72
    Top = 174
    Width = 121
    Height = 53
    Caption = 'Scheduling Formula'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    WordWrap = True
  end
  object Bcoaches: TButton
    AlignWithMargins = True
    Left = 264
    Top = 244
    Width = 105
    Height = 33
    Hint = 'Create/VIew Coaches'
    Caption = 'Coaches'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object Balterleague: TButton
    Left = 424
    Top = 88
    Width = 105
    Height = 53
    Caption = 'Alter League'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    WordWrap = True
  end
  object Bseason: TButton
    Left = 424
    Top = 174
    Width = 105
    Height = 33
    Caption = 'Season'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
end
