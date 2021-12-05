//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untParcelasAtrasadas.h"
#include "untDM.h"
#include "untEditaFicha.h"
#include "untEditaFichaPil.h"
#include "untEditaFichaHid.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmParcelasAtrasadas *frmParcelasAtrasadas;
//---------------------------------------------------------------------------
__fastcall TfrmParcelasAtrasadas::TfrmParcelasAtrasadas(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmParcelasAtrasadas::FormShow(TObject *Sender)
{
DM1->CDSFiltroAtrasados->Refresh();
DM1->CDSFiltroAtrasados->Filtered = false;
DM1->CDSFiltroAtrasados->Filter = "data_venc_parcela_ficha_fisio <'" + (Date().CurrentDate())+ "'";
DM1->CDSFiltroAtrasados->Filtered = true;

DM1->CDSFiltroAtrasadosPil->Refresh();
DM1->CDSFiltroAtrasadosPil->Filtered = false;
DM1->CDSFiltroAtrasadosPil->Filter = "data_venc_parcela_ficha_pil <'" + (Date().CurrentDate())+ "'";
DM1->CDSFiltroAtrasadosPil->Filtered = true;

DM1->CDSFiltroAtrasadosHid->Refresh();
DM1->CDSFiltroAtrasadosHid->Filtered = false;
DM1->CDSFiltroAtrasadosHid->Filter = "data_venc_parcela_ficha_hidro <'" + (Date().CurrentDate())+ "'";
DM1->CDSFiltroAtrasadosHid->Filtered = true;

DM1->SQLFiltroFichaFisio->SQL->Clear();
DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaFisio->Open();
DM1->CDSFiltroFichaFisio->Refresh();
//gridFichas->Refresh();

DM1->SQLFiltroFichaPil->SQL->Clear();
DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPil->Open();
DM1->CDSFiltroFichaPil->Refresh();
//gridFichaFisio->Refresh();

DM1->SQLFiltroFichaHid->SQL->Clear();
DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaHid->Open();
DM1->CDSFiltroFichaHid->Refresh();
//gridHidro->Refresh();

DM1->SQLFiltroFichaPalmilha->SQL->Clear();
DM1->SQLFiltroFichaPalmilha->SQL->Add("SELECT * FROM palmilhas  WHERE palmilhas.cod_cliente_palmilhas = " + DM1->CDSPaciente->FieldByName("cod_paciente")->AsString);
DM1->SQLFiltroFichaPalmilha->Open();
DM1->CDSFiltroFichaPalmilha->Refresh();
//gridPalmilhas->Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TfrmParcelasAtrasadas::DBGrid1DblClick(TObject *Sender)
{
frmEditaFicha->codClienteFisio =  DM1->CDSFiltroAtrasadoscod_paciente->Value;
frmEditaFicha->codFichaFisio = DM1->CDSFiltroAtrasadoscod_ficha_parcela_fisio->Value;
//DM1->SQLFiltroFichaFisio->SQL->Clear();
//DM1->SQLFiltroFichaFisio->SQL->Add("SELECT * FROM ficha_fisio  WHERE ficha_fisio.cod_paciente_ficha = " + DM1->CDSFiltroAtrasados->FieldByName("cod_paciente")->AsString);
//DM1->SQLFiltroFichaFisio->Open();
//DM1->CDSFiltroFichaFisio->Refresh();
frmEditaFicha->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmParcelasAtrasadas::DBGrid2DblClick(TObject *Sender)
{
frmEditaFichaPil->codClientePil =  DM1->CDSFiltroAtrasadosPilcod_paciente->Value;
frmEditaFichaPil->codFichaPil = DM1->CDSFiltroAtrasadosPilcod_ficha_parcela_pil->Value;
//DM1->SQLFiltroFichaPil->SQL->Clear();
//DM1->SQLFiltroFichaPil->SQL->Add("SELECT * FROM ficha_pilates  WHERE ficha_pilates.cod_paciente_ficha_pil = " + DM1->CDSFiltroAtrasadosPil->FieldByName("cod_paciente")->AsString);
//DM1->SQLFiltroFichaPil->Open();
//DM1->SQLFiltroFichaPil->Refresh();
frmEditaFichaPil->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmParcelasAtrasadas::DBGrid3DblClick(TObject *Sender)
{
frmEditaFichaHid->codClienteHid =  DM1->CDSFiltroAtrasadosHidcod_paciente->Value;
frmEditaFichaHid->codFichaHid = DM1->CDSFiltroAtrasadosHidcod_ficha_parcela_hidro->Value;
//DM1->SQLFiltroFichaHid->SQL->Clear();
//DM1->SQLFiltroFichaHid->SQL->Add("SELECT * FROM ficha_hidro  WHERE ficha_hidro.cod_pacinte_ficha_hidro = " + DM1->CDSFiltroAtrasadosHid->FieldByName("cod_paciente")->AsString);
//DM1->SQLFiltroFichaHid->Open();
//DM1->SQLFiltroFichaHid->Refresh();
frmEditaFichaHid->Show();
}
//---------------------------------------------------------------------------

