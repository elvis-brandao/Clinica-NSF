//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untAddPacientePalmilha.h"
#include "untCadPalmilhas.h"
#include "untDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAddPacientePalmilha *frmAddPacientePalmilha;
//---------------------------------------------------------------------------
__fastcall TfrmAddPacientePalmilha::TfrmAddPacientePalmilha(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPacientePalmilha::edtBuscaChange(TObject *Sender)
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
void __fastcall TfrmAddPacientePalmilha::gridPacienteDblClick(TObject *Sender)
{
frmCadPalmilhas->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPacientePalmilha::BitBtn1Click(TObject *Sender)
{
frmCadPalmilhas->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
Close();
}
//---------------------------------------------------------------------------
