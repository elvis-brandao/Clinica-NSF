//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untCadPaciente.h"
#include "untDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmCadPaciente *frmCadPaciente;
//---------------------------------------------------------------------------
__fastcall TfrmCadPaciente::TfrmCadPaciente(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPaciente::FormShow(TObject *Sender)
{
DM1->CDSPaciente->Last();

dtpNascimento->Date = dtpNascimento->Date.CurrentDate();
String ano_nascimento = dtpNascimento->Date.DateString();
String ano_atual = dtpNascimento->Date.CurrentDate();
ano_nascimento = ano_nascimento.Delete0(0, 6);
ano_atual = ano_atual.Delete0(0,6);
int idade = StrToInt(ano_atual) - StrToInt(ano_nascimento);
edtIdade->Text = idade;

edtCPF->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPaciente::dtpNascimentoChange(TObject *Sender)
{
String ano_nascimento = dtpNascimento->Date.DateString();
String ano_atual = dtpNascimento->Date.CurrentDate();
ano_nascimento = ano_nascimento.Delete0(0, 6);
ano_atual = ano_atual.Delete0(0,6);
int idade = StrToInt(ano_atual) - StrToInt(ano_nascimento);
edtIdade->Text = idade;
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPaciente::btnCancelarClick(TObject *Sender)
{
DM1->CDSPaciente->Cancel();
edtNome->Clear();
edtApelido->Clear();
edtCPF->Clear();
edtEndereco->Clear();
edtFone->Clear();
edtIdade->Text = "0";
dtpNascimento->Date.CurrentDate();
edtCPF->SetFocus();
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadPaciente::btnSalvarClick(TObject *Sender)
{
if (edtNome->Text == "" || edtCPF->Text == "")
{
	MessageBoxA(NULL, "Favor preencher os campos Nome e/ou CPF!", "Cadastro de Paciente", MB_OK);
	edtCPF->SetFocus();
}
else
{
	try
	{
		DM1->CDSPaciente->Append();
		DM1->CDSPaciente->FieldByName("nome_paciente")->AsString = edtNome->Text;
		DM1->CDSPaciente->FieldByName("cpf_paciente")->AsString = edtCPF->Text;
		DM1->CDSPaciente->FieldByName("idade_paciente")->AsString = edtIdade->Text;
		DM1->CDSPaciente->FieldByName("endereco_paciente")->AsString = edtEndereco->Text;
		DM1->CDSPaciente->FieldByName("telefone_paciente")->AsString = edtFone->Text;
        DM1->CDSPaciente->FieldByName("apelido_paciente")->AsString = edtApelido->Text;

		dtpNascimento->Format = "yyyy/dd/MM";
		DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsString = dtpNascimento->Date.DateString();
		dtpNascimento->Format = "";
		DM1->CDSPaciente->ApplyUpdates(0);
		DM1->CDSPaciente->Refresh();
		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Paciente", MB_OK);
		edtNome->Clear();
        edtApelido->Clear();
		edtCPF->Clear();
		edtIdade->Text = "0";
		edtEndereco->Clear();
		edtFone->Clear();
        edtApelido->Clear();
		dtpNascimento->Date.CurrentDate();
	}
	catch (Exception& E)
	{
		DM1->CDSPaciente->Cancel(); //cancela a operação
		//Limpa os dados
		DM1->CDSPaciente->Refresh();
//		edtNome->Clear();
//		edtRG->Clear();
//		edtIdade->Text = "0";
//		dtpNascimento->Date.CurrentDate();
//		imgAtleta->Picture->LoadFromFile("\semfoto.jpg");
		ShowMessage("Alguem já cadastrado com esse CPF!\n"
					"Verifique os dados e tente novamente...");
		edtCPF->Clear();
		edtCPF->SetFocus();
	}
}
}
//---------------------------------------------------------------------------
