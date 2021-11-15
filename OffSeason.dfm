object frmoffseason: Tfrmoffseason
  Left = 0
  Top = 0
  Caption = 'Off Season'
  ClientHeight = 530
  ClientWidth = 730
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
    Left = 404
    Top = 486
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
    Left = 264
    Top = 8
    Width = 244
    Height = 39
    Caption = 'Off Season Tasks'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Bdraft: TButton
    AlignWithMargins = True
    Left = 80
    Top = 92
    Width = 105
    Height = 33
    Hint = 'Create/VIew Coaches'
    Caption = 'Draft'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Btrainingcamp: TButton
    AlignWithMargins = True
    Left = 80
    Top = 164
    Width = 105
    Height = 61
    Hint = 'Create/VIew Coaches'
    Caption = 'Training Camp'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    WordWrap = True
  end
  object Bretire: TButton
    AlignWithMargins = True
    Left = 248
    Top = 92
    Width = 105
    Height = 33
    Hint = 'Create/VIew Coaches'
    Caption = 'Retire'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object Brosters: TButton
    AlignWithMargins = True
    Left = 248
    Top = 164
    Width = 105
    Height = 33
    Hint = 'Create/VIew Coaches'
    Caption = 'Rosters'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object Bplayercut: TButton
    AlignWithMargins = True
    Left = 416
    Top = 92
    Width = 121
    Height = 33
    Hint = 'Create/VIew Coaches'
    Caption = 'Cut Players'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object Button5: TButton
    AlignWithMargins = True
    Left = 416
    Top = 164
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
    TabOrder = 5
  end
  object Bnxtyrsched: TButton
    AlignWithMargins = True
    Left = 248
    Top = 252
    Width = 105
    Height = 61
    Hint = 'Create/VIew Coaches'
    Caption = 'Next Yr Schedule'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 6
    WordWrap = True
  end
  object Breturn: TButton
    AlignWithMargins = True
    Left = 80
    Top = 380
    Width = 105
    Height = 33
    Hint = 'Create/VIew Coaches'
    Caption = 'Return'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clAqua
    Font.Height = -21
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 7
    OnClick = BreturnClick
  end
end
