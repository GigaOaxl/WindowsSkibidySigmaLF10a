object frmHaupt: TfrmHaupt
  Left = 0
  Top = 0
  Caption = 'Hallo Welt'
  ClientHeight = 200
  ClientWidth = 720
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Position = poScreenCenter
  TextHeight = 15
  object lblGruss: TLabel
    Left = 40
    Top = 40
    Width = 60
    Height = 32
    Caption = 'Label1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object lblAusgabe: TLabel
    Left = 320
    Top = 60
    Width = 50
    Height = 25
    Caption = 'Label2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -18
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object btnAnzeigen: TButton
    Left = 40
    Top = 100
    Width = 110
    Height = 25
    Caption = 'Anzeigen'
    TabOrder = 0
    OnClick = btnAnzeigenClick
  end
  object btnZuruecksetzen: TButton
    Left = 170
    Top = 100
    Width = 110
    Height = 25
    Caption = 'Zur'#252'cksetzen'
    TabOrder = 1
    OnClick = btnZuruecksetzenClick
  end
  object btnUebernehmen: TButton
    Left = 470
    Top = 100
    Width = 100
    Height = 25
    Caption = #220'bernehmen'
    TabOrder = 3
    OnClick = btnUebernehmenClick
  end
  object edtEingabe: TEdit
    Left = 320
    Top = 101
    Width = 140
    Height = 23
    TabOrder = 2
  end
  object cgrHintergrund: TColorGrid
    Left = 600
    Top = 40
    Width = 100
    Height = 100
    TabOrder = 4
    OnChange = cgrHintergrundChange
  end
end
