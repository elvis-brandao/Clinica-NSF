//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untFiltroFichaFisio.h"
#include "untDM.h"
#include "untFicha.h"
#include "untEditaFicha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFiltroFichaFisio *frmFiltroFichaFisio;
//---------------------------------------------------------------------------
__fastcall TfrmFiltroFichaFisio::TfrmFiltroFichaFisio(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaFisio::edtBuscaChange(TObject *Sender)
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
void __fastcall TfrmFiltroFichaFisio::gridPacienteCellClick(TColumn *Column)
{
DM1->SQLFiltroFichaFisio->SQL->Clear();
DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaFisio->Open();
DM1->CDSFiltroFichaFisio->Refresh();
gridFichaFisio->Refresh();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFiltroFichaFisio::gridFichaFisioDblClick(TObject *Sender)
{
/*if (frmEditarPaciente->estado == 0)
{
codFichaFisio = DM1->CDSFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
codClienteFisio = DM1->CDSFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
}*/
//DM1->SQLFiltroFichaFisio->Open();
//DM1->SQLFiltroFichaFisio->Refresh();
frmEditaFicha->codFichaFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
frmEditaFicha->codClienteFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;

//DM1->CDSFichaFisio->First();
//edtCodCliente->Text = DM1->CDSFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
//DM1->CDSPaciente->Filtered = false;
//DM1->CDSPaciente->Filter = "cod_paciente LIKE '%"+edtCodCliente->Text+"%'";
//DM1->CDSPaciente->Filtered = true;
DM1->SQLFiltroPaciente->SQL->Clear();
DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEditaFicha->codClienteFisio) + "';");
DM1->SQLFiltroPaciente->Open();
DM1->SQLFiltroPaciente->Refresh();
DM1->cdsFiltroPaciente->Refresh();
frmEditaFicha->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

frmEditaFicha->edtPatologia->Text = DM1->CDSFiltroFichaFisio->FieldByName("patologia_fisio")->AsString;
frmEditaFicha->memoHDA->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("hda_fisio")->AsString;
frmEditaFicha->edtExames->Text = DM1->CDSFiltroFichaFisio->FieldByName("exames_realizados_fisio")->AsString;
frmEditaFicha->memoConduta->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("conduta_fisio")->AsString;
frmEditaFicha->edtSessoes->Text = DM1->CDSFiltroFichaFisio->FieldByName("sessoes_realizadas_fisio")->AsString;
frmEditaFicha->memoObs->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("observacoes_fisio")->AsString;

//dtpAvaliacao->Format = "yyyy/dd/MM";
//Edit11->Text = DM1->CDSFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;
frmEditaFicha->dtpAvaliacao->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;

//dtpAvaliacao->Format = "";
//dtpTratamento->Format = "yyyy/dd/MM";
//Edit12->Text = DM1->CDSFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;
frmEditaFicha->dtpTratamento->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;

//dtpTratamento->Format = "";
//dtpAlta->Format = "yyyy/dd/MM";
//Edit13->Text = DM1->CDSFichaFisio->FieldByName("data_alta_fisio")->AsString;
frmEditaFicha->dtpAlta->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_alta_fisio")->AsString;
//dtpAlta->Format = "";

DM1->SQLFiltroParcelas->SQL->Clear();
DM1->SQLFiltroParcelas->SQL->Add("SELECT * FROM parcelas_ficha_fisio WHERE parcelas_ficha_fisio.cod_cliente_parcela_ficha_fisio = '" + IntToStr(frmEditaFicha->codClienteFisio) + "' AND parcelas_ficha_fisio.cod_ficha_parcela_fisio = '" + frmEditaFicha->codFichaFisio + "';");
DM1->SQLFiltroParcelas->Open();
DM1->SQLFiltroParcelas->Refresh();
DM1->CDSFiltroParcelas->Refresh();
DM1->CDSFiltroParcelas->First();

frmEditaFicha->dtpVencimentoP1->Date = frmEditaFicha->dtpVencimentoP1->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP2->Date = frmEditaFicha->dtpVencimentoP2->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP3->Date = frmEditaFicha->dtpVencimentoP3->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP4->Date = frmEditaFicha->dtpVencimentoP4->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP5->Date = frmEditaFicha->dtpVencimentoP5->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP6->Date = frmEditaFicha->dtpVencimentoP6->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP7->Date = frmEditaFicha->dtpVencimentoP7->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP8->Date = frmEditaFicha->dtpVencimentoP8->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP9->Date = frmEditaFicha->dtpVencimentoP9->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP10->Date =frmEditaFicha->dtpVencimentoP10->Date.CurrentDate();
frmEditaFicha->dtpPagP1->Date = frmEditaFicha->dtpPagP1->Date.CurrentDate();
frmEditaFicha->dtpPagP2->Date = frmEditaFicha->dtpPagP2->Date.CurrentDate();
frmEditaFicha->dtpPagP3->Date = frmEditaFicha->dtpPagP3->Date.CurrentDate();
frmEditaFicha->dtpPagP4->Date = frmEditaFicha->dtpPagP4->Date.CurrentDate();
frmEditaFicha->dtpPagP5->Date = frmEditaFicha->dtpPagP5->Date.CurrentDate();
frmEditaFicha->dtpPagP6->Date = frmEditaFicha->dtpPagP6->Date.CurrentDate();
frmEditaFicha->dtpPagP7->Date = frmEditaFicha->dtpPagP7->Date.CurrentDate();
frmEditaFicha->dtpPagP8->Date = frmEditaFicha->dtpPagP8->Date.CurrentDate();
frmEditaFicha->dtpPagP9->Date = frmEditaFicha->dtpPagP9->Date.CurrentDate();
frmEditaFicha->dtpPagP10->Date = frmEditaFicha->dtpPagP10->Date.CurrentDate();
frmEditaFicha->edtValP1->Text =  "0,00";
//edtValP1->Enabled = false;
frmEditaFicha->edtValP2->Text =  "0,00";
//edtValP2->Enabled = false;
frmEditaFicha->edtValP3->Text =  "0,00";
//edtValP3->Enabled = false;
frmEditaFicha->edtValP4->Text =  "0,00";
//edtValP4->Enabled = false;
frmEditaFicha->edtValP5->Text =  "0,00";
//edtValP5->Enabled = false;
frmEditaFicha->edtValP6->Text =  "0,00";
//edtValP6->Enabled = false;
frmEditaFicha->edtValP7->Text =  "0,00";
//edtValP7->Enabled = false;
frmEditaFicha->edtValP8->Text =  "0,00";
//edtValP8->Enabled = false;
frmEditaFicha->edtValP9->Text =  "0,00";
//edtValP9->Enabled = false;
frmEditaFicha->edtValP10->Text =  "0,00";
//edtValP10->Enabled = false;

		if (DM1->CDSFiltroParcelas->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelas->RecordCount; i++)
			{
				if (i == 0)
				{
					frmEditaFicha->edtValP1->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP1->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 1)
				{
					frmEditaFicha->edtValP2->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP2->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 2)
				{
					frmEditaFicha->edtValP3->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP3->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 3)
				{
					frmEditaFicha->edtValP4->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP4->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 4)
				{
					frmEditaFicha->edtValP5->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP5->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 5)
				{
					frmEditaFicha->edtValP6->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP6->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 6)
				{
					frmEditaFicha->edtValP7->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP7->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 7)
				{
					frmEditaFicha->edtValP8->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP8->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 8)
				{
					frmEditaFicha->edtValP9->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP9->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 9)
				{
					frmEditaFicha->edtValP10->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP10->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
			}
		}
DM1->SQLFiltroFichaFisio->SQL->Clear();
DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha LIKE '%';");
DM1->SQLFiltroFichaFisio->Open();
DM1->CDSFiltroFichaFisio->Refresh();
gridFichaFisio->Refresh();
Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFiltroFichaFisio::BitBtn2Click(TObject *Sender)
{
/*if (frmEditarPaciente->estado == 0)
{
codFichaFisio = DM1->CDSFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
codClienteFisio = DM1->CDSFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
}*/
//DM1->SQLFiltroFichaFisio->Open();
//DM1->SQLFiltroFichaFisio->Refresh();
frmEditaFicha->codFichaFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
frmEditaFicha->codClienteFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;

//DM1->CDSFichaFisio->First();
//edtCodCliente->Text = DM1->CDSFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
//DM1->CDSPaciente->Filtered = false;
//DM1->CDSPaciente->Filter = "cod_paciente LIKE '%"+edtCodCliente->Text+"%'";
//DM1->CDSPaciente->Filtered = true;
DM1->SQLFiltroPaciente->SQL->Clear();
DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEditaFicha->codClienteFisio) + "';");
DM1->SQLFiltroPaciente->Open();
DM1->SQLFiltroPaciente->Refresh();
DM1->cdsFiltroPaciente->Refresh();
frmEditaFicha->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

frmEditaFicha->edtPatologia->Text = DM1->CDSFiltroFichaFisio->FieldByName("patologia_fisio")->AsString;
frmEditaFicha->memoHDA->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("hda_fisio")->AsString;
frmEditaFicha->edtExames->Text = DM1->CDSFiltroFichaFisio->FieldByName("exames_realizados_fisio")->AsString;
frmEditaFicha->memoConduta->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("conduta_fisio")->AsString;
frmEditaFicha->edtSessoes->Text = DM1->CDSFiltroFichaFisio->FieldByName("sessoes_realizadas_fisio")->AsString;
frmEditaFicha->memoObs->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("observacoes_fisio")->AsString;

//dtpAvaliacao->Format = "yyyy/dd/MM";
//Edit11->Text = DM1->CDSFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;
frmEditaFicha->dtpAvaliacao->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;

//dtpAvaliacao->Format = "";
//dtpTratamento->Format = "yyyy/dd/MM";
//Edit12->Text = DM1->CDSFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;
frmEditaFicha->dtpTratamento->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;

//dtpTratamento->Format = "";
//dtpAlta->Format = "yyyy/dd/MM";
//Edit13->Text = DM1->CDSFichaFisio->FieldByName("data_alta_fisio")->AsString;
frmEditaFicha->dtpAlta->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_alta_fisio")->AsString;
//dtpAlta->Format = "";

DM1->SQLFiltroParcelas->SQL->Clear();
DM1->SQLFiltroParcelas->SQL->Add("SELECT * FROM parcelas_ficha_fisio WHERE parcelas_ficha_fisio.cod_cliente_parcela_ficha_fisio = '" + IntToStr(frmEditaFicha->codClienteFisio) + "' AND parcelas_ficha_fisio.cod_ficha_parcela_fisio = '" + frmEditaFicha->codFichaFisio + "';");
DM1->SQLFiltroParcelas->Open();
DM1->SQLFiltroParcelas->Refresh();
DM1->CDSFiltroParcelas->Refresh();
DM1->CDSFiltroParcelas->First();

frmEditaFicha->dtpVencimentoP1->Date = frmEditaFicha->dtpVencimentoP1->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP2->Date = frmEditaFicha->dtpVencimentoP2->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP3->Date = frmEditaFicha->dtpVencimentoP3->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP4->Date = frmEditaFicha->dtpVencimentoP4->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP5->Date = frmEditaFicha->dtpVencimentoP5->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP6->Date = frmEditaFicha->dtpVencimentoP6->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP7->Date = frmEditaFicha->dtpVencimentoP7->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP8->Date = frmEditaFicha->dtpVencimentoP8->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP9->Date = frmEditaFicha->dtpVencimentoP9->Date.CurrentDate();
frmEditaFicha->dtpVencimentoP10->Date =frmEditaFicha->dtpVencimentoP10->Date.CurrentDate();
frmEditaFicha->dtpPagP1->Date = frmEditaFicha->dtpPagP1->Date.CurrentDate();
frmEditaFicha->dtpPagP2->Date = frmEditaFicha->dtpPagP2->Date.CurrentDate();
frmEditaFicha->dtpPagP3->Date = frmEditaFicha->dtpPagP3->Date.CurrentDate();
frmEditaFicha->dtpPagP4->Date = frmEditaFicha->dtpPagP4->Date.CurrentDate();
frmEditaFicha->dtpPagP5->Date = frmEditaFicha->dtpPagP5->Date.CurrentDate();
frmEditaFicha->dtpPagP6->Date = frmEditaFicha->dtpPagP6->Date.CurrentDate();
frmEditaFicha->dtpPagP7->Date = frmEditaFicha->dtpPagP7->Date.CurrentDate();
frmEditaFicha->dtpPagP8->Date = frmEditaFicha->dtpPagP8->Date.CurrentDate();
frmEditaFicha->dtpPagP9->Date = frmEditaFicha->dtpPagP9->Date.CurrentDate();
frmEditaFicha->dtpPagP10->Date = frmEditaFicha->dtpPagP10->Date.CurrentDate();
frmEditaFicha->edtValP1->Text =  "0,00";
//edtValP1->Enabled = false;
frmEditaFicha->edtValP2->Text =  "0,00";
//edtValP2->Enabled = false;
frmEditaFicha->edtValP3->Text =  "0,00";
//edtValP3->Enabled = false;
frmEditaFicha->edtValP4->Text =  "0,00";
//edtValP4->Enabled = false;
frmEditaFicha->edtValP5->Text =  "0,00";
//edtValP5->Enabled = false;
frmEditaFicha->edtValP6->Text =  "0,00";
//edtValP6->Enabled = false;
frmEditaFicha->edtValP7->Text =  "0,00";
//edtValP7->Enabled = false;
frmEditaFicha->edtValP8->Text =  "0,00";
//edtValP8->Enabled = false;
frmEditaFicha->edtValP9->Text =  "0,00";
//edtValP9->Enabled = false;
frmEditaFicha->edtValP10->Text =  "0,00";
//edtValP10->Enabled = false;

		if (DM1->CDSFiltroParcelas->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelas->RecordCount; i++)
			{
				if (i == 0)
				{
					frmEditaFicha->edtValP1->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP1->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 1)
				{
					frmEditaFicha->edtValP2->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP2->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 2)
				{
					frmEditaFicha->edtValP3->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP3->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 3)
				{
					frmEditaFicha->edtValP4->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP4->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 4)
				{
					frmEditaFicha->edtValP5->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP5->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 5)
				{
					frmEditaFicha->edtValP6->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP6->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 6)
				{
					frmEditaFicha->edtValP7->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP7->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 7)
				{
					frmEditaFicha->edtValP8->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP8->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 8)
				{
					frmEditaFicha->edtValP9->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP9->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
				if (i == 9)
				{
					frmEditaFicha->edtValP10->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpVencimentoP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					frmEditaFicha->dtpPagP10->Date = DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
				}
			}
		}
DM1->SQLFiltroFichaFisio->SQL->Clear();
DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha LIKE '%';");
DM1->SQLFiltroFichaFisio->Open();
DM1->CDSFiltroFichaFisio->Refresh();
gridFichaFisio->Refresh();
Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFiltroFichaFisio::edtFiltroPatologiaChange(TObject *Sender)
{
	DM1->CDSFiltroFichaFisio->Filtered = false;
	DM1->CDSFiltroFichaFisio->Filter = "patologia_fisio LIKE" + QuotedStr("%"+edtFiltroPatologia->Text+"%");
	DM1->CDSFiltroFichaFisio->Filtered = true;
}
//---------------------------------------------------------------------------
