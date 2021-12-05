//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untFiltroFichaHid.h"
#include "untDM.h"
#include "untEditaFichaHid.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFiltroFichaHid *frmFiltroFichaHid;
//---------------------------------------------------------------------------
__fastcall TfrmFiltroFichaHid::TfrmFiltroFichaHid(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaHid::edtBuscaChange(TObject *Sender)
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
void __fastcall TfrmFiltroFichaHid::gridPacienteCellClick(TColumn *Column)
{
DM1->SQLFiltroFichaHid->SQL->Clear();
DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_paciente_ficha_hidro = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaHid->Open();
DM1->CDSFiltroFichaHid->Refresh();
gridFichaFisio->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaHid::gridFichaFisioDblClick(TObject *Sender)
{
if (DM1->CDSFiltroFichaHid->RecordCount > 0)
{
	frmEditaFichaHid->codClienteHid = DM1->CDSFiltroFichaHid->FieldByName("cod_pacinte_ficha_hidro")->AsInteger;
	frmEditaFichaHid->codFichaHid = DM1->CDSFiltroFichaHid->FieldByName("cod_ficha_hidro")->AsInteger;
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEditaFichaHid->codClienteHid) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	frmEditaFichaHid->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

	//DM1->CDSHidro->FieldByName("cod_pacinte_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
	frmEditaFichaHid->edtFrequencia->Text = DM1->CDSFiltroFichaHid->FieldByName("frequencia_hidro")->AsString;
	frmEditaFichaHid->edtDias->Text = DM1->CDSFiltroFichaHid->FieldByName("dias_hidro")->AsString;
	frmEditaFichaHid->edtHorario->Text = DM1->CDSFiltroFichaHid->FieldByName("horario_hidro")->AsString;
	frmEditaFichaHid->edtRestricoes->Text = DM1->CDSFiltroFichaHid->FieldByName("restricoes_hidro")->AsString;
	frmEditaFichaHid->edtACardio->Text = DM1->CDSFiltroFichaHid->FieldByName("alteracoes_hidro")->AsString;
	frmEditaFichaHid->edtPRespiratorio->Text = DM1->CDSFiltroFichaHid->FieldByName("prob_resp_hidro")->AsString;
	frmEditaFichaHid->edtAlergia->Text = DM1->CDSFiltroFichaHid->FieldByName("alergia_hidro")->AsString;
	frmEditaFichaHid->edtMedicamentos->Text = DM1->CDSFiltroFichaHid->FieldByName("medicamentos_hidro")->AsString;
	frmEditaFichaHid->edtFerimento->Text = DM1->CDSFiltroFichaHid->FieldByName("ferimento_hidro")->AsString;
	frmEditaFichaHid->edtInsuficiencia->Text = DM1->CDSFiltroFichaHid->FieldByName("insuficiencia_uri_hidro")->AsString;
	frmEditaFichaHid->edtPeso->Text = DM1->CDSFiltroFichaHid->FieldByName("peso_hidro")->AsString;
	frmEditaFichaHid->edtLabirintite->Text = DM1->CDSFiltroFichaHid->FieldByName("labirintite_hidro")->AsString;
	frmEditaFichaHid->edtCirurgia->Text = DM1->CDSFiltroFichaHid->FieldByName("cirurgia_hidro")->AsString;
	frmEditaFichaHid->edtPratica->Text = DM1->CDSFiltroFichaHid->FieldByName("prat_ativ_fis_hidro")->AsString;
	frmEditaFichaHid->edtHipertensao->Text = DM1->CDSFiltroFichaHid->FieldByName("hipertensao_hidro")->AsString;
	frmEditaFichaHid->edtDoencas->Text = DM1->CDSFiltroFichaHid->FieldByName("doencas_hered_hidro")->AsString;

	//dtpInicio->Format = "yyyy/dd/MM";
	frmEditaFichaHid->dtpInicio->Date = DM1->CDSFiltroFichaHid->FieldByName("data_inicio_hidro")->AsString;
	//dtpInicio->Format = "";
	//DM1->CDSFiltroFichaHid->FieldByName("")->AsString =dtpInicio->Date = dtpInicio->Date.CurrentDate();

	frmEditaFichaHid->edtMMII->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmii_hidro")->AsString;
	frmEditaFichaHid->edtMMSS->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmss_hidro")->AsString;
	frmEditaFichaHid->edtTabagismo->Text = DM1->CDSFiltroFichaHid->FieldByName("tabagismo_hidro")->AsString;
	frmEditaFichaHid->edtImc->Text = DM1->CDSFiltroFichaHid->FieldByName("imc_hidro")->AsString;
	frmEditaFichaHid->edtAltura->Text = DM1->CDSFiltroFichaHid->FieldByName("altura_hidro")->AsString;
	frmEditaFichaHid->edtInflamacao->Text = DM1->CDSFiltroFichaHid->FieldByName("inflamacao_hidro")->AsString;
	frmEditaFichaHid->edtPA->Text = DM1->CDSFiltroFichaHid->FieldByName("PA_hidro")->AsString;
	frmEditaFichaHid->edtDiabetes->Text = DM1->CDSFiltroFichaHid->FieldByName("diabetes_hidro")->AsString;
	frmEditaFichaHid->edtSaturacao->Text = DM1->CDSFiltroFichaHid->FieldByName("saturacao_hidro")->AsString;
	frmEditaFichaHid->edtBicipital->Text = DM1->CDSFiltroFichaHid->FieldByName("bicipital_hidro")->AsString;
	frmEditaFichaHid->edtPatelar->Text = DM1->CDSFiltroFichaHid->FieldByName("patelar_hidro")->AsString;
	frmEditaFichaHid->edtAquileu->Text = DM1->CDSFiltroFichaHid->FieldByName("aquileu_hidro")->AsString;
	frmEditaFichaHid->edtTEquilibrio->Text = DM1->CDSFiltroFichaHid->FieldByName("equilibrio_hidro")->AsString;
	frmEditaFichaHid->edtTDedoNariz->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	frmEditaFichaHid->edtPRomberg->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	frmEditaFichaHid->edtTCalcanhar->Text = DM1->CDSFiltroFichaHid->FieldByName("calcanhar_hidro")->AsString;

	DM1->SQLFiltroParcelasHid->SQL->Clear();
	DM1->SQLFiltroParcelasHid->SQL->Add("SELECT * FROM parcelas_ficha_hidro WHERE parcelas_ficha_hidro.cod_cliente_parcela_ficha_hidro = '" + IntToStr(frmEditaFichaHid->codClienteHid) + "' AND parcelas_ficha_hidro.cod_ficha_parcela_hidro = '" + frmEditaFichaHid->codFichaHid + "';");
	DM1->SQLFiltroParcelasHid->Open();
	DM1->SQLFiltroParcelasHid->Refresh();
	DM1->CDSFiltroParcelasHid->Refresh();
	DM1->SQLFiltroParcelasHid->First();
	frmEditaFichaHid->edtNumParcelas->ItemIndex = DM1->SQLFiltroParcelasHid->RecordCount;

		if (DM1->CDSFiltroParcelasHid->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasHid->RecordCount; i++)
			{
				if (i == 0)
				{
					frmEditaFichaHid->edtValP1->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 1)
				{
					frmEditaFichaHid->edtValP2->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 2)
				{
					frmEditaFichaHid->edtValP3->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 3)
				{
					frmEditaFichaHid->edtValP4->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 4)
				{
					frmEditaFichaHid->edtValP5->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 5)
				{
					frmEditaFichaHid->edtValP6->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 6)
				{
					frmEditaFichaHid->edtValP7->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 7)
				{
					frmEditaFichaHid->edtValP8->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 8)
				{
					frmEditaFichaHid->edtValP9->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 9)
				{
					frmEditaFichaHid->edtValP10->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 10)
				{
					frmEditaFichaHid->edtValP11->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 11)
				{
					frmEditaFichaHid->edtValP12->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
			}
		}
DM1->SQLFiltroFichaHid->SQL->Clear();
DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro LIKE '%';");
DM1->SQLFiltroFichaHid->Open();
DM1->CDSFiltroFichaHid->Refresh();
gridFichaFisio->Refresh();
Close();
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaHid::BitBtn2Click(TObject *Sender)
{
if (DM1->CDSFiltroFichaHid->RecordCount > 0)
{
	frmEditaFichaHid->codClienteHid = DM1->CDSFiltroFichaHid->FieldByName("cod_pacinte_ficha_hidro")->AsInteger;
	frmEditaFichaHid->codFichaHid = DM1->CDSFiltroFichaHid->FieldByName("cod_ficha_hidro")->AsInteger;
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEditaFichaHid->codClienteHid) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	frmEditaFichaHid->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

	//DM1->CDSHidro->FieldByName("cod_pacinte_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
	frmEditaFichaHid->edtFrequencia->Text = DM1->CDSFiltroFichaHid->FieldByName("frequencia_hidro")->AsString;
	frmEditaFichaHid->edtDias->Text = DM1->CDSFiltroFichaHid->FieldByName("dias_hidro")->AsString;
	frmEditaFichaHid->edtHorario->Text = DM1->CDSFiltroFichaHid->FieldByName("horario_hidro")->AsString;
	frmEditaFichaHid->edtRestricoes->Text = DM1->CDSFiltroFichaHid->FieldByName("restricoes_hidro")->AsString;
	frmEditaFichaHid->edtACardio->Text = DM1->CDSFiltroFichaHid->FieldByName("alteracoes_hidro")->AsString;
	frmEditaFichaHid->edtPRespiratorio->Text = DM1->CDSFiltroFichaHid->FieldByName("prob_resp_hidro")->AsString;
	frmEditaFichaHid->edtAlergia->Text = DM1->CDSFiltroFichaHid->FieldByName("alergia_hidro")->AsString;
	frmEditaFichaHid->edtMedicamentos->Text = DM1->CDSFiltroFichaHid->FieldByName("medicamentos_hidro")->AsString;
	frmEditaFichaHid->edtFerimento->Text = DM1->CDSFiltroFichaHid->FieldByName("ferimento_hidro")->AsString;
	frmEditaFichaHid->edtInsuficiencia->Text = DM1->CDSFiltroFichaHid->FieldByName("insuficiencia_uri_hidro")->AsString;
	frmEditaFichaHid->edtPeso->Text = DM1->CDSFiltroFichaHid->FieldByName("peso_hidro")->AsString;
	frmEditaFichaHid->edtLabirintite->Text = DM1->CDSFiltroFichaHid->FieldByName("labirintite_hidro")->AsString;
	frmEditaFichaHid->edtCirurgia->Text = DM1->CDSFiltroFichaHid->FieldByName("cirurgia_hidro")->AsString;
	frmEditaFichaHid->edtPratica->Text = DM1->CDSFiltroFichaHid->FieldByName("prat_ativ_fis_hidro")->AsString;
	frmEditaFichaHid->edtHipertensao->Text = DM1->CDSFiltroFichaHid->FieldByName("hipertensao_hidro")->AsString;
	frmEditaFichaHid->edtDoencas->Text = DM1->CDSFiltroFichaHid->FieldByName("doencas_hered_hidro")->AsString;

	//dtpInicio->Format = "yyyy/dd/MM";
	frmEditaFichaHid->dtpInicio->Date = DM1->CDSFiltroFichaHid->FieldByName("data_inicio_hidro")->AsString;
	//dtpInicio->Format = "";
	//DM1->CDSFiltroFichaHid->FieldByName("")->AsString =dtpInicio->Date = dtpInicio->Date.CurrentDate();

	frmEditaFichaHid->edtMMII->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmii_hidro")->AsString;
	frmEditaFichaHid->edtMMSS->Text = DM1->CDSFiltroFichaHid->FieldByName("grupo_mmss_hidro")->AsString;
	frmEditaFichaHid->edtTabagismo->Text = DM1->CDSFiltroFichaHid->FieldByName("tabagismo_hidro")->AsString;
	frmEditaFichaHid->edtImc->Text = DM1->CDSFiltroFichaHid->FieldByName("imc_hidro")->AsString;
	frmEditaFichaHid->edtAltura->Text = DM1->CDSFiltroFichaHid->FieldByName("altura_hidro")->AsString;
	frmEditaFichaHid->edtInflamacao->Text = DM1->CDSFiltroFichaHid->FieldByName("inflamacao_hidro")->AsString;
	frmEditaFichaHid->edtPA->Text = DM1->CDSFiltroFichaHid->FieldByName("PA_hidro")->AsString;
	frmEditaFichaHid->edtDiabetes->Text = DM1->CDSFiltroFichaHid->FieldByName("diabetes_hidro")->AsString;
	frmEditaFichaHid->edtSaturacao->Text = DM1->CDSFiltroFichaHid->FieldByName("saturacao_hidro")->AsString;
	frmEditaFichaHid->edtBicipital->Text = DM1->CDSFiltroFichaHid->FieldByName("bicipital_hidro")->AsString;
	frmEditaFichaHid->edtPatelar->Text = DM1->CDSFiltroFichaHid->FieldByName("patelar_hidro")->AsString;
	frmEditaFichaHid->edtAquileu->Text = DM1->CDSFiltroFichaHid->FieldByName("aquileu_hidro")->AsString;
	frmEditaFichaHid->edtTEquilibrio->Text = DM1->CDSFiltroFichaHid->FieldByName("equilibrio_hidro")->AsString;
	frmEditaFichaHid->edtTDedoNariz->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	frmEditaFichaHid->edtPRomberg->Text = DM1->CDSFiltroFichaHid->FieldByName("dedo_nariz_hidro")->AsString;
	frmEditaFichaHid->edtTCalcanhar->Text = DM1->CDSFiltroFichaHid->FieldByName("calcanhar_hidro")->AsString;

	DM1->SQLFiltroParcelasHid->SQL->Clear();
	DM1->SQLFiltroParcelasHid->SQL->Add("SELECT * FROM parcelas_ficha_hidro WHERE parcelas_ficha_hidro.cod_cliente_parcela_ficha_hidro = '" + IntToStr(frmEditaFichaHid->codClienteHid) + "' AND parcelas_ficha_hidro.cod_ficha_parcela_hidro = '" + frmEditaFichaHid->codFichaHid + "';");
	DM1->SQLFiltroParcelasHid->Open();
	DM1->SQLFiltroParcelasHid->Refresh();
	DM1->CDSFiltroParcelasHid->Refresh();
	DM1->SQLFiltroParcelasHid->First();
	frmEditaFichaHid->edtNumParcelas->ItemIndex = DM1->SQLFiltroParcelasHid->RecordCount;

		if (DM1->CDSFiltroParcelasHid->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelasHid->RecordCount; i++)
			{
				if (i == 0)
				{
					frmEditaFichaHid->edtValP1->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP1->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 1)
				{
					frmEditaFichaHid->edtValP2->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP2->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 2)
				{
					frmEditaFichaHid->edtValP3->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP3->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 3)
				{
					frmEditaFichaHid->edtValP4->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP4->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 4)
				{
					frmEditaFichaHid->edtValP5->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP5->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 5)
				{
					frmEditaFichaHid->edtValP6->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP6->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 6)
				{
					frmEditaFichaHid->edtValP7->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP7->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 7)
				{
					frmEditaFichaHid->edtValP8->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP8->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 8)
				{
					frmEditaFichaHid->edtValP9->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP9->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 9)
				{
					frmEditaFichaHid->edtValP10->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP10->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 10)
				{
					frmEditaFichaHid->edtValP11->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP11->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
				if (i == 11)
				{
					frmEditaFichaHid->edtValP12->Text = DM1->CDSFiltroParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpVencimentoP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFichaHid->dtpPagP12->Date = DM1->CDSFiltroParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelasHid->Next();
				}
			}
		}
DM1->SQLFiltroFichaHid->SQL->Clear();
DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro LIKE '%';");
DM1->SQLFiltroFichaHid->Open();
DM1->CDSFiltroFichaHid->Refresh();
gridFichaFisio->Refresh();
Close();
}
}
//---------------------------------------------------------------------------
