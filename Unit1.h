//---------------------------------------------------------------------------
// Unit1.h - Deklaration des Hauptformulars TfrmHaupt
//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TfrmHaupt : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
	TLabel *lblGruss;		// Obere Beschriftung: "Label1" bzw. "Hallo Welt"
	TLabel *lblAusgabe;		// Fette Beschriftung für den übernommenen Text
	TButton *btnAnzeigen;		// Zeigt "Hallo Welt" an und blendet sich aus
	TButton *btnZuruecksetzen;	// Setzt "Label1" zurück und zeigt btnAnzeigen wieder an
	TButton *btnUebernehmen;	// Übernimmt den Text aus edtEingabe
private:	// Benutzer-Deklarationen
public:		// Benutzer-Deklarationen
	__fastcall TfrmHaupt(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHaupt *frmHaupt;
//---------------------------------------------------------------------------
#endif
