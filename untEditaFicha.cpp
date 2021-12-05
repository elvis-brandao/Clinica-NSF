//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untEditaFicha.h"
#include "untDM.h"
#include "untEditPaciente.h"
#include "untFiltroFichaFisio.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEditaFicha *frmEditaFicha;
//---------------------------------------------------------------------------
__fastcall TfrmEditaFicha::TfrmEditaFicha(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditaFicha::FormShow(TObject *Sender)
{
if (DM1->CDSFiltroFichaFisio->RecordCount > 0)
{
	if (janela == 0 || janela == 1)
	{
		codFichaFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
		codClienteFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
	}
	else
	{
       //janela = 2;
	}
	//codFichaFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
	//codClienteFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
	DM1->CDSFiltroFichaFisio->Refresh();
	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClienteFisio) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

	edtPatologia->Text = DM1->CDSFiltroFichaFisio->FieldByName("patologia_fisio")->AsString;
	memoHDA->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("hda_fisio")->AsString;
	edtExames->Text = DM1->CDSFiltroFichaFisio->FieldByName("exames_realizados_fisio")->AsString;
	memoConduta->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("conduta_fisio")->AsString;
	edtSessoes->Text = DM1->CDSFiltroFichaFisio->FieldByName("sessoes_realizadas_fisio")->AsString;
	memoObs->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("observacoes_fisio")->AsString;

	dtpAvaliacao->Format = "yyyy/dd/MM";
	dtpAvaliacao->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;
	dtpAvaliacao->Format = "";
	dtpTratamento->Format = "yyyy/dd/MM";
	dtpTratamento->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;
	dtpTratamento->Format = "";
	dtpAlta->Format = "yyyy/dd/MM";
	dtpAlta->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_alta_fisio")->AsString;
	dtpAlta->Format = "";

	DM1->SQLFiltroParcelas->SQL->Clear();
	DM1->SQLFiltroParcelas->SQL->Add("SELECT * FROM parcelas_ficha_fisio WHERE parcelas_ficha_fisio.cod_cliente_parcela_ficha_fisio = '" + IntToStr(codClienteFisio) + "' AND parcelas_ficha_fisio.cod_ficha_parcela_fisio = '" + codFichaFisio + "';");
	DM1->SQLFiltroParcelas->Open();
	DM1->SQLFiltroParcelas->Refresh();
	DM1->CDSFiltroParcelas->Refresh();
	DM1->CDSFiltroParcelas->First();
	edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelas->RecordCount;

		if (DM1->CDSFiltroParcelas->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelas->RecordCount; i++)
			{
				if (i == 0)
				{
					edtValP1->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 1)
				{
					edtValP2->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 2)
				{
					edtValP3->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 3)
				{
					edtValP4->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 4)
				{
					edtValP5->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 5)
				{
					edtValP6->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 6)
				{
					edtValP7->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 7)
				{
					edtValP8->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 8)
				{
					edtValP9->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 9)
				{
					edtValP10->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
			}
		}
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)
{
if (DM1->CDSFiltroFichaFisio->RecordCount > 0)
{
	codFichaFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
	codClienteFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;

	DM1->SQLFiltroPaciente->SQL->Clear();
	DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClienteFisio) + "';");
	DM1->SQLFiltroPaciente->Open();
	DM1->SQLFiltroPaciente->Refresh();
	DM1->cdsFiltroPaciente->Refresh();
	edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

	edtPatologia->Text = DM1->CDSFiltroFichaFisio->FieldByName("patologia_fisio")->AsString;
	memoHDA->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("hda_fisio")->AsString;
	edtExames->Text = DM1->CDSFiltroFichaFisio->FieldByName("exames_realizados_fisio")->AsString;
	memoConduta->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("conduta_fisio")->AsString;
	edtSessoes->Text = DM1->CDSFiltroFichaFisio->FieldByName("sessoes_realizadas_fisio")->AsString;
	memoObs->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("observacoes_fisio")->AsString;

	//dtpAvaliacao->Format = "yyyy/dd/MM";
	//Edit11->Text = DM1->CDSFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;
	dtpAvaliacao->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;

	//dtpAvaliacao->Format = "";
	//dtpTratamento->Format = "yyyy/dd/MM";
	//Edit12->Text = DM1->CDSFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;
	dtpTratamento->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;

	//dtpTratamento->Format = "";
	//dtpAlta->Format = "yyyy/dd/MM";
	//Edit13->Text = DM1->CDSFichaFisio->FieldByName("data_alta_fisio")->AsString;
	dtpAlta->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_alta_fisio")->AsString;
	//dtpAlta->Format = "";

	DM1->SQLFiltroParcelas->SQL->Clear();
	DM1->SQLFiltroParcelas->SQL->Add("SELECT * FROM parcelas_ficha_fisio WHERE parcelas_ficha_fisio.cod_cliente_parcela_ficha_fisio = '" + IntToStr(codClienteFisio) + "' AND parcelas_ficha_fisio.cod_ficha_parcela_fisio = '" + codFichaFisio + "';");
	DM1->SQLFiltroParcelas->Open();
	DM1->SQLFiltroParcelas->Refresh();
	DM1->CDSFiltroParcelas->Refresh();
	DM1->CDSFiltroParcelas->First();
	edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelas->RecordCount;

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

		if (DM1->CDSFiltroParcelas->RecordCount != 0)
		{
			for (int i = 0; i < DM1->CDSFiltroParcelas->RecordCount; i++)
			{
				if (i == 0)
				{
					edtValP1->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 1)
				{
					edtValP2->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 2)
				{
					edtValP3->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 3)
				{
					edtValP4->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 4)
				{
					edtValP5->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 5)
				{
					edtValP6->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 6)
				{
					edtValP7->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 7)
				{
					edtValP8->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 8)
				{
					edtValP9->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 9)
				{
					edtValP10->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "yyyy/dd/MM";
					dtpVencimentoP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
					//dtpVencimentoP3->Format = "";
					//dtpPagP3->Format = "yyyy/dd/MM";
					dtpPagP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
					//dtpPagP3->Format = "";
					DM1->CDSFiltroParcelas->Next();
				}
			}
		}
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::btnEditarClick(TObject *Sender)
{
//DM1->CDSFiltroFichaFisio->Edit();
//DM1->CDSFiltroParcelas->Edit();

imgCadeado1->Visible = false;
imgCadeado2->Visible = false;
btnEditar->Enabled = false;
btnSalvar->Enabled = true;
btnCancelar->Enabled = true;
Panel1->Enabled = true;
Panel2->Enabled = true;
//dtpAlta->Enabled = true;
//edtSessoes->Enabled = true;
DM1->CDSFiltroFichaFisio->Edit();
DM1->CDSFiltroParcelas->Edit();
btnExcluir->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::btnSalvarClick(TObject *Sender)
{
//------------------------------------------------
	try
	{
		DM1->CDSFiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger = codClienteFisio;
		DM1->CDSFiltroFichaFisio->FieldByName("patologia_fisio")->AsString = edtPatologia->Text;
		DM1->CDSFiltroFichaFisio->FieldByName("hda_fisio")->AsString = memoHDA->Lines->DelimitedText;
		DM1->CDSFiltroFichaFisio->FieldByName("exames_realizados_fisio")->AsString = edtExames->Text;
		DM1->CDSFiltroFichaFisio->FieldByName("conduta_fisio")->AsString = memoConduta->Lines->DelimitedText;
		DM1->CDSFiltroFichaFisio->FieldByName("sessoes_realizadas_fisio")->AsInteger = StrToInt(edtSessoes->Text);
		DM1->CDSFiltroFichaFisio->FieldByName("observacoes_fisio")->AsString = memoObs->Lines->DelimitedText;

		dtpAvaliacao->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaFisio->FieldByName("data_avaliacao_fisio")->AsString = dtpAvaliacao->Date.DateString();
		dtpAvaliacao->Format = "";
		dtpTratamento->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString = dtpTratamento->Date.DateString();
		dtpTratamento->Format = "";
		dtpAlta->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaFisio->FieldByName("data_alta_fisio")->AsString = dtpAlta->Date.DateString();
		dtpAlta->Format = "";

		DM1->CDSFiltroFichaFisio->ApplyUpdates(0);
		DM1->CDSFiltroFichaFisio->Refresh();

		if (edtNumParcelas->ItemIndex != 0)
		{
		DM1->CDSFiltroParcelas->First();
			for (int i = 0; i < edtNumParcelas->ItemIndex; i++)
			{
				if (i == 0)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP1->Text;
					dtpVencimentoP1->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP1->Date.DateString();
					dtpVencimentoP1->Format = "";
					dtpPagP1->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP1->Date.DateString();
					dtpPagP1->Format = "";
                    DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 1)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP2->Text;
					dtpVencimentoP2->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP2->Date.DateString();
					dtpVencimentoP2->Format = "";
					dtpPagP2->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP2->Date.DateString();
					dtpPagP2->Format = "";
					DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 2)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP3->Text;
					dtpVencimentoP3->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP3->Date.DateString();
					dtpVencimentoP3->Format = "";
					dtpPagP3->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP3->Date.DateString();
					dtpPagP3->Format = "";
                    DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 3)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP4->Text;
					dtpVencimentoP4->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP4->Date.DateString();
					dtpVencimentoP4->Format = "";
					dtpPagP4->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP4->Date.DateString();
					dtpPagP4->Format = "";
                    DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 4)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP5->Text;
					dtpVencimentoP5->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP5->Date.DateString();
					dtpVencimentoP5->Format = "";
					dtpPagP5->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP5->Date.DateString();
					dtpPagP5->Format = "";
                    DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 5)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP6->Text;
					dtpVencimentoP6->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP6->Date.DateString();
					dtpVencimentoP6->Format = "";
					dtpPagP6->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP6->Date.DateString();
					dtpPagP6->Format = "";
                    DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 6)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP7->Text;
					dtpVencimentoP7->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP7->Date.DateString();
					dtpVencimentoP7->Format = "";
					dtpPagP7->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP7->Date.DateString();
					dtpPagP7->Format = "";
					DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 7)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP8->Text;
					dtpVencimentoP8->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP8->Date.DateString();
					dtpVencimentoP8->Format = "";
					dtpPagP8->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP8->Date.DateString();
					dtpPagP8->Format = "";
                    DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 8)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP9->Text;
					dtpVencimentoP9->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP9->Date.DateString();
					dtpVencimentoP9->Format = "";
					dtpPagP9->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP9->Date.DateString();
					dtpPagP9->Format = "";
					DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
				if (i == 9)
				{
					DM1->CDSFiltroParcelas->Edit();
					DM1->CDSFiltroParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = codClienteFisio;
					DM1->CDSFiltroParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = codFichaFisio;
					DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP10->Text;
					dtpVencimentoP10->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP10->Date.DateString();
					dtpVencimentoP10->Format = "";
					dtpPagP10->Format = "yyyy/dd/MM";
					DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP10->Date.DateString();
					dtpPagP10->Format = "";
					DM1->CDSFiltroParcelas->ApplyUpdates(0);
					DM1->CDSFiltroParcelas->Refresh();
					DM1->CDSFiltroParcelas->Next();
				}
			}
			//DM1->CDSFiltroParcelas->ApplyUpdates(0);
			//DM1->CDSFiltroParcelas->Refresh();
		}

		/*edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		edtPatologia->Clear();
		memoHDA->Lines->Clear();
		edtExames->Clear();
		memoConduta->Lines->Clear();
		edtSessoes->Clear();
		memoObs->Lines->Clear();
		dtpTratamento->Date = StrToDate(dataPadraoG);
		dtpAlta->Date = StrToDate(dataPadraoG);

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
		edtNumParcelas->ItemIndex = 0;*/
		MessageBoxA(NULL, "Informações salvas com sucesso!", "Edição de Avaliação", MB_OK);
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
btnExcluir->Enabled = true;
//dtpAlta->Enabled = false;
//edtSessoes->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::FormClose(TObject *Sender, TCloseAction &Action)
{
//janela = Null();
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

void __fastcall TfrmEditaFicha::btnAddPacienteClick(TObject *Sender)
{
frmFiltroFichaFisio->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtNumParcelasChange(TObject *Sender)
{
/*if (edtNumParcelas->ItemIndex == 0)
{
	edtValP1->Enabled = false;
	edtValP2->Enabled = false;
	edtValP3->Enabled = false;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = false;
	dtpVencimentoP2->Enabled = false;
	dtpVencimentoP3->Enabled = false;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = false;
	dtpPagP2->Enabled = false;
	dtpPagP3->Enabled = false;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 1)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = false;
	edtValP3->Enabled = false;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = false;
	dtpVencimentoP3->Enabled = false;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = false;
	dtpPagP3->Enabled = false;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 2)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = false;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP3->Enabled = false;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = false;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 3)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 4)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 5)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 6)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 7)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 8)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 9)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = true;
	edtValP10->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = true;
	dtpVencimentoP9->Date = dtpVencimentoP8->Date + 30;
	dtpVencimentoP10->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = true;
	dtpPagP10->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 10)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = true;
	edtValP10->Enabled = true;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = true;
	dtpVencimentoP9->Date = dtpVencimentoP8->Date + 30;
	dtpVencimentoP10->Enabled = true;
    dtpVencimentoP10->Date = dtpVencimentoP9->Date + 30;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = true;
	dtpPagP10->Enabled = true;
}*/
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::btnCancelarClick(TObject *Sender)
{
DM1->CDSFiltroFichaFisio->Cancel();
DM1->CDSFiltroParcelas->Cancel();
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

void __fastcall TfrmEditaFicha::edtValP1Change(TObject *Sender)
{
edtValP1->Text = FormatFloat("####.00", edtValP1->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP2Change(TObject *Sender)
{
edtValP2->Text = FormatFloat("####.00", edtValP2->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP3Change(TObject *Sender)
{
edtValP3->Text = FormatFloat("####.00", edtValP3->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP4Change(TObject *Sender)
{
edtValP4->Text = FormatFloat("####.00", edtValP4->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP5Change(TObject *Sender)
{
edtValP5->Text = FormatFloat("####.00", edtValP5->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP6Change(TObject *Sender)
{
edtValP6->Text = FormatFloat("####.00", edtValP6->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP7Change(TObject *Sender)
{
edtValP7->Text = FormatFloat("####.00", edtValP7->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP8Change(TObject *Sender)
{
edtValP8->Text = FormatFloat("####.00", edtValP8->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP9Change(TObject *Sender)
{
edtValP9->Text = FormatFloat("####.00", edtValP9->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::edtValP10Change(TObject *Sender)
{
edtValP10->Text = FormatFloat("####.00", edtValP10->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditaFicha::btnExcluirClick(TObject *Sender)
{
if (DM1->CDSFiltroFichaFisio->RecordCount == 0)
{
	MessageBoxA(NULL, "Não há registros para excluir!", "Exclusão de Ficha", MB_OK);
}
else
{
	TMsgDlgBtn myYes = mbYes;
	TMsgDlgBtn myNo = mbNo;

	if(MessageDlg("Deletar registro ?", mtConfirmation, TMsgDlgButtons() << myYes << myNo,0) == mrYes)
	{
		DM1->CDSFiltroFichaFisio->Delete();
		DM1->CDSFiltroFichaFisio->ApplyUpdates(0);
		DM1->CDSFiltroFichaFisio->Refresh();
		if (DM1->CDSFiltroFichaFisio->RecordCount == 0)
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
			edtPatologia->Clear();
			memoHDA->Lines->Clear();
			edtExames->Clear();
			memoConduta->Lines->Clear();
			edtSessoes->Clear();
			memoObs->Lines->Clear();
			dtpTratamento->Date = StrToDate("01/01/1601");
			dtpAlta->Date = StrToDate("01/01/1601");
		}
		else
		{
			//preencher
            if (DM1->CDSFiltroFichaFisio->RecordCount > 0)
			{
				codFichaFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
				codClienteFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
				DM1->CDSFiltroFichaFisio->Refresh();
				DM1->SQLFiltroPaciente->SQL->Clear();
				DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(codClienteFisio) + "';");
				DM1->SQLFiltroPaciente->Open();
				DM1->SQLFiltroPaciente->Refresh();
				DM1->cdsFiltroPaciente->Refresh();
				edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

				edtPatologia->Text = DM1->CDSFiltroFichaFisio->FieldByName("patologia_fisio")->AsString;
				memoHDA->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("hda_fisio")->AsString;
				edtExames->Text = DM1->CDSFiltroFichaFisio->FieldByName("exames_realizados_fisio")->AsString;
				memoConduta->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("conduta_fisio")->AsString;
				edtSessoes->Text = DM1->CDSFiltroFichaFisio->FieldByName("sessoes_realizadas_fisio")->AsString;
				memoObs->Lines->DelimitedText = DM1->CDSFiltroFichaFisio->FieldByName("observacoes_fisio")->AsString;

				dtpAvaliacao->Format = "yyyy/dd/MM";
				dtpAvaliacao->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_avaliacao_fisio")->AsString;
				dtpAvaliacao->Format = "";
				dtpTratamento->Format = "yyyy/dd/MM";
				dtpTratamento->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString;
				dtpTratamento->Format = "";
				dtpAlta->Format = "yyyy/dd/MM";
				dtpAlta->Date = DM1->CDSFiltroFichaFisio->FieldByName("data_alta_fisio")->AsString;
				dtpAlta->Format = "";

				DM1->SQLFiltroParcelas->SQL->Clear();
				DM1->SQLFiltroParcelas->SQL->Add("SELECT * FROM parcelas_ficha_fisio WHERE parcelas_ficha_fisio.cod_cliente_parcela_ficha_fisio = '" + IntToStr(codClienteFisio) + "' AND parcelas_ficha_fisio.cod_ficha_parcela_fisio = '" + codFichaFisio + "';");
				DM1->SQLFiltroParcelas->Open();
				DM1->SQLFiltroParcelas->Refresh();
				DM1->CDSFiltroParcelas->Refresh();
				DM1->CDSFiltroParcelas->First();
				edtNumParcelas->ItemIndex = DM1->CDSFiltroParcelas->RecordCount;

				if (DM1->CDSFiltroParcelas->RecordCount != 0)
				{
					for (int i = 0; i < DM1->CDSFiltroParcelas->RecordCount; i++)
					{
						if (i == 0)
						{
							edtValP1->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP1->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 1)
						{
							edtValP2->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP2->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 2)
						{
							edtValP3->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP3->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 3)
						{
							edtValP4->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP4->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 4)
						{
							edtValP5->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP5->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 5)
						{
							edtValP6->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP6->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 6)
						{
							edtValP7->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP7->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 7)
						{
							edtValP8->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP8->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 8)
						{
							edtValP9->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP9->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
						}
						if (i == 9)
						{
							edtValP10->Text = DM1->CDSFiltroParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "yyyy/dd/MM";
							dtpVencimentoP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString;
							//dtpVencimentoP3->Format = "";
							//dtpPagP3->Format = "yyyy/dd/MM";
							dtpPagP10->Date = DM1->CDSFiltroParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString;
							//dtpPagP3->Format = "";
							DM1->CDSFiltroParcelas->Next();
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

