//---------------------------------------------------------------------------

#ifndef untCadPalmilhasH
#define untCadPalmilhasH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmCadPalmilhas : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *edtNome;
	TBitBtn *btnAddPaciente;
	TDateTimePicker *dtpRecebimentoCalacados;
	TLabel *Label1;
	TLabeledEdit *edtNumCalcados;
	TLabeledEdit *edtAlturaPalmilha;
	TMemo *memoDescricao;
	TLabel *Label2;
	TLabel *Label3;
	TDateTimePicker *dtpChegadaPalmilha;
	TLabel *Label4;
	TDateTimePicker *dtpEntregaPalmilha;
	TLabeledEdit *edtQTDE;
	TLabeledEdit *edtValorPalmilha;
	TBitBtn *btnSalvar;
	TBitBtn *btnCancelar;
	TComboBox *CBPago;
	TLabel *Label5;
	void __fastcall btnAddPacienteClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnSalvarClick(TObject *Sender);
	void __fastcall edtValorPalmilhaChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmCadPalmilhas(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmCadPalmilhas *frmCadPalmilhas;
//---------------------------------------------------------------------------
#endif
