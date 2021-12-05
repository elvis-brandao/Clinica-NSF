//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "undAddPacienteHidro.h"
#include "untCadAvHidro.h"
#include "untDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAddPacienteHidro *frmAddPacienteHidro;
//---------------------------------------------------------------------------
__fastcall TfrmAddPacienteHidro::TfrmAddPacienteHidro(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPacienteHidro::edtBuscaChange(TObject *Sender)
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
void __fastcall TfrmAddPacienteHidro::gridPacienteDblClick(TObject *Sender)
{
frmCadAvHidro->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmAddPacienteHidro::BitBtn1Click(TObject *Sender)
{
frmCadAvHidro->edtNome->Text = DM1->CDSPaciente->FieldByName("nome_paciente")->AsString;
Close();
}
//---------------------------------------------------------------------------
