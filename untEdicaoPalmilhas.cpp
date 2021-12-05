//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untEdicaoPalmilhas.h"
#include "untDM.h"
#include "untFiltroFichaPalmilha.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEdicaoPalmilhas *frmEdicaoPalmilhas;
//---------------------------------------------------------------------------
__fastcall TfrmEdicaoPalmilhas::TfrmEdicaoPalmilhas(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::BitBtn1Click(TObject *Sender)
{
frmFiltroFichaPalmilha->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::FormShow(TObject *Sender)
{
memoDescricao->Lines->Delimiter = '$';
memoDescricao->Lines->StrictDelimiter = true;
if (DM1->CDSFiltroFichaPalmilha->RecordCount > 0)
{
codFichaPalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_ficha_palmilhas")->AsInteger;
codClientePalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_cliente_palmilhas")->AsInteger;

DM1->SQLFiltroPaciente->SQL->Clear();
DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEdicaoPalmilhas->codClientePalmilha) + "';");
DM1->SQLFiltroPaciente->Open();
DM1->SQLFiltroPaciente->Refresh();
DM1->cdsFiltroPaciente->Refresh();
edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

//DM1->CDSPalmilhas->FieldByName("cod_cliente_palmilhas")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
//dtpRecebimentoCalacados->Format = "yyyy/dd/MM";
dtpRecebimentoCalacados->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_calcados_palmilha")->AsString;
//dtpRecebimentoCalacados->Format = "";
edtNumCalcados->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("num_calcado_palmilhas")->AsString;
edtQTDE->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("qtde_calcados_palmilhas")->AsString;
edtAlturaPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("altura_palmilha")->AsString;
memoDescricao->Lines->DelimitedText = DM1->CDSFiltroFichaPalmilha->FieldByName("descricao_calcados_palmilhas")->AsString;
//dtpChegadaPalmilha->Format = "yyyy/dd/MM";
dtpChegadaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_palmilha")->AsString;
//dtpChegadaPalmilha->Format = "";
//dtpEntregaPalmilha->Format = "yyyy/dd/MM";
dtpEntregaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_entrega_palmilha")->AsString;
//dtpEntregaPalmilha->Format = "";
edtValorPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("valor_palmilha")->AsString;
CBPago->ItemIndex = DM1->CDSFiltroFichaPalmilha->FieldByName("pago_palmilha")->AsInteger;
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::FormClose(TObject *Sender, TCloseAction &Action)

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
void __fastcall TfrmEdicaoPalmilhas::edtValorPalmilhaChange(TObject *Sender)
{
edtValorPalmilha->Text = FormatFloat("####.00", edtValorPalmilha->Text.ToDouble());
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::btnEditarClick(TObject *Sender)
{
imgCadeado1->Visible = false;
btnEditar->Enabled = false;
btnSalvar->Enabled = true;
btnCancelar->Enabled = true;
Panel1->Enabled = true;
DM1->CDSFiltroFichaPalmilha->Edit();
btnExcluir->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::btnCancelarClick(TObject *Sender)
{
DM1->CDSFiltroFichaPalmilha->Cancel();
//DM1->CDSFiltroParcelas->Cancel();
imgCadeado1->Visible = true;
btnEditar->Enabled = true;
btnSalvar->Enabled = false;
btnCancelar->Enabled = false;
Panel1->Enabled = false;
btnExcluir->Enabled = true;
//Panel2->Enabled = true;
Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::btnSalvarClick(TObject *Sender)
{
	try
	{
		//DM1->CDSPalmilhas->Append();
		DM1->CDSFiltroFichaPalmilha->FieldByName("cod_cliente_palmilhas")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
		dtpRecebimentoCalacados->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_calcados_palmilha")->AsString = dtpRecebimentoCalacados->Date.DateString();
		dtpRecebimentoCalacados->Format = "";
		DM1->CDSFiltroFichaPalmilha->FieldByName("num_calcado_palmilhas")->AsString = edtNumCalcados->Text;
		DM1->CDSFiltroFichaPalmilha->FieldByName("qtde_calcados_palmilhas")->AsString = edtQTDE->Text;
		DM1->CDSFiltroFichaPalmilha->FieldByName("altura_palmilha")->AsString = edtAlturaPalmilha->Text;
		DM1->CDSFiltroFichaPalmilha->FieldByName("descricao_calcados_palmilhas")->AsString = memoDescricao->Lines->DelimitedText;
		dtpChegadaPalmilha->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_palmilha")->AsString = dtpChegadaPalmilha->Date.DateString();
		dtpChegadaPalmilha->Format = "";
		dtpEntregaPalmilha->Format = "yyyy/dd/MM";
		DM1->CDSFiltroFichaPalmilha->FieldByName("data_entrega_palmilha")->AsString = dtpEntregaPalmilha->Date.DateString();
		dtpEntregaPalmilha->Format = "";
		DM1->CDSFiltroFichaPalmilha->FieldByName("valor_palmilha")->AsString = edtValorPalmilha->Text;
		DM1->CDSFiltroFichaPalmilha->FieldByName("pago_palmilha")->AsInteger = CBPago->ItemIndex;
		DM1->CDSFiltroFichaPalmilha->ApplyUpdates(0);
		DM1->CDSFiltroFichaPalmilha->Refresh();

		/*edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		dtpRecebimentoCalacados->Date = dtpRecebimentoCalacados->Date.CurrentDate();
		edtNumCalcados->Clear();
		edtQTDE->Clear();
		edtAlturaPalmilha->Clear();
		memoDescricao->Clear();
		dtpChegadaPalmilha->Date = StrToDate("01/01/1601");
		dtpEntregaPalmilha->Date = StrToDate("01/01/1601");
		edtValorPalmilha->Text = "0,00";
		CBPago->ItemIndex = 0;*/

		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Palmilhas", MB_OK);
	}
    catch (Exception& E)
	{
		ShowMessage("Erro ao Salvar. Código do erro:\n" + E.Message);

	}
imgCadeado1->Visible = true;
btnEditar->Enabled = true;
btnSalvar->Enabled = false;
btnCancelar->Enabled = false;
Panel1->Enabled = false;
btnExcluir->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)
          
{
if (DM1->CDSFiltroFichaPalmilha->RecordCount > 0)
{
codFichaPalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_ficha_palmilhas")->AsInteger;
codClientePalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_cliente_palmilhas")->AsInteger;

DM1->SQLFiltroPaciente->SQL->Clear();
DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEdicaoPalmilhas->codClientePalmilha) + "';");
DM1->SQLFiltroPaciente->Open();
DM1->SQLFiltroPaciente->Refresh();
DM1->cdsFiltroPaciente->Refresh();
edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

//DM1->CDSPalmilhas->FieldByName("cod_cliente_palmilhas")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
//dtpRecebimentoCalacados->Format = "yyyy/dd/MM";
dtpRecebimentoCalacados->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_calcados_palmilha")->AsString;
//dtpRecebimentoCalacados->Format = "";
edtNumCalcados->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("num_calcado_palmilhas")->AsString;
edtQTDE->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("qtde_calcados_palmilhas")->AsString;
edtAlturaPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("altura_palmilha")->AsString;
memoDescricao->Lines->DelimitedText = DM1->CDSFiltroFichaPalmilha->FieldByName("descricao_calcados_palmilhas")->AsString;
//dtpChegadaPalmilha->Format = "yyyy/dd/MM";
dtpChegadaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_palmilha")->AsString;
//dtpChegadaPalmilha->Format = "";
//dtpEntregaPalmilha->Format = "yyyy/dd/MM";
dtpEntregaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_entrega_palmilha")->AsString;
//dtpEntregaPalmilha->Format = "";
edtValorPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("valor_palmilha")->AsString;
CBPago->ItemIndex = DM1->CDSFiltroFichaPalmilha->FieldByName("pago_palmilha")->AsInteger;
}	
}
//---------------------------------------------------------------------------
void __fastcall TfrmEdicaoPalmilhas::btnExcluirClick(TObject *Sender)
{
if (DM1->CDSFiltroFichaPalmilha->RecordCount == 0)
{
	MessageBoxA(NULL, "Não há registros para excluir!", "Exclusão de Ficha", MB_OK);
}
else
{
	TMsgDlgBtn myYes = mbYes;
	TMsgDlgBtn myNo = mbNo;

	if(MessageDlg("Deletar registro ?", mtConfirmation, TMsgDlgButtons() << myYes << myNo,0) == mrYes)
	{
		DM1->CDSFiltroFichaPalmilha->Delete();
		DM1->CDSFiltroFichaPalmilha->ApplyUpdates(0);
		DM1->CDSFiltroFichaPalmilha->Refresh();
		if (DM1->CDSFiltroFichaPalmilha->RecordCount == 0)
		{
			//limpar
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
		else
		{
			//preencher
			if (DM1->CDSFiltroFichaPalmilha->RecordCount > 0)
			{
				codFichaPalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_ficha_palmilhas")->AsInteger;
				codClientePalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_cliente_palmilhas")->AsInteger;

				DM1->SQLFiltroPaciente->SQL->Clear();
				DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEdicaoPalmilhas->codClientePalmilha) + "';");
				DM1->SQLFiltroPaciente->Open();
				DM1->SQLFiltroPaciente->Refresh();
				DM1->cdsFiltroPaciente->Refresh();
				edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

				//DM1->CDSPalmilhas->FieldByName("cod_cliente_palmilhas")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
				//dtpRecebimentoCalacados->Format = "yyyy/dd/MM";
				dtpRecebimentoCalacados->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_calcados_palmilha")->AsString;
				//dtpRecebimentoCalacados->Format = "";
				edtNumCalcados->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("num_calcado_palmilhas")->AsString;
				edtQTDE->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("qtde_calcados_palmilhas")->AsString;
				edtAlturaPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("altura_palmilha")->AsString;
				memoDescricao->Lines->DelimitedText = DM1->CDSFiltroFichaPalmilha->FieldByName("descricao_calcados_palmilhas")->AsString;
				//dtpChegadaPalmilha->Format = "yyyy/dd/MM";
				dtpChegadaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_palmilha")->AsString;
				//dtpChegadaPalmilha->Format = "";
				//dtpEntregaPalmilha->Format = "yyyy/dd/MM";
				dtpEntregaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_entrega_palmilha")->AsString;
				//dtpEntregaPalmilha->Format = "";
				edtValorPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("valor_palmilha")->AsString;
				CBPago->ItemIndex = DM1->CDSFiltroFichaPalmilha->FieldByName("pago_palmilha")->AsInteger;
}
		}
		MessageBoxA(NULL, "Registro excluido com sucesso!", "Exclusão de Paciente", MB_OK);
	}
}	
}
//---------------------------------------------------------------------------
