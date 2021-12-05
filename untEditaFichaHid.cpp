//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untEditaFichaHid.h"
#include "untDM.h"
#include "untFiltroFichaHid.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEditaFichaHid *frmEditaFichaHid;
//---------------------------------------------------------------------------
__fastcall TfrmEditaFichaHid::TfrmEditaFichaHid(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::FormShow(TObject *Sender)
{
if (DM1->CDSFiltroFichaHid->RecordCount > 0)
{
	if (janela == 0 || janela == 1)
	{
		codClienteHid = DM1->CDSFiltroFichaHid->FieldByName("cod_pacinte_ficha_hidro")->AsInteger;
		codFichaHid = DM1->CDSFiltroFichaHid->FieldByName("cod_ficha_hidro")->AsInteger;
    }
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClienteHid) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

	//DM1->CDSHidro->FieldByName("cod_pacinte_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
	edtFrequencia->Text = DM1->CDSFiltroFichaHid->FieldByName("frequencia_hidro")->AsString;
	edtDias->Text = DM1->CDSFiltroFichaHid->FieldByName("dias_hidro")->AsString;
	edtHorario->Text = DM1->CDSFiltroFichaHid->FieldByName("horario_hidro")->AsString;
	edtRestricoes->Text = DM1->CDSFiltroFichaHid->FieldByName("restricoes_hidro")->AsString;
	edtACardio->Text = DM1->CDSFiltroFichaHid->FieldByName("alteracoes_hidro")->AsString;
	edtPRespiratorio->Text = DM1->CDSFiltroFichaHid->FieldByName("prob_resp_hidro")->AsString;
	edtAlergia->Text = DM1->CDSFiltroFichaHid->FieldByName("alergia_hidro")->AsString;
	edtMedicamentos->Text = DM1->CDSFiltroFichaHid->FieldByName("medicamentos_hidro")->AsString;
	edtFerimento->Text = DM1->CDSFiltroFichaHid->FieldByName("ferimento_hidro")->AsString;
	edtInsuficiencia->Text = DM1->CDSFiltroFichaHid->FieldByName("insuficiencia_uri_hidro")->AsString;
	edtPeso->Text = DM1->CDSFiltroFichaHid->FieldByName("peso_hidro")->AsString;
	edtLabirintite->Text = DM1->CDSFiltroFichaHid->FieldByName("labirintite_hidro")->AsString;
	edtCirurgia->Text = DM1->CDSFiltroFichaHid->FieldByName("cirurgia_hidro")->AsString;
	edtPratica->Text = DM1->CDSFiltroFichaHid->FieldByName("prat_ativ_fis_hidro")->AsString;
	edtHipertensao->Text = DM1->CDSFiltroFichaHid->FieldByName("hipertensao_hidro")->AsString;
	edtDoencas->Text = DM1->CDSFiltroFichaHid->FieldByName("doencas_hered_hidro")->AsString;

	//dtpInicio->Format = "yyyy/dd/MM";
	dtpInicio->Date = DM1->CDSFiltroFichaHid->FieldByName("data_inicio_hidro")->AsString;
	//dtpInicio->Format = "";
	//DM1->CDSFiltroFichaHid->FieldByName("")->AsString =dtpInicio->Date = dtpInicio->Date.CurrentDate();

	edtMMII->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmii_hidro")->AsString;
	edtMMSS->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmss_hidro")->AsString;
	edtTabagismo->Text = DM1->CDSFiltroFichaHid->FieldByName("tabagismo_hidro")->AsString;
	edtImc->Text = DM1->CDSFiltroFichaHid->FieldByName("imc_hidro")->AsString;
	edtAltura->Text = DM1->CDSFiltroFichaHid->FieldByName("altura_hidro")->AsString;
	edtInflamacao->Text = DM1->CDSFiltroFichaHid->FieldByName("inflamacao_hidro")->AsString;
	edtPA->Text = DM1->CDSFiltroFichaHid->FieldByName("PA_hidro")->AsString;
	edtDiabetes->Text = DM1->CDSFiltroFichaHid->FieldByName("diabetes_hidro")->AsString;
	edtSaturacao->Text = DM1->CDSFiltroFichaHid->FieldByName("saturacao_hidro")->AsString;
	edtBicipital->Text = DM1->CDSFiltroFichaHid->FieldByName("bicipital_hidro")->AsString;
	edtPatelar->Text = DM1->CDSFiltroFichaHid->FieldByName("patelar_hidro")->AsString;
	edtAquileu->Text = DM1->CDSFiltroFichaHid->FieldByName("aquileu_hidro")->AsString;
	edtTEquilibrio->Text = DM1->CDSFiltroFichaHid->FieldByName("equilibrio_hidro")->AsString;
	edtTDedoNariz->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	edtPRomberg->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	edtTCalcanhar->Text = DM1->CDSFiltroFichaHid->FieldByName("calcanhar_hidro")->AsString;

	DM1->SQLFiltroParcelasHid->SQL->Clear();
	DM1->SQLFiltroParcelasHid->SQL->Add("SELECT * FROM parcelas_ficha_hidro WHERE parcelas_ficha_hidro.cod_cliente_parcela_ficha_hidro = '" + IntToStr(codClienteHid) + "' AND parcelas_ficha_hidro.cod_ficha_parcela_hidro = '" + codFichaHid + "';");
	DM1->SQLFiltroParcelasHid->Open();
	DM1->SQLFiltroParcelasHid->Refresh();
	DM1->CDSFiltroParcelasHid->Refresh();
	DM1->SQLFiltroParcelasHid->First();
	edtNumParcelas->ItemIndex = DM1->SQLFiltroParcelasHid->RecordCount;

		if (DM1->CDSFiltroParcelasHid->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasHid->RecordCount; i++)
			{
				if (i == 0)
				{
					edtValP1->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 1)
				{
					edtValP2->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 2)
				{
					edtValP3->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 3)
				{
					edtValP4->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 4)
				{
					edtValP5->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 5)
				{
					edtValP6->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 6)
				{
					edtValP7->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 7)
				{
					edtValP8->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 8)
				{
					edtValP9->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 9)
				{
					edtValP10->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 10)
				{
					edtValP11->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 11)
				{
					edtValP12->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
			}
		}
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)

{
if (DM1->CDSFiltroFichaHid->RecordCount > 0)
{
	codClienteHid = DM1->CDSFiltroFichaHid->FieldByName("cod_pacinte_ficha_hidro")->AsInteger;
	codFichaHid = DM1->CDSFiltroFichaHid->FieldByName("cod_ficha_hidro")->AsInteger;
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClienteHid) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

    //DM1->CDSFiltroFichaHid->FieldByName("cod_pacinte_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
	edtFrequencia->Text = DM1->CDSFiltroFichaHid->FieldByName("frequencia_hidro")->AsString;
	edtDias->Text = DM1->CDSFiltroFichaHid->FieldByName("dias_hidro")->AsString;
	edtHorario->Text = DM1->CDSFiltroFichaHid->FieldByName("horario_hidro")->AsString;
	edtRestricoes->Text = DM1->CDSFiltroFichaHid->FieldByName("restricoes_hidro")->AsString;
	edtACardio->Text = DM1->CDSFiltroFichaHid->FieldByName("alteracoes_hidro")->AsString;
	edtPRespiratorio->Text = DM1->CDSFiltroFichaHid->FieldByName("prob_resp_hidro")->AsString;
	edtAlergia->Text = DM1->CDSFiltroFichaHid->FieldByName("alergia_hidro")->AsString;
	edtMedicamentos->Text = DM1->CDSFiltroFichaHid->FieldByName("medicamentos_hidro")->AsString;
	edtFerimento->Text = DM1->CDSFiltroFichaHid->FieldByName("ferimento_hidro")->AsString;
	edtInsuficiencia->Text = DM1->CDSFiltroFichaHid->FieldByName("insuficiencia_uri_hidro")->AsString;
	edtPeso->Text = DM1->CDSFiltroFichaHid->FieldByName("peso_hidro")->AsString;
	edtLabirintite->Text = DM1->CDSFiltroFichaHid->FieldByName("labirintite_hidro")->AsString;
	edtCirurgia->Text = DM1->CDSFiltroFichaHid->FieldByName("cirurgia_hidro")->AsString;
	edtPratica->Text = DM1->CDSFiltroFichaHid->FieldByName("prat_ativ_fis_hidro")->AsString;
	edtHipertensao->Text = DM1->CDSFiltroFichaHid->FieldByName("hipertensao_hidro")->AsString;
	edtDoencas->Text = DM1->CDSFiltroFichaHid->FieldByName("doencas_hered_hidro")->AsString;

	//dtpInicio->Format = "yyyy/dd/MM";
	dtpInicio->Date = DM1->CDSFiltroFichaHid->FieldByName("data_inicio_hidro")->AsString;
	//dtpInicio->Format = "";
	//DM1->CDSFiltroFichaHid->FieldByName("")->AsString =dtpInicio->Date = dtpInicio->Date.CurrentDate();

	edtMMII->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmii_hidro")->AsString;
	edtMMSS->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmss_hidro")->AsString;
	edtTabagismo->Text = DM1->CDSFiltroFichaHid->FieldByName("tabagismo_hidro")->AsString;
	edtImc->Text = DM1->CDSFiltroFichaHid->FieldByName("imc_hidro")->AsString;
	edtAltura->Text = DM1->CDSFiltroFichaHid->FieldByName("altura_hidro")->AsString;
	edtInflamacao->Text = DM1->CDSFiltroFichaHid->FieldByName("inflamacao_hidro")->AsString;
	edtPA->Text = DM1->CDSFiltroFichaHid->FieldByName("PA_hidro")->AsString;
	edtDiabetes->Text = DM1->CDSFiltroFichaHid->FieldByName("diabetes_hidro")->AsString;
	edtSaturacao->Text = DM1->CDSFiltroFichaHid->FieldByName("saturacao_hidro")->AsString;
	edtBicipital->Text = DM1->CDSFiltroFichaHid->FieldByName("bicipital_hidro")->AsString;
	edtPatelar->Text = DM1->CDSFiltroFichaHid->FieldByName("patelar_hidro")->AsString;
	edtAquileu->Text = DM1->CDSFiltroFichaHid->FieldByName("aquileu_hidro")->AsString;
	edtTEquilibrio->Text = DM1->CDSFiltroFichaHid->FieldByName("equilibrio_hidro")->AsString;
	edtTDedoNariz->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	edtPRomberg->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	edtTCalcanhar->Text = DM1->CDSFiltroFichaHid->FieldByName("calcanhar_hidro")->AsString;

    DM1->SQLFiltroParcelasHid->SQL->Clear();
	DM1->SQLFiltroParcelasHid->SQL->Add("SELECT * FROM parcelas_ficha_hidro WHERE parcelas_ficha_hidro.cod_cliente_parcela_ficha_hidro = '" + IntToStr(codClienteHid) + "' AND parcelas_ficha_hidro.cod_ficha_parcela_hidro = '" + codFichaHid + "';");
	DM1->SQLFiltroParcelasHid->Open();
	DM1->SQLFiltroParcelasHid->Refresh();
	DM1->CDSFiltroParcelasHid->Refresh();
	DM1->SQLFiltroParcelasHid->First();
	edtNumParcelas->ItemIndex = DM1->SQLFiltroParcelasHid->RecordCount;

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

    	if (DM1->CDSFiltroParcelasHid->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasHid->RecordCount; i++)
			{
				if (i == 0)
				{
					edtValP1->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 1)
				{
					edtValP2->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 2)
				{
					edtValP3->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 3)
				{
					edtValP4->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 4)
				{
					edtValP5->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 5)
				{
					edtValP6->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 6)
				{
					edtValP7->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 7)
				{
					edtValP8->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 8)
				{
					edtValP9->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 9)
				{
					edtValP10->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 10)
				{
					edtValP11->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 11)
				{
					edtValP12->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
			}
		}
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::btnEditarClick(TObject *Sender)
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
DM1->CDSFiltroFichaHid->Edit();
DM1->CDSFiltroParcelasHid->Edit();
btnExcluir->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::btnCancelarClick(TObject *Sender)
{
DM1->CDSFiltroFichaHid->Cancel();
DM1->CDSFiltroParcelasHid->Cancel();
imgCadeado1->Visible = true;
imgCadeado2->Visible = true;
btnEditar->Enabled = true;
btnSalvar->Enabled = false;
btnCancelar->Enabled = false;
Panel1->Enabled = false;
Panel2->Enabled = true;
btnExcluir->Enabled = true;
Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::FormClose(TObject *Sender, TCloseAction &Action)

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
void __fastcall TfrmEditaFichaHid::btnSalvarClick(TObject *Sender)
{
	try
	{
		//DM1->CDSHidro->Append();
		DM1->CDSFiltroFichaHid->FieldByName("cod_pacinte_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
		DM1->CDSFiltroFichaHid->FieldByName("frequencia_hidro")->AsString = edtFrequencia->Text;
		DM1->CDSFiltroFichaHid->FieldByName("dias_hidro")->AsString =edtDias->Text;
		DM1->CDSFiltroFichaHid->FieldByName("horario_hidro")->AsString =edtHorario->Text;
		DM1->CDSFiltroFichaHid->FieldByName("restricoes_hidro")->AsString =edtRestricoes->Text;
		DM1->CDSFiltroFichaHid->FieldByName("alteracoes_hidro")->AsString =edtACardio->Text;
		DM1->CDSFiltroFichaHid->FieldByName("prob_resp_hidro")->AsString =edtPRespiratorio->Text;
		DM1->CDSFiltroFichaHid->FieldByName("alergia_hidro")->AsString =edtAlergia->Text;
		DM1->CDSFiltroFichaHid->FieldByName("medicamentos_hidro")->AsString =edtMedicamentos->Text;
		DM1->CDSFiltroFichaHid->FieldByName("ferimento_hidro")->AsString =edtFerimento->Text;
		DM1->CDSFiltroFichaHid->FieldByName("insuficiencia_uri_hidro")->AsString =edtInsuficiencia->Text;
		DM1->CDSFiltroFichaHid->FieldByName("peso_hidro")->AsString =edtPeso->Text;
		DM1->CDSFiltroFichaHid->FieldByName("labirintite_hidro")->AsString =edtLabirintite->Text;
		DM1->CDSFiltroFichaHid->FieldByName("cirurgia_hidro")->AsString =edtCirurgia->Text;
		DM1->CDSFiltroFichaHid->FieldByName("prat_ativ_fis_hidro")->AsString =edtPratica->Text;
		DM1->CDSFiltroFichaHid->FieldByName("hipertensao_hidro")->AsString =edtHipertensao->Text;
		DM1->CDSFiltroFichaHid->FieldByName("doencas_hered_hidro")->AsString =edtDoencas->Text;

        dtpInicio->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaHid->FieldByName("data_inicio_hidro")->AsString = dtpInicio->Date.DateString();
		dtpInicio->Format = "";
		//DM1->CDSHidro->FieldByName("")->AsString =dtpInicio->Date = dtpInicio->Date.CurrentDate();

		DM1->CDSFiltroFichaHid->FieldByName("grupo_mmii_hidro")->AsString =edtMMII->Text;
		DM1->CDSFiltroFichaHid->FieldByName("grupo_mmss_hidro")->AsString =edtMMSS->Text;
		DM1->CDSFiltroFichaHid->FieldByName("tabagismo_hidro")->AsString =edtTabagismo->Text;
		DM1->CDSFiltroFichaHid->FieldByName("imc_hidro")->AsString =edtImc->Text;
		DM1->CDSFiltroFichaHid->FieldByName("altura_hidro")->AsString =edtAltura->Text;
		DM1->CDSFiltroFichaHid->FieldByName("inflamacao_hidro")->AsString =edtInflamacao->Text;
		DM1->CDSFiltroFichaHid->FieldByName("PA_hidro")->AsString =edtPA->Text;
		DM1->CDSFiltroFichaHid->FieldByName("diabetes_hidro")->AsString =edtDiabetes->Text;
		DM1->CDSFiltroFichaHid->FieldByName("saturacao_hidro")->AsString =edtSaturacao->Text;
		DM1->CDSFiltroFichaHid->FieldByName("bicipital_hidro")->AsString =edtBicipital->Text;
		DM1->CDSFiltroFichaHid->FieldByName("patelar_hidro")->AsString =edtPatelar->Text;
		DM1->CDSFiltroFichaHid->FieldByName("aquileu_hidro")->AsString =edtAquileu->Text;
		DM1->CDSFiltroFichaHid->FieldByName("equilibrio_hidro")->AsString =edtTEquilibrio->Text;
		DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString =edtTDedoNariz->Text;
		DM1->CDSFiltroFichaHid->FieldByName("romberg_hidro")->AsString =edtPRomberg->Text;
		DM1->CDSFiltroFichaHid->FieldByName("calcanhar_hidro")->AsString =edtTCalcanhar->Text;

		DM1->CDSFiltroFichaHid->ApplyUpdates(0);
		DM1->CDSFiltroFichaHid->Refresh();
		DM1->CDSHidro->Refresh();
		DM1->CDSParcelasHid->Refresh();
		DM1->CDSFiltroParcelasHid->Refresh();
		DM1->CDSFiltroAtrasadosHid->Refresh();
		DM1->CDSFiltroFichaHid->Last();

		if (edtNumParcelas->ItemIndex != 0)
		{
			DM1->CDSFiltroParcelasHid->First();
			for (int i = 0; i < edtNumParcelas->ItemIndex; i++)
			{
				if (i == 0)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP1->Text;
					dtpVencimentoP1->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP1->Date.DateString();
					dtpVencimentoP1->Format = "";
					dtpPagP1->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP1->Date.DateString();
					dtpPagP1->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 1)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP2->Text;
					dtpVencimentoP2->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP2->Date.DateString();
					dtpVencimentoP2->Format = "";
					dtpPagP2->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP2->Date.DateString();
					dtpPagP2->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 2)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP3->Text;
					dtpVencimentoP3->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP3->Date.DateString();
					dtpVencimentoP3->Format = "";
					dtpPagP3->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP3->Date.DateString();
					dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 3)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP4->Text;
					dtpVencimentoP4->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP4->Date.DateString();
					dtpVencimentoP4->Format = "";
					dtpPagP4->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP4->Date.DateString();
					dtpPagP4->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 4)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP5->Text;
					dtpVencimentoP5->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP5->Date.DateString();
					dtpVencimentoP5->Format = "";
					dtpPagP5->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP5->Date.DateString();
					dtpPagP5->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 5)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP6->Text;
					dtpVencimentoP6->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP6->Date.DateString();
					dtpVencimentoP6->Format = "";
					dtpPagP6->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP6->Date.DateString();
					dtpPagP6->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 6)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP7->Text;
					dtpVencimentoP7->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP7->Date.DateString();
					dtpVencimentoP7->Format = "";
					dtpPagP7->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP7->Date.DateString();
					dtpPagP7->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 7)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP8->Text;
					dtpVencimentoP8->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP8->Date.DateString();
					dtpVencimentoP8->Format = "";
					dtpPagP8->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP8->Date.DateString();
					dtpPagP8->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 8)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP9->Text;
					dtpVencimentoP9->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP9->Date.DateString();
					dtpVencimentoP9->Format = "";
					dtpPagP9->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP9->Date.DateString();
					dtpPagP9->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 9)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP10->Text;
					dtpVencimentoP10->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP10->Date.DateString();
					dtpVencimentoP10->Format = "";
					dtpPagP10->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP10->Date.DateString();
					dtpPagP10->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 10)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP11->Text;
					dtpVencimentoP11->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP11->Date.DateString();
					dtpVencimentoP11->Format = "";
					dtpPagP11->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP11->Date.DateString();
					dtpPagP11->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 11)
				{
					DM1->CDSFiltroParcelasHid->Edit();
					DM1->CDSFiltroParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = codClienteHid;
					DM1->CDSFiltroParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = codFichaHid;
					DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP12->Text;
					dtpVencimentoP12->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP12->Date.DateString();
					dtpVencimentoP12->Format = "";
					dtpPagP12->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP12->Date.DateString();
					dtpPagP12->Format = "";
					DM1->CDSFiltroParcelasHid->ApplyUpdates(0);
					DM1->CDSFiltroParcelasHid->Refresh();
					DM1->CDSFiltroParcelasHid->Next();
				}
				//DM1->CDSParcelasHid->ApplyUpdates(0);
				//DM1->CDSParcelasHid->Refresh();
			}
		}
		/*dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
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
		edtNumParcelas->ItemIndex = 0;

		edtFrequencia->Clear();
		edtDias->Clear();
		edtHorario->Clear();
		edtRestricoes->Clear();
		edtACardio->Clear();
		edtPRespiratorio->Clear();
		edtAlergia->Clear();
		edtMedicamentos->Clear();
		edtFerimento->Clear();
		edtInsuficiencia->Clear();
		edtPeso->Clear();
		edtLabirintite->Clear();
		edtCirurgia->Clear();
		edtPratica->Clear();
		edtHipertensao->Clear();
		edtDoencas->Clear();
		dtpInicio->Date = dtpInicio->Date.CurrentDate();
		edtMMII->Clear();
		edtMMSS->Clear();
		edtTabagismo->Clear();
		edtImc->Clear();
		edtAltura->Clear();
		edtInflamacao->Clear();
		edtPA->Clear();
		edtDiabetes->Clear();
		edtSaturacao->Clear();
		edtBicipital->Clear();
		edtPatelar->Clear();
		edtAquileu->Clear();
		edtTEquilibrio->Clear();
		edtTDedoNariz->Clear();
		edtPRomberg->Clear();
		edtTCalcanhar->Clear();
		edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";*/

		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Avaliação", MB_OK);
	}
	catch (Exception& E)
	{
		ShowMessage("Erro ao Salvar. Código do erro:\n" + E.Message);

	}
imgCadeado1->Visible = true;
imgCadeado2->Visible = true;
btnEditar->Enabled = true;
btnSalvar->Enabled = false;
btnCancelar->Enabled = false;
Panel1->Enabled = false;
Panel2->Enabled = false;
btnExcluir->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::BitBtn1Click(TObject *Sender)
{
frmFiltroFichaHid->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::edtValP1Change(TObject *Sender)
{
edtValP1->Text = FormatFloat("####.00", edtValP1->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP2Change(TObject *Sender)
{
edtValP2->Text = FormatFloat("####.00", edtValP2->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP3Change(TObject *Sender)
{
edtValP3->Text = FormatFloat("####.00", edtValP3->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP4Change(TObject *Sender)
{
edtValP4->Text = FormatFloat("####.00", edtValP4->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP5Change(TObject *Sender)
{
edtValP5->Text = FormatFloat("####.00", edtValP5->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP6Change(TObject *Sender)
{
edtValP6->Text = FormatFloat("####.00", edtValP6->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP7Change(TObject *Sender)
{
edtValP7->Text = FormatFloat("####.00", edtValP7->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP8Change(TObject *Sender)
{
edtValP8->Text = FormatFloat("####.00", edtValP8->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP9Change(TObject *Sender)
{
edtValP9->Text = FormatFloat("####.00", edtValP9->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP10Change(TObject *Sender)
{
edtValP10->Text = FormatFloat("####.00", edtValP10->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP11Change(TObject *Sender)
{
edtValP11->Text = FormatFloat("####.00", edtValP11->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFichaHid::edtValP12Change(TObject *Sender)
{
edtValP12->Text = FormatFloat("####.00", edtValP12->Text.ToDouble());
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFichaHid::btnExcluirClick(TObject *Sender)
{
if (DM1->CDSFiltroFichaHid->RecordCount == 0)
{
	MessageBoxA(NULL, "Não há registros para excluir!", "Exclusão de Ficha", MB_OK);
}
else
{
	TMsgDlgBtn myYes = mbYes;
	TMsgDlgBtn myNo = mbNo;

	if(MessageDlg("Deletar registro ?", mtConfirmation, TMsgDlgButtons() << myYes << myNo,0) == mrYes)
	{
		DM1->CDSFiltroFichaHid->Delete();
		DM1->CDSFiltroFichaHid->ApplyUpdates(0);
		DM1->CDSFiltroFichaHid->Refresh();
		if (DM1->CDSFiltroFichaHid->RecordCount == 0)
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
			edtFrequencia->Clear();
			edtDias->Clear();
			edtHorario->Clear();
			edtRestricoes->Clear();
			edtACardio->Clear();
			edtPRespiratorio->Clear();
			edtAlergia->Clear();
			edtMedicamentos->Clear();
			edtFerimento->Clear();
			edtInsuficiencia->Clear();
			edtPeso->Clear();
			edtLabirintite->Clear();
			edtCirurgia->Clear();
			edtPratica->Clear();
			edtHipertensao->Clear();
			edtDoencas->Clear();
			dtpInicio->Date = dtpInicio->Date.CurrentDate();
			edtMMII->Clear();
			edtMMSS->Clear();
			edtTabagismo->Clear();
			edtImc->Clear();
			edtAltura->Clear();
			edtInflamacao->Clear();
			edtPA->Clear();
			edtDiabetes->Clear();
			edtSaturacao->Clear();
			edtBicipital->Clear();
			edtPatelar->Clear();
			edtAquileu->Clear();
			edtTEquilibrio->Clear();
			edtTDedoNariz->Clear();
			edtPRomberg->Clear();
			edtTCalcanhar->Clear();
		}
		else
		{
			//preencher
			if (DM1->CDSFiltroFichaHid->RecordCount > 0)
			{
				DM1->CDSFiltroFichaHid->Refresh();
                codClienteHid = DM1->CDSFiltroFichaHid->FieldByName("cod_pacinte_ficha_hidro")->AsInteger;
				codFichaHid = DM1->CDSFiltroFichaHid->FieldByName("cod_ficha_hidro")->AsInteger;
				DM1->SQLFiltroPaciente->SQL->Clear();
				DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClienteHid) + "';");
				DM1->SQLFiltroPaciente->Open();
				DM1->SQLFiltroPaciente->Refresh();
				DM1->cdsFiltroPaciente->Refresh();
				edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

				//DM1->CDSHidro->FieldByName("cod_pacinte_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
				edtFrequencia->Text = DM1->CDSFiltroFichaHid->FieldByName("frequencia_hidro")->AsString;
				edtDias->Text = DM1->CDSFiltroFichaHid->FieldByName("dias_hidro")->AsString;
				edtHorario->Text = DM1->CDSFiltroFichaHid->FieldByName("horario_hidro")->AsString;
				edtRestricoes->Text = DM1->CDSFiltroFichaHid->FieldByName("restricoes_hidro")->AsString;
				edtACardio->Text = DM1->CDSFiltroFichaHid->FieldByName("alteracoes_hidro")->AsString;
				edtPRespiratorio->Text = DM1->CDSFiltroFichaHid->FieldByName("prob_resp_hidro")->AsString;
				edtAlergia->Text = DM1->CDSFiltroFichaHid->FieldByName("alergia_hidro")->AsString;
				edtMedicamentos->Text = DM1->CDSFiltroFichaHid->FieldByName("medicamentos_hidro")->AsString;
				edtFerimento->Text = DM1->CDSFiltroFichaHid->FieldByName("ferimento_hidro")->AsString;
				edtInsuficiencia->Text = DM1->CDSFiltroFichaHid->FieldByName("insuficiencia_uri_hidro")->AsString;
				edtPeso->Text = DM1->CDSFiltroFichaHid->FieldByName("peso_hidro")->AsString;
				edtLabirintite->Text = DM1->CDSFiltroFichaHid->FieldByName("labirintite_hidro")->AsString;
				edtCirurgia->Text = DM1->CDSFiltroFichaHid->FieldByName("cirurgia_hidro")->AsString;
				edtPratica->Text = DM1->CDSFiltroFichaHid->FieldByName("prat_ativ_fis_hidro")->AsString;
				edtHipertensao->Text = DM1->CDSFiltroFichaHid->FieldByName("hipertensao_hidro")->AsString;
				edtDoencas->Text = DM1->CDSFiltroFichaHid->FieldByName("doencas_hered_hidro")->AsString;

				//dtpInicio->Format = "yyyy/dd/MM";
				dtpInicio->Date = DM1->CDSFiltroFichaHid->FieldByName("data_inicio_hidro")->AsString;
				//dtpInicio->Format = "";
				//DM1->CDSFiltroFichaHid->FieldByName("")->AsString =dtpInicio->Date = dtpInicio->Date.CurrentDate();

				edtMMII->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmii_hidro")->AsString;
				edtMMSS->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmss_hidro")->AsString;
				edtTabagismo->Text = DM1->CDSFiltroFichaHid->FieldByName("tabagismo_hidro")->AsString;
				edtImc->Text = DM1->CDSFiltroFichaHid->FieldByName("imc_hidro")->AsString;
				edtAltura->Text = DM1->CDSFiltroFichaHid->FieldByName("altura_hidro")->AsString;
				edtInflamacao->Text = DM1->CDSFiltroFichaHid->FieldByName("inflamacao_hidro")->AsString;
				edtPA->Text = DM1->CDSFiltroFichaHid->FieldByName("PA_hidro")->AsString;
				edtDiabetes->Text = DM1->CDSFiltroFichaHid->FieldByName("diabetes_hidro")->AsString;
				edtSaturacao->Text = DM1->CDSFiltroFichaHid->FieldByName("saturacao_hidro")->AsString;
				edtBicipital->Text = DM1->CDSFiltroFichaHid->FieldByName("bicipital_hidro")->AsString;
				edtPatelar->Text = DM1->CDSFiltroFichaHid->FieldByName("patelar_hidro")->AsString;
				edtAquileu->Text = DM1->CDSFiltroFichaHid->FieldByName("aquileu_hidro")->AsString;
				edtTEquilibrio->Text = DM1->CDSFiltroFichaHid->FieldByName("equilibrio_hidro")->AsString;
				edtTDedoNariz->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
				edtPRomberg->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
				edtTCalcanhar->Text = DM1->CDSFiltroFichaHid->FieldByName("calcanhar_hidro")->AsString;

				DM1->SQLFiltroParcelasHid->SQL->Clear();
				DM1->SQLFiltroParcelasHid->SQL->Add("SELECT * FROM parcelas_ficha_hidro WHERE parcelas_ficha_hidro.cod_cliente_parcela_ficha_hidro = '" + IntToStr(codClienteHid) + "' AND parcelas_ficha_hidro.cod_ficha_parcela_hidro = '" + codFichaHid + "';");
				DM1->SQLFiltroParcelasHid->Open();
				DM1->SQLFiltroParcelasHid->Refresh();
				DM1->CDSFiltroParcelasHid->Refresh();
				DM1->SQLFiltroParcelasHid->First();
				edtNumParcelas->ItemIndex = DM1->SQLFiltroParcelasHid->RecordCount;

				if (DM1->CDSFiltroParcelasHid->RecordCount != 0)
				{
					for (int i = 0; i < DM1->CDSFiltroParcelasHid->RecordCount; i++)
					{
						if (i == 0)
						{
							edtValP1->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 1)
						{
							edtValP2->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 2)
						{
							edtValP3->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 3)
						{
							edtValP4->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 4)
						{
							edtValP5->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 5)
						{
							edtValP6->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 6)
						{
							edtValP7->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 7)
						{
							edtValP8->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 8)
						{
							edtValP9->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 9)
						{
							edtValP10->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 10)
						{
							edtValP11->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
						if (i == 11)
						{
							edtValP12->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelasHid->Next();
						}
					}
				}

			}
            MessageBoxA(NULL, "Registro excluido com sucesso!", "Exclusão de Ficha", MB_OK);
		}
	}
}
}
//---------------------------------------------------------------------------

