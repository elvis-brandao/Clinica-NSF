//---------------------------------------------------------------------------

#ifndef untFichaH
#define untFichaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmFicha : public TForm
{
__published:	// IDE-managed Components
	TDateTimePicker *dtpAvaliacao;
	TLabel *Label3;
	TLabeledEdit *edtPatologia;
	TDateTimePicker *dtpTratamento;
	TLabel *Label4;
	TLabel *Label5;
	TMemo *memoHDA;
	TLabeledEdit *edtExames;
	TMemo *memoConduta;
	TLabel *Label6;
	TLabeledEdit *edtNome;
	TDateTimePicker *dtpAlta;
	TLabel *lblDataAlta;
	TLabeledEdit *edtSessoes;
	TMemo *memoObs;
	TLabel *Label2;
	TBitBtn *btnSalvar;
	TBitBtn *btnCancelar;
	TBitBtn *btnAddPaciente;
	TPanel *Panel1;
	TPanel *Panel2;
	TLabel *Label1;
	TLabel *Label7;
	TComboBox *edtNumParcelas;
	TEdit *Edit1;
	TLabel *Label8;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TEdit *Edit10;
	TLabel *Label9;
	TEdit *edtValP1;
	TEdit *edtValP2;
	TEdit *edtValP3;
	TEdit *edtValP4;
	TEdit *edtValP5;
	TEdit *edtValP6;
	TEdit *edtValP7;
	TEdit *edtValP8;
	TEdit *edtValP9;
	TEdit *edtValP10;
	TLabel *Label10;
	TDateTimePicker *dtpVencimentoP1;
	TDateTimePicker *dtpVencimentoP2;
	TDateTimePicker *dtpVencimentoP3;
	TDateTimePicker *dtpVencimentoP4;
	TDateTimePicker *dtpVencimentoP5;
	TDateTimePicker *dtpVencimentoP6;
	TDateTimePicker *dtpVencimentoP7;
	TDateTimePicker *dtpVencimentoP8;
	TDateTimePicker *dtpVencimentoP9;
	TDateTimePicker *dtpVencimentoP10;
	TDateTimePicker *dtpPagP1;
	TDateTimePicker *dtpPagP2;
	TDateTimePicker *dtpPagP3;
	TDateTimePicker *dtpPagP4;
	TDateTimePicker *dtpPagP5;
	TDateTimePicker *dtpPagP6;
	TDateTimePicker *dtpPagP7;
	TDateTimePicker *dtpPagP8;
	TDateTimePicker *dtpPagP9;
	TDateTimePicker *dtpPagP10;
	TLabel *Label11;
	void __fastcall btnAddPacienteClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnSalvarClick(TObject *Sender);
	void __fastcall edtNumParcelasChange(TObject *Sender);
	void __fastcall edtValP1Change(TObject *Sender);
	void __fastcall btnCancelarClick(TObject *Sender);
	void __fastcall edtValP2Change(TObject *Sender);
	void __fastcall edtValP3Change(TObject *Sender);
	void __fastcall edtValP4Change(TObject *Sender);
	void __fastcall edtValP5Change(TObject *Sender);
	void __fastcall edtValP6Change(TObject *Sender);
	void __fastcall edtValP7Change(TObject *Sender);
	void __fastcall edtValP8Change(TObject *Sender);
	void __fastcall edtValP9Change(TObject *Sender);
	void __fastcall edtValP10Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmFicha(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFicha *frmFicha;
//---------------------------------------------------------------------------
#endif
