object DM1: TDM1
  OldCreateOrder = False
  Height = 515
  Width = 938
  object SQLCon: TSQLConnection
    ConnectionName = 'base_nsf'
    DriverName = 'Odbc'
    LoginPrompt = False
    Params.Strings = (
      'DriverName=Odbc'
      'DriverUnit=Data.DBXOdbc'
      'DriverPackageLoader=TDBXOdbcDriverLoader,DBXOdbcDriver250.bpl'
      
        'MetaDataPackageLoader=TDBXOdbcMetaDataCommandFactory,DbxOdbcDriv' +
        'er250.bpl'
      'IsolationLevel=ReadCommitted'
      'RowSetSize=20'
      
        'DriverAssemblyLoader=Borland.Data.TDBXOdbcDriverLoader,Borland.D' +
        'ata.DbxOdbcDriver,Version=24.0.0.0,Culture=neutral,PublicKeyToke' +
        'n=91d62ebb5b0d1b1b'
      
        'MetaDataAssemblyLoader=Borland.Data.TDBXOdbcMetaDataCommandFacto' +
        'ry,Borland.Data.DbxOdbcDriver,Version=24.0.0.0,Culture=neutral,P' +
        'ublicKeyToken=91d62ebb5b0d1b1b'
      'Database=base_nsf'
      'User_Name=root'
      'Password=22200828')
    Connected = True
    Left = 32
    Top = 8
  end
  object SQLDSPaciente: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `paciente`'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 32
    Top = 56
    object SQLDSPacientecod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object SQLDSPacientecpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object SQLDSPacientedata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object SQLDSPacienteidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object SQLDSPacientetelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object SQLDSPacientenome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object SQLDSPacienteendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object SQLDSPacienteapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DPSPaciente: TDataSetProvider
    DataSet = SQLDSPaciente
    Left = 32
    Top = 104
  end
  object CDSPaciente: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DPSPaciente'
    Left = 32
    Top = 152
    object CDSPacientecod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object CDSPacientecpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object CDSPacientedata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object CDSPacienteidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object CDSPacientetelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object CDSPacientenome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object CDSPacienteendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object CDSPacienteapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSPaciente: TDataSource
    DataSet = CDSPaciente
    Left = 32
    Top = 200
  end
  object SQLFichaFisio: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `ficha_fisio`'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 200
    Top = 56
    object SQLFichaFisiocod_ficha_fisio: TIntegerField
      FieldName = 'cod_ficha_fisio'
    end
    object SQLFichaFisiocod_paciente_ficha: TIntegerField
      FieldName = 'cod_paciente_ficha'
      Required = True
    end
    object SQLFichaFisiopatologia_fisio: TStringField
      FieldName = 'patologia_fisio'
      Size = 250
    end
    object SQLFichaFisiodata_avaliacao_fisio: TDateField
      FieldName = 'data_avaliacao_fisio'
      Required = True
    end
    object SQLFichaFisiodata_alta_fisio: TDateField
      FieldName = 'data_alta_fisio'
      Required = True
    end
    object SQLFichaFisiodata_inicio_tratamento_fisio: TDateField
      FieldName = 'data_inicio_tratamento_fisio'
      Required = True
    end
    object SQLFichaFisiohda_fisio: TStringField
      FieldName = 'hda_fisio'
      Size = 500
    end
    object SQLFichaFisioexames_realizados_fisio: TStringField
      FieldName = 'exames_realizados_fisio'
      Size = 250
    end
    object SQLFichaFisioconduta_fisio: TStringField
      FieldName = 'conduta_fisio'
      Size = 500
    end
    object SQLFichaFisiosessoes_realizadas_fisio: TIntegerField
      FieldName = 'sessoes_realizadas_fisio'
    end
    object SQLFichaFisioobservacoes_fisio: TStringField
      FieldName = 'observacoes_fisio'
      Size = 500
    end
  end
  object DSPFichaFisio: TDataSetProvider
    DataSet = SQLFichaFisio
    Left = 200
    Top = 104
  end
  object CDSFichaFisio: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFichaFisio'
    Left = 200
    Top = 152
    object CDSFichaFisiocod_ficha_fisio: TIntegerField
      FieldName = 'cod_ficha_fisio'
    end
    object CDSFichaFisiocod_paciente_ficha: TIntegerField
      FieldName = 'cod_paciente_ficha'
      Required = True
    end
    object CDSFichaFisiopatologia_fisio: TStringField
      FieldName = 'patologia_fisio'
      Size = 250
    end
    object CDSFichaFisiodata_avaliacao_fisio: TDateField
      FieldName = 'data_avaliacao_fisio'
      Required = True
    end
    object CDSFichaFisiodata_alta_fisio: TDateField
      FieldName = 'data_alta_fisio'
      Required = True
    end
    object CDSFichaFisiodata_inicio_tratamento_fisio: TDateField
      FieldName = 'data_inicio_tratamento_fisio'
      Required = True
    end
    object CDSFichaFisiohda_fisio: TStringField
      FieldName = 'hda_fisio'
      Size = 500
    end
    object CDSFichaFisioexames_realizados_fisio: TStringField
      FieldName = 'exames_realizados_fisio'
      Size = 250
    end
    object CDSFichaFisioconduta_fisio: TStringField
      FieldName = 'conduta_fisio'
      Size = 500
    end
    object CDSFichaFisiosessoes_realizadas_fisio: TIntegerField
      FieldName = 'sessoes_realizadas_fisio'
    end
    object CDSFichaFisioobservacoes_fisio: TStringField
      FieldName = 'observacoes_fisio'
      Size = 500
    end
  end
  object DSFichaFisio: TDataSource
    DataSet = CDSFichaFisio
    Left = 200
    Top = 200
  end
  object DSPFiltroFichaFisio: TDataSetProvider
    DataSet = SQLFiltroFichaFisio
    Left = 280
    Top = 104
  end
  object DSFiltroFichaFisio: TDataSource
    DataSet = CDSFiltroFichaFisio
    Left = 280
    Top = 200
  end
  object CDSFiltroFichaFisio: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroFichaFisio'
    Left = 280
    Top = 152
    object CDSFiltroFichaFisiocod_ficha_fisio: TIntegerField
      FieldName = 'cod_ficha_fisio'
    end
    object CDSFiltroFichaFisiocod_paciente_ficha: TIntegerField
      FieldName = 'cod_paciente_ficha'
      Required = True
    end
    object CDSFiltroFichaFisiopatologia_fisio: TStringField
      FieldName = 'patologia_fisio'
      Size = 250
    end
    object CDSFiltroFichaFisiodata_avaliacao_fisio: TDateField
      FieldName = 'data_avaliacao_fisio'
      Required = True
    end
    object CDSFiltroFichaFisiodata_alta_fisio: TDateField
      FieldName = 'data_alta_fisio'
      Required = True
    end
    object CDSFiltroFichaFisiodata_inicio_tratamento_fisio: TDateField
      FieldName = 'data_inicio_tratamento_fisio'
      Required = True
    end
    object CDSFiltroFichaFisiohda_fisio: TStringField
      FieldName = 'hda_fisio'
      Size = 500
    end
    object CDSFiltroFichaFisioexames_realizados_fisio: TStringField
      FieldName = 'exames_realizados_fisio'
      Size = 250
    end
    object CDSFiltroFichaFisioconduta_fisio: TStringField
      FieldName = 'conduta_fisio'
      Size = 500
    end
    object CDSFiltroFichaFisiosessoes_realizadas_fisio: TIntegerField
      FieldName = 'sessoes_realizadas_fisio'
    end
    object CDSFiltroFichaFisioobservacoes_fisio: TStringField
      FieldName = 'observacoes_fisio'
      Size = 500
    end
  end
  object SQLFiltroFichaFisio: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha ' +
        'LIKE '#39'%'#39';')
    SQLConnection = SQLCon
    Left = 280
    Top = 56
    object SQLFiltroFichaFisiocod_ficha_fisio: TIntegerField
      FieldName = 'cod_ficha_fisio'
    end
    object SQLFiltroFichaFisiocod_paciente_ficha: TIntegerField
      FieldName = 'cod_paciente_ficha'
      Required = True
    end
    object SQLFiltroFichaFisiopatologia_fisio: TStringField
      FieldName = 'patologia_fisio'
      Size = 250
    end
    object SQLFiltroFichaFisiodata_avaliacao_fisio: TDateField
      FieldName = 'data_avaliacao_fisio'
      Required = True
    end
    object SQLFiltroFichaFisiodata_alta_fisio: TDateField
      FieldName = 'data_alta_fisio'
      Required = True
    end
    object SQLFiltroFichaFisiodata_inicio_tratamento_fisio: TDateField
      FieldName = 'data_inicio_tratamento_fisio'
      Required = True
    end
    object SQLFiltroFichaFisiohda_fisio: TStringField
      FieldName = 'hda_fisio'
      Size = 500
    end
    object SQLFiltroFichaFisioexames_realizados_fisio: TStringField
      FieldName = 'exames_realizados_fisio'
      Size = 250
    end
    object SQLFiltroFichaFisioconduta_fisio: TStringField
      FieldName = 'conduta_fisio'
      Size = 500
    end
    object SQLFiltroFichaFisiosessoes_realizadas_fisio: TIntegerField
      FieldName = 'sessoes_realizadas_fisio'
    end
    object SQLFiltroFichaFisioobservacoes_fisio: TStringField
      FieldName = 'observacoes_fisio'
      Size = 500
    end
  end
  object SQLParcelas: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `parcelas_ficha_fisio`;'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 360
    Top = 56
    object SQLParcelascod_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_parcela_ficha_fisio'
    end
    object SQLParcelascod_cliente_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_fisio'
      Required = True
    end
    object SQLParcelascod_ficha_parcela_fisio: TIntegerField
      FieldName = 'cod_ficha_parcela_fisio'
      Required = True
    end
    object SQLParcelasvalor_parcela_ficha_fisio: TStringField
      FieldName = 'valor_parcela_ficha_fisio'
      Size = 10
    end
    object SQLParcelasdata_venc_parcela_ficha_fisio: TDateField
      FieldName = 'data_venc_parcela_ficha_fisio'
    end
    object SQLParcelasdata_pag_parcela_ficha_fisio: TDateField
      FieldName = 'data_pag_parcela_ficha_fisio'
    end
  end
  object DSPParcelas: TDataSetProvider
    DataSet = SQLParcelas
    Left = 360
    Top = 104
  end
  object CDSParcelas: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPParcelas'
    Left = 360
    Top = 152
    object CDSParcelascod_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_parcela_ficha_fisio'
    end
    object CDSParcelascod_cliente_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_fisio'
      Required = True
    end
    object CDSParcelascod_ficha_parcela_fisio: TIntegerField
      FieldName = 'cod_ficha_parcela_fisio'
      Required = True
    end
    object CDSParcelasvalor_parcela_ficha_fisio: TStringField
      FieldName = 'valor_parcela_ficha_fisio'
      Size = 10
    end
    object CDSParcelasdata_venc_parcela_ficha_fisio: TDateField
      FieldName = 'data_venc_parcela_ficha_fisio'
    end
    object CDSParcelasdata_pag_parcela_ficha_fisio: TDateField
      FieldName = 'data_pag_parcela_ficha_fisio'
    end
  end
  object DSParcelas: TDataSource
    DataSet = CDSParcelas
    Left = 360
    Top = 200
  end
  object SQLFiltroPaciente: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      'SELECT * FROM paciente;')
    SQLConnection = SQLCon
    Left = 120
    Top = 56
    object SQLFiltroPacientecod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object SQLFiltroPacientecpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object SQLFiltroPacientedata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object SQLFiltroPacienteidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object SQLFiltroPacientetelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object SQLFiltroPacientenome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object SQLFiltroPacienteendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object SQLFiltroPacienteapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSPFiltroPaciente: TDataSetProvider
    DataSet = SQLFiltroPaciente
    Left = 120
    Top = 104
  end
  object cdsFiltroPaciente: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroPaciente'
    Left = 120
    Top = 152
    object cdsFiltroPacientecod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object cdsFiltroPacientecpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object cdsFiltroPacientedata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object cdsFiltroPacienteidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object cdsFiltroPacientetelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object cdsFiltroPacientenome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object cdsFiltroPacienteendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object cdsFiltroPacienteapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSFiltroPaciente: TDataSource
    DataSet = SQLFiltroPaciente
    Left = 120
    Top = 200
  end
  object SQLFiltroParcelas: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      'SELECT * FROM parcelas_ficha_fisio;')
    SQLConnection = SQLCon
    Left = 440
    Top = 56
    object SQLFiltroParcelascod_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_parcela_ficha_fisio'
    end
    object SQLFiltroParcelascod_cliente_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_fisio'
      Required = True
    end
    object SQLFiltroParcelascod_ficha_parcela_fisio: TIntegerField
      FieldName = 'cod_ficha_parcela_fisio'
      Required = True
    end
    object SQLFiltroParcelasvalor_parcela_ficha_fisio: TStringField
      FieldName = 'valor_parcela_ficha_fisio'
      Size = 10
    end
    object SQLFiltroParcelasdata_venc_parcela_ficha_fisio: TDateField
      FieldName = 'data_venc_parcela_ficha_fisio'
    end
    object SQLFiltroParcelasdata_pag_parcela_ficha_fisio: TDateField
      FieldName = 'data_pag_parcela_ficha_fisio'
    end
  end
  object DSPFiltroParcelas: TDataSetProvider
    DataSet = SQLFiltroParcelas
    Left = 440
    Top = 104
  end
  object CDSFiltroParcelas: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroParcelas'
    Left = 440
    Top = 152
    object CDSFiltroParcelascod_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_parcela_ficha_fisio'
    end
    object CDSFiltroParcelascod_cliente_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_fisio'
      Required = True
    end
    object CDSFiltroParcelascod_ficha_parcela_fisio: TIntegerField
      FieldName = 'cod_ficha_parcela_fisio'
      Required = True
    end
    object CDSFiltroParcelasvalor_parcela_ficha_fisio: TStringField
      FieldName = 'valor_parcela_ficha_fisio'
      Size = 10
    end
    object CDSFiltroParcelasdata_venc_parcela_ficha_fisio: TDateField
      FieldName = 'data_venc_parcela_ficha_fisio'
    end
    object CDSFiltroParcelasdata_pag_parcela_ficha_fisio: TDateField
      FieldName = 'data_pag_parcela_ficha_fisio'
    end
  end
  object DSFiltroParcelas: TDataSource
    DataSet = CDSFiltroParcelas
    Left = 440
    Top = 200
  end
  object SQLFiltroAtrasados: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'SELECT * FROM parcelas_ficha_fisio, paciente WHERE parcelas_fich' +
        'a_fisio.cod_cliente_parcela_ficha_fisio = paciente.cod_paciente ' +
        ' AND parcelas_ficha_fisio.data_pag_parcela_ficha_fisio = "1601/0' +
        '1/01";')
    SQLConnection = SQLCon
    Left = 536
    Top = 56
    object SQLFiltroAtrasadoscod_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_parcela_ficha_fisio'
    end
    object SQLFiltroAtrasadoscod_cliente_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_fisio'
      Required = True
    end
    object SQLFiltroAtrasadoscod_ficha_parcela_fisio: TIntegerField
      FieldName = 'cod_ficha_parcela_fisio'
      Required = True
    end
    object SQLFiltroAtrasadosvalor_parcela_ficha_fisio: TStringField
      FieldName = 'valor_parcela_ficha_fisio'
      Size = 10
    end
    object SQLFiltroAtrasadosdata_venc_parcela_ficha_fisio: TDateField
      FieldName = 'data_venc_parcela_ficha_fisio'
    end
    object SQLFiltroAtrasadosdata_pag_parcela_ficha_fisio: TDateField
      FieldName = 'data_pag_parcela_ficha_fisio'
    end
    object SQLFiltroAtrasadoscod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object SQLFiltroAtrasadoscpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object SQLFiltroAtrasadosdata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object SQLFiltroAtrasadosidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object SQLFiltroAtrasadostelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object SQLFiltroAtrasadosnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object SQLFiltroAtrasadosendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object SQLFiltroAtrasadosapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSPFiltroAtrasados: TDataSetProvider
    DataSet = SQLFiltroAtrasados
    Left = 536
    Top = 104
  end
  object DSFiltroAtrasados: TDataSource
    DataSet = CDSFiltroAtrasados
    Left = 536
    Top = 200
  end
  object CDSFiltroAtrasados: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroAtrasados'
    Left = 536
    Top = 152
    object CDSFiltroAtrasadoscod_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_parcela_ficha_fisio'
    end
    object CDSFiltroAtrasadoscod_cliente_parcela_ficha_fisio: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_fisio'
      Required = True
    end
    object CDSFiltroAtrasadoscod_ficha_parcela_fisio: TIntegerField
      FieldName = 'cod_ficha_parcela_fisio'
      Required = True
    end
    object CDSFiltroAtrasadosvalor_parcela_ficha_fisio: TStringField
      FieldName = 'valor_parcela_ficha_fisio'
      Size = 10
    end
    object CDSFiltroAtrasadosdata_venc_parcela_ficha_fisio: TDateField
      FieldName = 'data_venc_parcela_ficha_fisio'
    end
    object CDSFiltroAtrasadosdata_pag_parcela_ficha_fisio: TDateField
      FieldName = 'data_pag_parcela_ficha_fisio'
    end
    object CDSFiltroAtrasadoscod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object CDSFiltroAtrasadoscpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object CDSFiltroAtrasadosdata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object CDSFiltroAtrasadosidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object CDSFiltroAtrasadostelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object CDSFiltroAtrasadosnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object CDSFiltroAtrasadosendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object CDSFiltroAtrasadosapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object SQLDSPilates: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `ficha_pilates`'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 32
    Top = 272
    object SQLDSPilatescod_ficha_pilates: TIntegerField
      FieldName = 'cod_ficha_pilates'
    end
    object SQLDSPilatescod_paciente_ficha_pil: TIntegerField
      FieldName = 'cod_paciente_ficha_pil'
      Required = True
    end
    object SQLDSPilatesfrequencia_pilates: TStringField
      FieldName = 'frequencia_pilates'
      Size = 45
    end
    object SQLDSPilatesdias_pilates: TStringField
      FieldName = 'dias_pilates'
      Size = 100
    end
    object SQLDSPilateshorario_pilates: TStringField
      FieldName = 'horario_pilates'
      Size = 45
    end
    object SQLDSPilatesdata_inicio_pilates: TDateField
      FieldName = 'data_inicio_pilates'
    end
    object SQLDSPilatesatividade_fisica_pilates: TIntegerField
      FieldName = 'atividade_fisica_pilates'
    end
    object SQLDSPilatestempo_parado_pilates: TStringField
      FieldName = 'tempo_parado_pilates'
      Size = 45
    end
    object SQLDSPilatestabagismo_pilates: TStringField
      FieldName = 'tabagismo_pilates'
      Size = 45
    end
    object SQLDSPilateslabirintite_pilates: TStringField
      FieldName = 'labirintite_pilates'
      Size = 45
    end
    object SQLDSPilatesrestricoes_pilates: TStringField
      FieldName = 'restricoes_pilates'
      Size = 45
    end
    object SQLDSPilatesalteracao_cardio_pilates: TStringField
      FieldName = 'alteracao_cardio_pilates'
      Size = 45
    end
    object SQLDSPilatesalteracao_metab_pilates: TStringField
      FieldName = 'alteracao_metab_pilates'
      Size = 45
    end
    object SQLDSPilatesmedicamentos_pilates: TStringField
      FieldName = 'medicamentos_pilates'
      Size = 100
    end
    object SQLDSPilatesdores_pilates: TStringField
      FieldName = 'dores_pilates'
      Size = 45
    end
    object SQLDSPilatesdesvio_pilates: TStringField
      FieldName = 'desvio_pilates'
      Size = 45
    end
    object SQLDSPilatesalergia_pilates: TStringField
      FieldName = 'alergia_pilates'
      Size = 100
    end
    object SQLDSPilateslesao_pilates: TStringField
      FieldName = 'lesao_pilates'
      Size = 45
    end
    object SQLDSPilatespratica_pilates: TStringField
      FieldName = 'pratica_pilates'
      Size = 45
    end
    object SQLDSPilatescirurgia_pilates: TStringField
      FieldName = 'cirurgia_pilates'
      Size = 45
    end
    object SQLDSPilatesult_atividade_pilates: TStringField
      FieldName = 'ult_atividade_pilates'
      Size = 45
    end
    object SQLDSPilatesdoencas_hered_pilates: TStringField
      FieldName = 'doencas_hered_pilates'
      Size = 100
    end
    object SQLDSPilatesindicacoes_med_pilates: TStringField
      FieldName = 'indicacoes_med_pilates'
      Size = 150
    end
    object SQLDSPilatesexame_fis_pilates: TStringField
      FieldName = 'exame_fis_pilates'
      Size = 45
    end
  end
  object DSPPilates: TDataSetProvider
    DataSet = SQLDSPilates
    Left = 32
    Top = 320
  end
  object CDSPilates: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPPilates'
    Left = 32
    Top = 368
    object CDSPilatescod_ficha_pilates: TIntegerField
      FieldName = 'cod_ficha_pilates'
    end
    object CDSPilatescod_paciente_ficha_pil: TIntegerField
      FieldName = 'cod_paciente_ficha_pil'
      Required = True
    end
    object CDSPilatesfrequencia_pilates: TStringField
      FieldName = 'frequencia_pilates'
      Size = 45
    end
    object CDSPilatesdias_pilates: TStringField
      FieldName = 'dias_pilates'
      Size = 100
    end
    object CDSPilateshorario_pilates: TStringField
      FieldName = 'horario_pilates'
      Size = 45
    end
    object CDSPilatesdata_inicio_pilates: TDateField
      FieldName = 'data_inicio_pilates'
    end
    object CDSPilatesatividade_fisica_pilates: TIntegerField
      FieldName = 'atividade_fisica_pilates'
    end
    object CDSPilatestempo_parado_pilates: TStringField
      FieldName = 'tempo_parado_pilates'
      Size = 45
    end
    object CDSPilatestabagismo_pilates: TStringField
      FieldName = 'tabagismo_pilates'
      Size = 45
    end
    object CDSPilateslabirintite_pilates: TStringField
      FieldName = 'labirintite_pilates'
      Size = 45
    end
    object CDSPilatesrestricoes_pilates: TStringField
      FieldName = 'restricoes_pilates'
      Size = 45
    end
    object CDSPilatesalteracao_cardio_pilates: TStringField
      FieldName = 'alteracao_cardio_pilates'
      Size = 45
    end
    object CDSPilatesalteracao_metab_pilates: TStringField
      FieldName = 'alteracao_metab_pilates'
      Size = 45
    end
    object CDSPilatesmedicamentos_pilates: TStringField
      FieldName = 'medicamentos_pilates'
      Size = 100
    end
    object CDSPilatesdores_pilates: TStringField
      FieldName = 'dores_pilates'
      Size = 45
    end
    object CDSPilatesdesvio_pilates: TStringField
      FieldName = 'desvio_pilates'
      Size = 45
    end
    object CDSPilatesalergia_pilates: TStringField
      FieldName = 'alergia_pilates'
      Size = 100
    end
    object CDSPilateslesao_pilates: TStringField
      FieldName = 'lesao_pilates'
      Size = 45
    end
    object CDSPilatespratica_pilates: TStringField
      FieldName = 'pratica_pilates'
      Size = 45
    end
    object CDSPilatescirurgia_pilates: TStringField
      FieldName = 'cirurgia_pilates'
      Size = 45
    end
    object CDSPilatesult_atividade_pilates: TStringField
      FieldName = 'ult_atividade_pilates'
      Size = 45
    end
    object CDSPilatesdoencas_hered_pilates: TStringField
      FieldName = 'doencas_hered_pilates'
      Size = 100
    end
    object CDSPilatesindicacoes_med_pilates: TStringField
      FieldName = 'indicacoes_med_pilates'
      Size = 150
    end
    object CDSPilatesexame_fis_pilates: TStringField
      FieldName = 'exame_fis_pilates'
      Size = 45
    end
  end
  object DSPilates: TDataSource
    DataSet = CDSPilates
    Left = 32
    Top = 416
  end
  object SQLFiltroFichaPil: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_fi' +
        'cha_pil LIKE '#39'%'#39';')
    SQLConnection = SQLCon
    Left = 112
    Top = 272
    object SQLFiltroFichaPilcod_ficha_pilates: TIntegerField
      FieldName = 'cod_ficha_pilates'
    end
    object SQLFiltroFichaPilcod_paciente_ficha_pil: TIntegerField
      FieldName = 'cod_paciente_ficha_pil'
      Required = True
    end
    object SQLFiltroFichaPilfrequencia_pilates: TStringField
      FieldName = 'frequencia_pilates'
      Size = 45
    end
    object SQLFiltroFichaPildias_pilates: TStringField
      FieldName = 'dias_pilates'
      Size = 100
    end
    object SQLFiltroFichaPilhorario_pilates: TStringField
      FieldName = 'horario_pilates'
      Size = 45
    end
    object SQLFiltroFichaPildata_inicio_pilates: TDateField
      FieldName = 'data_inicio_pilates'
    end
    object SQLFiltroFichaPilatividade_fisica_pilates: TIntegerField
      FieldName = 'atividade_fisica_pilates'
    end
    object SQLFiltroFichaPiltempo_parado_pilates: TStringField
      FieldName = 'tempo_parado_pilates'
      Size = 45
    end
    object SQLFiltroFichaPiltabagismo_pilates: TStringField
      FieldName = 'tabagismo_pilates'
      Size = 45
    end
    object SQLFiltroFichaPillabirintite_pilates: TStringField
      FieldName = 'labirintite_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilrestricoes_pilates: TStringField
      FieldName = 'restricoes_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilalteracao_cardio_pilates: TStringField
      FieldName = 'alteracao_cardio_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilalteracao_metab_pilates: TStringField
      FieldName = 'alteracao_metab_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilmedicamentos_pilates: TStringField
      FieldName = 'medicamentos_pilates'
      Size = 100
    end
    object SQLFiltroFichaPildores_pilates: TStringField
      FieldName = 'dores_pilates'
      Size = 45
    end
    object SQLFiltroFichaPildesvio_pilates: TStringField
      FieldName = 'desvio_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilalergia_pilates: TStringField
      FieldName = 'alergia_pilates'
      Size = 100
    end
    object SQLFiltroFichaPillesao_pilates: TStringField
      FieldName = 'lesao_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilpratica_pilates: TStringField
      FieldName = 'pratica_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilcirurgia_pilates: TStringField
      FieldName = 'cirurgia_pilates'
      Size = 45
    end
    object SQLFiltroFichaPilult_atividade_pilates: TStringField
      FieldName = 'ult_atividade_pilates'
      Size = 45
    end
    object SQLFiltroFichaPildoencas_hered_pilates: TStringField
      FieldName = 'doencas_hered_pilates'
      Size = 100
    end
    object SQLFiltroFichaPilindicacoes_med_pilates: TStringField
      FieldName = 'indicacoes_med_pilates'
      Size = 150
    end
    object SQLFiltroFichaPilexame_fis_pilates: TStringField
      FieldName = 'exame_fis_pilates'
      Size = 45
    end
  end
  object DSPFiltroFichaPil: TDataSetProvider
    DataSet = SQLFiltroFichaPil
    Left = 112
    Top = 320
  end
  object CDSFiltroFichaPil: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroFichaPil'
    Left = 112
    Top = 368
    object CDSFiltroFichaPilcod_ficha_pilates: TIntegerField
      FieldName = 'cod_ficha_pilates'
    end
    object CDSFiltroFichaPilcod_paciente_ficha_pil: TIntegerField
      FieldName = 'cod_paciente_ficha_pil'
      Required = True
    end
    object CDSFiltroFichaPilfrequencia_pilates: TStringField
      FieldName = 'frequencia_pilates'
      Size = 45
    end
    object CDSFiltroFichaPildias_pilates: TStringField
      FieldName = 'dias_pilates'
      Size = 100
    end
    object CDSFiltroFichaPilhorario_pilates: TStringField
      FieldName = 'horario_pilates'
      Size = 45
    end
    object CDSFiltroFichaPildata_inicio_pilates: TDateField
      FieldName = 'data_inicio_pilates'
    end
    object CDSFiltroFichaPilatividade_fisica_pilates: TIntegerField
      FieldName = 'atividade_fisica_pilates'
    end
    object CDSFiltroFichaPiltempo_parado_pilates: TStringField
      FieldName = 'tempo_parado_pilates'
      Size = 45
    end
    object CDSFiltroFichaPiltabagismo_pilates: TStringField
      FieldName = 'tabagismo_pilates'
      Size = 45
    end
    object CDSFiltroFichaPillabirintite_pilates: TStringField
      FieldName = 'labirintite_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilrestricoes_pilates: TStringField
      FieldName = 'restricoes_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilalteracao_cardio_pilates: TStringField
      FieldName = 'alteracao_cardio_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilalteracao_metab_pilates: TStringField
      FieldName = 'alteracao_metab_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilmedicamentos_pilates: TStringField
      FieldName = 'medicamentos_pilates'
      Size = 100
    end
    object CDSFiltroFichaPildores_pilates: TStringField
      FieldName = 'dores_pilates'
      Size = 45
    end
    object CDSFiltroFichaPildesvio_pilates: TStringField
      FieldName = 'desvio_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilalergia_pilates: TStringField
      FieldName = 'alergia_pilates'
      Size = 100
    end
    object CDSFiltroFichaPillesao_pilates: TStringField
      FieldName = 'lesao_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilpratica_pilates: TStringField
      FieldName = 'pratica_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilcirurgia_pilates: TStringField
      FieldName = 'cirurgia_pilates'
      Size = 45
    end
    object CDSFiltroFichaPilult_atividade_pilates: TStringField
      FieldName = 'ult_atividade_pilates'
      Size = 45
    end
    object CDSFiltroFichaPildoencas_hered_pilates: TStringField
      FieldName = 'doencas_hered_pilates'
      Size = 100
    end
    object CDSFiltroFichaPilindicacoes_med_pilates: TStringField
      FieldName = 'indicacoes_med_pilates'
      Size = 150
    end
    object CDSFiltroFichaPilexame_fis_pilates: TStringField
      FieldName = 'exame_fis_pilates'
      Size = 45
    end
  end
  object DSFiltroFichaPil: TDataSource
    DataSet = CDSFiltroFichaPil
    Left = 112
    Top = 416
  end
  object SQLDSParcelasPil: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `parcelas_ficha_pil`;'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 200
    Top = 272
    object SQLDSParcelasPilcod_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_parcela_ficha_pil'
    end
    object SQLDSParcelasPilcod_cliente_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_pil'
      Required = True
    end
    object SQLDSParcelasPilcod_ficha_parcela_pil: TIntegerField
      FieldName = 'cod_ficha_parcela_pil'
      Required = True
    end
    object SQLDSParcelasPilvalor_parcela_ficha_pil: TStringField
      FieldName = 'valor_parcela_ficha_pil'
      Size = 10
    end
    object SQLDSParcelasPildata_venc_parcela_ficha_pil: TDateField
      FieldName = 'data_venc_parcela_ficha_pil'
    end
    object SQLDSParcelasPildata_pag_parcela_ficha_pil: TDateField
      FieldName = 'data_pag_parcela_ficha_pil'
    end
  end
  object DSPParcelasPil: TDataSetProvider
    DataSet = SQLDSParcelasPil
    Left = 200
    Top = 320
  end
  object CDSParcelasPil: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPParcelasPil'
    Left = 200
    Top = 368
    object CDSParcelasPilcod_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_parcela_ficha_pil'
    end
    object CDSParcelasPilcod_cliente_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_pil'
      Required = True
    end
    object CDSParcelasPilcod_ficha_parcela_pil: TIntegerField
      FieldName = 'cod_ficha_parcela_pil'
      Required = True
    end
    object CDSParcelasPilvalor_parcela_ficha_pil: TStringField
      FieldName = 'valor_parcela_ficha_pil'
      Size = 10
    end
    object CDSParcelasPildata_venc_parcela_ficha_pil: TDateField
      FieldName = 'data_venc_parcela_ficha_pil'
    end
    object CDSParcelasPildata_pag_parcela_ficha_pil: TDateField
      FieldName = 'data_pag_parcela_ficha_pil'
    end
  end
  object DSParcelasPil: TDataSource
    DataSet = CDSParcelasPil
    Left = 200
    Top = 416
  end
  object SQLFiltroParcelasPil: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      'SELECT * FROM parcelas_ficha_pil;')
    SQLConnection = SQLCon
    Left = 296
    Top = 272
    object SQLFiltroParcelasPilcod_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_parcela_ficha_pil'
    end
    object SQLFiltroParcelasPilcod_cliente_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_pil'
      Required = True
    end
    object SQLFiltroParcelasPilcod_ficha_parcela_pil: TIntegerField
      FieldName = 'cod_ficha_parcela_pil'
      Required = True
    end
    object SQLFiltroParcelasPilvalor_parcela_ficha_pil: TStringField
      FieldName = 'valor_parcela_ficha_pil'
      Size = 10
    end
    object SQLFiltroParcelasPildata_venc_parcela_ficha_pil: TDateField
      FieldName = 'data_venc_parcela_ficha_pil'
    end
    object SQLFiltroParcelasPildata_pag_parcela_ficha_pil: TDateField
      FieldName = 'data_pag_parcela_ficha_pil'
    end
  end
  object DSPFiltroParcelasPil: TDataSetProvider
    DataSet = SQLFiltroParcelasPil
    Left = 296
    Top = 320
  end
  object CDSFiltroParcelasPil: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroParcelasPil'
    Left = 296
    Top = 368
    object CDSFiltroParcelasPilcod_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_parcela_ficha_pil'
    end
    object CDSFiltroParcelasPilcod_cliente_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_pil'
      Required = True
    end
    object CDSFiltroParcelasPilcod_ficha_parcela_pil: TIntegerField
      FieldName = 'cod_ficha_parcela_pil'
      Required = True
    end
    object CDSFiltroParcelasPilvalor_parcela_ficha_pil: TStringField
      FieldName = 'valor_parcela_ficha_pil'
      Size = 10
    end
    object CDSFiltroParcelasPildata_venc_parcela_ficha_pil: TDateField
      FieldName = 'data_venc_parcela_ficha_pil'
    end
    object CDSFiltroParcelasPildata_pag_parcela_ficha_pil: TDateField
      FieldName = 'data_pag_parcela_ficha_pil'
    end
  end
  object DSFiltroParcelasPil: TDataSource
    DataSet = CDSFiltroParcelasPil
    Left = 296
    Top = 416
  end
  object SQLFiltroAtrasadosPil: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'SELECT * FROM parcelas_ficha_pil, paciente WHERE parcelas_ficha_' +
        'pil.cod_cliente_parcela_ficha_pil = paciente.cod_paciente  AND p' +
        'arcelas_ficha_pil.data_pag_parcela_ficha_pil = "1601/01/01";')
    SQLConnection = SQLCon
    Left = 400
    Top = 272
    object SQLFiltroAtrasadosPilcod_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_parcela_ficha_pil'
    end
    object SQLFiltroAtrasadosPilcod_cliente_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_pil'
      Required = True
    end
    object SQLFiltroAtrasadosPilcod_ficha_parcela_pil: TIntegerField
      FieldName = 'cod_ficha_parcela_pil'
      Required = True
    end
    object SQLFiltroAtrasadosPilvalor_parcela_ficha_pil: TStringField
      FieldName = 'valor_parcela_ficha_pil'
      Size = 10
    end
    object SQLFiltroAtrasadosPildata_venc_parcela_ficha_pil: TDateField
      FieldName = 'data_venc_parcela_ficha_pil'
    end
    object SQLFiltroAtrasadosPildata_pag_parcela_ficha_pil: TDateField
      FieldName = 'data_pag_parcela_ficha_pil'
    end
    object SQLFiltroAtrasadosPilcod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object SQLFiltroAtrasadosPilcpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object SQLFiltroAtrasadosPildata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object SQLFiltroAtrasadosPilidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object SQLFiltroAtrasadosPiltelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object SQLFiltroAtrasadosPilnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object SQLFiltroAtrasadosPilendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object SQLFiltroAtrasadosPilapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSPFiltroAtrasadosPil: TDataSetProvider
    DataSet = SQLFiltroAtrasadosPil
    Left = 400
    Top = 320
  end
  object CDSFiltroAtrasadosPil: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroAtrasadosPil'
    Left = 400
    Top = 368
    object CDSFiltroAtrasadosPilcod_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_parcela_ficha_pil'
    end
    object CDSFiltroAtrasadosPilcod_cliente_parcela_ficha_pil: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_pil'
      Required = True
    end
    object CDSFiltroAtrasadosPilcod_ficha_parcela_pil: TIntegerField
      FieldName = 'cod_ficha_parcela_pil'
      Required = True
    end
    object CDSFiltroAtrasadosPilvalor_parcela_ficha_pil: TStringField
      FieldName = 'valor_parcela_ficha_pil'
      Size = 10
    end
    object CDSFiltroAtrasadosPildata_venc_parcela_ficha_pil: TDateField
      FieldName = 'data_venc_parcela_ficha_pil'
    end
    object CDSFiltroAtrasadosPildata_pag_parcela_ficha_pil: TDateField
      FieldName = 'data_pag_parcela_ficha_pil'
    end
    object CDSFiltroAtrasadosPilcod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object CDSFiltroAtrasadosPilcpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object CDSFiltroAtrasadosPildata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object CDSFiltroAtrasadosPilidade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object CDSFiltroAtrasadosPiltelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object CDSFiltroAtrasadosPilnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object CDSFiltroAtrasadosPilendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object CDSFiltroAtrasadosPilapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSFiltroAtrasadosPil: TDataSource
    DataSet = CDSFiltroAtrasadosPil
    Left = 400
    Top = 416
  end
  object SQLDSHidro: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `ficha_hidro`'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 488
    Top = 272
    object SQLDSHidrocod_ficha_hidro: TIntegerField
      FieldName = 'cod_ficha_hidro'
    end
    object SQLDSHidrocod_pacinte_ficha_hidro: TIntegerField
      FieldName = 'cod_pacinte_ficha_hidro'
      Required = True
    end
    object SQLDSHidrofrequencia_hidro: TStringField
      FieldName = 'frequencia_hidro'
      Size = 45
    end
    object SQLDSHidrodias_hidro: TStringField
      FieldName = 'dias_hidro'
      Size = 45
    end
    object SQLDSHidrohorario_hidro: TStringField
      FieldName = 'horario_hidro'
      Size = 45
    end
    object SQLDSHidrodata_inicio_hidro: TDateField
      FieldName = 'data_inicio_hidro'
    end
    object SQLDSHidrogrupo_mmss_hidro: TStringField
      FieldName = 'grupo_mmss_hidro'
      Size = 45
    end
    object SQLDSHidrogrupo_mmii_hidro: TStringField
      FieldName = 'grupo_mmii_hidro'
      Size = 45
    end
    object SQLDSHidrorestricoes_hidro: TStringField
      FieldName = 'restricoes_hidro'
      Size = 45
    end
    object SQLDSHidroalteracoes_hidro: TStringField
      FieldName = 'alteracoes_hidro'
      Size = 45
    end
    object SQLDSHidroprat_ativ_fis_hidro: TStringField
      FieldName = 'prat_ativ_fis_hidro'
      Size = 100
    end
    object SQLDSHidrotabagismo_hidro: TStringField
      FieldName = 'tabagismo_hidro'
      Size = 45
    end
    object SQLDSHidroprob_resp_hidro: TStringField
      FieldName = 'prob_resp_hidro'
      Size = 45
    end
    object SQLDSHidroalergia_hidro: TStringField
      FieldName = 'alergia_hidro'
      Size = 100
    end
    object SQLDSHidromedicamentos_hidro: TStringField
      FieldName = 'medicamentos_hidro'
      Size = 100
    end
    object SQLDSHidroferimento_hidro: TStringField
      FieldName = 'ferimento_hidro'
      Size = 45
    end
    object SQLDSHidroinsuficiencia_uri_hidro: TStringField
      FieldName = 'insuficiencia_uri_hidro'
      Size = 45
    end
    object SQLDSHidropeso_hidro: TFloatField
      FieldName = 'peso_hidro'
    end
    object SQLDSHidroaltura_hidro: TFloatField
      FieldName = 'altura_hidro'
    end
    object SQLDSHidroimc_hidro: TFloatField
      FieldName = 'imc_hidro'
    end
    object SQLDSHidrolabirintite_hidro: TStringField
      FieldName = 'labirintite_hidro'
      Size = 45
    end
    object SQLDSHidrocirurgia_hidro: TStringField
      FieldName = 'cirurgia_hidro'
      Size = 45
    end
    object SQLDSHidroinflamacao_hidro: TStringField
      FieldName = 'inflamacao_hidro'
      Size = 45
    end
    object SQLDSHidrodoencas_hered_hidro: TStringField
      FieldName = 'doencas_hered_hidro'
      Size = 100
    end
    object SQLDSHidrohipertensao_hidro: TStringField
      FieldName = 'hipertensao_hidro'
      Size = 45
    end
    object SQLDSHidroPA_hidro: TStringField
      FieldName = 'PA_hidro'
      Size = 45
    end
    object SQLDSHidrodiabetes_hidro: TStringField
      FieldName = 'diabetes_hidro'
      Size = 45
    end
    object SQLDSHidrosaturacao_hidro: TStringField
      FieldName = 'saturacao_hidro'
      Size = 45
    end
    object SQLDSHidrobicipital_hidro: TStringField
      FieldName = 'bicipital_hidro'
      Size = 45
    end
    object SQLDSHidropatelar_hidro: TStringField
      FieldName = 'patelar_hidro'
      Size = 45
    end
    object SQLDSHidroaquileu_hidro: TStringField
      FieldName = 'aquileu_hidro'
      Size = 45
    end
    object SQLDSHidroequilibrio_hidro: TStringField
      FieldName = 'equilibrio_hidro'
      Size = 45
    end
    object SQLDSHidroromberg_hidro: TStringField
      FieldName = 'romberg_hidro'
      Size = 45
    end
    object SQLDSHidrodedo_nariz_hidro: TStringField
      FieldName = 'dedo_nariz_hidro'
      Size = 45
    end
    object SQLDSHidrocalcanhar_hidro: TStringField
      FieldName = 'calcanhar_hidro'
      Size = 45
    end
  end
  object DSPHidro: TDataSetProvider
    DataSet = SQLDSHidro
    Left = 488
    Top = 320
  end
  object CDSHidro: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPHidro'
    Left = 488
    Top = 368
    object CDSHidrocod_ficha_hidro: TIntegerField
      FieldName = 'cod_ficha_hidro'
    end
    object CDSHidrocod_pacinte_ficha_hidro: TIntegerField
      FieldName = 'cod_pacinte_ficha_hidro'
      Required = True
    end
    object CDSHidrofrequencia_hidro: TStringField
      FieldName = 'frequencia_hidro'
      Size = 45
    end
    object CDSHidrodias_hidro: TStringField
      FieldName = 'dias_hidro'
      Size = 45
    end
    object CDSHidrohorario_hidro: TStringField
      FieldName = 'horario_hidro'
      Size = 45
    end
    object CDSHidrodata_inicio_hidro: TDateField
      FieldName = 'data_inicio_hidro'
    end
    object CDSHidrogrupo_mmss_hidro: TStringField
      FieldName = 'grupo_mmss_hidro'
      Size = 45
    end
    object CDSHidrogrupo_mmii_hidro: TStringField
      FieldName = 'grupo_mmii_hidro'
      Size = 45
    end
    object CDSHidrorestricoes_hidro: TStringField
      FieldName = 'restricoes_hidro'
      Size = 45
    end
    object CDSHidroalteracoes_hidro: TStringField
      FieldName = 'alteracoes_hidro'
      Size = 45
    end
    object CDSHidroprat_ativ_fis_hidro: TStringField
      FieldName = 'prat_ativ_fis_hidro'
      Size = 100
    end
    object CDSHidrotabagismo_hidro: TStringField
      FieldName = 'tabagismo_hidro'
      Size = 45
    end
    object CDSHidroprob_resp_hidro: TStringField
      FieldName = 'prob_resp_hidro'
      Size = 45
    end
    object CDSHidroalergia_hidro: TStringField
      FieldName = 'alergia_hidro'
      Size = 100
    end
    object CDSHidromedicamentos_hidro: TStringField
      FieldName = 'medicamentos_hidro'
      Size = 100
    end
    object CDSHidroferimento_hidro: TStringField
      FieldName = 'ferimento_hidro'
      Size = 45
    end
    object CDSHidroinsuficiencia_uri_hidro: TStringField
      FieldName = 'insuficiencia_uri_hidro'
      Size = 45
    end
    object CDSHidropeso_hidro: TFloatField
      FieldName = 'peso_hidro'
    end
    object CDSHidroaltura_hidro: TFloatField
      FieldName = 'altura_hidro'
    end
    object CDSHidroimc_hidro: TFloatField
      FieldName = 'imc_hidro'
    end
    object CDSHidrolabirintite_hidro: TStringField
      FieldName = 'labirintite_hidro'
      Size = 45
    end
    object CDSHidrocirurgia_hidro: TStringField
      FieldName = 'cirurgia_hidro'
      Size = 45
    end
    object CDSHidroinflamacao_hidro: TStringField
      FieldName = 'inflamacao_hidro'
      Size = 45
    end
    object CDSHidrodoencas_hered_hidro: TStringField
      FieldName = 'doencas_hered_hidro'
      Size = 100
    end
    object CDSHidrohipertensao_hidro: TStringField
      FieldName = 'hipertensao_hidro'
      Size = 45
    end
    object CDSHidroPA_hidro: TStringField
      FieldName = 'PA_hidro'
      Size = 45
    end
    object CDSHidrodiabetes_hidro: TStringField
      FieldName = 'diabetes_hidro'
      Size = 45
    end
    object CDSHidrosaturacao_hidro: TStringField
      FieldName = 'saturacao_hidro'
      Size = 45
    end
    object CDSHidrobicipital_hidro: TStringField
      FieldName = 'bicipital_hidro'
      Size = 45
    end
    object CDSHidropatelar_hidro: TStringField
      FieldName = 'patelar_hidro'
      Size = 45
    end
    object CDSHidroaquileu_hidro: TStringField
      FieldName = 'aquileu_hidro'
      Size = 45
    end
    object CDSHidroequilibrio_hidro: TStringField
      FieldName = 'equilibrio_hidro'
      Size = 45
    end
    object CDSHidroromberg_hidro: TStringField
      FieldName = 'romberg_hidro'
      Size = 45
    end
    object CDSHidrodedo_nariz_hidro: TStringField
      FieldName = 'dedo_nariz_hidro'
      Size = 45
    end
    object CDSHidrocalcanhar_hidro: TStringField
      FieldName = 'calcanhar_hidro'
      Size = 45
    end
  end
  object DSHidro: TDataSource
    DataSet = CDSHidro
    Left = 488
    Top = 416
  end
  object SQLFiltroFichaHid: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_h' +
        'idro LIKE '#39'%'#39';')
    SQLConnection = SQLCon
    Left = 568
    Top = 272
    object SQLFiltroFichaHidcod_ficha_hidro: TIntegerField
      FieldName = 'cod_ficha_hidro'
    end
    object SQLFiltroFichaHidcod_pacinte_ficha_hidro: TIntegerField
      FieldName = 'cod_pacinte_ficha_hidro'
      Required = True
    end
    object SQLFiltroFichaHidfrequencia_hidro: TStringField
      FieldName = 'frequencia_hidro'
      Size = 45
    end
    object SQLFiltroFichaHiddias_hidro: TStringField
      FieldName = 'dias_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidhorario_hidro: TStringField
      FieldName = 'horario_hidro'
      Size = 45
    end
    object SQLFiltroFichaHiddata_inicio_hidro: TDateField
      FieldName = 'data_inicio_hidro'
    end
    object SQLFiltroFichaHidgrupo_mmss_hidro: TStringField
      FieldName = 'grupo_mmss_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidgrupo_mmii_hidro: TStringField
      FieldName = 'grupo_mmii_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidrestricoes_hidro: TStringField
      FieldName = 'restricoes_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidalteracoes_hidro: TStringField
      FieldName = 'alteracoes_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidprat_ativ_fis_hidro: TStringField
      FieldName = 'prat_ativ_fis_hidro'
      Size = 100
    end
    object SQLFiltroFichaHidtabagismo_hidro: TStringField
      FieldName = 'tabagismo_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidprob_resp_hidro: TStringField
      FieldName = 'prob_resp_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidalergia_hidro: TStringField
      FieldName = 'alergia_hidro'
      Size = 100
    end
    object SQLFiltroFichaHidmedicamentos_hidro: TStringField
      FieldName = 'medicamentos_hidro'
      Size = 100
    end
    object SQLFiltroFichaHidferimento_hidro: TStringField
      FieldName = 'ferimento_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidinsuficiencia_uri_hidro: TStringField
      FieldName = 'insuficiencia_uri_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidpeso_hidro: TFloatField
      FieldName = 'peso_hidro'
    end
    object SQLFiltroFichaHidaltura_hidro: TFloatField
      FieldName = 'altura_hidro'
    end
    object SQLFiltroFichaHidimc_hidro: TFloatField
      FieldName = 'imc_hidro'
    end
    object SQLFiltroFichaHidlabirintite_hidro: TStringField
      FieldName = 'labirintite_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidcirurgia_hidro: TStringField
      FieldName = 'cirurgia_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidinflamacao_hidro: TStringField
      FieldName = 'inflamacao_hidro'
      Size = 45
    end
    object SQLFiltroFichaHiddoencas_hered_hidro: TStringField
      FieldName = 'doencas_hered_hidro'
      Size = 100
    end
    object SQLFiltroFichaHidhipertensao_hidro: TStringField
      FieldName = 'hipertensao_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidPA_hidro: TStringField
      FieldName = 'PA_hidro'
      Size = 45
    end
    object SQLFiltroFichaHiddiabetes_hidro: TStringField
      FieldName = 'diabetes_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidsaturacao_hidro: TStringField
      FieldName = 'saturacao_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidbicipital_hidro: TStringField
      FieldName = 'bicipital_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidpatelar_hidro: TStringField
      FieldName = 'patelar_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidaquileu_hidro: TStringField
      FieldName = 'aquileu_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidequilibrio_hidro: TStringField
      FieldName = 'equilibrio_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidromberg_hidro: TStringField
      FieldName = 'romberg_hidro'
      Size = 45
    end
    object SQLFiltroFichaHiddedo_nariz_hidro: TStringField
      FieldName = 'dedo_nariz_hidro'
      Size = 45
    end
    object SQLFiltroFichaHidcalcanhar_hidro: TStringField
      FieldName = 'calcanhar_hidro'
      Size = 45
    end
  end
  object DSPFiltroFichaHid: TDataSetProvider
    DataSet = SQLFiltroFichaHid
    Left = 568
    Top = 320
  end
  object CDSFiltroFichaHid: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroFichaHid'
    Left = 568
    Top = 368
    object CDSFiltroFichaHidcod_ficha_hidro: TIntegerField
      FieldName = 'cod_ficha_hidro'
    end
    object CDSFiltroFichaHidcod_pacinte_ficha_hidro: TIntegerField
      FieldName = 'cod_pacinte_ficha_hidro'
      Required = True
    end
    object CDSFiltroFichaHidfrequencia_hidro: TStringField
      FieldName = 'frequencia_hidro'
      Size = 45
    end
    object CDSFiltroFichaHiddias_hidro: TStringField
      FieldName = 'dias_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidhorario_hidro: TStringField
      FieldName = 'horario_hidro'
      Size = 45
    end
    object CDSFiltroFichaHiddata_inicio_hidro: TDateField
      FieldName = 'data_inicio_hidro'
    end
    object CDSFiltroFichaHidgrupo_mmss_hidro: TStringField
      FieldName = 'grupo_mmss_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidgrupo_mmii_hidro: TStringField
      FieldName = 'grupo_mmii_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidrestricoes_hidro: TStringField
      FieldName = 'restricoes_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidalteracoes_hidro: TStringField
      FieldName = 'alteracoes_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidprat_ativ_fis_hidro: TStringField
      FieldName = 'prat_ativ_fis_hidro'
      Size = 100
    end
    object CDSFiltroFichaHidtabagismo_hidro: TStringField
      FieldName = 'tabagismo_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidprob_resp_hidro: TStringField
      FieldName = 'prob_resp_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidalergia_hidro: TStringField
      FieldName = 'alergia_hidro'
      Size = 100
    end
    object CDSFiltroFichaHidmedicamentos_hidro: TStringField
      FieldName = 'medicamentos_hidro'
      Size = 100
    end
    object CDSFiltroFichaHidferimento_hidro: TStringField
      FieldName = 'ferimento_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidinsuficiencia_uri_hidro: TStringField
      FieldName = 'insuficiencia_uri_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidpeso_hidro: TFloatField
      FieldName = 'peso_hidro'
    end
    object CDSFiltroFichaHidaltura_hidro: TFloatField
      FieldName = 'altura_hidro'
    end
    object CDSFiltroFichaHidimc_hidro: TFloatField
      FieldName = 'imc_hidro'
    end
    object CDSFiltroFichaHidlabirintite_hidro: TStringField
      FieldName = 'labirintite_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidcirurgia_hidro: TStringField
      FieldName = 'cirurgia_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidinflamacao_hidro: TStringField
      FieldName = 'inflamacao_hidro'
      Size = 45
    end
    object CDSFiltroFichaHiddoencas_hered_hidro: TStringField
      FieldName = 'doencas_hered_hidro'
      Size = 100
    end
    object CDSFiltroFichaHidhipertensao_hidro: TStringField
      FieldName = 'hipertensao_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidPA_hidro: TStringField
      FieldName = 'PA_hidro'
      Size = 45
    end
    object CDSFiltroFichaHiddiabetes_hidro: TStringField
      FieldName = 'diabetes_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidsaturacao_hidro: TStringField
      FieldName = 'saturacao_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidbicipital_hidro: TStringField
      FieldName = 'bicipital_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidpatelar_hidro: TStringField
      FieldName = 'patelar_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidaquileu_hidro: TStringField
      FieldName = 'aquileu_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidequilibrio_hidro: TStringField
      FieldName = 'equilibrio_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidromberg_hidro: TStringField
      FieldName = 'romberg_hidro'
      Size = 45
    end
    object CDSFiltroFichaHiddedo_nariz_hidro: TStringField
      FieldName = 'dedo_nariz_hidro'
      Size = 45
    end
    object CDSFiltroFichaHidcalcanhar_hidro: TStringField
      FieldName = 'calcanhar_hidro'
      Size = 45
    end
  end
  object DSFiltroFichaHid: TDataSource
    DataSet = CDSFiltroFichaHid
    Left = 568
    Top = 416
  end
  object SQLParcelasHid: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `parcelas_ficha_hidro`;'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 656
    Top = 272
  end
  object DSPParcelasHid: TDataSetProvider
    DataSet = SQLParcelasHid
    Left = 656
    Top = 320
  end
  object CDSParcelasHid: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPParcelasHid'
    Left = 656
    Top = 368
    object CDSParcelasHidcod_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_parcela_ficha_hidro'
      ProviderFlags = [pfInUpdate, pfInWhere, pfInKey]
    end
    object CDSParcelasHidcod_cliente_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_hidro'
      Required = True
    end
    object CDSParcelasHidcod_ficha_parcela_hidro: TIntegerField
      FieldName = 'cod_ficha_parcela_hidro'
      Required = True
    end
    object CDSParcelasHidvalor_parcela_ficha_hidro: TStringField
      FieldName = 'valor_parcela_ficha_hidro'
      Size = 10
    end
    object CDSParcelasHiddata_venc_parcela_ficha_hidro: TDateField
      FieldName = 'data_venc_parcela_ficha_hidro'
    end
    object CDSParcelasHiddata_pag_parcela_ficha_hidro: TDateField
      FieldName = 'data_pag_parcela_ficha_hidro'
    end
  end
  object DSParcelasHid: TDataSource
    DataSet = CDSParcelasHid
    Left = 656
    Top = 416
  end
  object SQLFiltroParcelasHid: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      'SELECT * FROM parcelas_ficha_hidro;')
    SQLConnection = SQLCon
    Left = 752
    Top = 272
    object SQLFiltroParcelasHidcod_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_parcela_ficha_hidro'
    end
    object SQLFiltroParcelasHidcod_cliente_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_hidro'
      Required = True
    end
    object SQLFiltroParcelasHidcod_ficha_parcela_hidro: TIntegerField
      FieldName = 'cod_ficha_parcela_hidro'
      Required = True
    end
    object SQLFiltroParcelasHidvalor_parcela_ficha_hidro: TStringField
      FieldName = 'valor_parcela_ficha_hidro'
      Size = 10
    end
    object SQLFiltroParcelasHiddata_venc_parcela_ficha_hidro: TDateField
      FieldName = 'data_venc_parcela_ficha_hidro'
    end
    object SQLFiltroParcelasHiddata_pag_parcela_ficha_hidro: TDateField
      FieldName = 'data_pag_parcela_ficha_hidro'
    end
  end
  object DSPFiltroParcelasHid: TDataSetProvider
    DataSet = SQLFiltroParcelasHid
    Left = 752
    Top = 320
  end
  object CDSFiltroParcelasHid: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroParcelasHid'
    Left = 752
    Top = 368
    object CDSFiltroParcelasHidcod_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_parcela_ficha_hidro'
    end
    object CDSFiltroParcelasHidcod_cliente_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_hidro'
      Required = True
    end
    object CDSFiltroParcelasHidcod_ficha_parcela_hidro: TIntegerField
      FieldName = 'cod_ficha_parcela_hidro'
      Required = True
    end
    object CDSFiltroParcelasHidvalor_parcela_ficha_hidro: TStringField
      FieldName = 'valor_parcela_ficha_hidro'
      Size = 10
    end
    object CDSFiltroParcelasHiddata_venc_parcela_ficha_hidro: TDateField
      FieldName = 'data_venc_parcela_ficha_hidro'
    end
    object CDSFiltroParcelasHiddata_pag_parcela_ficha_hidro: TDateField
      FieldName = 'data_pag_parcela_ficha_hidro'
    end
  end
  object DSFiltroParcelasHid: TDataSource
    DataSet = CDSFiltroParcelasHid
    Left = 752
    Top = 416
  end
  object SQLFiltroAtrasadosHid: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'SELECT * FROM parcelas_ficha_hidro, paciente WHERE parcelas_fich' +
        'a_hidro.cod_cliente_parcela_ficha_hidro = paciente.cod_paciente ' +
        ' AND parcelas_ficha_hidro.data_pag_parcela_ficha_hidro = "1601/0' +
        '1/01";')
    SQLConnection = SQLCon
    Left = 864
    Top = 272
    object SQLFiltroAtrasadosHidcod_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_parcela_ficha_hidro'
    end
    object SQLFiltroAtrasadosHidcod_cliente_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_hidro'
      Required = True
    end
    object SQLFiltroAtrasadosHidcod_ficha_parcela_hidro: TIntegerField
      FieldName = 'cod_ficha_parcela_hidro'
      Required = True
    end
    object SQLFiltroAtrasadosHidvalor_parcela_ficha_hidro: TStringField
      FieldName = 'valor_parcela_ficha_hidro'
      Size = 10
    end
    object SQLFiltroAtrasadosHiddata_venc_parcela_ficha_hidro: TDateField
      FieldName = 'data_venc_parcela_ficha_hidro'
    end
    object SQLFiltroAtrasadosHiddata_pag_parcela_ficha_hidro: TDateField
      FieldName = 'data_pag_parcela_ficha_hidro'
    end
    object SQLFiltroAtrasadosHidcod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object SQLFiltroAtrasadosHidcpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object SQLFiltroAtrasadosHiddata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object SQLFiltroAtrasadosHididade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object SQLFiltroAtrasadosHidtelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object SQLFiltroAtrasadosHidnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object SQLFiltroAtrasadosHidendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object SQLFiltroAtrasadosHidapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSPFiltroAtrasadosHid: TDataSetProvider
    DataSet = SQLFiltroAtrasadosHid
    Left = 864
    Top = 320
  end
  object CDSFiltroAtrasadosHid: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroAtrasadosHid'
    Left = 864
    Top = 368
    object CDSFiltroAtrasadosHidcod_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_parcela_ficha_hidro'
    end
    object CDSFiltroAtrasadosHidcod_cliente_parcela_ficha_hidro: TIntegerField
      FieldName = 'cod_cliente_parcela_ficha_hidro'
      Required = True
    end
    object CDSFiltroAtrasadosHidcod_ficha_parcela_hidro: TIntegerField
      FieldName = 'cod_ficha_parcela_hidro'
      Required = True
    end
    object CDSFiltroAtrasadosHidvalor_parcela_ficha_hidro: TStringField
      FieldName = 'valor_parcela_ficha_hidro'
      Size = 10
    end
    object CDSFiltroAtrasadosHiddata_venc_parcela_ficha_hidro: TDateField
      FieldName = 'data_venc_parcela_ficha_hidro'
    end
    object CDSFiltroAtrasadosHiddata_pag_parcela_ficha_hidro: TDateField
      FieldName = 'data_pag_parcela_ficha_hidro'
    end
    object CDSFiltroAtrasadosHidcod_paciente: TIntegerField
      FieldName = 'cod_paciente'
    end
    object CDSFiltroAtrasadosHidcpf_paciente: TStringField
      FieldName = 'cpf_paciente'
      Required = True
      Size = 14
    end
    object CDSFiltroAtrasadosHiddata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object CDSFiltroAtrasadosHididade_paciente: TIntegerField
      FieldName = 'idade_paciente'
    end
    object CDSFiltroAtrasadosHidtelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object CDSFiltroAtrasadosHidnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object CDSFiltroAtrasadosHidendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object CDSFiltroAtrasadosHidapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSFiltroAtrasadosHid: TDataSource
    DataSet = CDSFiltroAtrasadosHid
    Left = 864
    Top = 416
  end
  object SQLDSPalmilhas: TSQLDataSet
    Active = True
    CommandText = 'SELECT * FROM `palmilhas`'
    MaxBlobSize = -1
    Params = <>
    SQLConnection = SQLCon
    Left = 624
    Top = 56
    object SQLDSPalmilhascod_ficha_palmilhas: TIntegerField
      FieldName = 'cod_ficha_palmilhas'
    end
    object SQLDSPalmilhascod_cliente_palmilhas: TIntegerField
      FieldName = 'cod_cliente_palmilhas'
      Required = True
    end
    object SQLDSPalmilhasnum_calcado_palmilhas: TStringField
      FieldName = 'num_calcado_palmilhas'
      Size = 100
    end
    object SQLDSPalmilhasqtde_calcados_palmilhas: TIntegerField
      FieldName = 'qtde_calcados_palmilhas'
    end
    object SQLDSPalmilhasaltura_palmilha: TIntegerField
      FieldName = 'altura_palmilha'
    end
    object SQLDSPalmilhasdata_chegada_calcados_palmilha: TDateField
      FieldName = 'data_chegada_calcados_palmilha'
    end
    object SQLDSPalmilhasdata_chegada_palmilha: TDateField
      FieldName = 'data_chegada_palmilha'
    end
    object SQLDSPalmilhasdata_entrega_palmilha: TDateField
      FieldName = 'data_entrega_palmilha'
    end
    object SQLDSPalmilhasvalor_palmilha: TStringField
      FieldName = 'valor_palmilha'
      Size = 45
    end
    object SQLDSPalmilhaspago_palmilha: TIntegerField
      FieldName = 'pago_palmilha'
    end
    object SQLDSPalmilhasdescricao_calcados_palmilhas: TStringField
      FieldName = 'descricao_calcados_palmilhas'
      Size = 250
    end
  end
  object DSPPalmilhas: TDataSetProvider
    DataSet = SQLDSPalmilhas
    Left = 624
    Top = 104
  end
  object CDSPalmilhas: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPPalmilhas'
    Left = 624
    Top = 152
    object CDSPalmilhascod_ficha_palmilhas: TIntegerField
      FieldName = 'cod_ficha_palmilhas'
    end
    object CDSPalmilhascod_cliente_palmilhas: TIntegerField
      FieldName = 'cod_cliente_palmilhas'
      Required = True
    end
    object CDSPalmilhasnum_calcado_palmilhas: TStringField
      FieldName = 'num_calcado_palmilhas'
      Size = 100
    end
    object CDSPalmilhasqtde_calcados_palmilhas: TIntegerField
      FieldName = 'qtde_calcados_palmilhas'
    end
    object CDSPalmilhasaltura_palmilha: TIntegerField
      FieldName = 'altura_palmilha'
    end
    object CDSPalmilhasdata_chegada_calcados_palmilha: TDateField
      FieldName = 'data_chegada_calcados_palmilha'
    end
    object CDSPalmilhasdata_chegada_palmilha: TDateField
      FieldName = 'data_chegada_palmilha'
    end
    object CDSPalmilhasdata_entrega_palmilha: TDateField
      FieldName = 'data_entrega_palmilha'
    end
    object CDSPalmilhasvalor_palmilha: TStringField
      FieldName = 'valor_palmilha'
      Size = 45
    end
    object CDSPalmilhaspago_palmilha: TIntegerField
      FieldName = 'pago_palmilha'
    end
    object CDSPalmilhasdescricao_calcados_palmilhas: TStringField
      FieldName = 'descricao_calcados_palmilhas'
      Size = 250
    end
  end
  object DSPalmilhas: TDataSource
    DataSet = CDSPalmilhas
    Left = 624
    Top = 200
  end
  object SQLFiltroFichaPalmilha: TSQLQuery
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas L' +
        'IKE '#39'%'#39';')
    SQLConnection = SQLCon
    Left = 720
    Top = 56
    object SQLFiltroFichaPalmilhacod_ficha_palmilhas: TIntegerField
      FieldName = 'cod_ficha_palmilhas'
    end
    object SQLFiltroFichaPalmilhacod_cliente_palmilhas: TIntegerField
      FieldName = 'cod_cliente_palmilhas'
      Required = True
    end
    object SQLFiltroFichaPalmilhanum_calcado_palmilhas: TStringField
      FieldName = 'num_calcado_palmilhas'
      Size = 100
    end
    object SQLFiltroFichaPalmilhaqtde_calcados_palmilhas: TIntegerField
      FieldName = 'qtde_calcados_palmilhas'
    end
    object SQLFiltroFichaPalmilhaaltura_palmilha: TIntegerField
      FieldName = 'altura_palmilha'
    end
    object SQLFiltroFichaPalmilhadata_chegada_calcados_palmilha: TDateField
      FieldName = 'data_chegada_calcados_palmilha'
    end
    object SQLFiltroFichaPalmilhadata_chegada_palmilha: TDateField
      FieldName = 'data_chegada_palmilha'
    end
    object SQLFiltroFichaPalmilhadata_entrega_palmilha: TDateField
      FieldName = 'data_entrega_palmilha'
    end
    object SQLFiltroFichaPalmilhavalor_palmilha: TStringField
      FieldName = 'valor_palmilha'
      Size = 45
    end
    object SQLFiltroFichaPalmilhapago_palmilha: TIntegerField
      FieldName = 'pago_palmilha'
    end
    object SQLFiltroFichaPalmilhadescricao_calcados_palmilhas: TStringField
      FieldName = 'descricao_calcados_palmilhas'
      Size = 250
    end
  end
  object DSPFiltroFichaPalmilha: TDataSetProvider
    DataSet = SQLFiltroFichaPalmilha
    Left = 720
    Top = 104
  end
  object CDSFiltroFichaPalmilha: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroFichaPalmilha'
    Left = 720
    Top = 152
    object CDSFiltroFichaPalmilhacod_ficha_palmilhas: TIntegerField
      FieldName = 'cod_ficha_palmilhas'
    end
    object CDSFiltroFichaPalmilhacod_cliente_palmilhas: TIntegerField
      FieldName = 'cod_cliente_palmilhas'
      Required = True
    end
    object CDSFiltroFichaPalmilhanum_calcado_palmilhas: TStringField
      FieldName = 'num_calcado_palmilhas'
      Size = 100
    end
    object CDSFiltroFichaPalmilhaqtde_calcados_palmilhas: TIntegerField
      FieldName = 'qtde_calcados_palmilhas'
    end
    object CDSFiltroFichaPalmilhaaltura_palmilha: TIntegerField
      FieldName = 'altura_palmilha'
    end
    object CDSFiltroFichaPalmilhadata_chegada_calcados_palmilha: TDateField
      FieldName = 'data_chegada_calcados_palmilha'
    end
    object CDSFiltroFichaPalmilhadata_chegada_palmilha: TDateField
      FieldName = 'data_chegada_palmilha'
    end
    object CDSFiltroFichaPalmilhadata_entrega_palmilha: TDateField
      FieldName = 'data_entrega_palmilha'
    end
    object CDSFiltroFichaPalmilhavalor_palmilha: TStringField
      FieldName = 'valor_palmilha'
      Size = 45
    end
    object CDSFiltroFichaPalmilhapago_palmilha: TIntegerField
      FieldName = 'pago_palmilha'
    end
    object CDSFiltroFichaPalmilhadescricao_calcados_palmilhas: TStringField
      FieldName = 'descricao_calcados_palmilhas'
      Size = 250
    end
  end
  object DSFiltroFichaPalmilha: TDataSource
    DataSet = CDSFiltroFichaPalmilha
    Left = 720
    Top = 200
  end
  object SQLFiltroAniv: TSQLQuery
    ObjectView = True
    Active = True
    MaxBlobSize = -1
    Params = <>
    SQL.Strings = (
      
        'Select * From paciente Where Month(data_nascimento_paciente) = M' +
        'onth(Now()) and day(data_nascimento_paciente) = day(Now());')
    SQLConnection = SQLCon
    Left = 816
    Top = 56
    object SQLFiltroAnivdata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object SQLFiltroAnivtelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object SQLFiltroAnivnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object SQLFiltroAnivendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object SQLFiltroAnivapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSPFiltroAniv: TDataSetProvider
    DataSet = SQLFiltroAniv
    ResolveToDataSet = True
    Exported = False
    Left = 816
    Top = 104
  end
  object CDSFiltroAniv: TClientDataSet
    Active = True
    Aggregates = <>
    Params = <>
    ProviderName = 'DSPFiltroAniv'
    ReadOnly = True
    Left = 816
    Top = 152
    object CDSFiltroAnivdata_nascimento_paciente: TDateField
      FieldName = 'data_nascimento_paciente'
    end
    object CDSFiltroAnivtelefone_paciente: TStringField
      FieldName = 'telefone_paciente'
      Size = 15
    end
    object CDSFiltroAnivnome_paciente: TStringField
      FieldName = 'nome_paciente'
      Required = True
      Size = 75
    end
    object CDSFiltroAnivendereco_paciente: TStringField
      FieldName = 'endereco_paciente'
      Size = 100
    end
    object CDSFiltroAnivapelido_paciente: TStringField
      FieldName = 'apelido_paciente'
      Size = 45
    end
  end
  object DSFiltroAniv: TDataSource
    DataSet = CDSFiltroAniv
    Left = 816
    Top = 200
  end
end
