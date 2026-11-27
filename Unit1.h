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
#include "Vcl.ColorGrd.hpp"
//---------------------------------------------------------------------------
class TfrmHaupt : public TForm
{
__published:	// Von der IDE verwaltete Komponenten
	TLabel *lblGruss;		// Obere Beschriftung: "Label1" bzw. "Hallo Welt"
	TLabel *lblAusgabe;		// Fette Beschriftung für den übernommenen Text
	TButton *btnAnzeigen;		// Zeigt "Hallo Welt" an und blendet sich aus
	TButton *btnZuruecksetzen;	// Setzt "Label1" zurück und zeigt btnAnzeigen wieder an
	TButton *btnUebernehmen;	// Übernimmt den Text aus edtEingabe
	TEdit *edtEingabe;		// Eingabefeld für den Text
	TColorGrid *cgrHintergrund;	// Farbraster für die Hintergrundfarbe (Palette "Samples")
	void __fastcall btnAnzeigenClick(TObject *Sender);
	void __fastcall btnZuruecksetzenClick(TObject *Sender);
	void __fastcall btnUebernehmenClick(TObject *Sender);
	void __fastcall cgrHintergrundChange(TObject *Sender);
private:	// Benutzer-Deklarationen
public:		// Benutzer-Deklarationen
	__fastcall TfrmHaupt(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHaupt *frmHaupt;
//---------------------------------------------------------------------------
#endif
