# Pflichtenheft

> Punkte mit **(offen)** sind noch nicht mit der Lehrkraft bzw. im Team geklärt.
> Bitte nicht raten, sondern nachfragen und dann hier eintragen.

## 1. Ausgangssituation

Im Unterricht (Lernfeld 10a, 27.11.2026) wurde in Embarcadero C++Builder 12 Community
Edition eine kleine VCL-Anwendung „Hallo Welt“ vorgeführt. Eine schriftliche
Aufgabenstellung gibt es nicht; Grundlage ist die Vorführung (Foto vom Beamer).

## 2. Zielsetzung

Die vorgeführte Anwendung soll nachgebaut werden: ein Fenster mit Buttons, Beschriftungen,
einem Eingabefeld und einem Farbraster, an dem die Grundlagen der VCL geübt werden
(Komponenten aufs Formular legen, Eigenschaften im Objektinspektor setzen, auf Ereignisse
wie `OnClick` reagieren).

## 3. Funktionale Anforderungen

| Nr.  | Anforderung | Komponente (Demo) | Priorität | Status |
|------|-------------|-------------------|-----------|--------|
| F01  | Das Programm startet mit einem Hauptfenster mit dem Titel „Hallo Welt“. | `Form1` | Muss | offen |
| F02  | Ein Klick auf den ersten Button ändert den Text der oberen Beschriftung von „Label1“ auf „Hallo Welt“. Danach wird dieser Button ausgeblendet. | `Button1`, `Label1` | Muss | offen |
| F03  | Ein Klick auf den zweiten Button setzt den Text der oberen Beschriftung wieder auf „Label1“ und blendet den ersten Button wieder ein. | `Button2`, `Label1`, `Button1` | Muss | offen |
| F04  | Ein Klick auf den dritten Button übernimmt den Text aus dem Eingabefeld in die fett gedruckte Beschriftung über dem Eingabefeld. | `Button3`, `Edit1`, `Label2` | Muss | offen |
| F05  | Über ein Farbraster kann die Hintergrundfarbe des Fensters geändert werden. | `ColorGrid1` | Muss | offen |
| F06  | **(offen)** Zweck von `Edit2`, `RadioButton1`, `RadioButton2` und `Animate1` – in der Demo in der Strukturansicht vorhanden, auf dem Formular nicht sichtbar. | – | offen | offen |
| F07  | **(offen)** Dem Formular ist ein `OnClick`-Handler (`FormClick`) zugewiesen – was er tut, ist nicht bekannt. | `Form1` | offen | offen |

## 4. Nichtfunktionale Anforderungen

| Nr.  | Anforderung |
|------|-------------|
| NF01 | Lauffähig unter Windows 10/11, 32-Bit-Anwendung. |
| NF02 | Oberfläche und Meldungen auf Deutsch. |
| NF03 | Sprechende Komponentennamen (`btnAnzeigen` statt `Button1`). |
| NF04 | Fehlerhafte Eingaben führen nicht zum Absturz. |
| NF05 | Quelltext ist auf Deutsch kommentiert. |

## 5. Abgrenzung (nicht Bestandteil)

- Keine Datenspeicherung, keine Dateien, keine Datenbank.
- Keine Installation – die `.exe` wird direkt gestartet.

## 6. Abnahmekriterien

- Alle Muss-Anforderungen sind umgesetzt und getestet.
- Das Projekt lässt sich aus dem Repository ohne Fehler in C++Builder erzeugen.
- Dokumentation ist vollständig.
- Abgabetermin: **(offen)**
