//---------------------------------------------------------------------------

#ifndef untEdicaoPalmilhasH
#define untEdicaoPalmilhasH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TfrmEdicaoPalmilhas : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *BitBtn1;
	TDBNavigator *DBNavigator1;
	TPanel *Panel1;
	TLabeledEdit *edtNome;
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
	TComboBox *CBPago;
	TLabel *Label5;
	TImage *imgCadeado1;
	TBitBtn *btnEditar;
	TBitBtn *btnSalvar;
	TBitBtn *btnCancelar;
	TBitBtn *btnExcluir;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall edtValorPalmilhaChange(TObject *Sender);
	void __fastcall btnEditarClick(TObject *Sender);
	void __fastcall btnCancelarClick(TObject *Sender);
	void __fastcall btnSalvarClick(TObject *Sender);
	void __fastcall DBNavigator1Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall btnExcluirClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmEdicaoPalmilhas(TComponent* Owner);
	int codFichaPalmilha;
	int codClientePalmilha;
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmEdicaoPalmilhas *frmEdicaoPalmilhas;
//---------------------------------------------------------------------------
#endif
