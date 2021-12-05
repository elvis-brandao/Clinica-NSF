//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("untEditaFichaPil.cpp", frmEditaFichaPil);
USEFORM("untEditPaciente.cpp", frmEditarPaciente);
USEFORM("untFicha.cpp", frmFicha);
USEFORM("untEdicaoPalmilhas.cpp", frmEdicaoPalmilhas);
USEFORM("untEditaFicha.cpp", frmEditaFicha);
USEFORM("untEditaFichaHid.cpp", frmEditaFichaHid);
USEFORM("untFiltroFichaPil.cpp", frmFiltroFichaPil);
USEFORM("untParcelasAtrasadas.cpp", frmParcelasAtrasadas);
USEFORM("untPrincipal.cpp", frmPrincipal);
USEFORM("untFiltroFichaFisio.cpp", frmFiltroFichaFisio);
USEFORM("untFiltroFichaHid.cpp", frmFiltroFichaHid);
USEFORM("untFiltroFichaPalmilha.cpp", frmFiltroFichaPalmilha);
USEFORM("untAddPaciente.cpp", frmAddPaciente);
USEFORM("untAddPacientePalmilha.cpp", frmAddPacientePalmilha);
USEFORM("untAddPacientePilates.cpp", frmAddPacientePilates);
USEFORM("undAddPacienteHidro.cpp", frmAddPacienteHidro);
USEFORM("untCadPaciente.cpp", frmCadPaciente);
USEFORM("untCadPalmilhas.cpp", frmCadPalmilhas);
USEFORM("untDM.cpp", DM1); /* TDataModule: File Type */
USEFORM("untBuscaCliente.cpp", frmBuscaCliente);
USEFORM("untCadAvHidro.cpp", frmCadAvHidro);
USEFORM("untCadAvPilates.cpp", frmCadAvPilates);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TDM1), &DM1);
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->CreateForm(__classid(TfrmFicha), &frmFicha);
		Application->CreateForm(__classid(TfrmEditarPaciente), &frmEditarPaciente);
		Application->CreateForm(__classid(TfrmEditaFicha), &frmEditaFicha);
		Application->CreateForm(__classid(TfrmBuscaCliente), &frmBuscaCliente);
		Application->CreateForm(__classid(TfrmCadAvPilates), &frmCadAvPilates);
		Application->CreateForm(__classid(TfrmCadAvHidro), &frmCadAvHidro);
		Application->CreateForm(__classid(TfrmCadPaciente), &frmCadPaciente);
		Application->CreateForm(__classid(TfrmAddPaciente), &frmAddPaciente);
		Application->CreateForm(__classid(TfrmFiltroFichaFisio), &frmFiltroFichaFisio);
		Application->CreateForm(__classid(TfrmParcelasAtrasadas), &frmParcelasAtrasadas);
		Application->CreateForm(__classid(TfrmAddPacientePilates), &frmAddPacientePilates);
		Application->CreateForm(__classid(TfrmEditaFichaPil), &frmEditaFichaPil);
		Application->CreateForm(__classid(TfrmFiltroFichaPil), &frmFiltroFichaPil);
		Application->CreateForm(__classid(TfrmAddPacienteHidro), &frmAddPacienteHidro);
		Application->CreateForm(__classid(TfrmEditaFichaHid), &frmEditaFichaHid);
		Application->CreateForm(__classid(TfrmFiltroFichaHid), &frmFiltroFichaHid);
		Application->CreateForm(__classid(TfrmCadPalmilhas), &frmCadPalmilhas);
		Application->CreateForm(__classid(TfrmAddPacientePalmilha), &frmAddPacientePalmilha);
		Application->CreateForm(__classid(TfrmEdicaoPalmilhas), &frmEdicaoPalmilhas);
		Application->CreateForm(__classid(TfrmFiltroFichaPalmilha), &frmFiltroFichaPalmilha);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
