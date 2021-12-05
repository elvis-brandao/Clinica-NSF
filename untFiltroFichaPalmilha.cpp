//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untFiltroFichaPalmilha.h"
#include "untDM.h"
#include "untEdicaoPalmilhas.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFiltroFichaPalmilha *frmFiltroFichaPalmilha;
//---------------------------------------------------------------------------
__fastcall TfrmFiltroFichaPalmilha::TfrmFiltroFichaPalmilha(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaPalmilha::edtBuscaChange(TObject *Sender)
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
void __fastcall TfrmFiltroFichaPalmilha::gridPacienteCellClick(TColumn *Column)
{
DM1->SQLFiltroFichaPalmilha->SQL->Clear();
DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPalmilha->Open();
DM1->CDSFiltroFichaPalmilha->Refresh();
gridFichaFisio->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaPalmilha::gridFichaFisioDblClick(TObject *Sender)
{
frmEdicaoPalmilhas->codFichaPalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_ficha_palmilhas")->AsInteger;
frmEdicaoPalmilhas->codClientePalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_cliente_palmilhas")->AsInteger;

DM1->SQLFiltroPaciente->SQL->Clear();
DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEdicaoPalmilhas->codClientePalmilha) + "';");
DM1->SQLFiltroPaciente->Open();
DM1->SQLFiltroPaciente->Refresh();
DM1->cdsFiltroPaciente->Refresh();
frmEdicaoPalmilhas->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

//DM1->CDSPalmilhas->FieldByName("cod_cliente_palmilhas")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
//dtpRecebimentoCalacados->Format = "yyyy/dd/MM";
frmEdicaoPalmilhas->dtpRecebimentoCalacados->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_calcados_palmilha")->AsString;
//dtpRecebimentoCalacados->Format = "";
frmEdicaoPalmilhas->edtNumCalcados->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("num_calcado_palmilhas")->AsString;
frmEdicaoPalmilhas->edtQTDE->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("qtde_calcados_palmilhas")->AsString;
frmEdicaoPalmilhas->edtAlturaPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("altura_palmilha")->AsString;
frmEdicaoPalmilhas->memoDescricao->Lines->DelimitedText = DM1->CDSFiltroFichaPalmilha->FieldByName("descricao_calcados_palmilhas")->AsString;
//dtpChegadaPalmilha->Format = "yyyy/dd/MM";
frmEdicaoPalmilhas->dtpChegadaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_palmilha")->AsString;
//dtpChegadaPalmilha->Format = "";
//dtpEntregaPalmilha->Format = "yyyy/dd/MM";
frmEdicaoPalmilhas->dtpEntregaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_entrega_palmilha")->AsString;
//dtpEntregaPalmilha->Format = "";
frmEdicaoPalmilhas->edtValorPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("valor_palmilha")->AsString;
frmEdicaoPalmilhas->CBPago->ItemIndex = DM1->CDSFiltroFichaPalmilha->FieldByName("pago_palmilha")->AsInteger;

DM1->SQLFiltroFichaPalmilha->SQL->Clear();
DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas LIKE '%';");
DM1->SQLFiltroFichaPalmilha->Open();
DM1->CDSFiltroFichaPalmilha->Refresh();
gridFichaFisio->Refresh();
Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmFiltroFichaPalmilha::BitBtn2Click(TObject *Sender)
{
frmEdicaoPalmilhas->codFichaPalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_ficha_palmilhas")->AsInteger;
frmEdicaoPalmilhas->codClientePalmilha = DM1->CDSFiltroFichaPalmilha->FieldByName("cod_cliente_palmilhas")->AsInteger;

DM1->SQLFiltroPaciente->SQL->Clear();
DM1->SQLFiltroPaciente->SQL->Add("SELECT * FROM paciente  WHERE paciente.cod_paciente = '" + IntToStr(frmEdicaoPalmilhas->codClientePalmilha) + "';");
DM1->SQLFiltroPaciente->Open();
DM1->SQLFiltroPaciente->Refresh();
DM1->cdsFiltroPaciente->Refresh();
frmEdicaoPalmilhas->edtNome->Text = DM1->cdsFiltroPaciente->FieldByName("nome_paciente")->AsString;

//DM1->CDSPalmilhas->FieldByName("cod_cliente_palmilhas")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
//dtpRecebimentoCalacados->Format = "yyyy/dd/MM";
frmEdicaoPalmilhas->dtpRecebimentoCalacados->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_calcados_palmilha")->AsString;
//dtpRecebimentoCalacados->Format = "";
frmEdicaoPalmilhas->edtNumCalcados->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("num_calcado_palmilhas")->AsString;
frmEdicaoPalmilhas->edtQTDE->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("qtde_calcados_palmilhas")->AsString;
frmEdicaoPalmilhas->edtAlturaPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("altura_palmilha")->AsString;
frmEdicaoPalmilhas->memoDescricao->Lines->DelimitedText = DM1->CDSFiltroFichaPalmilha->FieldByName("descricao_calcados_palmilhas")->AsString;
//dtpChegadaPalmilha->Format = "yyyy/dd/MM";
frmEdicaoPalmilhas->dtpChegadaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_chegada_palmilha")->AsString;
//dtpChegadaPalmilha->Format = "";
//dtpEntregaPalmilha->Format = "yyyy/dd/MM";
frmEdicaoPalmilhas->dtpEntregaPalmilha->Date = DM1->CDSFiltroFichaPalmilha->FieldByName("data_entrega_palmilha")->AsString;
//dtpEntregaPalmilha->Format = "";
frmEdicaoPalmilhas->edtValorPalmilha->Text = DM1->CDSFiltroFichaPalmilha->FieldByName("valor_palmilha")->AsString;
frmEdicaoPalmilhas->CBPago->ItemIndex = DM1->CDSFiltroFichaPalmilha->FieldByName("pago_palmilha")->AsInteger;

DM1->SQLFiltroFichaPalmilha->SQL->Clear();
DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas LIKE '%';");
DM1->SQLFiltroFichaPalmilha->Open();
DM1->CDSFiltroFichaPalmilha->Refresh();
gridFichaFisio->Refresh();
Close();
}
//---------------------------------------------------------------------------
