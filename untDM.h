//---------------------------------------------------------------------------

#ifndef untDMH
#define untDMH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <Data.DBXOdbc.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Datasnap.DBClient.hpp>
#include <Datasnap.Provider.hpp>
//---------------------------------------------------------------------------
class TDM1 : public TDataModule
{
__published:	// IDE-managed Components
	TSQLConnection *SQLCon;
	TSQLDataSet *SQLDSPaciente;
	TDataSetProvider *DPSPaciente;
	TClientDataSet *CDSPaciente;
	TDataSource *DSPaciente;
	TSQLDataSet *SQLFichaFisio;
	TDataSetProvider *DSPFichaFisio;
	TClientDataSet *CDSFichaFisio;
	TDataSource *DSFichaFisio;
	TDataSetProvider *DSPFiltroFichaFisio;
	TDataSource *DSFiltroFichaFisio;
	TClientDataSet *CDSFiltroFichaFisio;
	TSQLQuery *SQLFiltroFichaFisio;
	TSQLDataSet *SQLParcelas;
	TDataSetProvider *DSPParcelas;
	TClientDataSet *CDSParcelas;
	TDataSource *DSParcelas;
	TSQLQuery *SQLFiltroPaciente;
	TDataSetProvider *DSPFiltroPaciente;
	TClientDataSet *cdsFiltroPaciente;
	TDataSource *DSFiltroPaciente;
	TSQLQuery *SQLFiltroParcelas;
	TDataSetProvider *DSPFiltroParcelas;
	TClientDataSet *CDSFiltroParcelas;
	TDataSource *DSFiltroParcelas;
	TSQLQuery *SQLFiltroAtrasados;
	TDataSetProvider *DSPFiltroAtrasados;
	TDataSource *DSFiltroAtrasados;
	TClientDataSet *CDSFiltroAtrasados;
	TSQLDataSet *SQLDSPilates;
	TDataSetProvider *DSPPilates;
	TClientDataSet *CDSPilates;
	TDataSource *DSPilates;
	TSQLQuery *SQLFiltroFichaPil;
	TDataSetProvider *DSPFiltroFichaPil;
	TClientDataSet *CDSFiltroFichaPil;
	TDataSource *DSFiltroFichaPil;
	TSQLDataSet *SQLDSParcelasPil;
	TDataSetProvider *DSPParcelasPil;
	TClientDataSet *CDSParcelasPil;
	TDataSource *DSParcelasPil;
	TSQLQuery *SQLFiltroParcelasPil;
	TDataSetProvider *DSPFiltroParcelasPil;
	TClientDataSet *CDSFiltroParcelasPil;
	TDataSource *DSFiltroParcelasPil;
	TSQLQuery *SQLFiltroAtrasadosPil;
	TDataSetProvider *DSPFiltroAtrasadosPil;
	TClientDataSet *CDSFiltroAtrasadosPil;
	TDataSource *DSFiltroAtrasadosPil;
	TSQLDataSet *SQLDSHidro;
	TDataSetProvider *DSPHidro;
	TClientDataSet *CDSHidro;
	TDataSource *DSHidro;
	TSQLQuery *SQLFiltroFichaHid;
	TDataSetProvider *DSPFiltroFichaHid;
	TClientDataSet *CDSFiltroFichaHid;
	TDataSource *DSFiltroFichaHid;
	TSQLDataSet *SQLParcelasHid;
	TDataSetProvider *DSPParcelasHid;
	TClientDataSet *CDSParcelasHid;
	TDataSource *DSParcelasHid;
	TSQLQuery *SQLFiltroParcelasHid;
	TDataSetProvider *DSPFiltroParcelasHid;
	TClientDataSet *CDSFiltroParcelasHid;
	TDataSource *DSFiltroParcelasHid;
	TSQLQuery *SQLFiltroAtrasadosHid;
	TDataSetProvider *DSPFiltroAtrasadosHid;
	TClientDataSet *CDSFiltroAtrasadosHid;
	TDataSource *DSFiltroAtrasadosHid;
	TIntegerField *SQLDSPacientecod_paciente;
	TStringField *SQLDSPacientecpf_paciente;
	TDateField *SQLDSPacientedata_nascimento_paciente;
	TIntegerField *SQLDSPacienteidade_paciente;
	TStringField *SQLDSPacientetelefone_paciente;
	TStringField *SQLDSPacientenome_paciente;
	TStringField *SQLDSPacienteendereco_paciente;
	TStringField *SQLDSPacienteapelido_paciente;
	TIntegerField *CDSPacientecod_paciente;
	TStringField *CDSPacientecpf_paciente;
	TDateField *CDSPacientedata_nascimento_paciente;
	TIntegerField *CDSPacienteidade_paciente;
	TStringField *CDSPacientetelefone_paciente;
	TStringField *CDSPacientenome_paciente;
	TStringField *CDSPacienteendereco_paciente;
	TStringField *CDSPacienteapelido_paciente;
	TIntegerField *SQLFiltroPacientecod_paciente;
	TStringField *SQLFiltroPacientecpf_paciente;
	TDateField *SQLFiltroPacientedata_nascimento_paciente;
	TIntegerField *SQLFiltroPacienteidade_paciente;
	TStringField *SQLFiltroPacientetelefone_paciente;
	TStringField *SQLFiltroPacientenome_paciente;
	TStringField *SQLFiltroPacienteendereco_paciente;
	TStringField *SQLFiltroPacienteapelido_paciente;
	TIntegerField *cdsFiltroPacientecod_paciente;
	TStringField *cdsFiltroPacientecpf_paciente;
	TDateField *cdsFiltroPacientedata_nascimento_paciente;
	TIntegerField *cdsFiltroPacienteidade_paciente;
	TStringField *cdsFiltroPacientetelefone_paciente;
	TStringField *cdsFiltroPacientenome_paciente;
	TStringField *cdsFiltroPacienteendereco_paciente;
	TStringField *cdsFiltroPacienteapelido_paciente;
	TIntegerField *SQLFichaFisiocod_ficha_fisio;
	TIntegerField *SQLFichaFisiocod_paciente_ficha;
	TStringField *SQLFichaFisiopatologia_fisio;
	TDateField *SQLFichaFisiodata_avaliacao_fisio;
	TDateField *SQLFichaFisiodata_alta_fisio;
	TDateField *SQLFichaFisiodata_inicio_tratamento_fisio;
	TStringField *SQLFichaFisiohda_fisio;
	TStringField *SQLFichaFisioexames_realizados_fisio;
	TStringField *SQLFichaFisioconduta_fisio;
	TIntegerField *SQLFichaFisiosessoes_realizadas_fisio;
	TStringField *SQLFichaFisioobservacoes_fisio;
	TIntegerField *CDSFichaFisiocod_ficha_fisio;
	TIntegerField *CDSFichaFisiocod_paciente_ficha;
	TStringField *CDSFichaFisiopatologia_fisio;
	TDateField *CDSFichaFisiodata_avaliacao_fisio;
	TDateField *CDSFichaFisiodata_alta_fisio;
	TDateField *CDSFichaFisiodata_inicio_tratamento_fisio;
	TStringField *CDSFichaFisiohda_fisio;
	TStringField *CDSFichaFisioexames_realizados_fisio;
	TStringField *CDSFichaFisioconduta_fisio;
	TIntegerField *CDSFichaFisiosessoes_realizadas_fisio;
	TStringField *CDSFichaFisioobservacoes_fisio;
	TIntegerField *SQLFiltroFichaFisiocod_ficha_fisio;
	TIntegerField *SQLFiltroFichaFisiocod_paciente_ficha;
	TStringField *SQLFiltroFichaFisiopatologia_fisio;
	TDateField *SQLFiltroFichaFisiodata_avaliacao_fisio;
	TDateField *SQLFiltroFichaFisiodata_alta_fisio;
	TDateField *SQLFiltroFichaFisiodata_inicio_tratamento_fisio;
	TStringField *SQLFiltroFichaFisiohda_fisio;
	TStringField *SQLFiltroFichaFisioexames_realizados_fisio;
	TStringField *SQLFiltroFichaFisioconduta_fisio;
	TIntegerField *SQLFiltroFichaFisiosessoes_realizadas_fisio;
	TStringField *SQLFiltroFichaFisioobservacoes_fisio;
	TIntegerField *CDSFiltroFichaFisiocod_ficha_fisio;
	TIntegerField *CDSFiltroFichaFisiocod_paciente_ficha;
	TStringField *CDSFiltroFichaFisiopatologia_fisio;
	TDateField *CDSFiltroFichaFisiodata_avaliacao_fisio;
	TDateField *CDSFiltroFichaFisiodata_alta_fisio;
	TDateField *CDSFiltroFichaFisiodata_inicio_tratamento_fisio;
	TStringField *CDSFiltroFichaFisiohda_fisio;
	TStringField *CDSFiltroFichaFisioexames_realizados_fisio;
	TStringField *CDSFiltroFichaFisioconduta_fisio;
	TIntegerField *CDSFiltroFichaFisiosessoes_realizadas_fisio;
	TStringField *CDSFiltroFichaFisioobservacoes_fisio;
	TIntegerField *SQLParcelascod_parcela_ficha_fisio;
	TIntegerField *SQLParcelascod_cliente_parcela_ficha_fisio;
	TIntegerField *SQLParcelascod_ficha_parcela_fisio;
	TStringField *SQLParcelasvalor_parcela_ficha_fisio;
	TDateField *SQLParcelasdata_venc_parcela_ficha_fisio;
	TDateField *SQLParcelasdata_pag_parcela_ficha_fisio;
	TIntegerField *CDSParcelascod_parcela_ficha_fisio;
	TIntegerField *CDSParcelascod_cliente_parcela_ficha_fisio;
	TIntegerField *CDSParcelascod_ficha_parcela_fisio;
	TStringField *CDSParcelasvalor_parcela_ficha_fisio;
	TDateField *CDSParcelasdata_venc_parcela_ficha_fisio;
	TDateField *CDSParcelasdata_pag_parcela_ficha_fisio;
	TIntegerField *SQLFiltroParcelascod_parcela_ficha_fisio;
	TIntegerField *SQLFiltroParcelascod_cliente_parcela_ficha_fisio;
	TIntegerField *SQLFiltroParcelascod_ficha_parcela_fisio;
	TStringField *SQLFiltroParcelasvalor_parcela_ficha_fisio;
	TDateField *SQLFiltroParcelasdata_venc_parcela_ficha_fisio;
	TDateField *SQLFiltroParcelasdata_pag_parcela_ficha_fisio;
	TIntegerField *CDSFiltroParcelascod_parcela_ficha_fisio;
	TIntegerField *CDSFiltroParcelascod_cliente_parcela_ficha_fisio;
	TIntegerField *CDSFiltroParcelascod_ficha_parcela_fisio;
	TStringField *CDSFiltroParcelasvalor_parcela_ficha_fisio;
	TDateField *CDSFiltroParcelasdata_venc_parcela_ficha_fisio;
	TDateField *CDSFiltroParcelasdata_pag_parcela_ficha_fisio;
	TIntegerField *SQLFiltroAtrasadoscod_parcela_ficha_fisio;
	TIntegerField *SQLFiltroAtrasadoscod_cliente_parcela_ficha_fisio;
	TIntegerField *SQLFiltroAtrasadoscod_ficha_parcela_fisio;
	TStringField *SQLFiltroAtrasadosvalor_parcela_ficha_fisio;
	TDateField *SQLFiltroAtrasadosdata_venc_parcela_ficha_fisio;
	TDateField *SQLFiltroAtrasadosdata_pag_parcela_ficha_fisio;
	TIntegerField *SQLFiltroAtrasadoscod_paciente;
	TStringField *SQLFiltroAtrasadoscpf_paciente;
	TDateField *SQLFiltroAtrasadosdata_nascimento_paciente;
	TIntegerField *SQLFiltroAtrasadosidade_paciente;
	TStringField *SQLFiltroAtrasadostelefone_paciente;
	TStringField *SQLFiltroAtrasadosnome_paciente;
	TStringField *SQLFiltroAtrasadosendereco_paciente;
	TStringField *SQLFiltroAtrasadosapelido_paciente;
	TIntegerField *CDSFiltroAtrasadoscod_parcela_ficha_fisio;
	TIntegerField *CDSFiltroAtrasadoscod_cliente_parcela_ficha_fisio;
	TIntegerField *CDSFiltroAtrasadoscod_ficha_parcela_fisio;
	TStringField *CDSFiltroAtrasadosvalor_parcela_ficha_fisio;
	TDateField *CDSFiltroAtrasadosdata_venc_parcela_ficha_fisio;
	TDateField *CDSFiltroAtrasadosdata_pag_parcela_ficha_fisio;
	TIntegerField *CDSFiltroAtrasadoscod_paciente;
	TStringField *CDSFiltroAtrasadoscpf_paciente;
	TDateField *CDSFiltroAtrasadosdata_nascimento_paciente;
	TIntegerField *CDSFiltroAtrasadosidade_paciente;
	TStringField *CDSFiltroAtrasadostelefone_paciente;
	TStringField *CDSFiltroAtrasadosnome_paciente;
	TStringField *CDSFiltroAtrasadosendereco_paciente;
	TStringField *CDSFiltroAtrasadosapelido_paciente;
	TIntegerField *SQLDSPilatescod_ficha_pilates;
	TIntegerField *SQLDSPilatescod_paciente_ficha_pil;
	TStringField *SQLDSPilatesfrequencia_pilates;
	TStringField *SQLDSPilatesdias_pilates;
	TStringField *SQLDSPilateshorario_pilates;
	TDateField *SQLDSPilatesdata_inicio_pilates;
	TIntegerField *SQLDSPilatesatividade_fisica_pilates;
	TStringField *SQLDSPilatestempo_parado_pilates;
	TStringField *SQLDSPilatestabagismo_pilates;
	TStringField *SQLDSPilateslabirintite_pilates;
	TStringField *SQLDSPilatesrestricoes_pilates;
	TStringField *SQLDSPilatesalteracao_cardio_pilates;
	TStringField *SQLDSPilatesalteracao_metab_pilates;
	TStringField *SQLDSPilatesmedicamentos_pilates;
	TStringField *SQLDSPilatesdores_pilates;
	TStringField *SQLDSPilatesdesvio_pilates;
	TStringField *SQLDSPilatesalergia_pilates;
	TStringField *SQLDSPilateslesao_pilates;
	TStringField *SQLDSPilatespratica_pilates;
	TStringField *SQLDSPilatescirurgia_pilates;
	TStringField *SQLDSPilatesult_atividade_pilates;
	TStringField *SQLDSPilatesdoencas_hered_pilates;
	TStringField *SQLDSPilatesindicacoes_med_pilates;
	TStringField *SQLDSPilatesexame_fis_pilates;
	TIntegerField *CDSPilatescod_ficha_pilates;
	TIntegerField *CDSPilatescod_paciente_ficha_pil;
	TStringField *CDSPilatesfrequencia_pilates;
	TStringField *CDSPilatesdias_pilates;
	TStringField *CDSPilateshorario_pilates;
	TDateField *CDSPilatesdata_inicio_pilates;
	TIntegerField *CDSPilatesatividade_fisica_pilates;
	TStringField *CDSPilatestempo_parado_pilates;
	TStringField *CDSPilatestabagismo_pilates;
	TStringField *CDSPilateslabirintite_pilates;
	TStringField *CDSPilatesrestricoes_pilates;
	TStringField *CDSPilatesalteracao_cardio_pilates;
	TStringField *CDSPilatesalteracao_metab_pilates;
	TStringField *CDSPilatesmedicamentos_pilates;
	TStringField *CDSPilatesdores_pilates;
	TStringField *CDSPilatesdesvio_pilates;
	TStringField *CDSPilatesalergia_pilates;
	TStringField *CDSPilateslesao_pilates;
	TStringField *CDSPilatespratica_pilates;
	TStringField *CDSPilatescirurgia_pilates;
	TStringField *CDSPilatesult_atividade_pilates;
	TStringField *CDSPilatesdoencas_hered_pilates;
	TStringField *CDSPilatesindicacoes_med_pilates;
	TStringField *CDSPilatesexame_fis_pilates;
	TIntegerField *SQLFiltroFichaPilcod_ficha_pilates;
	TIntegerField *SQLFiltroFichaPilcod_paciente_ficha_pil;
	TStringField *SQLFiltroFichaPilfrequencia_pilates;
	TStringField *SQLFiltroFichaPildias_pilates;
	TStringField *SQLFiltroFichaPilhorario_pilates;
	TDateField *SQLFiltroFichaPildata_inicio_pilates;
	TIntegerField *SQLFiltroFichaPilatividade_fisica_pilates;
	TStringField *SQLFiltroFichaPiltempo_parado_pilates;
	TStringField *SQLFiltroFichaPiltabagismo_pilates;
	TStringField *SQLFiltroFichaPillabirintite_pilates;
	TStringField *SQLFiltroFichaPilrestricoes_pilates;
	TStringField *SQLFiltroFichaPilalteracao_cardio_pilates;
	TStringField *SQLFiltroFichaPilalteracao_metab_pilates;
	TStringField *SQLFiltroFichaPilmedicamentos_pilates;
	TStringField *SQLFiltroFichaPildores_pilates;
	TStringField *SQLFiltroFichaPildesvio_pilates;
	TStringField *SQLFiltroFichaPilalergia_pilates;
	TStringField *SQLFiltroFichaPillesao_pilates;
	TStringField *SQLFiltroFichaPilpratica_pilates;
	TStringField *SQLFiltroFichaPilcirurgia_pilates;
	TStringField *SQLFiltroFichaPilult_atividade_pilates;
	TStringField *SQLFiltroFichaPildoencas_hered_pilates;
	TStringField *SQLFiltroFichaPilindicacoes_med_pilates;
	TStringField *SQLFiltroFichaPilexame_fis_pilates;
	TIntegerField *CDSFiltroFichaPilcod_ficha_pilates;
	TIntegerField *CDSFiltroFichaPilcod_paciente_ficha_pil;
	TStringField *CDSFiltroFichaPilfrequencia_pilates;
	TStringField *CDSFiltroFichaPildias_pilates;
	TStringField *CDSFiltroFichaPilhorario_pilates;
	TDateField *CDSFiltroFichaPildata_inicio_pilates;
	TIntegerField *CDSFiltroFichaPilatividade_fisica_pilates;
	TStringField *CDSFiltroFichaPiltempo_parado_pilates;
	TStringField *CDSFiltroFichaPiltabagismo_pilates;
	TStringField *CDSFiltroFichaPillabirintite_pilates;
	TStringField *CDSFiltroFichaPilrestricoes_pilates;
	TStringField *CDSFiltroFichaPilalteracao_cardio_pilates;
	TStringField *CDSFiltroFichaPilalteracao_metab_pilates;
	TStringField *CDSFiltroFichaPilmedicamentos_pilates;
	TStringField *CDSFiltroFichaPildores_pilates;
	TStringField *CDSFiltroFichaPildesvio_pilates;
	TStringField *CDSFiltroFichaPilalergia_pilates;
	TStringField *CDSFiltroFichaPillesao_pilates;
	TStringField *CDSFiltroFichaPilpratica_pilates;
	TStringField *CDSFiltroFichaPilcirurgia_pilates;
	TStringField *CDSFiltroFichaPilult_atividade_pilates;
	TStringField *CDSFiltroFichaPildoencas_hered_pilates;
	TStringField *CDSFiltroFichaPilindicacoes_med_pilates;
	TStringField *CDSFiltroFichaPilexame_fis_pilates;
	TIntegerField *SQLDSParcelasPilcod_parcela_ficha_pil;
	TIntegerField *SQLDSParcelasPilcod_cliente_parcela_ficha_pil;
	TIntegerField *SQLDSParcelasPilcod_ficha_parcela_pil;
	TStringField *SQLDSParcelasPilvalor_parcela_ficha_pil;
	TDateField *SQLDSParcelasPildata_venc_parcela_ficha_pil;
	TDateField *SQLDSParcelasPildata_pag_parcela_ficha_pil;
	TIntegerField *CDSParcelasPilcod_parcela_ficha_pil;
	TIntegerField *CDSParcelasPilcod_cliente_parcela_ficha_pil;
	TIntegerField *CDSParcelasPilcod_ficha_parcela_pil;
	TStringField *CDSParcelasPilvalor_parcela_ficha_pil;
	TDateField *CDSParcelasPildata_venc_parcela_ficha_pil;
	TDateField *CDSParcelasPildata_pag_parcela_ficha_pil;
	TIntegerField *SQLFiltroParcelasPilcod_parcela_ficha_pil;
	TIntegerField *SQLFiltroParcelasPilcod_cliente_parcela_ficha_pil;
	TIntegerField *SQLFiltroParcelasPilcod_ficha_parcela_pil;
	TStringField *SQLFiltroParcelasPilvalor_parcela_ficha_pil;
	TDateField *SQLFiltroParcelasPildata_venc_parcela_ficha_pil;
	TDateField *SQLFiltroParcelasPildata_pag_parcela_ficha_pil;
	TIntegerField *CDSFiltroParcelasPilcod_parcela_ficha_pil;
	TIntegerField *CDSFiltroParcelasPilcod_cliente_parcela_ficha_pil;
	TIntegerField *CDSFiltroParcelasPilcod_ficha_parcela_pil;
	TStringField *CDSFiltroParcelasPilvalor_parcela_ficha_pil;
	TDateField *CDSFiltroParcelasPildata_venc_parcela_ficha_pil;
	TDateField *CDSFiltroParcelasPildata_pag_parcela_ficha_pil;
	TIntegerField *SQLFiltroAtrasadosPilcod_parcela_ficha_pil;
	TIntegerField *SQLFiltroAtrasadosPilcod_cliente_parcela_ficha_pil;
	TIntegerField *SQLFiltroAtrasadosPilcod_ficha_parcela_pil;
	TStringField *SQLFiltroAtrasadosPilvalor_parcela_ficha_pil;
	TDateField *SQLFiltroAtrasadosPildata_venc_parcela_ficha_pil;
	TDateField *SQLFiltroAtrasadosPildata_pag_parcela_ficha_pil;
	TIntegerField *SQLFiltroAtrasadosPilcod_paciente;
	TStringField *SQLFiltroAtrasadosPilcpf_paciente;
	TDateField *SQLFiltroAtrasadosPildata_nascimento_paciente;
	TIntegerField *SQLFiltroAtrasadosPilidade_paciente;
	TStringField *SQLFiltroAtrasadosPiltelefone_paciente;
	TStringField *SQLFiltroAtrasadosPilnome_paciente;
	TStringField *SQLFiltroAtrasadosPilendereco_paciente;
	TStringField *SQLFiltroAtrasadosPilapelido_paciente;
	TIntegerField *CDSFiltroAtrasadosPilcod_parcela_ficha_pil;
	TIntegerField *CDSFiltroAtrasadosPilcod_cliente_parcela_ficha_pil;
	TIntegerField *CDSFiltroAtrasadosPilcod_ficha_parcela_pil;
	TStringField *CDSFiltroAtrasadosPilvalor_parcela_ficha_pil;
	TDateField *CDSFiltroAtrasadosPildata_venc_parcela_ficha_pil;
	TDateField *CDSFiltroAtrasadosPildata_pag_parcela_ficha_pil;
	TIntegerField *CDSFiltroAtrasadosPilcod_paciente;
	TStringField *CDSFiltroAtrasadosPilcpf_paciente;
	TDateField *CDSFiltroAtrasadosPildata_nascimento_paciente;
	TIntegerField *CDSFiltroAtrasadosPilidade_paciente;
	TStringField *CDSFiltroAtrasadosPiltelefone_paciente;
	TStringField *CDSFiltroAtrasadosPilnome_paciente;
	TStringField *CDSFiltroAtrasadosPilendereco_paciente;
	TStringField *CDSFiltroAtrasadosPilapelido_paciente;
	TIntegerField *SQLDSHidrocod_ficha_hidro;
	TIntegerField *SQLDSHidrocod_pacinte_ficha_hidro;
	TStringField *SQLDSHidrofrequencia_hidro;
	TStringField *SQLDSHidrodias_hidro;
	TStringField *SQLDSHidrohorario_hidro;
	TDateField *SQLDSHidrodata_inicio_hidro;
	TStringField *SQLDSHidrogrupo_mmss_hidro;
	TStringField *SQLDSHidrogrupo_mmii_hidro;
	TStringField *SQLDSHidrorestricoes_hidro;
	TStringField *SQLDSHidroalteracoes_hidro;
	TStringField *SQLDSHidroprat_ativ_fis_hidro;
	TStringField *SQLDSHidrotabagismo_hidro;
	TStringField *SQLDSHidroprob_resp_hidro;
	TStringField *SQLDSHidroalergia_hidro;
	TStringField *SQLDSHidromedicamentos_hidro;
	TStringField *SQLDSHidroferimento_hidro;
	TStringField *SQLDSHidroinsuficiencia_uri_hidro;
	TFloatField *SQLDSHidropeso_hidro;
	TFloatField *SQLDSHidroaltura_hidro;
	TFloatField *SQLDSHidroimc_hidro;
	TStringField *SQLDSHidrolabirintite_hidro;
	TStringField *SQLDSHidrocirurgia_hidro;
	TStringField *SQLDSHidroinflamacao_hidro;
	TStringField *SQLDSHidrodoencas_hered_hidro;
	TStringField *SQLDSHidrohipertensao_hidro;
	TStringField *SQLDSHidroPA_hidro;
	TStringField *SQLDSHidrodiabetes_hidro;
	TStringField *SQLDSHidrosaturacao_hidro;
	TStringField *SQLDSHidrobicipital_hidro;
	TStringField *SQLDSHidropatelar_hidro;
	TStringField *SQLDSHidroaquileu_hidro;
	TStringField *SQLDSHidroequilibrio_hidro;
	TStringField *SQLDSHidroromberg_hidro;
	TStringField *SQLDSHidrodedo_nariz_hidro;
	TStringField *SQLDSHidrocalcanhar_hidro;
	TIntegerField *CDSHidrocod_ficha_hidro;
	TIntegerField *CDSHidrocod_pacinte_ficha_hidro;
	TStringField *CDSHidrofrequencia_hidro;
	TStringField *CDSHidrodias_hidro;
	TStringField *CDSHidrohorario_hidro;
	TDateField *CDSHidrodata_inicio_hidro;
	TStringField *CDSHidrogrupo_mmss_hidro;
	TStringField *CDSHidrogrupo_mmii_hidro;
	TStringField *CDSHidrorestricoes_hidro;
	TStringField *CDSHidroalteracoes_hidro;
	TStringField *CDSHidroprat_ativ_fis_hidro;
	TStringField *CDSHidrotabagismo_hidro;
	TStringField *CDSHidroprob_resp_hidro;
	TStringField *CDSHidroalergia_hidro;
	TStringField *CDSHidromedicamentos_hidro;
	TStringField *CDSHidroferimento_hidro;
	TStringField *CDSHidroinsuficiencia_uri_hidro;
	TFloatField *CDSHidropeso_hidro;
	TFloatField *CDSHidroaltura_hidro;
	TFloatField *CDSHidroimc_hidro;
	TStringField *CDSHidrolabirintite_hidro;
	TStringField *CDSHidrocirurgia_hidro;
	TStringField *CDSHidroinflamacao_hidro;
	TStringField *CDSHidrodoencas_hered_hidro;
	TStringField *CDSHidrohipertensao_hidro;
	TStringField *CDSHidroPA_hidro;
	TStringField *CDSHidrodiabetes_hidro;
	TStringField *CDSHidrosaturacao_hidro;
	TStringField *CDSHidrobicipital_hidro;
	TStringField *CDSHidropatelar_hidro;
	TStringField *CDSHidroaquileu_hidro;
	TStringField *CDSHidroequilibrio_hidro;
	TStringField *CDSHidroromberg_hidro;
	TStringField *CDSHidrodedo_nariz_hidro;
	TStringField *CDSHidrocalcanhar_hidro;
	TIntegerField *SQLFiltroFichaHidcod_ficha_hidro;
	TIntegerField *SQLFiltroFichaHidcod_pacinte_ficha_hidro;
	TStringField *SQLFiltroFichaHidfrequencia_hidro;
	TStringField *SQLFiltroFichaHiddias_hidro;
	TStringField *SQLFiltroFichaHidhorario_hidro;
	TDateField *SQLFiltroFichaHiddata_inicio_hidro;
	TStringField *SQLFiltroFichaHidgrupo_mmss_hidro;
	TStringField *SQLFiltroFichaHidgrupo_mmii_hidro;
	TStringField *SQLFiltroFichaHidrestricoes_hidro;
	TStringField *SQLFiltroFichaHidalteracoes_hidro;
	TStringField *SQLFiltroFichaHidprat_ativ_fis_hidro;
	TStringField *SQLFiltroFichaHidtabagismo_hidro;
	TStringField *SQLFiltroFichaHidprob_resp_hidro;
	TStringField *SQLFiltroFichaHidalergia_hidro;
	TStringField *SQLFiltroFichaHidmedicamentos_hidro;
	TStringField *SQLFiltroFichaHidferimento_hidro;
	TStringField *SQLFiltroFichaHidinsuficiencia_uri_hidro;
	TFloatField *SQLFiltroFichaHidpeso_hidro;
	TFloatField *SQLFiltroFichaHidaltura_hidro;
	TFloatField *SQLFiltroFichaHidimc_hidro;
	TStringField *SQLFiltroFichaHidlabirintite_hidro;
	TStringField *SQLFiltroFichaHidcirurgia_hidro;
	TStringField *SQLFiltroFichaHidinflamacao_hidro;
	TStringField *SQLFiltroFichaHiddoencas_hered_hidro;
	TStringField *SQLFiltroFichaHidhipertensao_hidro;
	TStringField *SQLFiltroFichaHidPA_hidro;
	TStringField *SQLFiltroFichaHiddiabetes_hidro;
	TStringField *SQLFiltroFichaHidsaturacao_hidro;
	TStringField *SQLFiltroFichaHidbicipital_hidro;
	TStringField *SQLFiltroFichaHidpatelar_hidro;
	TStringField *SQLFiltroFichaHidaquileu_hidro;
	TStringField *SQLFiltroFichaHidequilibrio_hidro;
	TStringField *SQLFiltroFichaHidromberg_hidro;
	TStringField *SQLFiltroFichaHiddedo_nariz_hidro;
	TStringField *SQLFiltroFichaHidcalcanhar_hidro;
	TIntegerField *CDSFiltroFichaHidcod_ficha_hidro;
	TIntegerField *CDSFiltroFichaHidcod_pacinte_ficha_hidro;
	TStringField *CDSFiltroFichaHidfrequencia_hidro;
	TStringField *CDSFiltroFichaHiddias_hidro;
	TStringField *CDSFiltroFichaHidhorario_hidro;
	TDateField *CDSFiltroFichaHiddata_inicio_hidro;
	TStringField *CDSFiltroFichaHidgrupo_mmss_hidro;
	TStringField *CDSFiltroFichaHidgrupo_mmii_hidro;
	TStringField *CDSFiltroFichaHidrestricoes_hidro;
	TStringField *CDSFiltroFichaHidalteracoes_hidro;
	TStringField *CDSFiltroFichaHidprat_ativ_fis_hidro;
	TStringField *CDSFiltroFichaHidtabagismo_hidro;
	TStringField *CDSFiltroFichaHidprob_resp_hidro;
	TStringField *CDSFiltroFichaHidalergia_hidro;
	TStringField *CDSFiltroFichaHidmedicamentos_hidro;
	TStringField *CDSFiltroFichaHidferimento_hidro;
	TStringField *CDSFiltroFichaHidinsuficiencia_uri_hidro;
	TFloatField *CDSFiltroFichaHidpeso_hidro;
	TFloatField *CDSFiltroFichaHidaltura_hidro;
	TFloatField *CDSFiltroFichaHidimc_hidro;
	TStringField *CDSFiltroFichaHidlabirintite_hidro;
	TStringField *CDSFiltroFichaHidcirurgia_hidro;
	TStringField *CDSFiltroFichaHidinflamacao_hidro;
	TStringField *CDSFiltroFichaHiddoencas_hered_hidro;
	TStringField *CDSFiltroFichaHidhipertensao_hidro;
	TStringField *CDSFiltroFichaHidPA_hidro;
	TStringField *CDSFiltroFichaHiddiabetes_hidro;
	TStringField *CDSFiltroFichaHidsaturacao_hidro;
	TStringField *CDSFiltroFichaHidbicipital_hidro;
	TStringField *CDSFiltroFichaHidpatelar_hidro;
	TStringField *CDSFiltroFichaHidaquileu_hidro;
	TStringField *CDSFiltroFichaHidequilibrio_hidro;
	TStringField *CDSFiltroFichaHidromberg_hidro;
	TStringField *CDSFiltroFichaHiddedo_nariz_hidro;
	TStringField *CDSFiltroFichaHidcalcanhar_hidro;
	TIntegerField *CDSParcelasHidcod_parcela_ficha_hidro;
	TIntegerField *CDSParcelasHidcod_cliente_parcela_ficha_hidro;
	TIntegerField *CDSParcelasHidcod_ficha_parcela_hidro;
	TStringField *CDSParcelasHidvalor_parcela_ficha_hidro;
	TDateField *CDSParcelasHiddata_venc_parcela_ficha_hidro;
	TDateField *CDSParcelasHiddata_pag_parcela_ficha_hidro;
	TIntegerField *SQLFiltroParcelasHidcod_parcela_ficha_hidro;
	TIntegerField *SQLFiltroParcelasHidcod_cliente_parcela_ficha_hidro;
	TIntegerField *SQLFiltroParcelasHidcod_ficha_parcela_hidro;
	TStringField *SQLFiltroParcelasHidvalor_parcela_ficha_hidro;
	TDateField *SQLFiltroParcelasHiddata_venc_parcela_ficha_hidro;
	TDateField *SQLFiltroParcelasHiddata_pag_parcela_ficha_hidro;
	TIntegerField *CDSFiltroParcelasHidcod_parcela_ficha_hidro;
	TIntegerField *CDSFiltroParcelasHidcod_cliente_parcela_ficha_hidro;
	TIntegerField *CDSFiltroParcelasHidcod_ficha_parcela_hidro;
	TStringField *CDSFiltroParcelasHidvalor_parcela_ficha_hidro;
	TDateField *CDSFiltroParcelasHiddata_venc_parcela_ficha_hidro;
	TDateField *CDSFiltroParcelasHiddata_pag_parcela_ficha_hidro;
	TIntegerField *SQLFiltroAtrasadosHidcod_parcela_ficha_hidro;
	TIntegerField *SQLFiltroAtrasadosHidcod_cliente_parcela_ficha_hidro;
	TIntegerField *SQLFiltroAtrasadosHidcod_ficha_parcela_hidro;
	TStringField *SQLFiltroAtrasadosHidvalor_parcela_ficha_hidro;
	TDateField *SQLFiltroAtrasadosHiddata_venc_parcela_ficha_hidro;
	TDateField *SQLFiltroAtrasadosHiddata_pag_parcela_ficha_hidro;
	TIntegerField *SQLFiltroAtrasadosHidcod_paciente;
	TStringField *SQLFiltroAtrasadosHidcpf_paciente;
	TDateField *SQLFiltroAtrasadosHiddata_nascimento_paciente;
	TIntegerField *SQLFiltroAtrasadosHididade_paciente;
	TStringField *SQLFiltroAtrasadosHidtelefone_paciente;
	TStringField *SQLFiltroAtrasadosHidnome_paciente;
	TStringField *SQLFiltroAtrasadosHidendereco_paciente;
	TStringField *SQLFiltroAtrasadosHidapelido_paciente;
	TIntegerField *CDSFiltroAtrasadosHidcod_parcela_ficha_hidro;
	TIntegerField *CDSFiltroAtrasadosHidcod_cliente_parcela_ficha_hidro;
	TIntegerField *CDSFiltroAtrasadosHidcod_ficha_parcela_hidro;
	TStringField *CDSFiltroAtrasadosHidvalor_parcela_ficha_hidro;
	TDateField *CDSFiltroAtrasadosHiddata_venc_parcela_ficha_hidro;
	TDateField *CDSFiltroAtrasadosHiddata_pag_parcela_ficha_hidro;
	TIntegerField *CDSFiltroAtrasadosHidcod_paciente;
	TStringField *CDSFiltroAtrasadosHidcpf_paciente;
	TDateField *CDSFiltroAtrasadosHiddata_nascimento_paciente;
	TIntegerField *CDSFiltroAtrasadosHididade_paciente;
	TStringField *CDSFiltroAtrasadosHidtelefone_paciente;
	TStringField *CDSFiltroAtrasadosHidnome_paciente;
	TStringField *CDSFiltroAtrasadosHidendereco_paciente;
	TStringField *CDSFiltroAtrasadosHidapelido_paciente;
	TSQLDataSet *SQLDSPalmilhas;
	TIntegerField *SQLDSPalmilhascod_ficha_palmilhas;
	TIntegerField *SQLDSPalmilhascod_cliente_palmilhas;
	TStringField *SQLDSPalmilhasnum_calcado_palmilhas;
	TIntegerField *SQLDSPalmilhasqtde_calcados_palmilhas;
	TIntegerField *SQLDSPalmilhasaltura_palmilha;
	TDateField *SQLDSPalmilhasdata_chegada_calcados_palmilha;
	TDateField *SQLDSPalmilhasdata_chegada_palmilha;
	TDateField *SQLDSPalmilhasdata_entrega_palmilha;
	TStringField *SQLDSPalmilhasvalor_palmilha;
	TIntegerField *SQLDSPalmilhaspago_palmilha;
	TStringField *SQLDSPalmilhasdescricao_calcados_palmilhas;
	TDataSetProvider *DSPPalmilhas;
	TClientDataSet *CDSPalmilhas;
	TIntegerField *CDSPalmilhascod_ficha_palmilhas;
	TIntegerField *CDSPalmilhascod_cliente_palmilhas;
	TStringField *CDSPalmilhasnum_calcado_palmilhas;
	TIntegerField *CDSPalmilhasqtde_calcados_palmilhas;
	TIntegerField *CDSPalmilhasaltura_palmilha;
	TDateField *CDSPalmilhasdata_chegada_calcados_palmilha;
	TDateField *CDSPalmilhasdata_chegada_palmilha;
	TDateField *CDSPalmilhasdata_entrega_palmilha;
	TStringField *CDSPalmilhasvalor_palmilha;
	TIntegerField *CDSPalmilhaspago_palmilha;
	TStringField *CDSPalmilhasdescricao_calcados_palmilhas;
	TDataSource *DSPalmilhas;
	TSQLQuery *SQLFiltroFichaPalmilha;
	TIntegerField *SQLFiltroFichaPalmilhacod_ficha_palmilhas;
	TIntegerField *SQLFiltroFichaPalmilhacod_cliente_palmilhas;
	TStringField *SQLFiltroFichaPalmilhanum_calcado_palmilhas;
	TIntegerField *SQLFiltroFichaPalmilhaqtde_calcados_palmilhas;
	TIntegerField *SQLFiltroFichaPalmilhaaltura_palmilha;
	TDateField *SQLFiltroFichaPalmilhadata_chegada_calcados_palmilha;
	TDateField *SQLFiltroFichaPalmilhadata_chegada_palmilha;
	TDateField *SQLFiltroFichaPalmilhadata_entrega_palmilha;
	TStringField *SQLFiltroFichaPalmilhavalor_palmilha;
	TIntegerField *SQLFiltroFichaPalmilhapago_palmilha;
	TStringField *SQLFiltroFichaPalmilhadescricao_calcados_palmilhas;
	TDataSetProvider *DSPFiltroFichaPalmilha;
	TClientDataSet *CDSFiltroFichaPalmilha;
	TIntegerField *CDSFiltroFichaPalmilhacod_ficha_palmilhas;
	TIntegerField *CDSFiltroFichaPalmilhacod_cliente_palmilhas;
	TStringField *CDSFiltroFichaPalmilhanum_calcado_palmilhas;
	TIntegerField *CDSFiltroFichaPalmilhaqtde_calcados_palmilhas;
	TIntegerField *CDSFiltroFichaPalmilhaaltura_palmilha;
	TDateField *CDSFiltroFichaPalmilhadata_chegada_calcados_palmilha;
	TDateField *CDSFiltroFichaPalmilhadata_chegada_palmilha;
	TDateField *CDSFiltroFichaPalmilhadata_entrega_palmilha;
	TStringField *CDSFiltroFichaPalmilhavalor_palmilha;
	TIntegerField *CDSFiltroFichaPalmilhapago_palmilha;
	TStringField *CDSFiltroFichaPalmilhadescricao_calcados_palmilhas;
	TDataSource *DSFiltroFichaPalmilha;
	TSQLQuery *SQLFiltroAniv;
	TDataSetProvider *DSPFiltroAniv;
	TClientDataSet *CDSFiltroAniv;
	TDataSource *DSFiltroAniv;
	TDateField *SQLFiltroAnivdata_nascimento_paciente;
	TStringField *SQLFiltroAnivtelefone_paciente;
	TStringField *SQLFiltroAnivnome_paciente;
	TStringField *SQLFiltroAnivendereco_paciente;
	TStringField *SQLFiltroAnivapelido_paciente;
	TDateField *CDSFiltroAnivdata_nascimento_paciente;
	TStringField *CDSFiltroAnivtelefone_paciente;
	TStringField *CDSFiltroAnivnome_paciente;
	TStringField *CDSFiltroAnivendereco_paciente;
	TStringField *CDSFiltroAnivapelido_paciente;


private:	// User declarations
public:		// User declarations
	__fastcall TDM1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDM1 *DM1;
//---------------------------------------------------------------------------
#endif
