//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "untCadAvPilates.h"
#include "untAddPacientePilates.h"
#include "untDM.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmCadAvPilates *frmCadAvPilates;
String dataPadraoG;
//---------------------------------------------------------------------------
__fastcall TfrmCadAvPilates::TfrmCadAvPilates(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadAvPilates::edtNumParcelasChange(TObject *Sender)
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
void __fastcall TfrmCadAvPilates::FormClose(TObject *Sender, TCloseAction &Action)

{
	edtNumParcelas->ItemIndex = 0;
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

	edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
	edtTParado->Text = "Tempo?";
	edtFrequencia->Clear();
	edtDias->Clear();
	edtHorario->Clear();
	dtpInicio->Date = dtpInicio->Date.CurrentDate();
	RGAtividade->ItemIndex = 0;
	edtTabagismo->Clear();
	edtLabirintite->Clear();
	edtRestricoes->Clear();
	edtACardio->Clear();
	edtAMetabolicas->Clear();
	edtMedicamentos->Clear();
	edtDores->Clear();
	edtDesvio->Clear();
	edtAlergia->Clear();
	edtLesao->Clear();
	edtPratica->Clear();
	edtCirurgia->Clear();
	edtUltAtividade->Clear();
	edtDoencas->Clear();
	edtIndicacoes->Clear();
	memoExame->Clear();

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
}
//---------------------------------------------------------------------------


void __fastcall TfrmCadAvPilates::btnAddPacienteClick(TObject *Sender)
{
frmAddPacientePilates->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::FormShow(TObject *Sender)
{
dtpInicio->Date = dtpInicio->Date.CurrentDate();
String dataP = DateToStr(dtpPagP1->Date);
dataPadraoG = dataP;

DM1->CDSPilates->Last();
btnAddPaciente->SetFocus();
memoExame->Lines->Delimiter = '$';
memoExame->Lines->StrictDelimiter = true;

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
void __fastcall TfrmCadAvPilates::btnCancelarClick(TObject *Sender)
{
DM1->CDSPaciente->Cancel();
DM1->CDSPilates->Cancel();
DM1->CDSParcelasPil ->Cancel();

edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
edtTParado->Text = "Tempo?";
edtFrequencia->Clear();
edtDias->Clear();
edtHorario->Clear();
dtpInicio->Date = dtpInicio->Date.CurrentDate();
RGAtividade->ItemIndex = -1;
edtTabagismo->Clear();
edtLabirintite->Clear();
edtRestricoes->Clear();
edtACardio->Clear();
edtAMetabolicas->Clear();
edtMedicamentos->Clear();
edtDores->Clear();
edtDesvio->Clear();
edtAlergia->Clear();
edtLesao->Clear();
edtPratica->Clear();
edtCirurgia->Clear();
edtUltAtividade->Clear();
edtDoencas->Clear();
edtIndicacoes->Clear();
memoExame->Clear();

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
}
//---------------------------------------------------------------------------
void __fastcall TfrmCadAvPilates::edtValP1Change(TObject *Sender)
{
edtValP1->Text = FormatFloat("####.00", edtValP1->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP2Change(TObject *Sender)
{
edtValP2->Text = FormatFloat("####.00", edtValP2->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP3Change(TObject *Sender)
{
edtValP3->Text = FormatFloat("####.00", edtValP3->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP4Change(TObject *Sender)
{
edtValP4->Text = FormatFloat("####.00", edtValP4->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP6Change(TObject *Sender)
{
edtValP6->Text = FormatFloat("####.00", edtValP6->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP7Change(TObject *Sender)
{
edtValP7->Text = FormatFloat("####.00", edtValP7->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP5Change(TObject *Sender)
{
edtValP5->Text = FormatFloat("####.00", edtValP5->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP8Change(TObject *Sender)
{
edtValP8->Text = FormatFloat("####.00", edtValP8->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP9Change(TObject *Sender)
{
edtValP9->Text = FormatFloat("####.00", edtValP9->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP10Change(TObject *Sender)
{
edtValP10->Text = FormatFloat("####.00", edtValP10->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP11Change(TObject *Sender)
{
edtValP11->Text = FormatFloat("####.00", edtValP11->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::edtValP12Change(TObject *Sender)
{
edtValP12->Text = FormatFloat("####.00", edtValP12->Text.ToDouble());
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::btnSalvarClick(TObject *Sender)
{
//a
if (edtNome->Text == "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE")
{
	MessageBoxA(NULL, "Favor selecionar um paciente!", "Cadastro de Ficha Pilates", MB_OK);
	btnAddPaciente->SetFocus();
}
else
{
	try
	{
		DM1->CDSPilates->Append();

		//edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		DM1->CDSPilates->FieldByName("cod_paciente_ficha_pil")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
		DM1->CDSPilates->FieldByName("frequencia_pilates")->AsString = edtFrequencia->Text;
		DM1->CDSPilates->FieldByName("dias_pilates")->AsString = edtDias->Text;
		DM1->CDSPilates->FieldByName("horario_pilates")->AsString = edtHorario->Text;
		DM1->CDSPilates->FieldByName("tempo_parado_pilates")->AsString = edtTParado->Text;

		dtpInicio->Format = "yyyy/dd/MM";
		DM1->CDSPilates->FieldByName("data_inicio_pilates")->AsString = dtpInicio->Date.DateString();
		dtpInicio->Format = "";

		DM1->CDSPilates->FieldByName("atividade_fisica_pilates")->AsString = RGAtividade->ItemIndex;
		DM1->CDSPilates->FieldByName("tabagismo_pilates")->AsString = edtTabagismo->Text;
		DM1->CDSPilates->FieldByName("labirintite_pilates")->AsString = edtLabirintite->Text;
		DM1->CDSPilates->FieldByName("restricoes_pilates")->AsString = edtRestricoes->Text;
		DM1->CDSPilates->FieldByName("alteracao_cardio_pilates")->AsString = edtACardio->Text;
		DM1->CDSPilates->FieldByName("alteracao_metab_pilates")->AsString = edtAMetabolicas->Text;
		DM1->CDSPilates->FieldByName("medicamentos_pilates")->AsString = edtMedicamentos->Text;
		DM1->CDSPilates->FieldByName("dores_pilates")->AsString = edtDores->Text;
		DM1->CDSPilates->FieldByName("desvio_pilates")->AsString = edtDesvio->Text;
		DM1->CDSPilates->FieldByName("alergia_pilates")->AsString = edtAlergia->Text;
		DM1->CDSPilates->FieldByName("lesao_pilates")->AsString = edtLesao->Text;
		DM1->CDSPilates->FieldByName("pratica_pilates")->AsString = edtPratica->Text;
		DM1->CDSPilates->FieldByName("cirurgia_pilates")->AsString = edtCirurgia->Text;
		DM1->CDSPilates->FieldByName("ult_atividade_pilates")->AsString = edtUltAtividade->Text;
		DM1->CDSPilates->FieldByName("doencas_hered_pilates")->AsString = edtDoencas->Text;
		DM1->CDSPilates->FieldByName("indicacoes_med_pilates")->AsString = edtIndicacoes->Text;
		DM1->CDSPilates->FieldByName("exame_fis_pilates")->AsString = memoExame->Lines->DelimitedText;

		DM1->CDSPilates->ApplyUpdates(0);
		DM1->CDSPilates->Refresh();
		DM1->CDSFiltroFichaPil->Refresh();
		DM1->CDSParcelasPil->Refresh();
		DM1->CDSFiltroParcelasPil->Refresh();
		DM1->CDSFiltroAtrasadosPil->Refresh();
		DM1->CDSPilates->Last();

		if (edtNumParcelas->ItemIndex != 0)
		{
			for (int i = 0; i < edtNumParcelas->ItemIndex; i++)
			{
				DM1->CDSParcelasPil->Append();
				DM1->CDSParcelasPil->FieldByName("cod_cliente_parcela_ficha_pil")->AsInteger = DM1->CDSPaciente->FieldByName("cod_paciente")->AsInteger;
				DM1->CDSParcelasPil->FieldByName("cod_ficha_parcela_pil")->AsInteger = DM1->CDSPilates->FieldByName("cod_ficha_pilates")->AsInteger;
				if (i == 0)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP1->Text;
					dtpVencimentoP1->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP1->Date.DateString();
					dtpVencimentoP1->Format = "";
					dtpPagP1->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP1->Date.DateString();
					dtpPagP1->Format = "";
				}
				if (i == 1)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP2->Text;
					dtpVencimentoP2->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP2->Date.DateString();
					dtpVencimentoP2->Format = "";
					dtpPagP2->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP2->Date.DateString();
					dtpPagP2->Format = "";
				}
				if (i == 2)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP3->Text;
					dtpVencimentoP3->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP3->Date.DateString();
					dtpVencimentoP3->Format = "";
					dtpPagP3->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP3->Date.DateString();
					dtpPagP3->Format = "";
				}
				if (i == 3)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP4->Text;
					dtpVencimentoP4->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP4->Date.DateString();
					dtpVencimentoP4->Format = "";
					dtpPagP4->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP4->Date.DateString();
					dtpPagP4->Format = "";
				}
				if (i == 4)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP5->Text;
					dtpVencimentoP5->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP5->Date.DateString();
					dtpVencimentoP5->Format = "";
					dtpPagP5->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP5->Date.DateString();
					dtpPagP5->Format = "";
				}
				if (i == 5)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP6->Text;
					dtpVencimentoP6->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP6->Date.DateString();
					dtpVencimentoP6->Format = "";
					dtpPagP6->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP6->Date.DateString();
					dtpPagP6->Format = "";
				}
				if (i == 6)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP7->Text;
					dtpVencimentoP7->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP7->Date.DateString();
					dtpVencimentoP7->Format = "";
					dtpPagP7->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP7->Date.DateString();
					dtpPagP7->Format = "";
				}
				if (i == 7)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP8->Text;
					dtpVencimentoP8->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP8->Date.DateString();
					dtpVencimentoP8->Format = "";
					dtpPagP8->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP8->Date.DateString();
					dtpPagP8->Format = "";
				}
				if (i == 8)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP9->Text;
					dtpVencimentoP9->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP9->Date.DateString();
					dtpVencimentoP9->Format = "";
					dtpPagP9->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP9->Date.DateString();
					dtpPagP9->Format = "";
				}
				if (i == 9)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP10->Text;
					dtpVencimentoP10->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP10->Date.DateString();
					dtpVencimentoP10->Format = "";
					dtpPagP10->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP10->Date.DateString();
					dtpPagP10->Format = "";
				}
				if (i == 10)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP11->Text;
					dtpVencimentoP11->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP11->Date.DateString();
					dtpVencimentoP11->Format = "";
					dtpPagP11->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP11->Date.DateString();
					dtpPagP11->Format = "";
				}
				if (i == 11)
				{
					DM1->CDSParcelasPil->FieldByName("valor_parcela_ficha_pil")->AsString = edtValP12->Text;
					dtpVencimentoP12->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_venc_parcela_ficha_pil")->AsString = dtpVencimentoP12->Date.DateString();
					dtpVencimentoP12->Format = "";
					dtpPagP12->Format = "yyyy/dd/MM";
					DM1->CDSParcelasPil->FieldByName("data_pag_parcela_ficha_pil")->AsString = dtpPagP12->Date.DateString();
					dtpPagP12->Format = "";
				}
				DM1->CDSParcelasPil->ApplyUpdates(0);
				DM1->CDSParcelasPil->Refresh();
			}
		}
		edtNome->Text = "USE O BOTÃO AO LADO PARA SELECIONAR O PACIENTE";
		edtTParado->Text = "Tempo?";
		edtFrequencia->Clear();
		edtDias->Clear();
		edtHorario->Clear();
		dtpInicio->Date = dtpInicio->Date.CurrentDate();
		RGAtividade->ItemIndex = 0;
		edtTabagismo->Clear();
		edtLabirintite->Clear();
		edtRestricoes->Clear();
		edtACardio->Clear();
		edtAMetabolicas->Clear();
		edtMedicamentos->Clear();
		edtDores->Clear();
		edtDesvio->Clear();
		edtAlergia->Clear();
		edtLesao->Clear();
		edtPratica->Clear();
		edtCirurgia->Clear();
		edtUltAtividade->Clear();
		edtDoencas->Clear();
		edtIndicacoes->Clear();
		memoExame->Clear();

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

		MessageBoxA(NULL, "Informações salvas com sucesso!", "Cadastro de Avaliação", MB_OK);
	}
	catch (Exception& E)
	{
		ShowMessage("Erro ao Salvar. Código do erro:\n" + E.Message);

	}
}
}
//---------------------------------------------------------------------------

void __fastcall TfrmCadAvPilates::RGAtividadeClick(TObject *Sender)
{
if (RGAtividade->ItemIndex == 3)
{
	edtTParado->Enabled = true;
	edtTParado->SetFocus();
}
else
    edtTParado->Enabled = false;
}
//---------------------------------------------------------------------------

