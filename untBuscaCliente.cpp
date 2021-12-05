//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untBuscaCliente.h"
#include "untDM.h"
#include "untEditPaciente.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmBuscaCliente *frmBuscaCliente;
//---------------------------------------------------------------------------
__fastcall TfrmBuscaCliente::TfrmBuscaCliente(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmBuscaCliente::edtBuscaChange(TObject *Sender)
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

void __fastcall TfrmBuscaCliente::gridPacienteDblClick(TObject *Sender)
{
	frmEditarPaciente->edtCPF->Text = DM1->CDSPaciente->FieldByName("cpf_paciente")->AsString;
	frmEditarPaciente->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
    frmEditarPaciente->edtApelido->Text = DM1->CDSPacienteapelido_paciente->Value;
	frmEditarPaciente->edtIdade->Text = DM1->CDSPaciente->FieldByName("idade_paciente")->AsString;
	frmEditarPaciente->dtpNascimento->Format = "yyyy/dd/MM";
	frmEditarPaciente->dtpNascimento->Date = DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsDateTime;
	frmEditarPaciente->dtpNascimento->Format = "";
	frmEditarPaciente->edtFone->Text = DM1->CDSPaciente->FieldByName("telefone_paciente")->AsString;
	frmEditarPaciente->edtEndereco->Text = DM1->CDSPaciente->FieldByName("endereco_paciente")->AsString;

    DM1->SQLFiltroFichaFisio->SQL->Clear();
	DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaFisio->Open();
	DM1->CDSFiltroFichaFisio->Refresh();
	frmEditarPaciente->gridFichas->Refresh();

	DM1->SQLFiltroFichaPil->SQL->Clear();
	DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaPil->Open();
	DM1->CDSFiltroFichaPil->Refresh();
	frmEditarPaciente->gridFichaFisio->Refresh();

	DM1->SQLFiltroFichaHid->SQL->Clear();
	DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaHid->Open();
	DM1->CDSFiltroFichaHid->Refresh();
	frmEditarPaciente->gridHidro->Refresh();

	DM1->SQLFiltroFichaPalmilha->SQL->Clear();
	DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaPalmilha->Open();
	DM1->CDSFiltroFichaPalmilha->Refresh();
	frmEditarPaciente->gridPalmilhas->Refresh();

	Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmBuscaCliente::BitBtn1Click(TObject *Sender)
{
	frmEditarPaciente->edtCPF->Text = DM1->CDSPaciente->FieldByName("cpf_paciente")->AsString;
	frmEditarPaciente->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
	frmEditarPaciente->edtApelido->Text = DM1->CDSPacienteapelido_paciente->Value;
	frmEditarPaciente->edtIdade->Text = DM1->CDSPaciente->FieldByName("idade_paciente")->AsString;
	frmEditarPaciente->dtpNascimento->Format = "yyyy/dd/MM";
	frmEditarPaciente->dtpNascimento->Date = DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsDateTime;
	frmEditarPaciente->dtpNascimento->Format = "";
	frmEditarPaciente->edtFone->Text = DM1->CDSPaciente->FieldByName("telefone_paciente")->AsString;
	frmEditarPaciente->edtEndereco->Text = DM1->CDSPaciente->FieldByName("endereco_paciente")->AsString;

	DM1->SQLFiltroFichaFisio->SQL->Clear();
	DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaFisio->Open();
	DM1->CDSFiltroFichaFisio->Refresh();
	frmEditarPaciente->gridFichas->Refresh();

	DM1->SQLFiltroFichaPil->SQL->Clear();
	DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaPil->Open();
	DM1->CDSFiltroFichaPil->Refresh();
	frmEditarPaciente->gridFichaFisio->Refresh();

	DM1->SQLFiltroFichaHid->SQL->Clear();
	DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaHid->Open();
	DM1->CDSFiltroFichaHid->Refresh();
	frmEditarPaciente->gridHidro->Refresh();

	DM1->SQLFiltroFichaPalmilha->SQL->Clear();
	DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
	DM1->SQLFiltroFichaPalmilha->Open();
	DM1->CDSFiltroFichaPalmilha->Refresh();
	frmEditarPaciente->gridPalmilhas->Refresh();

	Close();
}
//---------------------------------------------------------------------------

