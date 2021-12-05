//---------------------------------------------------------------------------

#ifndef untPrincipalH
#define untPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TBitBtn *btnCadastrar;
	TBitBtn *btnEditar;
	TBitBtn *btnCPaciente;
	TBitBtn *btnCAvaliacao;
	TBitBtn *btnEPaciente;
	TBitBtn *btnEAvaliacao;
	TBitBtn *btnAvFisio;
	TBitBtn *btnAvPilates;
	TBitBtn *btnAvHidro;
	TBitBtn *btnEFisio;
	TBitBtn *btnEPilates;
	TBitBtn *btnEHidro;
	TBitBtn *btnAniv;
	TDBGrid *gridAniv;
	TBitBtn *btnPAtrasadas;
	TBitBtn *btnCPalmilha;
	TBitBtn *btnEPalmilha;
	void __fastcall btnCadastrarClick(TObject *Sender);
	void __fastcall btnEditarClick(TObject *Sender);
	void __fastcall btnCPacienteClick(TObject *Sender);
	void __fastcall btnCAvaliacaoClick(TObject *Sender);
	void __fastcall btnEPacienteClick(TObject *Sender);
	void __fastcall btnEAvaliacaoClick(TObject *Sender);
	void __fastcall btnAvFisioClick(TObject *Sender);
	void __fastcall btnAvPilatesClick(TObject *Sender);
	void __fastcall btnAvHidroClick(TObject *Sender);
	void __fastcall btnEFisioClick(TObject *Sender);
	void __fastcall btnAnivClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall btnPAtrasadasClick(TObject *Sender);
	void __fastcall btnEPilatesClick(TObject *Sender);
	void __fastcall btnEHidroClick(TObject *Sender);
	void __fastcall btnCPalmilhaClick(TObject *Sender);
	void __fastcall btnEPalmilhaClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
#endif
