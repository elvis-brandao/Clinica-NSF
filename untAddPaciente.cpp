//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untAddPaciente.h"
#include "untFicha.h"
#include "untDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAddPaciente *frmAddPaciente;
//---------------------------------------------------------------------------
__fastcall TfrmAddPaciente::TfrmAddPaciente(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPaciente::edtBuscaChange(TObject *Sender)
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
void __fastcall TfrmAddPaciente::gridPacienteDblClick(TObject *Sender)
{
	frmFicha->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPaciente::BitBtn1Click(TObject *Sender)
{
	frmFicha->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
	Close();
}
//---------------------------------------------------------------------------
