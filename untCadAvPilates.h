//---------------------------------------------------------------------------

#ifndef untCadAvPilatesH
#define untCadAvPilatesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TfrmCadAvPilates : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *btnCancelar;
	TBitBtn *btnSalvar;
	TPanel *Panel2;
	TLabel *Label2;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TComboBox *edtNumParcelas;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TEdit *Edit10;
	TEdit *Edit11;
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
	TEdit *Edit12;
	TEdit *Edit13;
	TEdit *edtValP12;
	TEdit *edtValP11;
	TDateTimePicker *dtpVencimentoP11;
	TDateTimePicker *dtpVencimentoP12;
	TDateTimePicker *dtpPagP12;
	TDateTimePicker *dtpPagP11;
	TPanel *Panel1;
	TLabel *Label1;
	TLabel *Label6;
	TDateTimePicker *dtpInicio;
	TEdit *edtTParado;
	TLabeledEdit *edtFrequencia;
	TLabeledEdit *edtDores;
	TLabeledEdit *edtDesvio;
	TLabeledEdit *edtAlergia;
	TLabeledEdit *edtLesao;
	TLabeledEdit *edtPratica;
	TLabeledEdit *edtCirurgia;
	TLabeledEdit *edtUltAtividade;
	TLabeledEdit *edtIndicacoes;
	TLabeledEdit *edtDoencas;
	TLabeledEdit *edtDias;
	TLabeledEdit *edtHorario;
	TLabeledEdit *edtTabagismo;
	TLabeledEdit *edtLabirintite;
	TLabeledEdit *edtRestricoes;
	TLabeledEdit *edtACardio;
	TLabeledEdit *edtAMetabolicas;
	TLabeledEdit *edtMedicamentos;
	TMemo *memoExame;
	TRadioGroup *RGAtividade;
	TBitBtn *btnAddPaciente;
	TLabeledEdit *edtNome;
	void __fastcall edtNumParcelasChange(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnAddPacienteClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnCancelarClick(TObject *Sender);
	void __fastcall edtValP1Change(TObject *Sender);
	void __fastcall edtValP2Change(TObject *Sender);
	void __fastcall edtValP3Change(TObject *Sender);
	void __fastcall edtValP4Change(TObject *Sender);
	void __fastcall edtValP6Change(TObject *Sender);
	void __fastcall edtValP7Change(TObject *Sender);
	void __fastcall edtValP5Change(TObject *Sender);
	void __fastcall edtValP8Change(TObject *Sender);
	void __fastcall edtValP9Change(TObject *Sender);
	void __fastcall edtValP10Change(TObject *Sender);
	void __fastcall edtValP11Change(TObject *Sender);
	void __fastcall edtValP12Change(TObject *Sender);
	void __fastcall btnSalvarClick(TObject *Sender);
	void __fastcall RGAtividadeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmCadAvPilates(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmCadAvPilates *frmCadAvPilates;
//---------------------------------------------------------------------------
#endif
