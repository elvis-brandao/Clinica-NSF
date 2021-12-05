//---------------------------------------------------------------------------

#ifndef untBuscaClienteH
#define untBuscaClienteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmBuscaCliente : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *rdTipoBusca;
	TLabeledEdit *edtBusca;
	TBitBtn *BitBtn1;
	TDBGrid *gridPaciente;
	void __fastcall edtBuscaChange(TObject *Sender);
	void __fastcall gridPacienteDblClick(TObject *Sender);
	void __fastcall BitBtn1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmBuscaCliente(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmBuscaCliente *frmBuscaCliente;
//---------------------------------------------------------------------------
#endif
