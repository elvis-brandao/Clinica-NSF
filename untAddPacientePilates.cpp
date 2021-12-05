//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untAddPacientePilates.h"
#include "untDM.h"
#include "untCadAvPilates.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAddPacientePilates *frmAddPacientePilates;
//---------------------------------------------------------------------------
__fastcall TfrmAddPacientePilates::TfrmAddPacientePilates(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPacientePilates::edtBuscaChange(TObject *Sender)
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
void __fastcall TfrmAddPacientePilates::gridPacienteDblClick(TObject *Sender)
{
frmCadAvPilates->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPacientePilates::BitBtn1Click(TObject *Sender)
{
frmCadAvPilates->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
Close();
}
//---------------------------------------------------------------------------
