//---------------------------------------------------------------------------

#ifndef untFiltroFichaFisioH
#define untFiltroFichaFisioH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmFiltroFichaFisio : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *rdTipoBusca;
	TLabeledEdit *edtBusca;
	TDBGrid *gridPaciente;
	TDBGrid *gridFichaFisio;
	TBitBtn *BitBtn2;
	TLabeledEdit *edtFiltroPatologia;
	void __fastcall edtBuscaChange(TObject *Sender);
	void __fastcall gridPacienteCellClick(TColumn *Column);
	void __fastcall gridFichaFisioDblClick(TObject *Sender);
	void __fastcall BitBtn2Click(TObject *Sender);
	void __fastcall edtFiltroPatologiaChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmFiltroFichaFisio(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFiltroFichaFisio *frmFiltroFichaFisio;
//---------------------------------------------------------------------------
#endif
