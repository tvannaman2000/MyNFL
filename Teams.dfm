object frmteams: Tfrmteams
  Left = 0
  Top = 0
  Caption = 'Teams'
  ClientHeight = 625
  ClientWidth = 653
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    653
    625)
  PixelsPerInch = 96
  TextHeight = 13
  object Lnflchallengemgr: TLabel
    Left = 324
    Top = 578
    Width = 313
    Height = 39
    Anchors = [akRight, akBottom]
    Caption = 'NFL Challenge Manager'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -32
    Font.Name = 'Calibri'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Shape1: TShape
    Left = 176
    Top = 96
    Width = 361
    Height = 57
  end
  object Label1: TLabel
    Left = 216
    Top = 104
    Width = 277
    Height = 38
    Caption = 
      'Loads .NFL file into database.  Checks to make sure team does no' +
      't exist, first.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Shape2: TShape
    Left = 176
    Top = 168
    Width = 361
    Height = 57
  end
  object Label2: TLabel
    Left = 184
    Top = 176
    Width = 343
    Height = 38
    Caption = 
      'Creates .NFL file from database.   The file name given should be' +
      ' an existing team name.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Label3: TLabel
    Left = 248
    Top = 16
    Width = 185
    Height = 39
    Caption = 'Team Utilties'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -32
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Shape3: TShape
    Left = 176
    Top = 248
    Width = 361
    Height = 57
  end
  object Label4: TLabel
    Left = 184
    Top = 256
    Width = 335
    Height = 19
    Caption = 'Edit existing teams. (Ex. add, remove, modify).'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    WordWrap = True
  end
  object Button1: TButton
    Left = 48
    Top = 112
    Width = 113
    Height = 33
    Caption = 'Load Team'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = Button1Click
  end
  object Bwriteteam: TButton
    Left = 48
    Top = 184
    Width = 113
    Height = 33
    Caption = 'Write Team'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = BwriteteamClick
  end
  object Memo1: TMemo
    Left = 64
    Top = 368
    Width = 482
    Height = 164
    Anchors = [akLeft, akTop, akRight, akBottom]
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Courier New'
    Font.Style = []
    Lines.Strings = (
      '')
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object Beditteam: TButton
    Left = 48
    Top = 256
    Width = 113
    Height = 41
    Caption = 'Modify Teams'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = BeditteamClick
  end
  object OpenDialog1: TOpenDialog
    DefaultExt = '*.NFL'
    InitialDir = 'c:\MyNFL'
    Left = 8
    Top = 384
  end
  object FDConnection1: TFDConnection
    Params.Strings = (
      'ConnectionDef=NFL')
    Connected = True
    Left = 8
    Top = 320
  end
  object FDQuery1: TFDQuery
    Connection = FDConnection1
    Left = 16
    Top = 256
  end
  object SaveDialog1: TSaveDialog
    Left = 600
    Top = 320
  end
  object FDQuery2: TFDQuery
    Connection = FDConnection1
    Left = 16
    Top = 216
  end
end
