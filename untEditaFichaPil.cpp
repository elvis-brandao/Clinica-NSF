//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untEditaFichaPil.h"
#include "untDM.h"
#include "untAddPaciente.h"
#include "untFiltroFichaFisio.h"
#include "untFiltroFichaPil.h"
#include "untFiltroFichaHid.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEditaFichaPil *frmEditaFichaPil;
//---------------------------------------------------------------------------
__fastcall TfrmEditaFichaPil::TfrmEditaFichaPil(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaPil::FormShow(TObject *Sender)
{
memoExame->Lines->Delimiter = '$';
memoExame->Lines->StrictDelimiter = true;
if (DM1->CDSFiltroFichaPil->RecordCount > 0)
{
	if (janela == 0 || janela == 1)
	{
		codClientePil = DM1->CDSFiltroFichaPil->FieldByName("cod_paciente_ficha_pil")->AsInteger;
		codFichaPil = DM1->CDSFiltroFichaPil->FieldByName("cod_ficha_pilates")->AsInteger;
    }
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClientePil) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

	edtFrequencia->Text = DM1->CDSFiltroFichaPil->FieldByName("frequencia_pilates")->AsString;
	edtDias->Text = DM1->CDSFiltroFichaPil->FieldByName("dias_pilates")->AsString;
	edtHorario->Text = DM1->CDSFiltroFichaPil->FieldByName("horario_pilates")->AsString;
	edtTParado->Text = DM1->CDSFiltroFichaPil->FieldByName("tempo_parado_pilates")->AsString;
	dtpInicio->Format = "yyyy/dd/MM";
	dtpInicio->Date = DM1->CDSFiltroFichaPil->FieldByName("data_inicio_pilates")->AsString;
	dtpInicio->Format = "";
	RGAtividade->ItemIndex = DM1->CDSFiltroFichaPil->FieldByName("atividade_fisica_pilates")->AsInteger;
	edtTabagismo->Text = DM1->CDSFiltroFichaPil->FieldByName("tabagismo_pilates")->AsString;
	edtLabirintite->Text = DM1->CDSFiltroFichaPil->FieldByName("labirintite_pilates")->AsString;
	edtRestricoes->Text = DM1->CDSFiltroFichaPil->FieldByName("restricoes_pilates")->AsString;
	edtACardio->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_cardio_pilates")->AsString;
	edtAMetabolicas->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_metab_pilates")->AsString;
	edtMedicamentos->Text = DM1->CDSFiltroFichaPil->FieldByName("medicamentos_pilates")->AsString;
	edtDores->Text = DM1->CDSFiltroFichaPil->FieldByName("dores_pilates")->AsString;
	edtDesvio->Text = DM1->CDSFiltroFichaPil->FieldByName("desvio_pilates")->AsString;
	edtAlergia->Text = DM1->CDSFiltroFichaPil->FieldByName("alergia_pilates")->AsString;
	edtLesao->Text = DM1->CDSFiltroFichaPil->FieldByName("lesao_pilates")->AsString;
	edtPratica->Text = DM1->CDSFiltroFichaPil->FieldByName("pratica_pilates")->AsString;
	edtCirurgia->Text = DM1->CDSFiltroFichaPil->FieldByName("cirurgia_pilates")->AsString;
	edtUltAtividade->Text = DM1->CDSFiltroFichaPil->FieldByName("ult_atividade_pilates")->AsString;
	edtDoencas->Text = DM1->CDSFiltroFichaPil->FieldByName("doencas_hered_pilates")->AsString;
	edtIndicacoes->Text = DM1->CDSFiltroFichaPil->FieldByName("indicacoes_med_pilates")->AsString;
	memoExame->Lines->DelimitedText = DM1->CDSFiltroFichaPil->FieldByName("exame_fis_pilates")->AsString;

	DM1->SQLFiltroParcelasPil->SQL->Clear();
	DM1->SQLFiltroParcelasPil->SQL->Add("SELECT * FROM parcelas_ficha_pil WHERE parcelas_ficha_pil.cod_cliente_parcela_ficha_pil = '" + IntToStr(codClientePil) + "' AND parcelas_ficha_pil.cod_ficha_parcela_pil = '" + codFichaPil + "';");
	DM1->SQLFiltroParcelasPil->Open();
	DM1->SQLFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->First();
	edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelasPil->RecordCount;

		if (DM1->CDSFiltroParcelasPil->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasPil->RecordCount; i++)
			{
				if (i == 0)
				{
					edtValP1->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 1)
				{
					edtValP2->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 2)
				{
					edtValP3->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 3)
				{
					edtValP4->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 4)
				{
					edtValP5->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 5)
				{
					edtValP6->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 6)
				{
					edtValP7->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 7)
				{
					edtValP8->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 8)
				{
					edtValP9->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 9)
				{
					edtValP10->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 10)
				{
					edtValP11->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 11)
				{
					edtValP12->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
			}
		}
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaPil::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)
{
if (DM1->CDSFiltroFichaPil->RecordCount > 0)
{
	codFichaPil = DM1->CDSFiltroFichaPil->FieldByName("cod_ficha_pilates")->AsInteger;
	codClientePil = DM1->CDSFiltroFichaPil->FieldByName("cod_paciente_ficha_pil")->AsInteger;
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClientePil) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

	edtFrequencia->Text = DM1->CDSFiltroFichaPil->FieldByName("frequencia_pilates")->AsString;
	edtDias->Text = DM1->CDSFiltroFichaPil->FieldByName("dias_pilates")->AsString;
	edtHorario->Text = DM1->CDSFiltroFichaPil->FieldByName("horario_pilates")->AsString;
	edtTParado->Text = DM1->CDSFiltroFichaPil->FieldByName("tempo_parado_pilates")->AsString;
	dtpInicio->Format = "yyyy/dd/MM";
	dtpInicio->Date = DM1->CDSFiltroFichaPil->FieldByName("data_inicio_pilates")->AsString;
	dtpInicio->Format = "";
	RGAtividade->ItemIndex = DM1->CDSFiltroFichaPil->FieldByName("atividade_fisica_pilates")->AsInteger;
	edtTabagismo->Text = DM1->CDSFiltroFichaPil->FieldByName("tabagismo_pilates")->AsString;
	edtLabirintite->Text = DM1->CDSFiltroFichaPil->FieldByName("labirintite_pilates")->AsString;
	edtRestricoes->Text = DM1->CDSFiltroFichaPil->FieldByName("restricoes_pilates")->AsString;
	edtACardio->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_cardio_pilates")->AsString;
	edtAMetabolicas->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_metab_pilates")->AsString;
	edtMedicamentos->Text = DM1->CDSFiltroFichaPil->FieldByName("medicamentos_pilates")->AsString;
	edtDores->Text = DM1->CDSFiltroFichaPil->FieldByName("dores_pilates")->AsString;
	edtDesvio->Text = DM1->CDSFiltroFichaPil->FieldByName("desvio_pilates")->AsString;
	edtAlergia->Text = DM1->CDSFiltroFichaPil->FieldByName("alergia_pilates")->AsString;
	edtLesao->Text = DM1->CDSFiltroFichaPil->FieldByName("lesao_pilates")->AsString;
	edtPratica->Text = DM1->CDSFiltroFichaPil->FieldByName("pratica_pilates")->AsString;
	edtCirurgia->Text = DM1->CDSFiltroFichaPil->FieldByName("cirurgia_pilates")->AsString;
	edtUltAtividade->Text = DM1->CDSFiltroFichaPil->FieldByName("ult_atividade_pilates")->AsString;
	edtDoencas->Text = DM1->CDSFiltroFichaPil->FieldByName("doencas_hered_pilates")->AsString;
	edtIndicacoes->Text = DM1->CDSFiltroFichaPil->FieldByName("indicacoes_med_pilates")->AsString;
	memoExame->Lines->DelimitedText = DM1->CDSFiltroFichaPil->FieldByName("exame_fis_pilates")->AsString;

	DM1->SQLFiltroParcelasPil->SQL->Clear();
	DM1->SQLFiltroParcelasPil->SQL->Add("SELECT * FROM parcelas_ficha_pil WHERE parcelas_ficha_pil.cod_cliente_parcela_ficha_pil = '" + IntToStr(codClientePil) + "' AND parcelas_ficha_pil.cod_ficha_parcela_pil = '" + codFichaPil + "';");
	DM1->SQLFiltroParcelasPil->Open();
	DM1->SQLFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->First();
	edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelasPil->RecordCount;

	dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
	dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
	dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
	dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
	dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
	dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
	dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
	dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
	dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
	dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
	dtpVencimentoP11->Date = dtpVencimentoP10->Date.CurrentDate();
	dtpVencimentoP12->Date = dtpVencimentoP10->Date.CurrentDate();
	dtpPagP1->Date = dtpPagP1->Date.CurrentDate();
	dtpPagP2->Date = dtpPagP2->Date.CurrentDate();
	dtpPagP3->Date = dtpPagP3->Date.CurrentDate();
	dtpPagP4->Date = dtpPagP4->Date.CurrentDate();
	dtpPagP5->Date = dtpPagP5->Date.CurrentDate();
	dtpPagP6->Date = dtpPagP6->Date.CurrentDate();
	dtpPagP7->Date = dtpPagP7->Date.CurrentDate();
	dtpPagP8->Date = dtpPagP8->Date.CurrentDate();
	dtpPagP9->Date = dtpPagP9->Date.CurrentDate();
	dtpPagP10->Date = dtpPagP10->Date.CurrentDate();
	dtpPagP11->Date = dtpPagP10->Date.CurrentDate();
	dtpPagP12->Date = dtpPagP10->Date.CurrentDate();
	edtValP1->Text =  "0,00";
	//edtValP1->Enabled = false;
	edtValP2->Text =  "0,00";
	//edtValP2->Enabled = false;
	edtValP3->Text =  "0,00";
	//edtValP3->Enabled = false;
	edtValP4->Text =  "0,00";
	//edtValP4->Enabled = false;
	edtValP5->Text =  "0,00";
	//edtValP5->Enabled = false;
	edtValP6->Text =  "0,00";
	//edtValP6->Enabled = false;
	edtValP7->Text =  "0,00";
	//edtValP7->Enabled = false;
	edtValP8->Text =  "0,00";
	//edtValP8->Enabled = false;
	edtValP9->Text =  "0,00";
	//edtValP9->Enabled = false;
	edtValP10->Text =  "0,00";
	//edtValP10->Enabled = false;
	edtValP11->Text =  "0,00";
	//edtValP11->Enabled = false;
	edtValP12->Text =  "0,00";
	//edtValP12->Enabled = false;

		if (DM1->CDSFiltroParcelasPil->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasPil->RecordCount; i++)
			{
				if (i == 0)
				{
					edtValP1->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 1)
				{
					edtValP2->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 2)
				{
					edtValP3->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 3)
				{
					edtValP4->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 4)
				{
					edtValP5->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 5)
				{
					edtValP6->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 6)
				{
					edtValP7->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 7)
				{
					edtValP8->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 8)
				{
					edtValP9->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 9)
				{
					edtValP10->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 10)
				{
					edtValP11->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 11)
				{
					edtValP12->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
			}
		}
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaPil::btnEditarClick(TObject *Sender)
{
imgCadeado1->Visible = false;
imgCadeado2->Visible = false;
btnEditar->Enabled = false;
btnSalvar->Enabled = true;
btnCancelar->Enabled = true;
Panel1->Enabled = true;
Panel2->Enabled = true;
//dtpAlta->Enabled = true;
//edtSessoes->Enabled = true;
DM1->CDSFiltroFichaPil->Edit();
DM1->CDSFiltroParcelasPil->Edit();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaPil::btnCancelarClick(TObject *Sender)
{
DM1->CDSFiltroFichaPil->Cancel();
DM1->CDSFiltroParcelasPil->Cancel();
imgCadeado1->Visible = true;
imgCadeado2->Visible = true;
btnEditar->Enabled = true;
btnSalvar->Enabled = false;
btnCancelar->Enabled = false;
Panel1->Enabled = false;
Panel2->Enabled = true;
Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaPil::FormClose(TObject *Sender, TCloseAction &Action)

{
dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
dtpPagP1->Date = dtpPagP1->Date.CurrentDate();
dtpPagP2->Date = dtpPagP2->Date.CurrentDate();
dtpPagP3->Date = dtpPagP3->Date.CurrentDate();
dtpPagP4->Date = dtpPagP4->Date.CurrentDate();
dtpPagP5->Date = dtpPagP5->Date.CurrentDate();
dtpPagP6->Date = dtpPagP6->Date.CurrentDate();
dtpPagP7->Date = dtpPagP7->Date.CurrentDate();
dtpPagP8->Date = dtpPagP8->Date.CurrentDate();
dtpPagP9->Date = dtpPagP9->Date.CurrentDate();
dtpPagP10->Date = dtpPagP10->Date.CurrentDate();
edtValP1->Text =  "0,00";
//edtValP1->Enabled = false;
edtValP2->Text =  "0,00";
//edtValP2->Enabled = false;
edtValP3->Text =  "0,00";
//edtValP3->Enabled = false;
edtValP4->Text =  "0,00";
//edtValP4->Enabled = false;
edtValP5->Text =  "0,00";
//edtValP5->Enabled = false;
edtValP6->Text =  "0,00";
//edtValP6->Enabled = false;
edtValP7->Text =  "0,00";
//edtValP7->Enabled = false;
edtValP8->Text =  "0,00";
//edtValP8->Enabled = false;
edtValP9->Text =  "0,00";
//edtValP9->Enabled = false;
edtValP10->Text =  "0,00";
//edtValP10->Enabled = false;
edtNumParcelas->ItemIndex = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaPil::btnSalvarClick(TObject *Sender)
{
	try
	{
		//DM1->CDSPilates->Append();
		//edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		DM1->CDSFiltroFichaPil->FieldByName("cod_paciente_ficha_pil")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
		DM1->CDSFiltroFichaPil->FieldByName("frequencia_pilates")->AsString = edtFrequencia->Text;
		DM1->CDSFiltroFichaPil->FieldByName("dias_pilates")->AsString = edtDias->Text;
		DM1->CDSFiltroFichaPil->FieldByName("horario_pilates")->AsString = edtHorario->Text;
		DM1->CDSFiltroFichaPil->FieldByName("tempo_parado_pilates")->AsString = edtTParado->Text;

		dtpInicio->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaPil->FieldByName("data_inicio_pilates")->AsString = dtpInicio->Date.DateString();
		dtpInicio->Format = "";

		DM1->CDSFiltroFichaPil->FieldByName("atividade_fisica_pilates")->AsString = RGAtividade->ItemIndex;
		DM1->CDSFiltroFichaPil->FieldByName("tabagismo_pilates")->AsString = edtTabagismo->Text;
		DM1->CDSFiltroFichaPil->FieldByName("labirintite_pilates")->AsString = edtLabirintite->Text;
		DM1->CDSFiltroFichaPil->FieldByName("restricoes_pilates")->AsString = edtRestricoes->Text;
		DM1->CDSFiltroFichaPil->FieldByName("alteracao_cardio_pilates")->AsString = edtACardio->Text;
		DM1->CDSFiltroFichaPil->FieldByName("alteracao_metab_pilates")->AsString = edtAMetabolicas->Text;
		DM1->CDSFiltroFichaPil->FieldByName("medicamentos_pilates")->AsString = edtMedicamentos->Text;
		DM1->CDSFiltroFichaPil->FieldByName("dores_pilates")->AsString = edtDores->Text;
		DM1->CDSFiltroFichaPil->FieldByName("desvio_pilates")->AsString = edtDesvio->Text;
		DM1->CDSFiltroFichaPil->FieldByName("alergia_pilates")->AsString = edtAlergia->Text;
		DM1->CDSFiltroFichaPil->FieldByName("lesao_pilates")->AsString = edtLesao->Text;
		DM1->CDSFiltroFichaPil->FieldByName("pratica_pilates")->AsString = edtPratica->Text;
		DM1->CDSFiltroFichaPil->FieldByName("cirurgia_pilates")->AsString = edtCirurgia->Text;
		DM1->CDSFiltroFichaPil->FieldByName("ult_atividade_pilates")->AsString = edtUltAtividade->Text;
		DM1->CDSFiltroFichaPil->FieldByName("doencas_hered_pilates")->AsString = edtDoencas->Text;
		DM1->CDSFiltroFichaPil->FieldByName("indicacoes_med_pilates")->AsString = edtIndicacoes->Text;
		DM1->CDSFiltroFichaPil->FieldByName("exame_fis_pilates")->AsString = memoExame->Lines->DelimitedText;

		DM1->CDSFiltroFichaPil->ApplyUpdates(0);
		DM1->CDSFiltroFichaPil->Refresh();

		if (edtNumParcelas->ItemIndex != 0)
		{
			DM1->CDSFiltroParcelasPil->First();
			for (int i = 0; i < edtNumParcelas->ItemIndex; i++)
			{
				if (i == 0)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP1->Text;
					dtpVencimentoP1->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP1->Date.DateString();
					dtpVencimentoP1->Format = "";
					dtpPagP1->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP1->Date.DateString();
					dtpPagP1->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 1)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP2->Text;
					dtpVencimentoP2->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP2->Date.DateString();
					dtpVencimentoP2->Format = "";
					dtpPagP2->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP2->Date.DateString();
					dtpPagP2->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 2)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP3->Text;
					dtpVencimentoP3->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP3->Date.DateString();
					dtpVencimentoP3->Format = "";
					dtpPagP3->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP3->Date.DateString();
					dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 3)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP4->Text;
					dtpVencimentoP4->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP4->Date.DateString();
					dtpVencimentoP4->Format = "";
					dtpPagP4->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP4->Date.DateString();
					dtpPagP4->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 4)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP5->Text;
					dtpVencimentoP5->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP5->Date.DateString();
					dtpVencimentoP5->Format = "";
					dtpPagP5->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP5->Date.DateString();
					dtpPagP5->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 5)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP6->Text;
					dtpVencimentoP6->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP6->Date.DateString();
					dtpVencimentoP6->Format = "";
					dtpPagP6->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP6->Date.DateString();
					dtpPagP6->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 6)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP7->Text;
					dtpVencimentoP7->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP7->Date.DateString();
					dtpVencimentoP7->Format = "";
					dtpPagP7->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP7->Date.DateString();
					dtpPagP7->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 7)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP8->Text;
					dtpVencimentoP8->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP8->Date.DateString();
					dtpVencimentoP8->Format = "";
					dtpPagP8->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP8->Date.DateString();
					dtpPagP8->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 8)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP9->Text;
					dtpVencimentoP9->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP9->Date.DateString();
					dtpVencimentoP9->Format = "";
					dtpPagP9->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP9->Date.DateString();
					dtpPagP9->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 9)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP10->Text;
					dtpVencimentoP10->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP10->Date.DateString();
					dtpVencimentoP10->Format = "";
					dtpPagP10->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP10->Date.DateString();
					dtpPagP10->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 10)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP11->Text;
					dtpVencimentoP11->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP11->Date.DateString();
					dtpVencimentoP11->Format = "";
					dtpPagP11->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP11->Date.DateString();
					dtpPagP11->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 11)
				{
					DM1->CDSFiltroParcelasPil->Edit();
					DM1->CDSFiltroParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = codClientePil;
					DM1->CDSFiltroParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = codFichaPil;
					DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP12->Text;
					dtpVencimentoP12->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP12->Date.DateString();
					dtpVencimentoP12->Format = "";
					dtpPagP12->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP12->Date.DateString();
					dtpPagP12->Format = "";
					DM1->CDSFiltroParcelasPil->ApplyUpdates(0);
					DM1->CDSFiltroParcelasPil->Refresh();
					DM1->CDSFiltroParcelasPil->Next();
				}
				//DM1->CDSParcelasPil->ApplyUpdates(0);
				//DM1->CDSParcelasPil->Refresh();
			}
		}
		/*edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		edtTParado->Text = "Tempo?";
		edtFrequencia->Clear();
		edtDias->Clear();
		edtHorario->Clear();
		dtpInicio->Date = dtpInicio->Date.CurrentDate();
		RGAtividade->ItemIndex = 0;
		edtTabagismo->Clear();
		edtLabirintite->Clear();
		edtRestricoes->Clear();
		edtACardio->Clear();
		edtAMetabolicas->Clear();
		edtMedicamentos->Clear();
		edtDores->Clear();
		edtDesvio->Clear();
		edtAlergia->Clear();
		edtLesao->Clear();
		edtPratica->Clear();
		edtCirurgia->Clear();
		edtUltAtividade->Clear();
		edtDoencas->Clear();
		edtIndicacoes->Clear();
		memoExame->Clear();

		dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
		dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
		dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
		dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
		dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
		dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
		dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
		dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
		dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
		dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
		dtpVencimentoP11->Date = dtpVencimentoP10->Date.CurrentDate();
		dtpVencimentoP12->Date = dtpVencimentoP10->Date.CurrentDate();
		dtpPagP1->Date = StrToDate(dataPadraoG);
		dtpPagP2->Date = StrToDate(dataPadraoG);
		dtpPagP3->Date = StrToDate(dataPadraoG);
		dtpPagP4->Date = StrToDate(dataPadraoG);
		dtpPagP5->Date = StrToDate(dataPadraoG);
		dtpPagP6->Date = StrToDate(dataPadraoG);
		dtpPagP7->Date = StrToDate(dataPadraoG);
		dtpPagP8->Date = StrToDate(dataPadraoG);
		dtpPagP9->Date = StrToDate(dataPadraoG);
		dtpPagP10->Date = StrToDate(dataPadraoG);
		dtpPagP11->Date = StrToDate(dataPadraoG);
		dtpPagP12->Date = StrToDate(dataPadraoG);
		edtValP1->Text =  "0,00";
		edtValP1->Enabled = false;
		edtValP2->Text =  "0,00";
		edtValP2->Enabled = false;
		edtValP3->Text =  "0,00";
		edtValP3->Enabled = false;
		edtValP4->Text =  "0,00";
		edtValP4->Enabled = false;
		edtValP5->Text =  "0,00";
		edtValP5->Enabled = false;
		edtValP6->Text =  "0,00";
		edtValP6->Enabled = false;
		edtValP7->Text =  "0,00";
		edtValP7->Enabled = false;
		edtValP8->Text =  "0,00";
		edtValP8->Enabled = false;
		edtValP9->Text =  "0,00";
		edtValP9->Enabled = false;
		edtValP10->Text =  "0,00";
		edtValP10->Enabled = false;
		edtValP11->Text =  "0,00";
		edtValP11->Enabled = false;
		edtValP12->Text =  "0,00";
		edtValP12->Enabled = false;
		edtNumParcelas->ItemIndex = 0;*/

		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Avaliação", MB_OK);
	}
	catch (Exception& E)
	{
		ShowMessage("Erro ao Salvar. Código do erro:\n" + E.Message);

	}
    //------------------------------------------------
imgCadeado1->Visible = true;
imgCadeado2->Visible = true;
btnEditar->Enabled = true;
btnSalvar->Enabled = false;
btnCancelar->Enabled = false;
Panel1->Enabled = false;
Panel2->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::BitBtn1Click(TObject *Sender)
{
frmFiltroFichaPil->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP1Change(TObject *Sender)
{
edtValP1->Text = FormatFloat("####.00", edtValP1->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP2Change(TObject *Sender)
{
edtValP2->Text = FormatFloat("####.00", edtValP2->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP3Change(TObject *Sender)
{
edtValP3->Text = FormatFloat("####.00", edtValP3->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP4Change(TObject *Sender)
{
edtValP4->Text = FormatFloat("####.00", edtValP4->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP5Change(TObject *Sender)
{
edtValP5->Text = FormatFloat("####.00", edtValP5->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP6Change(TObject *Sender)
{
edtValP6->Text = FormatFloat("####.00", edtValP6->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP7Change(TObject *Sender)
{
edtValP7->Text = FormatFloat("####.00", edtValP7->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP8Change(TObject *Sender)
{
edtValP8->Text = FormatFloat("####.00", edtValP8->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP9Change(TObject *Sender)
{
edtValP9->Text = FormatFloat("####.00", edtValP9->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP10Change(TObject *Sender)
{
edtValP10->Text = FormatFloat("####.00", edtValP10->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP11Change(TObject *Sender)
{
edtValP11->Text = FormatFloat("####.00", edtValP11->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::edtValP12Change(TObject *Sender)
{
edtValP12->Text = FormatFloat("####.00", edtValP12->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaPil::btnExcluirClick(TObject *Sender)
{
if (DM1->CDSFiltroFichaPil->RecordCount == 0)
{
	MessageBoxA(NULL, "Não há registros para excluir!", "Exclusão de Ficha", MB_OK);
}
else
{
	TMsgDlgBtn myYes = mbYes;
	TMsgDlgBtn myNo = mbNo;

	if(MessageDlg("Deletar registro ?", mtConfirmation, TMsgDlgButtons() << myYes << myNo,0) == mrYes)
	{
		DM1->CDSFiltroFichaPil->Delete();
		DM1->CDSFiltroFichaPil->ApplyUpdates(0);
		DM1->CDSFiltroFichaPil->Refresh();
		if (DM1->CDSFiltroFichaPil->RecordCount == 0)
		{
			//limpar
			dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
			dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
			dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
			dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
			dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
			dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
			dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
			dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
			dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
			dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
			dtpPagP1->Date = dtpPagP1->Date.CurrentDate();
			dtpPagP2->Date = dtpPagP2->Date.CurrentDate();
			dtpPagP3->Date = dtpPagP3->Date.CurrentDate();
			dtpPagP4->Date = dtpPagP4->Date.CurrentDate();
			dtpPagP5->Date = dtpPagP5->Date.CurrentDate();
			dtpPagP6->Date = dtpPagP6->Date.CurrentDate();
			dtpPagP7->Date = dtpPagP7->Date.CurrentDate();
			dtpPagP8->Date = dtpPagP8->Date.CurrentDate();
			dtpPagP9->Date = dtpPagP9->Date.CurrentDate();
			dtpPagP10->Date = dtpPagP10->Date.CurrentDate();
			edtValP1->Text =  "0,00";
			//edtValP1->Enabled = false;
			edtValP2->Text =  "0,00";
			//edtValP2->Enabled = false;
			edtValP3->Text =  "0,00";
			//edtValP3->Enabled = false;
			edtValP4->Text =  "0,00";
			//edtValP4->Enabled = false;
			edtValP5->Text =  "0,00";
			//edtValP5->Enabled = false;
			edtValP6->Text =  "0,00";
			//edtValP6->Enabled = false;
			edtValP7->Text =  "0,00";
			//edtValP7->Enabled = false;
			edtValP8->Text =  "0,00";
			//edtValP8->Enabled = false;
			edtValP9->Text =  "0,00";
			//edtValP9->Enabled = false;
			edtValP10->Text =  "0,00";
			//edtValP10->Enabled = false;
			edtNumParcelas->ItemIndex = 0;

			edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
			edtTParado->Text = "Tempo?";
			edtFrequencia->Clear();
			edtDias->Clear();
			edtHorario->Clear();
			dtpInicio->Date = dtpInicio->Date.CurrentDate();
			RGAtividade->ItemIndex = 0;
			edtTabagismo->Clear();
			edtLabirintite->Clear();
			edtRestricoes->Clear();
			edtACardio->Clear();
			edtAMetabolicas->Clear();
			edtMedicamentos->Clear();
			edtDores->Clear();
			edtDesvio->Clear();
			edtAlergia->Clear();
			edtLesao->Clear();
			edtPratica->Clear();
			edtCirurgia->Clear();
			edtUltAtividade->Clear();
			edtDoencas->Clear();
			edtIndicacoes->Clear();
			memoExame->Clear();
		}
		else
		{
			//preencher
			DM1->CDSFiltroFichaPil->Refresh();

            codClientePil = DM1->CDSFiltroFichaPil->FieldByName("cod_paciente_ficha_pil")->AsInteger;
			codFichaPil = DM1->CDSFiltroFichaPil->FieldByName("cod_ficha_pilates")->AsInteger;
			DM1->SQLFiltroPaciente->SQL->Clear();
			DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClientePil) + "';");
			DM1->SQLFiltroPaciente->Open();
			DM1->SQLFiltroPaciente->Refresh();
			DM1->cdsFiltroPaciente->Refresh();
			edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

			edtFrequencia->Text = DM1->CDSFiltroFichaPil->FieldByName("frequencia_pilates")->AsString;
			edtDias->Text = DM1->CDSFiltroFichaPil->FieldByName("dias_pilates")->AsString;
			edtHorario->Text = DM1->CDSFiltroFichaPil->FieldByName("horario_pilates")->AsString;
			edtTParado->Text = DM1->CDSFiltroFichaPil->FieldByName("tempo_parado_pilates")->AsString;
			dtpInicio->Format = "yyyy/dd/MM";
			dtpInicio->Date = DM1->CDSFiltroFichaPil->FieldByName("data_inicio_pilates")->AsString;
			dtpInicio->Format = "";
			RGAtividade->ItemIndex = DM1->CDSFiltroFichaPil->FieldByName("atividade_fisica_pilates")->AsInteger;
			edtTabagismo->Text = DM1->CDSFiltroFichaPil->FieldByName("tabagismo_pilates")->AsString;
			edtLabirintite->Text = DM1->CDSFiltroFichaPil->FieldByName("labirintite_pilates")->AsString;
			edtRestricoes->Text = DM1->CDSFiltroFichaPil->FieldByName("restricoes_pilates")->AsString;
			edtACardio->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_cardio_pilates")->AsString;
			edtAMetabolicas->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_metab_pilates")->AsString;
			edtMedicamentos->Text = DM1->CDSFiltroFichaPil->FieldByName("medicamentos_pilates")->AsString;
			edtDores->Text = DM1->CDSFiltroFichaPil->FieldByName("dores_pilates")->AsString;
			edtDesvio->Text = DM1->CDSFiltroFichaPil->FieldByName("desvio_pilates")->AsString;
			edtAlergia->Text = DM1->CDSFiltroFichaPil->FieldByName("alergia_pilates")->AsString;
			edtLesao->Text = DM1->CDSFiltroFichaPil->FieldByName("lesao_pilates")->AsString;
			edtPratica->Text = DM1->CDSFiltroFichaPil->FieldByName("pratica_pilates")->AsString;
			edtCirurgia->Text = DM1->CDSFiltroFichaPil->FieldByName("cirurgia_pilates")->AsString;
			edtUltAtividade->Text = DM1->CDSFiltroFichaPil->FieldByName("ult_atividade_pilates")->AsString;
			edtDoencas->Text = DM1->CDSFiltroFichaPil->FieldByName("doencas_hered_pilates")->AsString;
			edtIndicacoes->Text = DM1->CDSFiltroFichaPil->FieldByName("indicacoes_med_pilates")->AsString;
			memoExame->Lines->DelimitedText = DM1->CDSFiltroFichaPil->FieldByName("exame_fis_pilates")->AsString;

			DM1->SQLFiltroParcelasPil->SQL->Clear();
			DM1->SQLFiltroParcelasPil->SQL->Add("SELECT * FROM parcelas_ficha_pil WHERE parcelas_ficha_pil.cod_cliente_parcela_ficha_pil = '" + IntToStr(codClientePil) + "' AND parcelas_ficha_pil.cod_ficha_parcela_pil = '" + codFichaPil + "';");
			DM1->SQLFiltroParcelasPil->Open();
			DM1->SQLFiltroParcelasPil->Refresh();
			DM1->CDSFiltroParcelasPil->Refresh();
			DM1->CDSFiltroParcelasPil->First();
			edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelasPil->RecordCount;

				if (DM1->CDSFiltroParcelasPil->RecordCount != 0)
				{
					for (int i = 0; i < DM1->CDSFiltroParcelasPil->RecordCount; i++)
					{
						if (i == 0)
						{
							edtValP1->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 1)
						{
							edtValP2->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 2)
						{
							edtValP3->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 3)
						{
							edtValP4->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 4)
						{
							edtValP5->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 5)
						{
							edtValP6->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 6)
						{
							edtValP7->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 7)
						{
							edtValP8->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 8)
						{
							edtValP9->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 9)
						{
							edtValP10->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
							}
						if (i == 10)
						{
							edtValP11->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
						if (i == 11)
						{
							edtValP12->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasPil->Next();
						}
					}
				}
				MessageBoxA(NULL, "Registro excluido com sucesso!", "Exclusão de Ficha", MB_OK);
		}
	}
}
}
//---------------------------------------------------------------------------

