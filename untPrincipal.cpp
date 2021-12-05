//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untPrincipal.h"
#include "untCadPaciente.h"
#include "untFicha.h"
#include "ProjetoNSF.h"
#include "untEditPaciente.h"
#include "untEditaFicha.h"
#include "untCadAvPilates.h"
#include "untCadAvHidro.h"
#include "untDM.h"
#include "untParcelasAtrasadas.h"
#include "untEditaFichaPil.h"
#include "untEditaFichaHid.h"
#include "untCadPalmilhas.h"
#include "untEdicaoPalmilhas.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
__fastcall TfrmPrincipal::TfrmPrincipal(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmPrincipal::btnCadastrarClick(TObject *Sender)
{
	btnEPaciente->Visible = false;
	btnEAvaliacao->Visible = false;
	btnEPalmilha->Visible = false;
	btnEFisio->Visible = false;
	btnEPilates->Visible = false;
	btnEHidro->Visible = false;
	if (btnCPaciente->Visible == true)
	{
		btnCPaciente->Visible = false;
		btnCAvaliacao->Visible = false;
		btnCPalmilha->Visible = false;
            btnAvFisio->Visible = false;
			btnAvHidro->Visible = false;
			btnAvPilates->Visible = false;
	}
	else
	{
		btnCPaciente->Visible = true;
		btnCAvaliacao->Visible = true;
		btnCPalmilha->Visible = true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnEditarClick(TObject *Sender)
{
	btnCPaciente->Visible = false;
	btnCAvaliacao->Visible = false;
	btnCPalmilha->Visible = false;
		btnAvFisio->Visible = false;
		btnAvHidro->Visible = false;
		btnAvPilates->Visible = false;
	if (btnEPaciente->Visible == true)
	{
		btnEPaciente->Visible = false;
		btnEAvaliacao->Visible = false;
		btnEPalmilha->Visible = false;
		btnEFisio->Visible = false;
		btnEPilates->Visible = false;
		btnEHidro->Visible = false;

	}
	else
	{
		btnEPaciente->Visible = true;
		btnEAvaliacao->Visible = true;
        btnEPalmilha->Visible = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnCPacienteClick(TObject *Sender)
{
	frmCadPaciente->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnCAvaliacaoClick(TObject *Sender)
{
	if (btnAvFisio->Visible == false & btnAvHidro->Visible == false & btnAvPilates ->Visible == false)
	{
		btnAvFisio->Visible = true;
		btnAvHidro->Visible = true;
		btnAvPilates->Visible = true;
	}
	else
	{
		btnAvFisio->Visible = false;
		btnAvHidro->Visible = false;
		btnAvPilates->Visible = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnEPacienteClick(TObject *Sender)
{
//    frmEditarPaciente->Show();
frmEditarPaciente = new TfrmEditarPaciente(Application);
frmEditarPaciente->ShowModal();
delete frmEditarPaciente;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnEAvaliacaoClick(TObject *Sender)
{
//    frmEditaFicha->Show();
if (btnEFisio->Visible == false)
{
	btnEFisio->Visible = true;
	btnEPilates->Visible = true;
	btnEHidro->Visible = true;
}
else
{
	btnEFisio->Visible = false;
	btnEPilates->Visible = false;
	btnEHidro->Visible = false;
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnAvFisioClick(TObject *Sender)
{
	frmFicha->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnAvPilatesClick(TObject *Sender)
{
    frmCadAvPilates->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnAvHidroClick(TObject *Sender)
{
    frmCadAvHidro->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnEFisioClick(TObject *Sender)
{
	frmEditaFicha->janela = 1;
	frmEditaFicha->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnAnivClick(TObject *Sender)
{
	if (gridAniv->Visible == false)
	{
		gridAniv->Visible =true;
		//DM1->CDSPaciente->Filtered = false;
		//DM1->CDSPaciente->Filter = "data_nascimento_paciente ='" + Date().CurrentDate()+ "'";
		//DM1->CDSPaciente->Filtered = true;
		//edtData->Text = DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsFloat;// AsAnsiString;
		DM1->SQLFiltroAniv->Refresh();
		gridAniv->Refresh();
		frmPrincipal->Width = 750;
	}
	else
	{
		gridAniv->Visible = false;
		//DM1->CDSPaciente->Filtered = false;
		frmPrincipal->Width = 552;
	}
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::FormShow(TObject *Sender)
{
//dtpData->Date = dtpData->Date.CurrentDate();
//edtData->Text = dtpData->Date.DateString();
//DM1->CDSPaciente->FieldByName("data_nascimento_paciente")->AsAnsiString;
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnPAtrasadasClick(TObject *Sender)
{
frmEditaFicha->janela = 2;
frmEditaFichaPil->janela = 2;
frmEditaFichaHid->janela = 2;
frmParcelasAtrasadas->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnEPilatesClick(TObject *Sender)
{
frmEditaFichaPil->janela = 1;
frmEditaFichaPil->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnEHidroClick(TObject *Sender)
{
frmEditaFichaHid->janela = 1;
frmEditaFichaHid->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnCPalmilhaClick(TObject *Sender)
{
frmCadPalmilhas->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmPrincipal::btnEPalmilhaClick(TObject *Sender)
{
frmEdicaoPalmilhas->Show();
}
//---------------------------------------------------------------------------

