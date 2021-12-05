//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untCadPalmilhas.h"
#include "untDM.h"
#include "untAddPacientePalmilha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmCadPalmilhas *frmCadPalmilhas;
//---------------------------------------------------------------------------
__fastcall TfrmCadPalmilhas::TfrmCadPalmilhas(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPalmilhas::btnAddPacienteClick(TObject *Sender)
{
frmAddPacientePalmilha->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPalmilhas::FormShow(TObject *Sender)
{
memoDescricao->Lines->Delimiter = '$';
memoDescricao->Lines->StrictDelimiter = true;
dtpRecebimentoCalacados->Date = dtpRecebimentoCalacados->Date.CurrentDate();

}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPalmilhas::FormClose(TObject *Sender, TCloseAction &Action)

{
edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
dtpRecebimentoCalacados->Date = dtpRecebimentoCalacados->Date.CurrentDate();
edtNumCalcados->Clear();
edtQTDE->Clear();
edtAlturaPalmilha->Clear();
memoDescricao->Clear();
dtpChegadaPalmilha->Date = StrToDate("01/01/1601");
dtpEntregaPalmilha->Date = StrToDate("01/01/1601");
edtValorPalmilha->Text = "0,00";
CBPago->ItemIndex = 0;
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPalmilhas::btnSalvarClick(TObject *Sender)
{
if (edtNome->Text == "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE")
{
	MessageBoxA(NULL, "Favor selecionar um paciente!", "Cadastro de Palmilhas", MB_OK);
	btnAddPaciente->SetFocus();
}
else
{
	try
	{
		DM1->CDSPalmilhas->Append();
		DM1->CDSPalmilhas->FieldByName("cod_cliente_palmilhas")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
		dtpRecebimentoCalacados->Format = "yyyy/dd/MM";
		DM1->CDSPalmilhas->FieldByName("data_chegada_calcados_palmilha")->AsString = dtpRecebimentoCalacados->Date.DateString();
		dtpRecebimentoCalacados->Format = "";
		DM1->CDSPalmilhas->FieldByName("num_calcado_palmilhas")->AsString = edtNumCalcados->Text;
		DM1->CDSPalmilhas->FieldByName("qtde_calcados_palmilhas")->AsString = edtQTDE->Text;
		DM1->CDSPalmilhas->FieldByName("altura_palmilha")->AsString = edtAlturaPalmilha->Text;
		DM1->CDSPalmilhas->FieldByName("descricao_calcados_palmilhas")->AsString = memoDescricao->Lines->DelimitedText;
		dtpChegadaPalmilha->Format = "yyyy/dd/MM";
		DM1->CDSPalmilhas->FieldByName("data_chegada_palmilha")->AsString = dtpChegadaPalmilha->Date.DateString();
		dtpChegadaPalmilha->Format = "";
		dtpEntregaPalmilha->Format = "yyyy/dd/MM";
		DM1->CDSPalmilhas->FieldByName("data_entrega_palmilha")->AsString = dtpEntregaPalmilha->Date.DateString();
		dtpEntregaPalmilha->Format = "";
		DM1->CDSPalmilhas->FieldByName("valor_palmilha")->AsString = edtValorPalmilha->Text;
		DM1->CDSPalmilhas->FieldByName("pago_palmilha")->AsInteger = CBPago->ItemIndex;
		DM1->CDSPalmilhas->ApplyUpdates(0);
		DM1->CDSPalmilhas->Refresh();
        DM1->CDSFiltroFichaPalmilha->Refresh();

        edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		dtpRecebimentoCalacados->Date = dtpRecebimentoCalacados->Date.CurrentDate();
		edtNumCalcados->Clear();
		edtQTDE->Clear();
		edtAlturaPalmilha->Clear();
		memoDescricao->Clear();
		dtpChegadaPalmilha->Date = StrToDate("01/01/1601");
		dtpEntregaPalmilha->Date = StrToDate("01/01/1601");
		edtValorPalmilha->Text = "0,00";
		CBPago->ItemIndex = 0;

		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Palmilhas", MB_OK);
	}
    catch (Exception& E)
	{
		ShowMessage("Erro ao Salvar. Código do erro:\n" + E.Message);

	}
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPalmilhas::edtValorPalmilhaChange(TObject *Sender)
{
edtValorPalmilha->Text = FormatFloat("####.00", edtValorPalmilha->Text.ToDouble());
}
//---------------------------------------------------------------------------
