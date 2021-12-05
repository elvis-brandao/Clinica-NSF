//---------------------------------------------------------------------------

#ifndef untCadPacienteH
#define untCadPacienteH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TfrmCadPaciente : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabeledEdit *edtNome;
	TLabeledEdit *edtIdade;
	TDateTimePicker *dtpNascimento;
	TLabeledEdit *edtEndereco;
	TMaskEdit *edtFone;
	TLabeledEdit *edtCPF;
	TBitBtn *btnSalvar;
	TBitBtn *btnCancelar;
	TLabeledEdit *edtApelido;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall dtpNascimentoChange(TObject *Sender);
	void __fastcall btnCancelarClick(TObject *Sender);
	void __fastcall btnSalvarClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmCadPaciente(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmCadPaciente *frmCadPaciente;
//---------------------------------------------------------------------------
#endif
