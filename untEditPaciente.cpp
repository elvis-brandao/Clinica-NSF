//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untEditPaciente.h"
#include "untBuscaCliente.h"
#include "untDM.h"
#include "untEditaFicha.h"
#include "untEditaFichaHid.h"
#include "untEditaFichaPil.h"
#include "untEdicaoPalmilhas.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmEditarPaciente *frmEditarPaciente;
//---------------------------------------------------------------------------
__fastcall TfrmEditarPaciente::TfrmEditarPaciente(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditarPaciente::BitBtn1Click(TObject *Sender)
{
    frmBuscaCliente->Show();
}
//---------------------------------------------------------------------------


void __fastcall TfrmEditarPaciente::FormShow(TObject *Sender)
{
estado = 1;
DM1->CDSPaciente->First();
dtpNascimento->Date = dtpNascimento->Date.CurrentDate();

DM1->SQLFiltroFichaFisio->SQL->Clear();
DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaFisio->Open();
DM1->CDSFiltroFichaFisio->Refresh();
gridFichas->Refresh();

DM1->SQLFiltroFichaPil->SQL->Clear();
DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPil->Open();
DM1->CDSFiltroFichaPil->Refresh();
gridFichaFisio->Refresh();

DM1->SQLFiltroFichaHid->SQL->Clear();
DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaHid->Open();
DM1->CDSFiltroFichaHid->Refresh();
gridHidro->Refresh();

DM1->SQLFiltroFichaPalmilha->SQL->Clear();
DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPalmilha->Open();
DM1->CDSFiltroFichaPalmilha->Refresh();
gridPalmilhas->Refresh();

if(DM1->CDSPaciente->RecordCount != 0)
{
	edtCPF->Text = DM1->CDSPaciente->FieldByName("cpf_paciente")->AsString;
	edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
    edtApelido->Text = DM1->CDSPaciente->FieldByName("apelido_paciente")->AsString;
	edtIdade->Text = DM1->CDSPaciente->FieldByName("idade_paciente")->AsString;
	dtpNascimento->Format = "yyyy/dd/MM";
	dtpNascimento->Date = DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsDateTime;
	dtpNascimento->Format = "";
	edtFone->Text = DM1->CDSPaciente->FieldByName("telefone_paciente")->AsString;
	edtEndereco->Text = DM1->CDSPaciente->FieldByName("endereco_paciente")->AsString;
	btnExcluir->Enabled = true;
	btnEditar->Enabled = true;

	DBNavigator1->SetFocus();
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditarPaciente::DBNavigator1Click(TObject *Sender, TNavigateBtn Button)

{
DM1->SQLFiltroFichaFisio->SQL->Clear();
DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaFisio->Open();
DM1->CDSFiltroFichaFisio->Refresh();
gridFichas->Refresh();

DM1->SQLFiltroFichaPil->SQL->Clear();
DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPil->Open();
DM1->CDSFiltroFichaPil->Refresh();
gridFichaFisio->Refresh();

DM1->SQLFiltroFichaHid->SQL->Clear();
DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaHid->Open();
DM1->CDSFiltroFichaHid->Refresh();
gridHidro->Refresh();

DM1->SQLFiltroFichaPalmilha->SQL->Clear();
DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPalmilha->Open();
DM1->CDSFiltroFichaPalmilha->Refresh();
gridPalmilhas->Refresh();

edtCPF->Text = DM1->CDSPaciente->FieldByName("cpf_paciente")->AsString;
edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
edtApelido->Text = DM1->CDSPaciente->FieldByName("apelido_paciente")->AsString;
edtIdade->Text = DM1->CDSPaciente->FieldByName("idade_paciente")->AsString;
dtpNascimento->Format = "yyyy/dd/MM";
dtpNascimento->Date = DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsDateTime;
dtpNascimento->Format = "";
edtFone->Text = DM1->CDSPaciente->FieldByName("telefone_paciente")->AsString;
edtEndereco->Text = DM1->CDSPaciente->FieldByName("endereco_paciente")->AsString;
DBNavigator1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditarPaciente::btnExcluirClick(TObject *Sender)
{
if (DM1->CDSPaciente->RecordCount == 0)
{
	MessageBoxA(NULL, "Não há registros para excluir!", "Exclusão de Paciente", MB_OK);
}
else
{
	TMsgDlgBtn myYes = mbYes;
	TMsgDlgBtn myNo = mbNo;

	if(MessageDlg("Deletar registro ?", mtConfirmation, TMsgDlgButtons() << myYes << myNo,0) == mrYes)
	{
		DM1->CDSPaciente->Delete();
		DM1->CDSPaciente->ApplyUpdates(0);
		DM1->CDSPaciente->Refresh();
		if (DM1->CDSPaciente->RecordCount == 0)
		{
			edtCPF->Clear();
			edtNome->Clear();
			edtIdade->Clear();
			dtpNascimento->Date = dtpNascimento->Date.CurrentDate();
			edtFone->Clear();
			edtEndereco->Clear();
			btnExcluir->Enabled = false;
            btnEditar->Enabled = false;
		}
		else
		{
			edtCPF->Text = DM1->CDSPaciente->FieldByName("cpf_paciente")->AsString;
			edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
			edtApelido->Text = DM1->CDSPaciente->FieldByName("apelido_paciente")->AsString;
			edtIdade->Text = DM1->CDSPaciente->FieldByName("idade_paciente")->AsString;
			dtpNascimento->Format = "yyyy/dd/MM";
			dtpNascimento->Date = DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsDateTime;
			dtpNascimento->Format = "";
			edtFone->Text = DM1->CDSPaciente->FieldByName("telefone_paciente")->AsString;
			edtEndereco->Text = DM1->CDSPaciente->FieldByName("endereco_paciente")->AsString;
			DBNavigator1->SetFocus();
			btnExcluir->Enabled = true;
		}
		MessageBoxA(NULL, "Registro excluido com sucesso!", "Exclusão de Paciente", MB_OK);
	}
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditarPaciente::btnEditarClick(TObject *Sender)
{
if (DM1->CDSPaciente->RecordCount == 0)
{
	ShowMessage("Não há registros para edição !");
}
else
{
	DM1->CDSPaciente->Edit();
	DBNavigator1->Enabled = false;
	btnEditar->Enabled = false;
	btnSalvar->Enabled = true;
	Panel1->Enabled = true;
	imgCadeado1->Visible = false;
	edtCPF->SetFocus();
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditarPaciente::btnSalvarClick(TObject *Sender)
{
if (edtNome->Text == "" || edtCPF->Text == "")
{
	MessageBoxA(NULL, "Favor preencher os campos Nome e/ou CPF!", "Edição de Paciente", MB_OK);
	edtCPF->SetFocus();
}
else
{
	try
	{
		DM1->CDSPaciente->FieldByName("nome_paciente")->AsString = edtNome->Text;
        DM1->CDSPaciente->FieldByName("apelido_paciente")->AsString = edtApelido->Text;
		DM1->CDSPaciente->FieldByName("cpf_paciente")->AsString = edtCPF->Text;
		DM1->CDSPaciente->FieldByName("idade_paciente")->AsString = edtIdade->Text;
		DM1->CDSPaciente->FieldByName("endereco_paciente")->AsString = edtEndereco->Text;
        DM1->CDSPaciente->FieldByName("telefone_paciente")->AsString = edtFone->Text;

		dtpNascimento->Format = "yyyy/dd/MM";
		DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsString = dtpNascimento->Date.DateString();
		dtpNascimento->Format = "";
		DM1->CDSPaciente->ApplyUpdates(0);
		DM1->CDSPaciente->Refresh();

		DBNavigator1->Enabled = true;
		btnEditar->Enabled = true;
		btnSalvar->Enabled = false;
		Panel1->Enabled = false;
        imgCadeado1->Visible = true;

		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Paciente", MB_OK);
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

void __fastcall TfrmEditarPaciente::dtpNascimentoChange(TObject *Sender)
{
String ano_nascimento = dtpNascimento->Date.DateString();
String ano_atual = dtpNascimento->Date.CurrentDate();
ano_nascimento = ano_nascimento.Delete0(0, 6);
ano_atual = ano_atual.Delete0(0,6);
int idade = StrToInt(ano_atual) - StrToInt(ano_nascimento);
edtIdade->Text = idade;
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditarPaciente::TabControl1Change(TObject *Sender)
{
if (TabControl1->TabIndex == 0)
{
gridFichas->Visible = true;
gridFichaFisio->Visible = false;
gridHidro->Visible = false;
gridPalmilhas->Visible = false;
}
if (TabControl1->TabIndex == 1)
{
gridFichas->Visible = false;
gridFichaFisio->Visible = false;
gridHidro->Visible = true;
gridPalmilhas->Visible = false;
}
if (TabControl1->TabIndex == 2)
{
gridFichas->Visible = false;
gridFichaFisio->Visible = true;
gridHidro->Visible = false;
gridPalmilhas->Visible = false;
}
if (TabControl1->TabIndex == 3)
{
gridFichas->Visible = false;
gridFichaFisio->Visible = false;
gridHidro->Visible = false;
gridPalmilhas->Visible = true;
}
}
//---------------------------------------------------------------------------
void __fastcall TfrmEditarPaciente::gridFichasDblClick(TObject *Sender)
{
frmEditaFicha->janela = 0;
frmEditaFicha->codClienteFisio =  DM1->CDSPacientecod_paciente->Value;// FiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
frmEditaFicha->codFichaFisio = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
frmEditaFicha->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditarPaciente::FormClose(TObject *Sender, TCloseAction &Action)

{
DM1->SQLFiltroFichaFisio->SQL->Clear();
DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha LIKE '%';");
DM1->SQLFiltroFichaFisio->Open();
DM1->CDSFiltroFichaFisio->Refresh();

DM1->SQLFiltroFichaPil->SQL->Clear();
DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil LIKE '%';");
DM1->SQLFiltroFichaPil->Open();
DM1->CDSFiltroFichaPil->Refresh();

DM1->SQLFiltroFichaHid->SQL->Clear();
DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro LIKE '%';");
DM1->SQLFiltroFichaHid->Open();
DM1->CDSFiltroFichaHid->Refresh();

DM1->SQLFiltroFichaPalmilha->SQL->Clear();
DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas LIKE '%';");
DM1->SQLFiltroFichaPalmilha->Open();
DM1->CDSFiltroFichaPalmilha->Refresh();
estado = 0;
}
//---------------------------------------------------------------------------


void __fastcall TfrmEditarPaciente::gridFichaFisioDblClick(TObject *Sender)
{
frmEditaFichaPil->janela = 0;
frmEditaFichaPil->codClientePil =  DM1->CDSPacientecod_paciente->Value;// FiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
frmEditaFichaPil->codFichaPil = DM1->CDSFiltroFichaPil->FieldByName("cod_ficha_pilates")->AsInteger;
frmEditaFichaPil->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditarPaciente::gridHidroDblClick(TObject *Sender)
{
frmEditaFichaHid->janela = 0;
frmEditaFichaHid->codClienteHid =  DM1->CDSPacientecod_paciente->Value;// FiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
frmEditaFichaHid->codFichaHid = DM1->CDSFiltroFichaHid->FieldByName("cod_ficha_hidro")->AsInteger;
frmEditaFichaHid->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmEditarPaciente::gridPalmilhasDblClick(TObject *Sender)
{
frmEdicaoPalmilhas->codClientePalmilha =  DM1->CDSPacientecod_paciente->Value;// FiltroFichaFisio->FieldByName("cod_paciente_ficha")->AsInteger;
frmEdicaoPalmilhas->codFichaPalmilha = DM1->CDSFiltroFichaFisio->FieldByName("cod_ficha_fisio")->AsInteger;
frmEdicaoPalmilhas->Show();
}
//---------------------------------------------------------------------------

