# Technische Dokumentation

## 1. Entwicklungsumgebung

| Punkt          | Wert |
|----------------|------|
| IDE            | Embarcadero C++Builder 12 Community Edition |
| Framework      | VCL (Visual Component Library) |
| Sprache        | C++ (Clang-basierter Compiler bcc32c) |
| Zielplattform  | Windows 32 Bit |
| Versionsverwaltung | Git / GitHub |

## 2. Projektaufbau

```
WindowsSkibidySigmaLF10a/
├── Project1.cbproj   Projektdatei (C++Builder)
├── Project1.cpp      Hauptprogramm (WinMain, von der IDE erzeugt)
├── Unit1.cpp         Ereignishandler des Hauptformulars
├── Unit1.h           Klassendeklaration des Hauptformulars
├── Unit1.dfm         Formularbeschreibung (Komponenten, Eigenschaften, Ereignisse)
├── docs/             Dokumentation
└── README.md
```

Quelltexte (`.cpp`, `.h`) sind wie bei C++Builder üblich als UTF-8 mit BOM und CRLF gespeichert.
Die `.exe` wird statisch gelinkt (`UsePackages = false`, `DynamicRTL = false`) und läuft daher
auch auf Rechnern ohne C++Builder.

| Datei | Zweck |
|-------|-------|
| `.cbproj` | Projekteinstellungen, Liste der Units, Build-Konfigurationen |
| `.dfm` | Textbeschreibung des Formulars (Komponenten, Eigenschaften, Ereigniszuweisungen) |
| `.h` | Klassendeklaration des Formulars (Komponenten als `__published`-Member, Handler) |
| `.cpp` | Implementierung der Ereignishandler |

## 3. Klassen

### 3.1 Hauptformular `TfrmHaupt`

Abgeleitet von `TForm`, deklariert in `Unit1.h`, implementiert in `Unit1.cpp`.
Die Komponenten (siehe Abschnitt 4) sind `__published`-Member der Klasse.

## 4. Komponenten

Namenskonvention: englisches Typ-Präfix + deutscher Name. In der Spalte „Demo“ steht
der Name aus der Vorführung im Unterricht.

| Name | Typ | Demo | Wichtige Eigenschaften | Zweck |
|------|-----|------|------------------------|-------|
| `frmHaupt` | `TForm` | `Form1` | `Caption = "Hallo Welt"` | Hauptfenster |
| `lblGruss` | `TLabel` | `Label1` | `Caption = "Label1"` | Zeigt „Hallo Welt“ bzw. „Label1“ |
| `btnAnzeigen` | `TButton` | `Button1` | `Caption = "Anzeigen"` | Setzt „Hallo Welt“, blendet sich aus |
| `btnZuruecksetzen` | `TButton` | `Button2` | `Caption = "Zurücksetzen"` | Setzt „Label1“, blendet `btnAnzeigen` ein |
| `lblAusgabe` | `TLabel` | `Label2` | `Caption = "Label2"`, `Font->Style = fsBold` | Zeigt den übernommenen Text |
| `edtEingabe` | `TEdit` | `Edit1` | `Text = ""` | Texteingabe |
| `btnUebernehmen` | `TButton` | `Button3` | `Caption = "Übernehmen"` | Übernimmt Text aus `edtEingabe` |
| `cgrHintergrund` | `TColorGrid` (Palette „Samples“, Unit `Vcl.ColorGrd`) | `ColorGrid1` | `#pragma link "Vcl.ColorGrd"` in `Unit1.cpp` | Auswahl der Hintergrundfarbe |

## 5. Ereignisse

Die Zuweisung steht in `Unit1.dfm` (`OnClick = …`), die Deklaration in `Unit1.h` und die
Implementierung in `Unit1.cpp`.

| Komponente | Ereignis | Handler | Ablauf |
|------------|----------|---------|--------|
| `btnAnzeigen` | `OnClick` | `btnAnzeigenClick` | `lblGruss->Caption = "Hallo Welt"`, `btnAnzeigen->Visible = false` |
| `btnZuruecksetzen` | `OnClick` | `btnZuruecksetzenClick` | `lblGruss->Caption = "Label1"`, `btnAnzeigen->Visible = true` |
| `btnUebernehmen` | `OnClick` | `btnUebernehmenClick` | `lblAusgabe->Caption = edtEingabe->Text` |
| `cgrHintergrund` | `OnChange` | `cgrHintergrundChange` | `frmHaupt->Color = cgrHintergrund->ForegroundColor` |

## 6. Fehlerbehandlung

Es gibt keine Zahleneingaben, daher kann keine Umwandlung fehlschlagen. Ein leeres
Eingabefeld ergibt eine leere Beschriftung. Unerwartete Ausnahmen fängt `Project1.cpp` ab
und zeigt sie mit `Application->ShowException` an.
*(Ergänzen, falls weitere Prüfungen hinzukommen.)*

## 7. Tests

| Nr. | Testfall | Eingabe | Erwartetes Ergebnis | Ergebnis |
|-----|----------|---------|---------------------|----------|
| T01 | Programmstart | – | Fenster „Hallo Welt“, oben steht „Label1“ | |
| T02 | Klick „Anzeigen“ | – | Oben steht „Hallo Welt“, Button verschwindet | |
| T03 | Klick „Zurücksetzen“ | – | Oben steht „Label1“, „Anzeigen“ ist wieder sichtbar | |
| T04 | Text übernehmen | „Test 123“, Klick „Übernehmen“ | Fett gedruckte Beschriftung zeigt „Test 123“ | |
| T05 | Leeres Feld übernehmen | leer, Klick „Übernehmen“ | Beschriftung ist leer, kein Absturz | |
| T06 | Farbe wählen | Linksklick auf Rot im Farbraster | Fensterhintergrund wird rot | |
