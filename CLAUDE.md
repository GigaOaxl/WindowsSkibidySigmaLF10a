# CLAUDE.md – Projektkontext für Claude Code

Diese Datei gibt Claude Code (und allen anderen im Team) denselben Kontext.
Bitte aktuell halten, wenn sich am Projekt etwas Grundlegendes ändert.

## Projekt

- Ausbildungsprojekt (Fachinformatiker Anwendungsentwicklung, Lernfeld 10a).
- Team: **Vova** und **Alex** (GitHub: GigaOaxl). Zusammenarbeit über dieses Repository:
  https://github.com/GigaOaxl/WindowsSkibidySigmaLF10a
- Windows-Desktopanwendung mit **Embarcadero C++Builder 12 Community Edition**,
  Framework **VCL**, Zielplattform **Windows 32 Bit**.
- Aufgabe: die im Unterricht vorgeführte VCL-Demo „Hallo Welt“ nachbauen (Buttons, Labels,
  Eingabefeld, Farbraster für den Hintergrund). Es gibt keine schriftliche Aufgabe.
  Die genaue Aufgabenstellung steht in `docs/Pflichtenheft.md`.
  **Was dort als „offen“ markiert ist, ist noch nicht geklärt – nicht erfinden, sondern nachfragen.**

## Wichtige Einschränkungen

- Kompiliert und Formulare gestaltet wird **nur in C++Builder unter Windows**.
  Claude kann das Projekt nicht bauen und Formulare nicht visuell prüfen.
  Deshalb: Code so schreiben, dass er in der IDE geöffnet werden kann, und **jedes Mal
  genau sagen, was in der IDE von Hand zu tun ist** (Komponente aufs Formular legen,
  Name/Caption im Objektinspektor setzen, Ereignis zuweisen, Unit zum Projekt hinzufügen …).
- `.dfm`-Dateien nur ändern, wenn es wirklich nötig ist, und vorsichtig:
  Komponentennamen in `.dfm`, `.h` und `.cpp` müssen übereinstimmen.
  Umlaute in `Caption` stehen in der `.dfm` als Zeichencodes (`#228` = ä, `#246` = ö,
  `#252` = ü, `#196` = Ä, `#214` = Ö, `#220` = Ü, `#223` = ß) – Kodierung nicht kaputt machen.
- Kodierung und Zeilenenden bestehender Dateien nicht ändern. C++Builder nutzt **CRLF**
  (siehe `.gitattributes`).
- `.dfm` und `.cbproj` lassen sich schlecht mergen: **An einem Formular arbeitet immer nur
  eine Person gleichzeitig.** Wer das Formular gerade bearbeitet, steht im Issue / in der
  Aufgabenverteilung (`docs/Projektdokumentation.md`).

## Code-Stil (VCL)

- Klassen und Handler im VCL-Stil:
  `void __fastcall TfrmHaupt::btnBerechnenClick(TObject *Sender)`
- Strings: `String` / `UnicodeString`; Zugriff über `->Caption`, `->Text` usw.
- Komponentennamen: **deutsche, sprechende Namen mit englischem Typ-Präfix**, nie `Button1`:

  | Typ        | Präfix | Beispiel         |
  |------------|--------|------------------|
  | TForm      | `frm`  | `frmHaupt`       |
  | TButton    | `btn`  | `btnBerechnen`   |
  | TEdit      | `edt`  | `edtEingabe`     |
  | TLabel     | `lbl`  | `lblErgebnis`    |
  | TMemo      | `mem`  | `memAusgabe`     |
  | TCheckBox  | `chk`  | `chkAktiv`       |
  | TComboBox  | `cmb`  | `cmbAuswahl`     |
  | TListBox   | `lst`  | `lstEintraege`   |
  | TPanel     | `pnl`  | `pnlOben`        |
  | TMainMenu  | `mnu`  | `mnuHaupt`       |

- Variablen ebenfalls deutsch und sprechend (`anzahl`, `ergebnis`, `eingabeText`).
- Logik, die kein Formular braucht, möglichst in eine eigene Unit auslagern
  (weniger Konflikte in `Unit1.cpp`, leichter testbar).

## Sprache

- Dokumentation, README, Kommentare im Code, Commit-Nachrichten, PR- und Issue-Texte:
  **Deutsch**.
- Texte der Oberfläche (Caption, Meldungen, `ShowMessage`, `MessageDlg`): **Deutsch**.
- Im Chat mit Claude: in der Sprache antworten, in der geschrieben wird
  (mit Vova: **Russisch**).

## Arbeitsweise mit Git

- Pro Aufgabe ein eigener Branch (`feature/…`, `docs/…`, `fix/…`), Merge per Pull Request.
- Kleine Commits mit deutschen Nachrichten im Präsens/Imperativ,
  z. B. `Füge Berechnung hinzu`, `Ergänze Dokumentation`.
- Vor dem Arbeiten immer `git pull` auf `main`, danach neuen Branch abzweigen.
- Nach jedem Feature die Dokumentation in `docs/` und das `README.md` aktualisieren.
- Nicht ins Repository: Build-Ausgabe (`Win32/`), `__history/`, `*.local`, `*.identcache`
  usw. (siehe `.gitignore`).

## Dokumentation

| Datei                                  | Inhalt                                           |
|----------------------------------------|--------------------------------------------------|
| `README.md`                            | Überblick, Voraussetzungen, Build, Bedienung     |
| `docs/Pflichtenheft.md`                | Anforderungen aus der Aufgabe                    |
| `docs/Benutzerhandbuch.md`             | Bedienung für Endanwender                        |
| `docs/Technische_Dokumentation.md`     | Aufbau, Komponenten, Ereignisse, Klassen         |
| `docs/Projektdokumentation.md`         | Ablauf, Aufgabenverteilung, Probleme, Fazit      |

## Wenn etwas unklar ist

Bei Unklarheiten zur Aufgabe **nachfragen statt raten**. Offene Punkte im Pflichtenheft
als „offen“ markieren.
