//---------------------------------------------------------------------------

#ifndef untFiltroFichaHidH
#define untFiltroFichaHidH
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
class TfrmFiltroFichaHid : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *edtBusca;
	TDBGrid *gridPaciente;
	TRadioGroup *rdTipoBusca;
	TDBGrid *gridFichaFisio;
	TBitBtn *BitBtn2;
	TLabeledEdit *edtFiltroPatologia;
	TLabel *Label1;
	void __fastcall edtBuscaChange(TObject *Sender);
	void __fastcall gridPacienteCellClick(TColumn *Column);
	void __fastcall gridFichaFisioDblClick(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmFiltroFichaHid(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFiltroFichaHid *frmFiltroFichaHid;
//---------------------------------------------------------------------------
#endif
