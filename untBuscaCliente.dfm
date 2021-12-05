object frmBuscaCliente: TfrmBuscaCliente
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Busca Paciente'
  ClientHeight = 399
  ClientWidth = 761
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object rdTipoBusca: TRadioGroup
    Left = 8
    Top = 8
    Width = 129
    Height = 73
    Caption = 'Tipo de Busca'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ItemIndex = 0
    Items.Strings = (
      'CPF'
      'Nome')
    ParentFont = False
    TabOrder = 0
  end
  object edtBusca: TLabeledEdit
    Left = 8
    Top = 112
    Width = 745
    Height = 26
    CharCase = ecUpperCase
    EditLabel.Width = 44
    EditLabel.Height = 18
    EditLabel.Caption = 'Busca'
    EditLabel.Font.Charset = DEFAULT_CHARSET
    EditLabel.Font.Color = clWindowText
    EditLabel.Font.Height = -15
    EditLabel.Font.Name = 'Tahoma'
    EditLabel.Font.Style = [fsBold]
    EditLabel.ParentFont = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnChange = edtBuscaChange
  end
  object BitBtn1: TBitBtn
    Left = 344
    Top = 367
    Width = 75
    Height = 25
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    Kind = bkOK
    NumGlyphs = 2
    ParentFont = False
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object gridPaciente: TDBGrid
    Left = 8
    Top = 152
    Width = 745
    Height = 209
    DataSource = DM1.DSPaciente
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ReadOnly = True
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnDblClick = gridPacienteDblClick
    Columns = <
      item
        Alignment = taCenter
        Expanded = False
        FieldName = 'cpf_paciente'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -16
        Font.Name = 'Tahoma'
        Font.Style = []
        Title.Alignment = taCenter
        Title.Caption = 'CPF'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Width = 125
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'nome_paciente'
        Title.Alignment = taCenter
        Title.Caption = 'NOME'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Width = 350
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'apelido_paciente'
        Title.Alignment = taCenter
        Title.Caption = 'APELIDO'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Width = 100
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'data_nascimento_paciente'
        Title.Alignment = taCenter
        Title.Caption = 'DATA NASCIMENTO'
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Visible = True
      end>
  end
end
