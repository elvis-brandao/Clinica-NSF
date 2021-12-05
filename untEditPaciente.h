//---------------------------------------------------------------------------

#ifndef untEditPacienteH
#define untEditPacienteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TfrmEditarPaciente : public TForm
{
__published:	// IDE-managed Components
	TDBNavigator *DBNavigator1;
	TLabel *Label1;
	TLabel *Label2;
	TLabeledEdit *edtIdade;
	TDateTimePicker *dtpNascimento;
	TLabeledEdit *edtEndereco;
	TMaskEdit *edtFone;
	TLabeledEdit *edtCPF;
	TBitBtn *btnSalvar;
	TBitBtn *btnExcluir;
	TBitBtn *BitBtn1;
	TDBGrid *gridFichas;
	TLabel *Label3;
	TBitBtn *BitBtn2;
	TPanel *Panel1;
	TBitBtn *btnEditar;
	TTabControl *TabControl1;
	TImage *imgCadeado1;
	TLabeledEdit *edtNome;
	TLabeledEdit *edtApelido;
	TDBGrid *gridFichaFisio;
	TDBGrid *gridHidro;
	TDBGrid *gridPalmilhas;
	void __fastcall BitBtn1Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall DBNavigator1Click(TObject *Sender, TNavigateBtn Button);
	void __fastcall btnExcluirClick(TObject *Sender);
	void __fastcall btnEditarClick(TObject *Sender);
	void __fastcall btnSalvarClick(TObject *Sender);
	void __fastcall dtpNascimentoChange(TObject *Sender);
	void __fastcall TabControl1Change(TObject *Sender);
	void __fastcall gridFichasDblClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall gridFichaFisioDblClick(TObject *Sender);
	void __fastcall gridHidroDblClick(TObject *Sender);
	void __fastcall gridPalmilhasDblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmEditarPaciente(TComponent* Owner);
    int estado;
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmEditarPaciente *frmEditarPaciente;
//---------------------------------------------------------------------------
#endif
