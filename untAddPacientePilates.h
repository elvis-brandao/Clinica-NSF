//---------------------------------------------------------------------------

#ifndef untAddPacientePilatesH
#define untAddPacientePilatesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmAddPacientePilates : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *BitBtn1;
	TDBGrid *gridPaciente;
	TLabeledEdit *edtBusca;
	TRadioGroup *rdTipoBusca;
	void __fastcall edtBuscaChange(TObject *Sender);
	void __fastcall gridPacienteDblClick(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmAddPacientePilates(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAddPacientePilates *frmAddPacientePilates;
//---------------------------------------------------------------------------
#endif
