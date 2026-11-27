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
// Setzt die Beschriftung auf "Label1" zurück und zeigt btnAnzeigen wieder an
void __fastcall TfrmHaupt::btnZuruecksetzenClick(TObject *Sender)
{
	lblGruss->Caption = "Label1";
	btnAnzeigen->Visible = true;
}
//---------------------------------------------------------------------------
// Übernimmt den Text aus dem Eingabefeld in die fette Beschriftung
void __fastcall TfrmHaupt::btnUebernehmenClick(TObject *Sender)
{
	lblAusgabe->Caption = edtEingabe->Text;
}
//---------------------------------------------------------------------------
// Ändert die Hintergrundfarbe des Fensters auf die gewählte Farbe
// (Linksklick im Farbraster wählt die Vordergrundfarbe = ForegroundColor)
void __fastcall TfrmHaupt::cgrHintergrundChange(TObject *Sender)
{
	Color = cgrHintergrund->ForegroundColor;
}
//---------------------------------------------------------------------------
