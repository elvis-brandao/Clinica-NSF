object frmEditaFichaPil: TfrmEditaFichaPil
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Editar Ficha de Pilates'
  ClientHeight = 657
  ClientWidth = 999
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 585
    Height = 609
    BevelInner = bvLowered
    Enabled = False
    TabOrder = 0
    object Label1: TLabel
      Left = 472
      Top = 51
      Width = 95
      Height = 18
      Caption = 'Data de In'#237'cio:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 8
      Top = 518
      Width = 86
      Height = 18
      Caption = 'Exame f'#237'sico:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object imgCadeado1: TImage
      Left = 564
      Top = 2
      Width = 21
      Height = 25
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000140000
        001408060000008D891D0D000000017352474200AECE1CE90000000467414D41
        0000B18F0BFC61050000033F4944415478DA8D95EF6F53551C879F73EE8FAEDD
        BA319823635368DD088B6220BCF085EE052031916D31C4F88A841726FE07BEF2
        1F30F1A57F850909C41744316A1414954034F5078CC565E0981BDB3AD6DDB6B7
        F7DE733CF7B6DD6E99263D4DD3DBDB739EF37CCEF7DB56D46A35AD94420881D6
        9A78C4D7ED57CB9288F861AE955628A589E7B747BCA663ADE7793A7D230DAAFB
        0DCA4F2B785E954845F464320CE47BE9CFE7937969707B9DA856AB7A0F4C4A56
        D7CB2C2E3D667D73932DCF4B8059B7877DF93E0E0D0F73F8F94338B64D3BDD8E
        6D1BD8BE19C39E6C94B937BFC0D29355B6AADB0C0EF4E33A0E9B950A412364E4
        C010474647395A3C9CCC5769A1B4A1341F8661C4EFF7E7997FF4904ACD63EAD4
        290A63A3D8969598FE5CFA8D85477F73646494C9170B8C8D1C248CA2FF06C68B
        D64CD4BB7FFCC9E2CA32AF9D3CC989C963F8BE9F58C4118330E4EA575FE3D71B
        4C168B1C3F36D15994DDC8E038B90476EB97DBE47BF3BC7DEE3C7D3997940019
        176E97EE71F3CE2D0E9AE86F4E9D6120E718CBB05994B8CA0959BAD854F8DE4C
        BCF3A0CCF0BE2CE75F1D269791A620ADDDCDD3B125A5856DBE2DADD19B11CCBC
        3EC9D0732F19F3202E4BCBD0A0889E622D5EE487B91CDF2C5F62ACEF01170A1F
        D3637926AEB563E8CA3AA58D335C7BF83E839925DE19FF84FDE31FA00FBC8756
        F5261099456DDD40CD9D663BD8CFDCC62B0CE5567861E02F7336F2995E53D482
        1CF7D75F26EF6E51ECBF8B189CC19EF8CC006B2960E53BA21FA7B13D85634589
        55A09C56D0DDB6400BD30D118E0CCC668246E4A3270CF0F81574D4026A3B0BAB
        37519F4FA3EA96D9C9A6AB61F6929491476791A72FA3C336D031C0C706787D9A
        B0EA12D433B4FAFCFF878E0B695A29BB8A559845BC7119D161B86C805F1A60CD
        21F2DD66D26E80EE3AB238833440C27AAB6D4CFFF14FD330AADB448DEE81B6BD
        B1034C227700BF681A86267202149D803D4728346ECF1A22069E6D454E7EBE0C
        50B78091DFBDA1A98869F4356338DB1939012EDF6816A5E6EE1A761139369485
        B790E7AE7402D5CA4FA86B6711BA81B09CDD2F7B4A68EF09983B7E1531FEAE89
        FCA901B61B3B765701D1AF1FC1D275B3B3B3E7E8E2BF019D3AC8E4BD0E4DE63C
        F2C487889129539406FF02844CD7A2D30C370D0000000049454E44AE426082}
    end
    object dtpInicio: TDateTimePicker
      Left = 437
      Top = 72
      Width = 139
      Height = 26
      Date = 43856.602158530090000000
      Time = 43856.602158530090000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 4
    end
    object edtFrequencia: TLabeledEdit
      Left = 8
      Top = 72
      Width = 97
      Height = 26
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 70
      EditLabel.Height = 18
      EditLabel.Caption = 'Frequ'#234'ncia'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
    end
    object edtDores: TLabeledEdit
      Left = 8
      Top = 307
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 160
      EditLabel.Height = 18
      EditLabel.Caption = 'Dores recetes no corpo?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 13
    end
    object edtDesvio: TLabeledEdit
      Left = 295
      Top = 307
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 106
      EditLabel.Height = 18
      EditLabel.Caption = 'Desvio Postural?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 14
    end
    object edtAlergia: TLabeledEdit
      Left = 8
      Top = 352
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 97
      EditLabel.Height = 18
      EditLabel.Caption = 'Alergia? Quais?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 15
    end
    object edtLesao: TLabeledEdit
      Left = 295
      Top = 352
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 149
      EditLabel.Height = 18
      EditLabel.Caption = 'Les'#227'o '#243'steo-muscular?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 16
    end
    object edtPratica: TLabeledEdit
      Left = 8
      Top = 398
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 163
      EditLabel.Height = 18
      EditLabel.Caption = 'J'#225' praticou pilates antes?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 17
    end
    object edtCirurgia: TLabeledEdit
      Left = 295
      Top = 398
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 159
      EditLabel.Height = 18
      EditLabel.Caption = 'Alguma cirurgia recente?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 18
    end
    object edtUltAtividade: TLabeledEdit
      Left = 8
      Top = 445
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 230
      EditLabel.Height = 18
      EditLabel.Caption = #218'ltima atividade f'#237'sica que praticou?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 19
    end
    object edtIndicacoes: TLabeledEdit
      Left = 8
      Top = 489
      Width = 568
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 134
      EditLabel.Height = 18
      EditLabel.Caption = 'Indica'#231#245'es m'#233'dicas?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 21
    end
    object edtDoencas: TLabeledEdit
      Left = 295
      Top = 445
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 142
      EditLabel.Height = 18
      EditLabel.Caption = 'Doen'#231'as heredit'#225'rias?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 20
    end
    object edtDias: TLabeledEdit
      Left = 111
      Top = 72
      Width = 207
      Height = 26
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 27
      EditLabel.Height = 18
      EditLabel.Caption = 'Dias'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
    end
    object edtHorario: TLabeledEdit
      Left = 324
      Top = 72
      Width = 107
      Height = 26
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 46
      EditLabel.Height = 18
      EditLabel.Caption = 'Hor'#225'rio'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
    end
    object edtTabagismo: TLabeledEdit
      Left = 295
      Top = 120
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 79
      EditLabel.Height = 18
      EditLabel.Caption = 'Tabagismo?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 7
    end
    object edtLabirintite: TLabeledEdit
      Left = 295
      Top = 168
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 67
      EditLabel.Height = 18
      EditLabel.Caption = 'Labirintite?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 8
    end
    object edtRestricoes: TLabeledEdit
      Left = 8
      Top = 215
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 267
      EditLabel.Height = 18
      EditLabel.Caption = 'Restri'#231#245'es '#224' pr'#225'tica de atividades f'#237'sicas?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 9
    end
    object edtACardio: TLabeledEdit
      Left = 295
      Top = 215
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 163
      EditLabel.Height = 18
      EditLabel.Caption = 'Altera'#231#227'o cardiovascular?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 10
    end
    object edtAMetabolicas: TLabeledEdit
      Left = 8
      Top = 261
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 155
      EditLabel.Height = 18
      EditLabel.Caption = 'Altera'#231#245'es metab'#243'licas?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 11
    end
    object edtMedicamentos: TLabeledEdit
      Left = 295
      Top = 261
      Width = 281
      Height = 25
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 149
      EditLabel.Height = 18
      EditLabel.Caption = 'Mecidamentos? Quais?'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 12
    end
    object memoExame: TMemo
      Left = 8
      Top = 535
      Width = 568
      Height = 67
      CharCase = ecUpperCase
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ScrollBars = ssVertical
      TabOrder = 22
    end
    object RGAtividade: TRadioGroup
      Left = 8
      Top = 104
      Width = 281
      Height = 90
      Caption = 'Atividade F'#237'sica'
      Columns = 2
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      Items.Strings = (
        'Iniciante'
        'Intermedi'#225'rio'
        'Avan'#231'ado'
        'Parado')
      ParentFont = False
      TabOrder = 5
      TabStop = True
    end
    object edtNome: TLabeledEdit
      Left = 8
      Top = 24
      Width = 571
      Height = 26
      TabStop = False
      AutoSelect = False
      AutoSize = False
      CharCase = ecUpperCase
      EditLabel.Width = 54
      EditLabel.Height = 18
      EditLabel.Caption = 'Paciente'
      EditLabel.Font.Charset = DEFAULT_CHARSET
      EditLabel.Font.Color = clWindowText
      EditLabel.Font.Height = -15
      EditLabel.Font.Name = 'Tahoma'
      EditLabel.Font.Style = []
      EditLabel.ParentFont = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      ReadOnly = True
      TabOrder = 0
    end
    object edtTParado: TEdit
      Left = 214
      Top = 158
      Width = 72
      Height = 26
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      TabOrder = 6
      Text = 'Tempo?'
    end
  end
  object Panel2: TPanel
    Left = 585
    Top = 0
    Width = 413
    Height = 609
    BevelInner = bvLowered
    Enabled = False
    TabOrder = 1
    object Label2: TLabel
      Left = 162
      Top = 12
      Width = 120
      Height = 25
      Caption = 'Pagamento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -21
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label7: TLabel
      Left = 98
      Top = 51
      Width = 160
      Height = 18
      Caption = 'Forma de pagamento:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 6
      Top = 82
      Width = 52
      Height = 16
      Caption = 'N'#186' Parc.'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label9: TLabel
      Left = 71
      Top = 82
      Width = 67
      Height = 16
      Caption = 'Valor (R$)'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label10: TLabel
      Left = 174
      Top = 82
      Width = 76
      Height = 16
      Caption = 'Vencimento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label11: TLabel
      Left = 281
      Top = 82
      Width = 117
      Height = 16
      Caption = 'Dia do pagamento'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object imgCadeado2: TImage
      Left = 392
      Top = 2
      Width = 21
      Height = 25
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000140000
        001408060000008D891D0D000000017352474200AECE1CE90000000467414D41
        0000B18F0BFC61050000033F4944415478DA8D95EF6F53551C879F73EE8FAEDD
        BA319823635368DD088B6220BCF085EE052031916D31C4F88A841726FE07BEF2
        1F30F1A57F850909C41744316A1414954034F5078CC565E0981BDB3AD6DDB6B7
        F7DE733CF7B6DD6E99263D4DD3DBDB739EF37CCEF7DB56D46A35AD94420881D6
        9A78C4D7ED57CB9288F861AE955628A589E7B747BCA663ADE7793A7D230DAAFB
        0DCA4F2B785E954845F464320CE47BE9CFE7937969707B9DA856AB7A0F4C4A56
        D7CB2C2E3D667D73932DCF4B8059B7877DF93E0E0D0F73F8F94338B64D3BDD8E
        6D1BD8BE19C39E6C94B937BFC0D29355B6AADB0C0EF4E33A0E9B950A412364E4
        C010474647395A3C9CCC5769A1B4A1341F8661C4EFF7E7997FF4904ACD63EAD4
        290A63A3D8969598FE5CFA8D85477F73646494C9170B8C8D1C248CA2FF06C68B
        D64CD4BB7FFCC9E2CA32AF9D3CC989C963F8BE9F58C4118330E4EA575FE3D71B
        4C168B1C3F36D15994DDC8E038B90476EB97DBE47BF3BC7DEE3C7D3997940019
        176E97EE71F3CE2D0E9AE86F4E9D6120E718CBB05994B8CA0959BAD854F8DE4C
        BCF3A0CCF0BE2CE75F1D269791A620ADDDCDD3B125A5856DBE2DADD19B11CCBC
        3EC9D0732F19F3202E4BCBD0A0889E622D5EE487B91CDF2C5F62ACEF01170A1F
        D3637926AEB563E8CA3AA58D335C7BF83E839925DE19FF84FDE31FA00FBC8756
        F5261099456DDD40CD9D663BD8CFDCC62B0CE5567861E02F7336F2995E53D482
        1CF7D75F26EF6E51ECBF8B189CC19EF8CC006B2960E53BA21FA7B13D85634589
        55A09C56D0DDB6400BD30D118E0CCC668246E4A3270CF0F81574D4026A3B0BAB
        37519F4FA3EA96D9C9A6AB61F6929491476791A72FA3C336D031C0C706787D9A
        B0EA12D433B4FAFCFF878E0B695A29BB8A559845BC7119D161B86C805F1A60CD
        21F2DD66D26E80EE3AB238833440C27AAB6D4CFFF14FD330AADB448DEE81B6BD
        B1034C227700BF681A86267202149D803D4728346ECF1A22069E6D454E7EBE0C
        50B78091DFBDA1A98869F4356338DB1939012EDF6816A5E6EE1A761139369485
        B790E7AE7402D5CA4FA86B6711BA81B09CDD2F7B4A68EF09983B7E1531FEAE89
        FCA901B61B3B765701D1AF1FC1D275B3B3B3E7E8E2BF019D3AC8E4BD0E4DE63C
        F2C487889129539406FF02844CD7A2D30C370D0000000049454E44AE426082}
    end
    object edtNumParcelas: TComboBox
      Left = 264
      Top = 43
      Width = 57
      Height = 26
      CharCase = ecUpperCase
      DropDownCount = 11
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      Text = '--'
      Items.Strings = (
        '--'
        '1X'
        '2X'
        '3X'
        '4X'
        '5X'
        '6X'
        '7X'
        '8X'
        '9X'
        '10X'
        '11X'
        '12X')
    end
    object Edit2: TEdit
      Left = 11
      Top = 118
      Width = 30
      Height = 24
      TabStop = False
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      Text = '1'
    end
    object Edit3: TEdit
      Left = 11
      Top = 155
      Width = 30
      Height = 24
      TabStop = False
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 5
      Text = '2'
    end
    object Edit4: TEdit
      Left = 11
      Top = 428
      Width = 30
      Height = 24
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 33
      Text = '9'
    end
    object Edit5: TEdit
      Left = 11
      Top = 345
      Width = 30
      Height = 24
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 25
      Text = '7'
    end
    object Edit6: TEdit
      Left = 11
      Top = 230
      Width = 30
      Height = 24
      TabStop = False
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 13
      Text = '4'
    end
    object Edit7: TEdit
      Left = 11
      Top = 193
      Width = 30
      Height = 24
      TabStop = False
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 9
      Text = '3'
    end
    object Edit8: TEdit
      Left = 11
      Top = 268
      Width = 30
      Height = 24
      TabStop = False
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 17
      Text = '5'
    end
    object Edit9: TEdit
      Left = 11
      Top = 305
      Width = 30
      Height = 24
      TabStop = False
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 21
      Text = '6'
    end
    object Edit10: TEdit
      Left = 11
      Top = 386
      Width = 30
      Height = 24
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 29
      Text = '8'
    end
    object Edit11: TEdit
      Left = 11
      Top = 472
      Width = 30
      Height = 24
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 37
      Text = '10'
    end
    object edtValP1: TEdit
      Left = 55
      Top = 118
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 2
      Text = '0,00'
      OnChange = edtValP1Change
    end
    object edtValP2: TEdit
      Left = 55
      Top = 155
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 6
      Text = '0,00'
      OnChange = edtValP2Change
    end
    object edtValP3: TEdit
      Left = 55
      Top = 193
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 10
      Text = '0,00'
      OnChange = edtValP3Change
    end
    object edtValP4: TEdit
      Left = 55
      Top = 230
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 14
      Text = '0,00'
      OnChange = edtValP4Change
    end
    object edtValP5: TEdit
      Left = 55
      Top = 268
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 18
      Text = '0,00'
      OnChange = edtValP5Change
    end
    object edtValP6: TEdit
      Left = 55
      Top = 305
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 22
      Text = '0,00'
      OnChange = edtValP6Change
    end
    object edtValP7: TEdit
      Left = 54
      Top = 345
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 26
      Text = '0,00'
      OnChange = edtValP7Change
    end
    object edtValP8: TEdit
      Left = 55
      Top = 386
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 30
      Text = '0,00'
      OnChange = edtValP8Change
    end
    object edtValP9: TEdit
      Left = 55
      Top = 428
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 34
      Text = '0,00'
      OnChange = edtValP9Change
    end
    object edtValP10: TEdit
      Left = 55
      Top = 472
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 38
      Text = '0,00'
      OnChange = edtValP10Change
    end
    object dtpVencimentoP1: TDateTimePicker
      Left = 161
      Top = 118
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 3
    end
    object dtpVencimentoP2: TDateTimePicker
      Left = 161
      Top = 155
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 7
    end
    object dtpVencimentoP3: TDateTimePicker
      Left = 161
      Top = 193
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 11
    end
    object dtpVencimentoP4: TDateTimePicker
      Left = 161
      Top = 230
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 15
    end
    object dtpVencimentoP5: TDateTimePicker
      Left = 161
      Top = 268
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 19
    end
    object dtpVencimentoP6: TDateTimePicker
      Left = 161
      Top = 305
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 23
    end
    object dtpVencimentoP7: TDateTimePicker
      Left = 161
      Top = 345
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 27
    end
    object dtpVencimentoP8: TDateTimePicker
      Left = 161
      Top = 386
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 31
    end
    object dtpVencimentoP9: TDateTimePicker
      Left = 161
      Top = 428
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 35
    end
    object dtpVencimentoP10: TDateTimePicker
      Left = 161
      Top = 472
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 39
    end
    object dtpPagP1: TDateTimePicker
      Left = 284
      Top = 118
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
    end
    object dtpPagP2: TDateTimePicker
      Left = 284
      Top = 155
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 8
    end
    object dtpPagP3: TDateTimePicker
      Left = 284
      Top = 193
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 12
    end
    object dtpPagP4: TDateTimePicker
      Left = 284
      Top = 230
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 16
    end
    object dtpPagP5: TDateTimePicker
      Left = 284
      Top = 268
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 20
    end
    object dtpPagP6: TDateTimePicker
      Left = 284
      Top = 305
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 24
    end
    object dtpPagP7: TDateTimePicker
      Left = 284
      Top = 345
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 28
    end
    object dtpPagP8: TDateTimePicker
      Left = 284
      Top = 386
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 32
    end
    object dtpPagP9: TDateTimePicker
      Left = 284
      Top = 428
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 36
    end
    object dtpPagP10: TDateTimePicker
      Left = 284
      Top = 472
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 40
    end
    object Edit12: TEdit
      Left = 11
      Top = 517
      Width = 30
      Height = 24
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 41
      Text = '11'
    end
    object Edit13: TEdit
      Left = 11
      Top = 560
      Width = 30
      Height = 24
      Alignment = taCenter
      Enabled = False
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 45
      Text = '12'
    end
    object edtValP12: TEdit
      Left = 55
      Top = 560
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 46
      Text = '0,00'
      OnChange = edtValP12Change
    end
    object edtValP11: TEdit
      Left = 55
      Top = 517
      Width = 100
      Height = 24
      Alignment = taCenter
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      NumbersOnly = True
      ParentFont = False
      TabOrder = 42
      Text = '0,00'
      OnChange = edtValP11Change
    end
    object dtpVencimentoP11: TDateTimePicker
      Left = 161
      Top = 517
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 43
    end
    object dtpVencimentoP12: TDateTimePicker
      Left = 161
      Top = 560
      Width = 117
      Height = 24
      Date = 43876.774203946760000000
      Time = 43876.774203946760000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 47
    end
    object dtpPagP12: TDateTimePicker
      Left = 284
      Top = 560
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 48
    end
    object dtpPagP11: TDateTimePicker
      Left = 284
      Top = 517
      Width = 117
      Height = 24
      Date = -109205.774203946800000000
      Time = -109205.774203946800000000
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 44
    end
  end
  object BitBtn1: TBitBtn
    Left = 181
    Top = 615
    Width = 90
    Height = 41
    Caption = 'Buscar'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Glyph.Data = {
      360C0000424D360C000000000000360000002800000020000000200000000100
      180000000000000C0000C40E0000C40E00000000000000000000FCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFC0204FC0204FC0204FC0204FCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFC0204FC0204FC0204FC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFC040204040204040204040204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFC0204FCFEFCFC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC04
      0204440204FC0204FCFE04FC0204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC04020444
      0204FC0204FCFE04FCFE04FC0204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC440204440204FC
      0204FCFE04FCFE04FC0204FC0204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FC0204FC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC440204040204FC0204FC
      FE04FCFE04FC0204FC0204040204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FC0204FC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC440204040204FC0204FCFE04FC
      FE04FC0204FC0204040204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC440204FC0204FCFE04FCFE04FC
      0204FC0204FC0204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC440204FC0204FCFE04FCFE04FC0204FC
      0204040204040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFC440204FC0204FCFE04FCFE04FC0204FC020404
      0204040204FCFEFCFCFEFCFC0204FC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC0402040402040402040402040402
      0404020404020404020444626484A2A4FCFEFC84A2A4446264FC020404020404
      0204FCFEFCFCFEFCFC0204FC0204FC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFC0402040402040402044462044462044462044462
      0444620444620444620404020404020484A2A4446264446264040204040204FC
      FEFCFCFEFCFCFEFCFC0204FC0204FC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFC44626444626484A2A4FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04446204446204040204446264040204FCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFC44626484A2A484A2A4FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04446204446204040204FCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFC446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFC446264446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204040204FCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFC446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFC446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFC446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFC
      FEFCFC0204FC0204FC0204FC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFC446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFC0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFC446264446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFC446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04040204040204FCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFC446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFC446264446264FCFE04FCFE04FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04FCFE04FCFE04446204040204FCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFC446264446264446264FCFE04FCFE04FCFE04FCFE04FCFE
      04FCFE04FCFE04FCFE04446264446204040204FCFEFCFC0204FC0204FC0204FC
      0204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFC446264446264446264FCFE04FCFE04FCFE
      04FCFE04FCFE04446264040204040204FCFEFCFCFEFCFCFEFCFCFEFCFC0204FC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC4462644462644462644462
      64446264446264040204FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC
      FCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFE
      FCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFC
      FEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFCFCFEFC}
    ParentFont = False
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object btnEditar: TBitBtn
    Left = 325
    Top = 615
    Width = 124
    Height = 40
    Caption = 'Editar Ficha'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Glyph.Data = {
      F6060000424DF606000000000000360000002800000018000000180000000100
      180000000000C0060000C40E0000C40E00000000000000000000FF00FFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      00FFFFFFFFFFFFFF404040404040404040404040404040404040404040404040
      4040404040404040404040404040404040404040404040404040404040404040
      40404040FFFFFFFFFFFFFFFFFFC0C0C0CDD4D8CDD4D8CDD4D8CDD4D8CDD4D8CD
      D4D8CDD4D8CDD4D8CDD4D8CDD4D8CDD4D8CDD4D8CDD4D8CDD4D8CDD4D8CDD4D8
      CDD4D8CDD4D8CDD4D8CDD4D8404040FFFFFFFFFFFFC0C0C0CFD6DACFD6DACFD6
      DACFD6DACFD6DACFD6DACFD6DACFD6DACFD6DACFD6DACFD6DACFD6DACFD6DACF
      D6DACFD6DACFD6DACFD6DACFD6DACFD6DACFD6DA404040FFFFFFFFFFFFC0C0C0
      D2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8
      DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DBD2D8DB404040FF
      FFFFFFFFFFC0C0C0D4DADDD4DADDD4DADDD4DADDD4DADDD4DADD000000000000
      000000000000000000000000000000000000D4DADDD4DADDD4DADDD4DADDD4DA
      DDD4DADD404040FFFFFFFFFFFFC0C0C0D6DCDFD6DCDFD6DCDFD6DCDFD6DCDF00
      0000000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000D6DCDFD6DCDF
      D6DCDFD6DCDFD6DCDFD6DCDF404040FFFFFFFFFFFFC0C0C0D9DEE1D9DEE1D9DE
      E1D9DEE1000000FFFFFF000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00
      0000D9DEE1D9DEE1D9DEE1D9DEE1D9DEE1D9DEE1404040FFFFFFFFFFFFC0C0C0
      DBE0E3DBE0E3DBE0E3000000FFFFFFFFFFFF000000FFFFFF0000000000000000
      00FFFFFFFFFFFF000000DBE0E3DBE0E3DBE0E3DBE0E3DBE0E3DBE0E3404040FF
      FFFFFFFFFFC0C0C0DEE2E5DEE2E5DEE2E5000000000000000000FFFFFFFFFFFF
      000000697374C1C1C1000000FFFFFF000000DEE2E5DEE2E5DEE2E5DEE2E5DEE2
      E5DEE2E5404040FFFFFFFFFFFFC0C0C0E0E4E7E0E4E7E0E4E7000000FFFFFFFF
      FFFFFFFFFFFFFFFF000000C1C1C1346AC8346AC8000000000000E0E4E7E0E4E7
      E0E4E7E0E4E7E0E4E7E0E4E7404040FFFFFFFFFFFFC0C0C0E2E6E9E2E6E9E2E6
      E9000000FFFFFF00000000000000000000000000000094D6FF346AC8346AC800
      0000E2E6E9E2E6E9E2E6E9E2E6E9E2E6E9E2E6E9404040FFFFFFFFFFFFC0C0C0
      E5E9EAE5E9EAE5E9EA000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF0000
      0094D6FF346AC8346AC8000000E5E9EAE5E9EAE5E9EAE5E9EAE5E9EA404040FF
      FFFFFFFFFFC0C0C0E7EBECE7EBECE7EBEC000000FFFFFF000000000000000000
      00000000000000000000000094D6FF627B29627B29000000E7EBECE7EBECE7EB
      ECE7EBEC404040FFFFFFFFFFFFC0C0C0E9EDEEE9EDEEE9EDEE000000FFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000627B29346AC8346AC8
      000000E9EDEEE9EDEEE9EDEE404040FFFFFFFFFFFFC0C0C0ECEFF0ECEFF0ECEF
      F0000000FFFFFF000000000000000000000000000000000000000000FFFFFF00
      0000346AC8346AC8000000ECEFF0ECEFF0ECEFF0404040FFFFFFFFFFFFC0C0C0
      EEF1F2EEF1F2EEF1F2000000FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFF000000000000000000EEF1F2EEF1F2EEF1F2EEF1F2404040FF
      FFFFFFFFFFC0C0C0F1F3F4F1F3F4F1F3F4000000FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF000000F1F3F4F1F3F4F1F3F4F1F3F4F1F3
      F4F1F3F4404040FFFFFFFFFFFFC0C0C0F3F5F6F3F5F6F3F5F600000000000000
      0000000000000000000000000000000000000000000000000000F3F5F6F3F5F6
      F3F5F6F3F5F6F3F5F6F3F5F6404040FFFFFFFFFFFFC0C0C0F5F7F8F5F7F8F5F7
      F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5
      F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8F5F7F8404040FFFFFFFFFFFFC0C0C0
      F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9
      F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9F8F9F9404040FF
      FFFFFFFFFFC0C0C0FAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFB
      FAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFBFBFAFB
      FBFAFBFB404040FFFFFFFFFFFFFFFFFFC0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0
      C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0C0
      C0C0C0C0C0C0C0C0C0C0C0C0FFFFFFFFFFFFFF00FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF00FF}
    ParentFont = False
    TabOrder = 3
    OnClick = btnEditarClick
  end
  object btnCancelar: TBitBtn
    Left = 564
    Top = 615
    Width = 106
    Height = 41
    Caption = 'Cancelar'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Glyph.Data = {
      360C0000424D360C000000000000360000002800000020000000200000000100
      180000000000000C0000C40E0000C40E00000000000000000000FDFDFDF5F5F5
      E9E9E9E3E3E3E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2
      E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2
      E2E2E2E2E2E2E2E2E2E2E2E2E2E2E3E3E3E8E8E8F4F4F4FDFDFDF5F5F5D6D6D6
      B7B7B7ABABABA9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9
      A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9
      A9A9A9A9A9A9A9A9A9A9A9A9A9A9AAAAAAB5B5B5D5D5D5F4F4F4A9A9C414146C
      0202630000620000620000620000620000620000620000620000620000620000
      6200006200006200006200006200006200006200006200006200006200006200
      0062000062000062000062000062080864686884B6B6B6E8E8E813136D030D91
      303BAF4758E04C5CE05161E15565E25B6AE3606FE46574E56B78E66F7DE67380
      E77783E87986E87A86E87986E87783E87380E76F7DE66B78E66574E5606FE45B
      6AE35565E25161E14C5CE03440B9050A7D0C0C67AAAAAAE3E3E30000622B36AD
      051ED50A22D61027D7162DD81D33D92339DA2A3FDB3145DC374BDD3D50DE4255
      DF4658E0485AE0495BE0485AE04658E04255DF3D50DE374BDD3145DC2A3FDB23
      39DA1D33D9162DD81027D70A22D62F3CB8000062A9A9A9E2E2E20000623E50DE
      011AD4051ED50921D60E26D6132AD71930D81E34D92439DA283DDB2D42DC3044
      DC3347DD3549DD3549DD3549DD3347DD3044DC2D42DC283DDB2439DA1E34D919
      30D8132AD70E26D60921D6051ED53F51DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D4031CD5061ED50A22D60E26D61229D7162DD81A30D81D33D91F35
      D92238DA2339DA2339DA2339DA2238DA1F35D91D33D91A30D8162DD81229D70E
      26D60A22D6061ED5031CD50019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D4021BD4041DD5061ED50921D60C24D60E26D61027
      D71128D71229D71229D71229D71128D71027D70E26D60C24D60921D6061ED504
      1DD5021BD40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D41930D8F5F6FD243ADA031CD5031C
      D5041DD5041DD5041DD5041DD5041DD5031CD56776E5E9EBFB051ED50019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D41930D8FFFFFFFFFFFFF5F6FD3347DD0019
      D40019D40019D40019D40019D40019D46070E4FEFEFFFFFFFFEFF1FC041DD500
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D41120B2F8F9FEFFFFFFFFFFFFFFFFFFF5F6FD3E51
      DE0019D40019D40019D40019D45A6AE3FDFDFFFFFFFFFFFFFFFFFFFFEFF1FC04
      1DD50019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D4000B96F5F6FDFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6
      FD4456DF0019D40019D45566E2FBFBFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD9
      DDF90019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40E1899F5F6FDFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFF5F6FD4F60E15566E2F9FAFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7F8FE11
      20B20019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40C1698F5F6FDFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD1120B200
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D4091498F5F6FDFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD1120B20019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D40019D4061197F5F6FDFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD0E1EB20019D40019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D40019D40019D4061197F5F6FDFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD0E1EB20019D40019D40019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40B23D61C32D92B40DB384CDD4551C599A3EEF5F6FDFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5364E24557E0384CDD2B40DB1C
      32D90B23D60019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      1E34D9364ADD4C5EE16271E56978E66978E66978E6A4ADF0FAFAFEFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6D7BE66978E66978E669
      78E66271E54C5EE1364ADD1E34D93E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E6A1ABEFFCFCFEFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6E7CE76978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E69EA7EFFDFDFEFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6E7CE769
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E69BA5EEFEFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFF7F8FE8185C5757BC4FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6E
      7CE76978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E6696FC1EAECFBFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAFA
      FE8185C56978E66978E6757BC4FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFF
      FFFF6978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E6696FC1F0F1FDFFFFFFFFFFFFFFFFFFF8F9FE7E83
      C56978E66978E66978E66978E6757BC4FFFFFFFFFFFFFFFFFFFCFCFEFFFFFF75
      83E86978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E6696FC1F1F2FDFFFFFFF6F7FD7E83C56978
      E66978E66978E66978E66978E66978E6757BC4FFFFFFFFFFFFFFFFFF707EE769
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E6696FC1E9ECFB7E83C56978E66978
      E66978E66978E66978E66978E66978E66978E6757BC4FFFFFF6E7CE76978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E66978E6696FC16978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66973D06978E66978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978E669
      78E66978E66978E66978E66675E53E50DE000062ACACACE3E3E30000623E4DD0
      4F60E16877E66978E66978E66978E66978E66978E66978E66978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978E669
      78E66978E66978E66978E65A6AE33E4ED1000062BDBDBDECECEC202076000781
      3E4DD03E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50
      DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E
      50DE3E50DE3E50DE3E50DE3E4DCF000A8E262674DFDFDFF8F8F8E0E0EC202076
      0000620000620000620000620000620000620000620000620000620000620000
      6200006200006200006200006200006200006200006200006200006200006200
      0062000062000062000062000062282879DBDBE2F8F8F8FFFFFF}
    ParentFont = False
    Spacing = 6
    TabOrder = 4
    OnClick = btnCancelarClick
  end
  object btnSalvar: TBitBtn
    Left = 452
    Top = 615
    Width = 106
    Height = 41
    Caption = 'Salvar'
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Glyph.Data = {
      360C0000424D360C000000000000360000002800000020000000200000000100
      180000000000000C0000C40E0000C40E00000000000000000000FFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC1A47AA67D41F0E7D3F0E7D3F0E7D3A67D
      41A67D41A67D41A67D41F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0
      E7D3A67D41A67D41A67D41A67D41A67D41D3BEA0FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFA87F44A87F44A87F44F1E8D6F1E8D6F1E8D6A87F
      44A87F44A87F44A87F44F1E8D6F1E8D6F1E8D6F1E8D6F1E8D6F1E8D6F1E8D6F1
      E8D6A87F44A87F44A87F44A87F44A87F44A87F44FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFAA8248AA8248AA8248AA8248F3EBDBF3EBDBF3EBDBAA82
      48AA8248AA8248AA8248F3EBDBF3EBDBF3EBDBF3EBDBF3EBDBF3EBDBF3EBDBF3
      EBDBAA8248AA8248AA8248AA8248AA8248AA8248FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFAD854CAD854CAD854CAD854CAD854CF5EFE1F5EFE1F5EFE1AD85
      4CAD854CAD854CAD854CF5EFE1F5EFE1F5EFE1F5EFE1F5EFE1F5EFE1F5EFE1F5
      EFE1AD854CAD854CAD854CC6AA82AD854CAD854CFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC7AC85AF8850AF8850AF8850AF8850AF8850F8F2E7F8F2E7F8F2E7AF88
      50AF8850AF8850AF8850F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8
      F2E7AF8850AF8850C7AC85C7AC85C7AC85AF8850FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFB28C55B28C55B28C55B28C55B28C55B28C55F9F5EBF9F5EBF9F5EBB28C
      55B28C55B28C55B28C55F9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9
      F5EBB28C55B28C55B28C55C9AF88B28C55B28C55FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFB5905AB5905AB5905AB5905AB5905AB5905AFBF7EFFBF7EFFBF7EFFBF7
      EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFB
      F7EFB5905AB5905AB5905ACBB28CB5905AB5905AFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFB8935FB8935FB8935FB8935FB8935FB8935FFCF9F2FCF9F2FCF9F2FCF9
      F2FCF9F2FCF9F2FCF9F2FCF9F2FCF9F2FCF9F2FCF9F2FCF9F2FCF9F2FCF9F2FC
      F9F2B8935FB8935FB8935FCDB48FB8935FB8935FFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFBA9561BA9561BA9561BA9561BA9561BA9561BA9561BA9561BA9561BA95
      61BA9561BA9561BA9561BA9561BA9561BA9561BA9561BA9561BA9561BA9561BA
      9561BA9561BA9561BA9561BA9561BA9561BA9561FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFBB9763BB9763BB9763BB9763BB9763BB9763BB9763BB9763BB9763BB97
      63BB9763BB9763BB9763BB9763BB9763BB9763BB9763BB9763BB9763BB9763BB
      9763BB9763BB9763BB9763BB9763BB9763BB9763FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFBC9966BC9966BC9966BC9966BC9966BC9966BC9966BC9966BC9966BC99
      66BC9966BC9966BC9966BC9966BC9966BC9966BC9966BC9966BC9966BC9966BC
      9966BC9966BC9966BC9966BC9966BC9966BC9966FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFBE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A
      68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE
      9A68BE9A68BE9A68BE9A68BE9A68BE9A68BE9A68FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFBF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C
      6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF
      9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6ABF9C6AFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E
      6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CC0
      9E6CC09E6CC09E6CC09E6CC09E6CC09E6CC09E6CFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC29F6EC29F6EC29F6EC29F6EC29F6EDECAABF0E7D3F0E7D3F0E7D3F0E7
      D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0E7D3F0
      E7D3DECAABC29F6EC29F6EC29F6EC29F6EC29F6EFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC3A170C3A170C3A170C3A170C3A170F0E7D4F0E7D4F0E7D4F0E7D4F0E7
      D4F0E7D4F0E7D4F0E7D4F0E7D4F0E7D4F0E7D4F0E7D4F0E7D4F0E7D4F0E7D4F0
      E7D4F0E7D4C3A170C3A170C3A170C3A170C3A170FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC4A272C4A272C4A272C4A272C4A272F1E9D6F1E9D6F1E9D6F1E9D6F1E9
      D6F1E9D6F1E9D6F1E9D6F1E9D6F1E9D6F1E9D6F1E9D6F1E9D6F1E9D6F1E9D6F1
      E9D6F1E9D6C4A272C4A272C4A272C4A272C4A272FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC5A474C5A474C5A474C5A474C5A474F2EAD9F2EAD9F2EAD9F2EAD9F2EA
      D9F2EAD9F2EAD9F2EAD9F2EAD9F2EAD9F2EAD9F2EAD9F2EAD9F2EAD9F2EAD9F2
      EAD9F2EAD9C5A474C5A474C5A474C5A474C5A474FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC6A576C6A576C6A576C6A576C6A576F4ECDCF4ECDCF4ECDCF4ECDCF4EC
      DCF4ECDCF4ECDCF4ECDCF4ECDCF4ECDCF4ECDCF4ECDCF4ECDCF4ECDCF4ECDCF4
      ECDCF4ECDCC6A576C6A576C6A576C6A576C6A576FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC7A677C7A677C7A677C7A677C7A677F5EEE0F5EEE0F5EEE0F5EEE0F5EE
      E0F5EEE0F5EEE0F5EEE0F5EEE0F5EEE0F5EEE0F5EEE0F5EEE0F5EEE0F5EEE0F5
      EEE0F5EEE0C7A677C7A677C7A677C7A677C7A677FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC8A879C8A879C8A879C8A879C8A879F6F0E3F6F0E3F6F0E3F6F0E3F6F0
      E3F6F0E3F6F0E3F6F0E3F6F0E3F6F0E3F6F0E3F6F0E3F6F0E3F6F0E3F6F0E3F6
      F0E3F6F0E3C8A879C8A879C8A879C8A879C8A879FFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFC9A97AC9A97AC9A97AC9A97AC9A97AF8F2E7F8F2E7F8F2E7F8F2E7F8F2
      E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8F2E7F8
      F2E7F8F2E7C9A97AC9A97AC9A97AC9A97AC9A97AFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFCAAA7CCAAA7CCAAA7CCAAA7CCAAA7CF8F3E9F8F3E9F8F3E9F8F3E9F8F3
      E9F8F3E9F8F3E9F8F3E9F8F3E9F8F3E9F8F3E9F8F3E9F8F3E9F8F3E9F8F3E9F8
      F3E9F8F3E9CAAA7CCAAA7CCAAA7CCAAA7CCAAA7CFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFCBAB7DCBAB7DCBAB7DCBAB7DCBAB7DF9F5EBF9F5EBF9F5EBF9F5EBF9F5
      EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9F5EBF9
      F5EBF9F5EBCBAB7DCBAB7DCBAB7DCBAB7DCBAB7DFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFCBAC7ECBAC7ECBAC7ECBAC7ECBAC7EFAF6EDFAF6EDFAF6EDFAF6EDFAF6
      EDFAF6EDFAF6EDFAF6EDFAF6EDFAF6EDFAF6EDFAF6EDFAF6EDFAF6EDFAF6EDFA
      F6EDFAF6EDCBAC7ECBAC7ECBAC7ECBAC7ECBAC7EFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FFBF7EFFBF7EFFBF7EFFBF7EFFBF7
      EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFBF7EFFB
      F7EFFBF7EFCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FFCF8F1FCF8F1FCF8F1FCF8F1FCF8
      F1FCF8F1FCF8F1FCF8F1FCF8F1FCF8F1FCF8F1FCF8F1FCF8F1FCF8F1FCF8F1FC
      F8F1FCF8F1CCAC7FCCAC7FCCAC7FCCAC7FCCAC7FFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFE6D6BFCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC
      7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FCC
      AC7FCCAC7FCCAC7FCCAC7FCCAC7FCCAC7FE6D6BFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF}
    ParentFont = False
    Spacing = 6
    TabOrder = 5
    OnClick = btnSalvarClick
  end
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 615
    Width = 175
    Height = 40
    DataSource = DM1.DSFiltroFichaPil
    VisibleButtons = [nbFirst, nbPrior, nbNext, nbLast, nbRefresh]
    TabOrder = 6
    OnClick = DBNavigator1Click
  end
  object btnExcluir: TBitBtn
    Left = 676
    Top = 615
    Width = 120
    Height = 40
    Caption = 'Excluir Ficha'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Glyph.Data = {
      360C0000424D360C000000000000360000002800000020000000200000000100
      180000000000000C0000C40E0000C40E00000000000000000000FDFDFDF5F5F5
      E9E9E9E3E3E3E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2
      E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2E2
      E2E2E2E2E2E2E2E2E2E2E2E2E2E2E3E3E3E8E8E8F4F4F4FDFDFDF5F5F5D6D6D6
      B7B7B7ABABABA9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9
      A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9A9
      A9A9A9A9A9A9A9A9A9A9A9A9A9A9AAAAAAB5B5B5D5D5D5F4F4F4A9A9C414146C
      0202630000620000620000620000620000620000620000620000620000620000
      6200006200006200006200006200006200006200006200006200006200006200
      0062000062000062000062000062080864686884B6B6B6E8E8E813136D030D91
      303BAF4758E04C5CE05161E15565E25B6AE3606FE46574E56B78E66F7DE67380
      E77783E87986E87A86E87986E87783E87380E76F7DE66B78E66574E5606FE45B
      6AE35565E25161E14C5CE03440B9050A7D0C0C67AAAAAAE3E3E30000622B36AD
      051ED50A22D61027D7162DD81D33D92339DA2A3FDB3145DC374BDD3D50DE4255
      DF4658E0485AE0495BE0485AE04658E04255DF3D50DE374BDD3145DC2A3FDB23
      39DA1D33D9162DD81027D70A22D62F3CB8000062A9A9A9E2E2E20000623E50DE
      011AD4051ED50921D60E26D6132AD71930D81E34D92439DA283DDB2D42DC3044
      DC3347DD3549DD3549DD3549DD3347DD3044DC2D42DC283DDB2439DA1E34D919
      30D8132AD70E26D60921D6051ED53F51DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D4031CD5061ED50A22D60E26D61229D7162DD81A30D81D33D91F35
      D92238DA2339DA2339DA2339DA2238DA1F35D91D33D91A30D8162DD81229D70E
      26D60A22D6061ED5031CD50019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D4021BD4041DD5061ED50921D60C24D60E26D61027
      D71128D71229D71229D71229D71128D71027D70E26D60C24D60921D6061ED504
      1DD5021BD40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D41930D8F5F6FD243ADA031CD5031C
      D5041DD5041DD5041DD5041DD5041DD5031CD56776E5E9EBFB051ED50019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D41930D8FFFFFFFFFFFFF5F6FD3347DD0019
      D40019D40019D40019D40019D40019D46070E4FEFEFFFFFFFFEFF1FC041DD500
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D41120B2F8F9FEFFFFFFFFFFFFFFFFFFF5F6FD3E51
      DE0019D40019D40019D40019D45A6AE3FDFDFFFFFFFFFFFFFFFFFFFFEFF1FC04
      1DD50019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D4000B96F5F6FDFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6
      FD4456DF0019D40019D45566E2FBFBFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFD9
      DDF90019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40E1899F5F6FDFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFF5F6FD4F60E15566E2F9FAFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF7F8FE11
      20B20019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40C1698F5F6FDFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD1120B200
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D4091498F5F6FDFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD1120B20019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D40019D4061197F5F6FDFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD0E1EB20019D40019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40019D40019D40019D40019D40019D4061197F5F6FDFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5F6FD0E1EB20019D40019D40019D400
      19D40019D40019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      0019D40019D40019D40B23D61C32D92B40DB384CDD4551C599A3EEF5F6FDFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF5364E24557E0384CDD2B40DB1C
      32D90B23D60019D40019D40019D43E50DE000062A9A9A9E2E2E20000623E50DE
      1E34D9364ADD4C5EE16271E56978E66978E66978E6A4ADF0FAFAFEFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6D7BE66978E66978E669
      78E66271E54C5EE1364ADD1E34D93E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E6A1ABEFFCFCFEFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6E7CE76978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E69EA7EFFDFDFEFFFFFFFFFFFFFFFFFFFFFF
      FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6E7CE769
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E69BA5EEFEFEFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
      FFF7F8FE8185C5757BC4FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFFFFFF6E
      7CE76978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E6696FC1EAECFBFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFAFA
      FE8185C56978E66978E6757BC4FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFDFDFEFF
      FFFF6978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E6696FC1F0F1FDFFFFFFFFFFFFFFFFFFF8F9FE7E83
      C56978E66978E66978E66978E6757BC4FFFFFFFFFFFFFFFFFFFCFCFEFFFFFF75
      83E86978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E6696FC1F1F2FDFFFFFFF6F7FD7E83C56978
      E66978E66978E66978E66978E66978E6757BC4FFFFFFFFFFFFFFFFFF707EE769
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E6696FC1E9ECFB7E83C56978E66978
      E66978E66978E66978E66978E66978E66978E6757BC4FFFFFF6E7CE76978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E66978E6696FC16978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66973D06978E66978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978E669
      78E66978E66978E66978E66978E63E50DE000062A9A9A9E2E2E20000623E50DE
      6978E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978E669
      78E66978E66978E66978E66675E53E50DE000062ACACACE3E3E30000623E4DD0
      4F60E16877E66978E66978E66978E66978E66978E66978E66978E66978E66978
      E66978E66978E66978E66978E66978E66978E66978E66978E66978E66978E669
      78E66978E66978E66978E65A6AE33E4ED1000062BDBDBDECECEC202076000781
      3E4DD03E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50
      DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E50DE3E
      50DE3E50DE3E50DE3E50DE3E4DCF000A8E262674DFDFDFF8F8F8E0E0EC202076
      0000620000620000620000620000620000620000620000620000620000620000
      6200006200006200006200006200006200006200006200006200006200006200
      0062000062000062000062000062282879DBDBE2F8F8F8FFFFFF}
    ParentFont = False
    Spacing = 6
    TabOrder = 7
    OnClick = btnExcluirClick
  end
end
