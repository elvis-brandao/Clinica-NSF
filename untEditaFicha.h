//---------------------------------------------------------------------------

#ifndef untEditaFichaH
#define untEditaFichaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TfrmEditaFicha : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TPanel *Panel1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *lblDataAlta;
	TDateTimePicker *dtpAlta;
	TDateTimePicker *dtpAvaliacao;
	TDateTimePicker *dtpTratamento;
	TLabeledEdit *edtExames;
	TLabeledEdit *edtNome;
	TLabeledEdit *edtPatologia;
	TLabeledEdit *edtSessoes;
	TMemo *memoConduta;
	TMemo *memoHDA;
	TMemo *memoObs;
	TBitBtn *btnAddPaciente;
	TPanel *Panel2;
	TLabel *Label1;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TLabel *Label10;
	TLabel *Label11;
	TComboBox *edtNumParcelas;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TEdit *Edit7;
	TEdit *Edit8;
	TEdit *Edit9;
	TEdit *Edit10;
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
	TBitBtn *btnSalvar;
	TBitBtn *btnCancelar;
	TLabel *Label12;
	TImage *imgCadeado1;
	TImage *imgCadeado2;
	TBitBtn *btnEditar;
	TBitBtn *btnExcluir;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall DBNavigator1Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall btnEditarClick(TObject *Sender);
	void __fastcall btnSalvarClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall btnAddPacienteClick(TObject *Sender);
	void __fastcall edtNumParcelasChange(TObject *Sender);
	void __fastcall btnCancelarClick(TObject *Sender);
	void __fastcall edtValP1Change(TObject *Sender);
	void __fastcall edtValP2Change(TObject *Sender);
	void __fastcall edtValP3Change(TObject *Sender);
	void __fastcall edtValP4Change(TObject *Sender);
	void __fastcall edtValP5Change(TObject *Sender);
	void __fastcall edtValP6Change(TObject *Sender);
	void __fastcall edtValP7Change(TObject *Sender);
	void __fastcall edtValP8Change(TObject *Sender);
	void __fastcall edtValP9Change(TObject *Sender);
	void __fastcall edtValP10Change(TObject *Sender);
	void __fastcall btnExcluirClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmEditaFicha(TComponent* Owner);
	int codFichaFisio;
	int codClienteFisio;
    int janela;
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmEditaFicha *frmEditaFicha;
//---------------------------------------------------------------------------
#endif
