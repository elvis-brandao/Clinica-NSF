//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untFiltroFichaPil.h"
#include "untDM.h"
#include "untEditaFichaPil.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFiltroFichaPil *frmFiltroFichaPil;
//---------------------------------------------------------------------------
__fastcall TfrmFiltroFichaPil::TfrmFiltroFichaPil(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaPil::edtBuscaChange(TObject *Sender)
{
if (rdTipoBusca->ItemIndex == 0) {
	DM1->CDSPaciente->Filtered = false;
	DM1->CDSPaciente->Filter = "cpf_paciente LIKE" + QuotedStr("%"+edtBusca->Text+"%");
	DM1->CDSPaciente->Filtered = true;
}
else
{
	DM1->CDSPaciente->Filtered = false;
	DM1->CDSPaciente->Filter = "nome_paciente LIKE" + QuotedStr("%"+edtBusca->Text+"%");
	DM1->CDSPaciente->Filtered = true;
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaPil::gridPacienteCellClick(TColumn *Column)
{
DM1->SQLFiltroFichaPil->SQL->Clear();
DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPil->Open();
DM1->CDSFiltroFichaPil->Refresh();
gridFichaFisio->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaPil::gridFichaFisioDblClick(TObject *Sender)
{
if (DM1->CDSFiltroFichaPil->RecordCount > 0)
{
	frmEditaFichaPil->codFichaPil = DM1->CDSFiltroFichaPil->FieldByName("cod_ficha_pilates")->AsInteger;
	frmEditaFichaPil->codClientePil = DM1->CDSFiltroFichaPil->FieldByName("cod_paciente_ficha_pil")->AsInteger;
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEditaFichaPil->codClientePil) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	frmEditaFichaPil->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;
	frmEditaFichaPil->edtFrequencia->Text = DM1->CDSFiltroFichaPil->FieldByName("frequencia_pilates")->AsString;
	frmEditaFichaPil->edtDias->Text = DM1->CDSFiltroFichaPil->FieldByName("dias_pilates")->AsString;
	frmEditaFichaPil->edtHorario->Text = DM1->CDSFiltroFichaPil->FieldByName("horario_pilates")->AsString;
	frmEditaFichaPil->edtTParado->Text = DM1->CDSFiltroFichaPil->FieldByName("tempo_parado_pilates")->AsString;
	frmEditaFichaPil->dtpInicio->Format = "yyyy/dd/MM";
	frmEditaFichaPil->dtpInicio->Date = DM1->CDSFiltroFichaPil->FieldByName("data_inicio_pilates")->AsString;
	frmEditaFichaPil->dtpInicio->Format = "";
	frmEditaFichaPil->RGAtividade->ItemIndex = DM1->CDSFiltroFichaPil->FieldByName("atividade_fisica_pilates")->AsInteger;
	frmEditaFichaPil->edtTabagismo->Text = DM1->CDSFiltroFichaPil->FieldByName("tabagismo_pilates")->AsString;
	frmEditaFichaPil->edtLabirintite->Text = DM1->CDSFiltroFichaPil->FieldByName("labirintite_pilates")->AsString;
	frmEditaFichaPil->edtRestricoes->Text = DM1->CDSFiltroFichaPil->FieldByName("restricoes_pilates")->AsString;
	frmEditaFichaPil->edtACardio->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_cardio_pilates")->AsString;
	frmEditaFichaPil->edtAMetabolicas->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_metab_pilates")->AsString;
	frmEditaFichaPil->edtMedicamentos->Text = DM1->CDSFiltroFichaPil->FieldByName("medicamentos_pilates")->AsString;
	frmEditaFichaPil->edtDores->Text = DM1->CDSFiltroFichaPil->FieldByName("dores_pilates")->AsString;
	frmEditaFichaPil->edtDesvio->Text = DM1->CDSFiltroFichaPil->FieldByName("desvio_pilates")->AsString;
	frmEditaFichaPil->edtAlergia->Text = DM1->CDSFiltroFichaPil->FieldByName("alergia_pilates")->AsString;
	frmEditaFichaPil->edtLesao->Text = DM1->CDSFiltroFichaPil->FieldByName("lesao_pilates")->AsString;
	frmEditaFichaPil->edtPratica->Text = DM1->CDSFiltroFichaPil->FieldByName("pratica_pilates")->AsString;
	frmEditaFichaPil->edtCirurgia->Text = DM1->CDSFiltroFichaPil->FieldByName("cirurgia_pilates")->AsString;
	frmEditaFichaPil->edtUltAtividade->Text = DM1->CDSFiltroFichaPil->FieldByName("ult_atividade_pilates")->AsString;
	frmEditaFichaPil->edtDoencas->Text = DM1->CDSFiltroFichaPil->FieldByName("doencas_hered_pilates")->AsString;
	frmEditaFichaPil->edtIndicacoes->Text = DM1->CDSFiltroFichaPil->FieldByName("indicacoes_med_pilates")->AsString;
	frmEditaFichaPil->memoExame->Lines->DelimitedText = DM1->CDSFiltroFichaPil->FieldByName("exame_fis_pilates")->AsString;

	DM1->SQLFiltroParcelasPil->SQL->Clear();
	DM1->SQLFiltroParcelasPil->SQL->Add("SELECT * FROM parcelas_ficha_pil WHERE parcelas_ficha_pil.cod_cliente_parcela_ficha_pil = '" + IntToStr(frmEditaFichaPil->codClientePil) + "' AND parcelas_ficha_pil.cod_ficha_parcela_pil = '" + frmEditaFichaPil->codFichaPil + "';");
	DM1->SQLFiltroParcelasPil->Open();
	DM1->SQLFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->First();
	frmEditaFichaPil->edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelasPil->RecordCount;

	frmEditaFichaPil->dtpVencimentoP1->Date = frmEditaFichaPil->dtpVencimentoP1->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP2->Date = frmEditaFichaPil->dtpVencimentoP2->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP3->Date = frmEditaFichaPil->dtpVencimentoP3->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP4->Date = frmEditaFichaPil->dtpVencimentoP4->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP5->Date = frmEditaFichaPil->dtpVencimentoP5->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP6->Date = frmEditaFichaPil->dtpVencimentoP6->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP7->Date = frmEditaFichaPil->dtpVencimentoP7->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP8->Date = frmEditaFichaPil->dtpVencimentoP8->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP9->Date = frmEditaFichaPil->dtpVencimentoP9->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP10->Date = frmEditaFichaPil->dtpVencimentoP10->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP11->Date = frmEditaFichaPil->dtpVencimentoP10->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP12->Date = frmEditaFichaPil->dtpVencimentoP10->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP1->Date = frmEditaFichaPil->dtpPagP1->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP2->Date = frmEditaFichaPil->dtpPagP2->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP3->Date = frmEditaFichaPil->dtpPagP3->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP4->Date = frmEditaFichaPil->dtpPagP4->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP5->Date = frmEditaFichaPil->dtpPagP5->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP6->Date = frmEditaFichaPil->dtpPagP6->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP7->Date = frmEditaFichaPil->dtpPagP7->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP8->Date = frmEditaFichaPil->dtpPagP8->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP9->Date = frmEditaFichaPil->dtpPagP9->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP10->Date = frmEditaFichaPil->dtpPagP10->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP11->Date = frmEditaFichaPil->dtpPagP10->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP12->Date = frmEditaFichaPil->dtpPagP10->Date.CurrentDate();
	frmEditaFichaPil->edtValP1->Text =  "0,00";
	//edtValP1->Enabled = false;
	frmEditaFichaPil->edtValP2->Text =  "0,00";
	//edtValP2->Enabled = false;
	frmEditaFichaPil->edtValP3->Text =  "0,00";
	//edtValP3->Enabled = false;
	frmEditaFichaPil->edtValP4->Text =  "0,00";
	//edtValP4->Enabled = false;
	frmEditaFichaPil->edtValP5->Text =  "0,00";
	//edtValP5->Enabled = false;
	frmEditaFichaPil->edtValP6->Text =  "0,00";
	//edtValP6->Enabled = false;
	frmEditaFichaPil->edtValP7->Text =  "0,00";
	//edtValP7->Enabled = false;
	frmEditaFichaPil->edtValP8->Text =  "0,00";
	//edtValP8->Enabled = false;
	frmEditaFichaPil->edtValP9->Text =  "0,00";
	//edtValP9->Enabled = false;
	frmEditaFichaPil->edtValP10->Text =  "0,00";
	//edtValP10->Enabled = false;
	frmEditaFichaPil->edtValP11->Text =  "0,00";
	//edtValP11->Enabled = false;
	frmEditaFichaPil->edtValP12->Text =  "0,00";
	//edtValP12->Enabled = false;

		if (DM1->CDSFiltroParcelasPil->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasPil->RecordCount; i++)
			{
				if (i == 0)
				{
					frmEditaFichaPil->edtValP1->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 1)
				{
					frmEditaFichaPil->edtValP2->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 2)
				{
					frmEditaFichaPil->edtValP3->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 3)
				{
					frmEditaFichaPil->edtValP4->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 4)
				{
					frmEditaFichaPil->edtValP5->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 5)
				{
					frmEditaFichaPil->edtValP6->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 6)
				{
					frmEditaFichaPil->edtValP7->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 7)
				{
					frmEditaFichaPil->edtValP8->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 8)
				{
					frmEditaFichaPil->edtValP9->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 9)
				{
					frmEditaFichaPil->edtValP10->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 10)
				{
					frmEditaFichaPil->edtValP11->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 11)
				{
					frmEditaFichaPil->edtValP12->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
			}
		}
DM1->SQLFiltroFichaPil->SQL->Clear();
DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil LIKE '%';");
DM1->SQLFiltroFichaPil->Open();
DM1->CDSFiltroFichaPil->Refresh();
gridFichaFisio->Refresh();
Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaPil::BitBtn2Click(TObject *Sender)
{
if (DM1->CDSFiltroFichaPil->RecordCount > 0)
{
	frmEditaFichaPil->codFichaPil = DM1->CDSFiltroFichaPil->FieldByName("cod_ficha_pilates")->AsInteger;
	frmEditaFichaPil->codClientePil = DM1->CDSFiltroFichaPil->FieldByName("cod_paciente_ficha_pil")->AsInteger;
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEditaFichaPil->codClientePil) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	frmEditaFichaPil->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;
	frmEditaFichaPil->edtFrequencia->Text = DM1->CDSFiltroFichaPil->FieldByName("frequencia_pilates")->AsString;
	frmEditaFichaPil->edtDias->Text = DM1->CDSFiltroFichaPil->FieldByName("dias_pilates")->AsString;
	frmEditaFichaPil->edtHorario->Text = DM1->CDSFiltroFichaPil->FieldByName("horario_pilates")->AsString;
	frmEditaFichaPil->edtTParado->Text = DM1->CDSFiltroFichaPil->FieldByName("tempo_parado_pilates")->AsString;
	frmEditaFichaPil->dtpInicio->Format = "yyyy/dd/MM";
	frmEditaFichaPil->dtpInicio->Date = DM1->CDSFiltroFichaPil->FieldByName("data_inicio_pilates")->AsString;
	frmEditaFichaPil->dtpInicio->Format = "";
	frmEditaFichaPil->RGAtividade->ItemIndex = DM1->CDSFiltroFichaPil->FieldByName("atividade_fisica_pilates")->AsInteger;
	frmEditaFichaPil->edtTabagismo->Text = DM1->CDSFiltroFichaPil->FieldByName("tabagismo_pilates")->AsString;
	frmEditaFichaPil->edtLabirintite->Text = DM1->CDSFiltroFichaPil->FieldByName("labirintite_pilates")->AsString;
	frmEditaFichaPil->edtRestricoes->Text = DM1->CDSFiltroFichaPil->FieldByName("restricoes_pilates")->AsString;
	frmEditaFichaPil->edtACardio->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_cardio_pilates")->AsString;
	frmEditaFichaPil->edtAMetabolicas->Text = DM1->CDSFiltroFichaPil->FieldByName("alteracao_metab_pilates")->AsString;
	frmEditaFichaPil->edtMedicamentos->Text = DM1->CDSFiltroFichaPil->FieldByName("medicamentos_pilates")->AsString;
	frmEditaFichaPil->edtDores->Text = DM1->CDSFiltroFichaPil->FieldByName("dores_pilates")->AsString;
	frmEditaFichaPil->edtDesvio->Text = DM1->CDSFiltroFichaPil->FieldByName("desvio_pilates")->AsString;
	frmEditaFichaPil->edtAlergia->Text = DM1->CDSFiltroFichaPil->FieldByName("alergia_pilates")->AsString;
	frmEditaFichaPil->edtLesao->Text = DM1->CDSFiltroFichaPil->FieldByName("lesao_pilates")->AsString;
	frmEditaFichaPil->edtPratica->Text = DM1->CDSFiltroFichaPil->FieldByName("pratica_pilates")->AsString;
	frmEditaFichaPil->edtCirurgia->Text = DM1->CDSFiltroFichaPil->FieldByName("cirurgia_pilates")->AsString;
	frmEditaFichaPil->edtUltAtividade->Text = DM1->CDSFiltroFichaPil->FieldByName("ult_atividade_pilates")->AsString;
	frmEditaFichaPil->edtDoencas->Text = DM1->CDSFiltroFichaPil->FieldByName("doencas_hered_pilates")->AsString;
	frmEditaFichaPil->edtIndicacoes->Text = DM1->CDSFiltroFichaPil->FieldByName("indicacoes_med_pilates")->AsString;
	frmEditaFichaPil->memoExame->Lines->DelimitedText = DM1->CDSFiltroFichaPil->FieldByName("exame_fis_pilates")->AsString;

	DM1->SQLFiltroParcelasPil->SQL->Clear();
	DM1->SQLFiltroParcelasPil->SQL->Add("SELECT * FROM parcelas_ficha_pil WHERE parcelas_ficha_pil.cod_cliente_parcela_ficha_pil = '" + IntToStr(frmEditaFichaPil->codClientePil) + "' AND parcelas_ficha_pil.cod_ficha_parcela_pil = '" + frmEditaFichaPil->codFichaPil + "';");
	DM1->SQLFiltroParcelasPil->Open();
	DM1->SQLFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->Refresh();
	DM1->CDSFiltroParcelasPil->First();
	frmEditaFichaPil->edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelasPil->RecordCount;

	frmEditaFichaPil->dtpVencimentoP1->Date = frmEditaFichaPil->dtpVencimentoP1->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP2->Date = frmEditaFichaPil->dtpVencimentoP2->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP3->Date = frmEditaFichaPil->dtpVencimentoP3->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP4->Date = frmEditaFichaPil->dtpVencimentoP4->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP5->Date = frmEditaFichaPil->dtpVencimentoP5->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP6->Date = frmEditaFichaPil->dtpVencimentoP6->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP7->Date = frmEditaFichaPil->dtpVencimentoP7->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP8->Date = frmEditaFichaPil->dtpVencimentoP8->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP9->Date = frmEditaFichaPil->dtpVencimentoP9->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP10->Date = frmEditaFichaPil->dtpVencimentoP10->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP11->Date = frmEditaFichaPil->dtpVencimentoP10->Date.CurrentDate();
	frmEditaFichaPil->dtpVencimentoP12->Date = frmEditaFichaPil->dtpVencimentoP10->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP1->Date = frmEditaFichaPil->dtpPagP1->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP2->Date = frmEditaFichaPil->dtpPagP2->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP3->Date = frmEditaFichaPil->dtpPagP3->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP4->Date = frmEditaFichaPil->dtpPagP4->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP5->Date = frmEditaFichaPil->dtpPagP5->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP6->Date = frmEditaFichaPil->dtpPagP6->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP7->Date = frmEditaFichaPil->dtpPagP7->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP8->Date = frmEditaFichaPil->dtpPagP8->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP9->Date = frmEditaFichaPil->dtpPagP9->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP10->Date = frmEditaFichaPil->dtpPagP10->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP11->Date = frmEditaFichaPil->dtpPagP10->Date.CurrentDate();
	frmEditaFichaPil->dtpPagP12->Date = frmEditaFichaPil->dtpPagP10->Date.CurrentDate();
	frmEditaFichaPil->edtValP1->Text =  "0,00";
	//edtValP1->Enabled = false;
	frmEditaFichaPil->edtValP2->Text =  "0,00";
	//edtValP2->Enabled = false;
	frmEditaFichaPil->edtValP3->Text =  "0,00";
	//edtValP3->Enabled = false;
	frmEditaFichaPil->edtValP4->Text =  "0,00";
	//edtValP4->Enabled = false;
	frmEditaFichaPil->edtValP5->Text =  "0,00";
	//edtValP5->Enabled = false;
	frmEditaFichaPil->edtValP6->Text =  "0,00";
	//edtValP6->Enabled = false;
	frmEditaFichaPil->edtValP7->Text =  "0,00";
	//edtValP7->Enabled = false;
	frmEditaFichaPil->edtValP8->Text =  "0,00";
	//edtValP8->Enabled = false;
	frmEditaFichaPil->edtValP9->Text =  "0,00";
	//edtValP9->Enabled = false;
	frmEditaFichaPil->edtValP10->Text =  "0,00";
	//edtValP10->Enabled = false;
	frmEditaFichaPil->edtValP11->Text =  "0,00";
	//edtValP11->Enabled = false;
	frmEditaFichaPil->edtValP12->Text =  "0,00";
	//edtValP12->Enabled = false;

		if (DM1->CDSFiltroParcelasPil->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasPil->RecordCount; i++)
			{
				if (i == 0)
				{
					frmEditaFichaPil->edtValP1->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP1->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 1)
				{
					frmEditaFichaPil->edtValP2->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP2->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 2)
				{
					frmEditaFichaPil->edtValP3->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP3->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 3)
				{
					frmEditaFichaPil->edtValP4->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP4->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 4)
				{
					frmEditaFichaPil->edtValP5->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP5->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 5)
				{
					frmEditaFichaPil->edtValP6->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP6->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 6)
				{
					frmEditaFichaPil->edtValP7->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP7->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 7)
				{
					frmEditaFichaPil->edtValP8->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP8->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 8)
				{
					frmEditaFichaPil->edtValP9->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP9->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 9)
				{
					frmEditaFichaPil->edtValP10->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP10->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 10)
				{
					frmEditaFichaPil->edtValP11->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP11->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
				if (i == 11)
				{
					frmEditaFichaPil->edtValP12->Text = DM1->CDSFiltroParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpVencimentoP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaPil->dtpPagP12->Date = DM1->CDSFiltroParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasPil->Next();
				}
			}
		}
DM1->SQLFiltroFichaPil->SQL->Clear();
DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil LIKE '%';");
DM1->SQLFiltroFichaPil->Open();
DM1->CDSFiltroFichaPil->Refresh();
gridFichaFisio->Refresh();
Close();
}
}
//---------------------------------------------------------------------------
