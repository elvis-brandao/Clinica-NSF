//---------------------------------------------------------------------------

#ifndef untParcelasAtrasadasH
#define untParcelasAtrasadasH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TfrmParcelasAtrasadas : public TForm
{
__published:	// IDE-managed Components
	TDBGrid *DBGrid1;
	TBitBtn *BitBtn1;
	TDBGrid *DBGrid2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TDBGrid *DBGrid3;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall DBGrid1DblClick(TObject *Sender);
	void __fastcall DBGrid2DblClick(TObject *Sender);
	void __fastcall DBGrid3DblClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmParcelasAtrasadas(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmParcelasAtrasadas *frmParcelasAtrasadas;
//---------------------------------------------------------------------------
#endif
