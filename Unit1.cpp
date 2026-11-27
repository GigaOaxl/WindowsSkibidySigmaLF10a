//---------------------------------------------------------------------------
// Unit1.cpp - Ereignishandler des Hauptformulars TfrmHaupt
//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Vcl.ColorGrd"
#pragma resource "*.dfm"
TfrmHaupt *frmHaupt;
//---------------------------------------------------------------------------
__fastcall TfrmHaupt::TfrmHaupt(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
// Zeigt "Hallo Welt" an und blendet den Button danach aus
void __fastcall TfrmHaupt::btnAnzeigenClick(TObject *Sender)
{
	lblGruss->Caption = "Hallo Welt";
	btnAnzeigen->Visible = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmHaupt::btnZuruecksetzenClick(TObject *Sender)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHaupt::btnUebernehmenClick(TObject *Sender)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHaupt::cgrHintergrundChange(TObject *Sender)
{
}
//---------------------------------------------------------------------------
