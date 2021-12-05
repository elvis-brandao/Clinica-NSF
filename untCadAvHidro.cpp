//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untCadAvHidro.h"
#include "untDM.h"
#include "undAddPacienteHidro.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmCadAvHidro *frmCadAvHidro;
String dataPadraoG;
//---------------------------------------------------------------------------
__fastcall TfrmCadAvHidro::TfrmCadAvHidro(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadAvHidro::edtNumParcelasChange(TObject *Sender)
{
if (edtNumParcelas->ItemIndex == 0)
{
	edtValP1->Enabled = false;
	edtValP2->Enabled = false;
	edtValP3->Enabled = false;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = false;
	dtpVencimentoP2->Enabled = false;
	dtpVencimentoP3->Enabled = false;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = false;
	dtpPagP2->Enabled = false;
	dtpPagP3->Enabled = false;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 1)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = false;
	edtValP3->Enabled = false;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
    edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = false;
	dtpVencimentoP3->Enabled = false;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
    dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = false;
	dtpPagP3->Enabled = false;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 2)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = false;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
    edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = false;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = false;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 3)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 4)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 5)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 6)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 7)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 8)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 9)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = true;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = true;
	dtpVencimentoP9->Date = dtpVencimentoP8->Date + 30;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = true;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 10)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = true;
	edtValP10->Enabled = true;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = true;
	dtpVencimentoP9->Date = dtpVencimentoP8->Date + 30;
	dtpVencimentoP10->Enabled = true;
	dtpVencimentoP10->Date = dtpVencimentoP9->Date + 30;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = true;
	dtpPagP10->Enabled = true;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 11)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = true;
	edtValP10->Enabled = true;
	edtValP11->Enabled = true;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = true;
	dtpVencimentoP9->Date = dtpVencimentoP8->Date + 30;
	dtpVencimentoP10->Enabled = true;
	dtpVencimentoP10->Date = dtpVencimentoP9->Date + 30;
	dtpVencimentoP11->Enabled = true;
	dtpVencimentoP11->Date = dtpVencimentoP10->Date + 30;
	dtpVencimentoP12->Enabled = false;
	//dtpVencimentoP12->Date = dtpVencimentoP11->Date + 30;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = true;
	dtpPagP10->Enabled = true;
	dtpPagP11->Enabled = true;
	dtpPagP12->Enabled = false;
}
if (edtNumParcelas->ItemIndex == 12)
{
	edtValP1->Enabled = true;
	edtValP2->Enabled = true;
	edtValP3->Enabled = true;
	edtValP4->Enabled = true;
	edtValP5->Enabled = true;
	edtValP6->Enabled = true;
	edtValP7->Enabled = true;
	edtValP8->Enabled = true;
	edtValP9->Enabled = true;
	edtValP10->Enabled = true;
	edtValP11->Enabled = true;
	edtValP12->Enabled = true;
	dtpVencimentoP1->Enabled = true;
	dtpVencimentoP2->Enabled = true;
	dtpVencimentoP2->Date = dtpVencimentoP1->Date + 30;
	dtpVencimentoP3->Enabled = true;
	dtpVencimentoP3->Date = dtpVencimentoP2->Date + 30;
	dtpVencimentoP4->Enabled = true;
	dtpVencimentoP4->Date = dtpVencimentoP3->Date + 30;
	dtpVencimentoP5->Enabled = true;
	dtpVencimentoP5->Date = dtpVencimentoP4->Date + 30;
	dtpVencimentoP6->Enabled = true;
	dtpVencimentoP6->Date = dtpVencimentoP5->Date + 30;
	dtpVencimentoP7->Enabled = true;
	dtpVencimentoP7->Date = dtpVencimentoP6->Date + 30;
	dtpVencimentoP8->Enabled = true;
	dtpVencimentoP8->Date = dtpVencimentoP7->Date + 30;
	dtpVencimentoP9->Enabled = true;
	dtpVencimentoP9->Date = dtpVencimentoP8->Date + 30;
	dtpVencimentoP10->Enabled = true;
	dtpVencimentoP10->Date = dtpVencimentoP9->Date + 30;
	dtpVencimentoP11->Enabled = true;
	dtpVencimentoP11->Date = dtpVencimentoP10->Date + 30;
	dtpVencimentoP12->Enabled = true;
	dtpVencimentoP12->Date = dtpVencimentoP11->Date + 30;
	dtpPagP1->Enabled = true;
	dtpPagP2->Enabled = true;
	dtpPagP3->Enabled = true;
	dtpPagP4->Enabled = true;
	dtpPagP5->Enabled = true;
	dtpPagP6->Enabled = true;
	dtpPagP7->Enabled = true;
	dtpPagP8->Enabled = true;
	dtpPagP9->Enabled = true;
	dtpPagP10->Enabled = true;
	dtpPagP11->Enabled = true;
	dtpPagP12->Enabled = true;
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::FormClose(TObject *Sender, TCloseAction &Action)
{
	//edtNumParcelas->ItemIndex = 0;
	edtValP1->Enabled = false;
	edtValP2->Enabled = false;
	edtValP3->Enabled = false;
	edtValP4->Enabled = false;
	edtValP5->Enabled = false;
	edtValP6->Enabled = false;
	edtValP7->Enabled = false;
	edtValP8->Enabled = false;
	edtValP9->Enabled = false;
	edtValP10->Enabled = false;
	edtValP11->Enabled = false;
	edtValP12->Enabled = false;
	dtpVencimentoP1->Enabled = false;
	dtpVencimentoP2->Enabled = false;
	dtpVencimentoP3->Enabled = false;
	dtpVencimentoP4->Enabled = false;
	dtpVencimentoP5->Enabled = false;
	dtpVencimentoP6->Enabled = false;
	dtpVencimentoP7->Enabled = false;
	dtpVencimentoP8->Enabled = false;
	dtpVencimentoP9->Enabled = false;
	dtpVencimentoP10->Enabled = false;
	dtpVencimentoP11->Enabled = false;
	dtpVencimentoP12->Enabled = false;
	dtpPagP1->Enabled = false;
	dtpPagP2->Enabled = false;
	dtpPagP3->Enabled = false;
	dtpPagP4->Enabled = false;
	dtpPagP5->Enabled = false;
	dtpPagP6->Enabled = false;
	dtpPagP7->Enabled = false;
	dtpPagP8->Enabled = false;
	dtpPagP9->Enabled = false;
	dtpPagP10->Enabled = false;
	dtpPagP11->Enabled = false;
	dtpPagP12->Enabled = false;

	dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
	dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
	dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
	dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
	dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
	dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
	dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
	dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
	dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
	dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
	dtpVencimentoP11->Date = dtpVencimentoP10->Date.CurrentDate();
	dtpVencimentoP12->Date = dtpVencimentoP10->Date.CurrentDate();
	dtpPagP1->Date = StrToDate(dataPadraoG);
	dtpPagP2->Date = StrToDate(dataPadraoG);
	dtpPagP3->Date = StrToDate(dataPadraoG);
	dtpPagP4->Date = StrToDate(dataPadraoG);
	dtpPagP5->Date = StrToDate(dataPadraoG);
	dtpPagP6->Date = StrToDate(dataPadraoG);
	dtpPagP7->Date = StrToDate(dataPadraoG);
	dtpPagP8->Date = StrToDate(dataPadraoG);
	dtpPagP9->Date = StrToDate(dataPadraoG);
	dtpPagP10->Date = StrToDate(dataPadraoG);
	dtpPagP11->Date = StrToDate(dataPadraoG);
	dtpPagP12->Date = StrToDate(dataPadraoG);
	edtValP1->Text =  "0,00";
	edtValP1->Enabled = false;
	edtValP2->Text =  "0,00";
	edtValP2->Enabled = false;
	edtValP3->Text =  "0,00";
	edtValP3->Enabled = false;
	edtValP4->Text =  "0,00";
	edtValP4->Enabled = false;
	edtValP5->Text =  "0,00";
	edtValP5->Enabled = false;
	edtValP6->Text =  "0,00";
	edtValP6->Enabled = false;
	edtValP7->Text =  "0,00";
	edtValP7->Enabled = false;
	edtValP8->Text =  "0,00";
	edtValP8->Enabled = false;
	edtValP9->Text =  "0,00";
	edtValP9->Enabled = false;
	edtValP10->Text =  "0,00";
	edtValP10->Enabled = false;
	edtValP11->Text =  "0,00";
	edtValP11->Enabled = false;
	edtValP12->Text =  "0,00";
	edtValP12->Enabled = false;
	edtNumParcelas->ItemIndex = 0;

	edtFrequencia->Clear();
	edtDias->Clear();
	edtHorario->Clear();
	edtRestricoes->Clear();
	edtACardio->Clear();
	edtPRespiratorio->Clear();
	edtAlergia->Clear();
	edtMedicamentos->Clear();
	edtFerimento->Clear();
	edtInsuficiencia->Clear();
	edtPeso->Clear();
	edtLabirintite->Clear();
	edtCirurgia->Clear();
	edtPratica->Clear();
	edtHipertensao->Clear();
	edtDoencas->Clear();
	dtpInicio->Date = dtpInicio->Date.CurrentDate();
	edtMMII->Clear();
	edtMMSS->Clear();
	edtTabagismo->Clear();
	edtImc->Clear();
	edtAltura->Clear();
	edtInflamacao->Clear();
	edtPA->Clear();
	edtDiabetes->Clear();
	edtSaturacao->Clear();
	edtBicipital->Clear();
	edtPatelar->Clear();
	edtAquileu->Clear();
	edtTEquilibrio->Clear();
	edtTDedoNariz->Clear();
	edtPRomberg->Clear();
	edtTCalcanhar->Clear();
    edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::FormShow(TObject *Sender)
{
dtpInicio->Date = dtpInicio->Date.CurrentDate();
String dataP = DateToStr(dtpPagP1->Date);
dataPadraoG = dataP;

DM1->CDSHidro->Last();
btnAddPaciente->SetFocus();

dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
dtpVencimentoP11->Date = dtpVencimentoP10->Date.CurrentDate();
dtpVencimentoP12->Date = dtpVencimentoP10->Date.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::btnCancelarClick(TObject *Sender)
{
DM1->CDSPaciente->Cancel();
DM1->CDSHidro->Cancel();
DM1->CDSParcelasHid ->Cancel();

dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
dtpVencimentoP11->Date = dtpVencimentoP10->Date.CurrentDate();
dtpVencimentoP12->Date = dtpVencimentoP10->Date.CurrentDate();
dtpPagP1->Date = StrToDate(dataPadraoG);
dtpPagP2->Date = StrToDate(dataPadraoG);
dtpPagP3->Date = StrToDate(dataPadraoG);
dtpPagP4->Date = StrToDate(dataPadraoG);
dtpPagP5->Date = StrToDate(dataPadraoG);
dtpPagP6->Date = StrToDate(dataPadraoG);
dtpPagP7->Date = StrToDate(dataPadraoG);
dtpPagP8->Date = StrToDate(dataPadraoG);
dtpPagP9->Date = StrToDate(dataPadraoG);
dtpPagP10->Date = StrToDate(dataPadraoG);
dtpPagP11->Date = StrToDate(dataPadraoG);
dtpPagP12->Date = StrToDate(dataPadraoG);
edtValP1->Text =  "0,00";
edtValP1->Enabled = false;
edtValP2->Text =  "0,00";
edtValP2->Enabled = false;
edtValP3->Text =  "0,00";
edtValP3->Enabled = false;
edtValP4->Text =  "0,00";
edtValP4->Enabled = false;
edtValP5->Text =  "0,00";
edtValP5->Enabled = false;
edtValP6->Text =  "0,00";
edtValP6->Enabled = false;
edtValP7->Text =  "0,00";
edtValP7->Enabled = false;
edtValP8->Text =  "0,00";
edtValP8->Enabled = false;
edtValP9->Text =  "0,00";
edtValP9->Enabled = false;
edtValP10->Text =  "0,00";
edtValP10->Enabled = false;
edtValP11->Text =  "0,00";
edtValP11->Enabled = false;
edtValP12->Text =  "0,00";
edtValP12->Enabled = false;
edtNumParcelas->ItemIndex = 0;

edtFrequencia->Clear();
edtDias->Clear();
edtHorario->Clear();
edtRestricoes->Clear();
edtACardio->Clear();
edtPRespiratorio->Clear();
edtAlergia->Clear();
edtMedicamentos->Clear();
edtFerimento->Clear();
edtInsuficiencia->Clear();
edtPeso->Clear();
edtLabirintite->Clear();
edtCirurgia->Clear();
edtPratica->Clear();
edtHipertensao->Clear();
edtDoencas->Clear();
dtpInicio->Date = dtpInicio->Date.CurrentDate();
edtMMII->Clear();
edtMMSS->Clear();
edtTabagismo->Clear();
edtImc->Clear();
edtAltura->Clear();
edtInflamacao->Clear();
edtPA->Clear();
edtDiabetes->Clear();
edtSaturacao->Clear();
edtBicipital->Clear();
edtPatelar->Clear();
edtAquileu->Clear();
edtTEquilibrio->Clear();
edtTDedoNariz->Clear();
edtPRomberg->Clear();
edtTCalcanhar->Clear();
edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP1Change(TObject *Sender)
{
edtValP1->Text = FormatFloat("####.00", edtValP1->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP2Change(TObject *Sender)
{
edtValP2->Text = FormatFloat("####.00", edtValP2->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP3Change(TObject *Sender)
{
edtValP3->Text = FormatFloat("####.00", edtValP3->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP4Change(TObject *Sender)
{
edtValP4->Text = FormatFloat("####.00", edtValP4->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP5Change(TObject *Sender)
{
edtValP5->Text = FormatFloat("####.00", edtValP5->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP6Change(TObject *Sender)
{
edtValP6->Text = FormatFloat("####.00", edtValP6->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP7Change(TObject *Sender)
{
edtValP7->Text = FormatFloat("####.00", edtValP7->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP8Change(TObject *Sender)
{
edtValP8->Text = FormatFloat("####.00", edtValP8->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP9Change(TObject *Sender)
{
edtValP9->Text = FormatFloat("####.00", edtValP9->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP10Change(TObject *Sender)
{
edtValP10->Text = FormatFloat("####.00", edtValP10->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP11Change(TObject *Sender)
{
edtValP11->Text = FormatFloat("####.00", edtValP11->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::edtValP12Change(TObject *Sender)
{
edtValP12->Text = FormatFloat("####.00", edtValP12->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::btnSalvarClick(TObject *Sender)
{
if (edtNome->Text == "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE")
{
	MessageBoxA(NULL, "Favor selecionar um paciente!", "Cadastro de Ficha Hidroterapia", MB_OK);
	btnAddPaciente->SetFocus();
}
else
{
	try
	{
		DM1->CDSHidro->Append();

		DM1->CDSHidro->FieldByName("cod_pacinte_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
		DM1->CDSHidro->FieldByName("frequencia_hidro")->AsString = edtFrequencia->Text;
		DM1->CDSHidro->FieldByName("dias_hidro")->AsString =edtDias->Text;
		DM1->CDSHidro->FieldByName("horario_hidro")->AsString =edtHorario->Text;
		DM1->CDSHidro->FieldByName("restricoes_hidro")->AsString =edtRestricoes->Text;
		DM1->CDSHidro->FieldByName("alteracoes_hidro")->AsString =edtACardio->Text;
		DM1->CDSHidro->FieldByName("prob_resp_hidro")->AsString =edtPRespiratorio->Text;
		DM1->CDSHidro->FieldByName("alergia_hidro")->AsString =edtAlergia->Text;
		DM1->CDSHidro->FieldByName("medicamentos_hidro")->AsString =edtMedicamentos->Text;
		DM1->CDSHidro->FieldByName("ferimento_hidro")->AsString =edtFerimento->Text;
		DM1->CDSHidro->FieldByName("insuficiencia_uri_hidro")->AsString =edtInsuficiencia->Text;
		DM1->CDSHidro->FieldByName("peso_hidro")->AsString =edtPeso->Text;
		DM1->CDSHidro->FieldByName("labirintite_hidro")->AsString =edtLabirintite->Text;
		DM1->CDSHidro->FieldByName("cirurgia_hidro")->AsString =edtCirurgia->Text;
		DM1->CDSHidro->FieldByName("prat_ativ_fis_hidro")->AsString =edtPratica->Text;
		DM1->CDSHidro->FieldByName("hipertensao_hidro")->AsString =edtHipertensao->Text;
		DM1->CDSHidro->FieldByName("doencas_hered_hidro")->AsString =edtDoencas->Text;

        dtpInicio->Format = "yyyy/dd/MM";
		DM1->CDSHidro->FieldByName("data_inicio_hidro")->AsString = dtpInicio->Date.DateString();
		dtpInicio->Format = "";
		//DM1->CDSHidro->FieldByName("")->AsString =dtpInicio->Date = dtpInicio->Date.CurrentDate();

		DM1->CDSHidro->FieldByName("grupo_mmii_hidro")->AsString =edtMMII->Text;
		DM1->CDSHidro->FieldByName("grupo_mmss_hidro")->AsString =edtMMSS->Text;
		DM1->CDSHidro->FieldByName("tabagismo_hidro")->AsString =edtTabagismo->Text;
		DM1->CDSHidro->FieldByName("imc_hidro")->AsString =edtImc->Text;
		DM1->CDSHidro->FieldByName("altura_hidro")->AsString =edtAltura->Text;
		DM1->CDSHidro->FieldByName("inflamacao_hidro")->AsString =edtInflamacao->Text;
		DM1->CDSHidro->FieldByName("PA_hidro")->AsString =edtPA->Text;
		DM1->CDSHidro->FieldByName("diabetes_hidro")->AsString =edtDiabetes->Text;
		DM1->CDSHidro->FieldByName("saturacao_hidro")->AsString =edtSaturacao->Text;
		DM1->CDSHidro->FieldByName("bicipital_hidro")->AsString =edtBicipital->Text;
		DM1->CDSHidro->FieldByName("patelar_hidro")->AsString =edtPatelar->Text;
		DM1->CDSHidro->FieldByName("aquileu_hidro")->AsString =edtAquileu->Text;
		DM1->CDSHidro->FieldByName("equilibrio_hidro")->AsString =edtTEquilibrio->Text;
		DM1->CDSHidro->FieldByName("dedo_nariz_hidro")->AsString =edtTDedoNariz->Text;
		DM1->CDSHidro->FieldByName("romberg_hidro")->AsString =edtPRomberg->Text;
		DM1->CDSHidro->FieldByName("calcanhar_hidro")->AsString =edtTCalcanhar->Text;

		DM1->CDSHidro->ApplyUpdates(0);
		DM1->CDSHidro->Refresh();
		DM1->CDSFiltroFichaHid->Refresh();
		DM1->CDSParcelasHid->Refresh();
		DM1->CDSFiltroParcelasHid->Refresh();
		DM1->CDSFiltroAtrasadosHid->Refresh();
		DM1->CDSHidro->Last();

		if (edtNumParcelas->ItemIndex != 0)
		{
			for (int i = 0; i < edtNumParcelas->ItemIndex; i++)
			{
				DM1->CDSParcelasHid->Append();
				DM1->CDSParcelasHid->FieldByName("cod_cliente_parcela_ficha_hidro")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
				DM1->CDSParcelasHid->FieldByName("cod_ficha_parcela_hidro")->AsInteger = DM1->CDSHidro->FieldByName("cod_ficha_hidro")->AsInteger;
				if (i == 0)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP1->Text;
					dtpVencimentoP1->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP1->Date.DateString();
					dtpVencimentoP1->Format = "";
					dtpPagP1->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP1->Date.DateString();
					dtpPagP1->Format = "";
				}
				if (i == 1)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP2->Text;
					dtpVencimentoP2->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP2->Date.DateString();
					dtpVencimentoP2->Format = "";
					dtpPagP2->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP2->Date.DateString();
					dtpPagP2->Format = "";
				}
				if (i == 2)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP3->Text;
					dtpVencimentoP3->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP3->Date.DateString();
					dtpVencimentoP3->Format = "";
					dtpPagP3->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP3->Date.DateString();
					dtpPagP3->Format = "";
				}
				if (i == 3)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP4->Text;
					dtpVencimentoP4->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP4->Date.DateString();
					dtpVencimentoP4->Format = "";
					dtpPagP4->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP4->Date.DateString();
					dtpPagP4->Format = "";
				}
				if (i == 4)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP5->Text;
					dtpVencimentoP5->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP5->Date.DateString();
					dtpVencimentoP5->Format = "";
					dtpPagP5->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP5->Date.DateString();
					dtpPagP5->Format = "";
				}
				if (i == 5)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP6->Text;
					dtpVencimentoP6->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP6->Date.DateString();
					dtpVencimentoP6->Format = "";
					dtpPagP6->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP6->Date.DateString();
					dtpPagP6->Format = "";
				}
				if (i == 6)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP7->Text;
					dtpVencimentoP7->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP7->Date.DateString();
					dtpVencimentoP7->Format = "";
					dtpPagP7->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP7->Date.DateString();
					dtpPagP7->Format = "";
				}
				if (i == 7)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP8->Text;
					dtpVencimentoP8->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP8->Date.DateString();
					dtpVencimentoP8->Format = "";
					dtpPagP8->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP8->Date.DateString();
					dtpPagP8->Format = "";
				}
				if (i == 8)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP9->Text;
					dtpVencimentoP9->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP9->Date.DateString();
					dtpVencimentoP9->Format = "";
					dtpPagP9->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP9->Date.DateString();
					dtpPagP9->Format = "";
				}
				if (i == 9)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP10->Text;
					dtpVencimentoP10->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP10->Date.DateString();
					dtpVencimentoP10->Format = "";
					dtpPagP10->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP10->Date.DateString();
					dtpPagP10->Format = "";
				}
				if (i == 10)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP11->Text;
					dtpVencimentoP11->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP11->Date.DateString();
					dtpVencimentoP11->Format = "";
					dtpPagP11->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP11->Date.DateString();
					dtpPagP11->Format = "";
				}
				if (i == 11)
				{
					DM1->CDSParcelasHid->FieldByName("valor_parcela_ficha_hidro")->AsString = edtValP12->Text;
					dtpVencimentoP12->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_venc_parcela_ficha_hidro")->AsString = dtpVencimentoP12->Date.DateString();
					dtpVencimentoP12->Format = "";
					dtpPagP12->Format = "yyyy/dd/MM";
					DM1->CDSParcelasHid->FieldByName("data_pag_parcela_ficha_hidro")->AsString = dtpPagP12->Date.DateString();
					dtpPagP12->Format = "";
				}
				DM1->CDSParcelasHid->ApplyUpdates(0);
				DM1->CDSParcelasHid->Refresh();
			}
		}
		dtpVencimentoP1->Date = dtpVencimentoP1->Date.CurrentDate();
		dtpVencimentoP2->Date = dtpVencimentoP2->Date.CurrentDate();
		dtpVencimentoP3->Date = dtpVencimentoP3->Date.CurrentDate();
		dtpVencimentoP4->Date = dtpVencimentoP4->Date.CurrentDate();
		dtpVencimentoP5->Date = dtpVencimentoP5->Date.CurrentDate();
		dtpVencimentoP6->Date = dtpVencimentoP6->Date.CurrentDate();
		dtpVencimentoP7->Date = dtpVencimentoP7->Date.CurrentDate();
		dtpVencimentoP8->Date = dtpVencimentoP8->Date.CurrentDate();
		dtpVencimentoP9->Date = dtpVencimentoP9->Date.CurrentDate();
		dtpVencimentoP10->Date = dtpVencimentoP10->Date.CurrentDate();
		dtpVencimentoP11->Date = dtpVencimentoP10->Date.CurrentDate();
		dtpVencimentoP12->Date = dtpVencimentoP10->Date.CurrentDate();
		dtpPagP1->Date = StrToDate(dataPadraoG);
		dtpPagP2->Date = StrToDate(dataPadraoG);
		dtpPagP3->Date = StrToDate(dataPadraoG);
		dtpPagP4->Date = StrToDate(dataPadraoG);
		dtpPagP5->Date = StrToDate(dataPadraoG);
		dtpPagP6->Date = StrToDate(dataPadraoG);
		dtpPagP7->Date = StrToDate(dataPadraoG);
		dtpPagP8->Date = StrToDate(dataPadraoG);
		dtpPagP9->Date = StrToDate(dataPadraoG);
		dtpPagP10->Date = StrToDate(dataPadraoG);
		dtpPagP11->Date = StrToDate(dataPadraoG);
		dtpPagP12->Date = StrToDate(dataPadraoG);
		edtValP1->Text =  "0,00";
		edtValP1->Enabled = false;
		edtValP2->Text =  "0,00";
		edtValP2->Enabled = false;
		edtValP3->Text =  "0,00";
		edtValP3->Enabled = false;
		edtValP4->Text =  "0,00";
		edtValP4->Enabled = false;
		edtValP5->Text =  "0,00";
		edtValP5->Enabled = false;
		edtValP6->Text =  "0,00";
		edtValP6->Enabled = false;
		edtValP7->Text =  "0,00";
		edtValP7->Enabled = false;
		edtValP8->Text =  "0,00";
		edtValP8->Enabled = false;
		edtValP9->Text =  "0,00";
		edtValP9->Enabled = false;
		edtValP10->Text =  "0,00";
		edtValP10->Enabled = false;
		edtValP11->Text =  "0,00";
		edtValP11->Enabled = false;
		edtValP12->Text =  "0,00";
		edtValP12->Enabled = false;
		edtNumParcelas->ItemIndex = 0;

		edtFrequencia->Clear();
		edtDias->Clear();
		edtHorario->Clear();
		edtRestricoes->Clear();
		edtACardio->Clear();
		edtPRespiratorio->Clear();
		edtAlergia->Clear();
		edtMedicamentos->Clear();
		edtFerimento->Clear();
		edtInsuficiencia->Clear();
		edtPeso->Clear();
		edtLabirintite->Clear();
		edtCirurgia->Clear();
		edtPratica->Clear();
		edtHipertensao->Clear();
		edtDoencas->Clear();
		dtpInicio->Date = dtpInicio->Date.CurrentDate();
		edtMMII->Clear();
		edtMMSS->Clear();
		edtTabagismo->Clear();
		edtImc->Clear();
		edtAltura->Clear();
		edtInflamacao->Clear();
		edtPA->Clear();
		edtDiabetes->Clear();
		edtSaturacao->Clear();
		edtBicipital->Clear();
		edtPatelar->Clear();
		edtAquileu->Clear();
		edtTEquilibrio->Clear();
		edtTDedoNariz->Clear();
		edtPRomberg->Clear();
		edtTCalcanhar->Clear();
		edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";

		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Avaliação", MB_OK);
	}
	catch (Exception& E)
	{
		ShowMessage("Erro ao Salvar. Código do erro:\n" + E.Message);

	}
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvHidro::btnAddPacienteClick(TObject *Sender)
{
frmAddPacienteHidro->Show();
}
//---------------------------------------------------------------------------

