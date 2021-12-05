//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untFicha.h"
#include "untAddPaciente.h"
#include "untDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFicha *frmFicha;
String dataPadraoG;
//---------------------------------------------------------------------------
__fastcall TfrmFicha::TfrmFicha(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFicha::btnAddPacienteClick(TObject *Sender)
{
	frmAddPaciente->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::FormShow(TObject *Sender)
{
dtpAvaliacao->Date = dtpAvaliacao->Date.CurrentDate();
String dataP = DateToStr(dtpTratamento->Date);
dataPadraoG = dataP;
DM1->CDSFichaFisio->Last();
btnAddPaciente->SetFocus();
memoHDA->Lines->Delimiter = '$';
memoHDA->Lines->StrictDelimiter = true;

memoObs->Lines->Delimiter = '$';
memoObs->Lines->StrictDelimiter = true;

memoConduta->Lines->Delimiter = '$';
memoConduta->Lines->StrictDelimiter = true;

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
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::btnSalvarClick(TObject *Sender)
{
if (edtNome->Text == "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE")
{
	MessageBoxA(NULL, "Favor selecionar um paciente!", "Cadastro de Avaliação", MB_OK);
	btnAddPaciente->SetFocus();
}
else
{
	try
	{
		DM1->CDSFichaFisio->Append();
		DM1->CDSFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
		DM1->CDSFichaFisio->FieldByName("patologia_fisio")->AsString = edtPatologia->Text;
		DM1->CDSFichaFisio->FieldByName("hda_fisio")->AsString = memoHDA->Lines->DelimitedText;
		DM1->CDSFichaFisio->FieldByName("exames_realizados_fisio")->AsString = edtExames->Text;
		DM1->CDSFichaFisio->FieldByName("conduta_fisio")->AsString = memoConduta->Lines->DelimitedText;
		DM1->CDSFichaFisio->FieldByName("sessoes_realizadas_fisio")->AsInteger = StrToInt(edtSessoes->Text);
		DM1->CDSFichaFisio->FieldByName("observacoes_fisio")->AsString = memoObs->Lines->DelimitedText;

		dtpAvaliacao->Format = "yyyy/dd/MM";
		DM1->CDSFichaFisio->FieldByName("data_avaliacao_fisio")->AsString = dtpAvaliacao->Date.DateString();
		dtpAvaliacao->Format = "";
		dtpTratamento->Format = "yyyy/dd/MM";
		DM1->CDSFichaFisio->FieldByName("data_inicio_tratamento_fisio")->AsString = dtpTratamento->Date.DateString();
		dtpTratamento->Format = "";
		dtpAlta->Format = "yyyy/dd/MM";
		DM1->CDSFichaFisio->FieldByName("data_alta_fisio")->AsString = dtpAlta->Date.DateString();
		dtpAlta->Format = "";

		DM1->CDSFichaFisio->ApplyUpdates(0);
		DM1->CDSFichaFisio->Refresh();
		DM1->CDSFichaFisio->Last();

		if (edtNumParcelas->ItemIndex != 0)
		{
			for (int i = 0; i < edtNumParcelas->ItemIndex; i++)
			{
				DM1->CDSParcelas->Append();
				DM1->CDSParcelas->FieldByName("cod_cliente_parcela_ficha_fisio")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
				DM1->CDSParcelas->FieldByName("cod_ficha_parcela_fisio")->AsInteger = DM1->CDSFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
				if (i == 0)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP1->Text;
					dtpVencimentoP1->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP1->Date.DateString();
					dtpVencimentoP1->Format = "";
					dtpPagP1->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP1->Date.DateString();
					dtpPagP1->Format = "";
				}
				if (i == 1)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP2->Text;
					dtpVencimentoP2->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP2->Date.DateString();
					dtpVencimentoP2->Format = "";
					dtpPagP2->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP2->Date.DateString();
					dtpPagP2->Format = "";
				}
				if (i == 2)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP3->Text;
					dtpVencimentoP3->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP3->Date.DateString();
					dtpVencimentoP3->Format = "";
					dtpPagP3->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP3->Date.DateString();
					dtpPagP3->Format = "";
				}
				if (i == 3)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP4->Text;
					dtpVencimentoP4->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP4->Date.DateString();
					dtpVencimentoP4->Format = "";
					dtpPagP4->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP4->Date.DateString();
					dtpPagP4->Format = "";
				}
				if (i == 4)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP5->Text;
					dtpVencimentoP5->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP5->Date.DateString();
					dtpVencimentoP5->Format = "";
					dtpPagP5->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP5->Date.DateString();
					dtpPagP5->Format = "";
				}
				if (i == 5)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP6->Text;
					dtpVencimentoP6->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP6->Date.DateString();
					dtpVencimentoP6->Format = "";
					dtpPagP6->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP6->Date.DateString();
					dtpPagP6->Format = "";
				}
				if (i == 6)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP7->Text;
					dtpVencimentoP7->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP7->Date.DateString();
					dtpVencimentoP7->Format = "";
					dtpPagP7->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP7->Date.DateString();
					dtpPagP7->Format = "";
				}
				if (i == 7)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP8->Text;
					dtpVencimentoP8->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP8->Date.DateString();
					dtpVencimentoP8->Format = "";
					dtpPagP8->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP8->Date.DateString();
					dtpPagP8->Format = "";
				}
				if (i == 8)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP9->Text;
					dtpVencimentoP9->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP9->Date.DateString();
					dtpVencimentoP9->Format = "";
					dtpPagP9->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP9->Date.DateString();
					dtpPagP9->Format = "";
				}
				if (i == 9)
				{
					DM1->CDSParcelas->FieldByName("valor_parcela_ficha_fisio")->AsString = edtValP10->Text;
					dtpVencimentoP10->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_venc_parcela_ficha_fisio")->AsString = dtpVencimentoP10->Date.DateString();
					dtpVencimentoP10->Format = "";
					dtpPagP10->Format = "yyyy/dd/MM";
					DM1->CDSParcelas->FieldByName("data_pag_parcela_ficha_fisio")->AsString = dtpPagP10->Date.DateString();
					dtpPagP10->Format = "";
				}
				DM1->CDSParcelas->ApplyUpdates(0);
				DM1->CDSParcelas->Refresh();
			}
		}

		edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		edtPatologia->Clear();
		memoHDA->Lines->Clear();
		edtExames->Clear();
		memoConduta->Lines->Clear();
		edtSessoes->Text = "0"; //Clear();
		memoObs->Lines->Clear();
		dtpTratamento->Date = StrToDate(dataPadraoG);
		dtpAvaliacao->Date = dtpAvaliacao->Date.CurrentDate(); //Alta->Date = StrToDate(dataPadraoG);
		edtNumParcelas->ItemIndex = 0;

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
        edtNumParcelas->ItemIndex = 0;
		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Avaliação", MB_OK);
	}
	catch (Exception& E)
	{
		ShowMessage("Erro ao Salvar. Código do erro:\n" + E.Message);

	}
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmFicha::edtNumParcelasChange(TObject *Sender)
{
if (edtNumParcelas->ItemIndex == 0)
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
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmFicha::edtValP1Change(TObject *Sender)
{
edtValP1->Text = FormatFloat("####.00", edtValP1->Text.ToDouble());
}
//---------------------------------------------------------------------------
void __fastcall TfrmFicha::btnCancelarClick(TObject *Sender)
{
DM1->CDSPaciente->Cancel();
DM1->CDSFichaFisio->Cancel();
DM1->CDSParcelas->Cancel();

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
edtNumParcelas->ItemIndex = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP2Change(TObject *Sender)
{
edtValP2->Text = FormatFloat("####.00", edtValP2->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP3Change(TObject *Sender)
{
edtValP3->Text = FormatFloat("####.00", edtValP3->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP4Change(TObject *Sender)
{
edtValP4->Text = FormatFloat("####.00", edtValP4->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP5Change(TObject *Sender)
{
edtValP5->Text = FormatFloat("####.00", edtValP5->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP6Change(TObject *Sender)
{
edtValP6->Text = FormatFloat("####.00", edtValP6->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP7Change(TObject *Sender)
{
edtValP7->Text = FormatFloat("####.00", edtValP7->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP8Change(TObject *Sender)
{
edtValP8->Text = FormatFloat("####.00", edtValP8->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP9Change(TObject *Sender)
{
edtValP9->Text = FormatFloat("####.00", edtValP9->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmFicha::edtValP10Change(TObject *Sender)
{
edtValP10->Text = FormatFloat("####.00", edtValP10->Text.ToDouble());
}
//---------------------------------------------------------------------------

