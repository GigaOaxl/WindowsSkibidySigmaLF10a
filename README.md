# WindowsSkibidySigmaLF10a

Windows-Desktopanwendung im Rahmen der Ausbildung zum Fachinformatiker für
Anwendungsentwicklung (Lernfeld 10a), erstellt mit Embarcadero C++Builder (VCL).

## Projektbeschreibung

Nachbau der im Unterricht vorgeführten VCL-Demo „Hallo Welt“: Buttons ändern und
verstecken Beschriftungen, ein Eingabefeld überträgt Text in eine Beschriftung, und über
ein Farbraster lässt sich die Hintergrundfarbe des Fensters ändern. Die genauen Anforderungen stehen im [Pflichtenheft](docs/Pflichtenheft.md).

> Stand: alle Funktionen aus der Vorführung sind umgesetzt. Der Test in C++Builder steht
> noch aus (siehe Testfälle in der technischen Dokumentation).

## Voraussetzungen

- Windows 10 oder 11
- Embarcadero **C++Builder 12 Community Edition** (oder höher)
- Git (z. B. Git for Windows oder GitHub Desktop)

## Build-Anleitung in C++Builder

1. Repository klonen:
   ```
   git clone https://github.com/GigaOaxl/WindowsSkibidySigmaLF10a.git
   ```
2. C++Builder starten und über **Datei → Projekt öffnen…** die Datei `Project1.cbproj`
   im Projektordner öffnen.
3. In der **Projektverwaltung** als Zielplattform **Windows 32 Bit** auswählen.
4. Konfiguration **Debug** (zum Entwickeln) oder **Release** (zur Abgabe) wählen.
5. **Projekt → Erzeugen** (Umschalt+F9) bzw. mit **F9** starten.
6. Die fertige `Project1.exe` liegt danach in `Win32\Debug\` bzw. `Win32\Release\`
   (dieser Ordner wird nicht ins Repository übernommen).

## Bedienung

Kurzüberblick – ausführlich im [Benutzerhandbuch](docs/Benutzerhandbuch.md).

| Element | Funktion |
|---------|----------|
| **Anzeigen** | Zeigt oben „Hallo Welt“ an und blendet sich aus |
| **Zurücksetzen** | Setzt die Beschriftung auf „Label1“ zurück und zeigt **Anzeigen** wieder an |
| Eingabefeld + **Übernehmen** | Zeigt den eingegebenen Text fett über dem Eingabefeld an |
| Farbraster | Linksklick auf eine Farbe ändert den Fensterhintergrund |

## Dokumentation

- [Pflichtenheft](docs/Pflichtenheft.md)
- [Benutzerhandbuch](docs/Benutzerhandbuch.md)
- [Technische Dokumentation](docs/Technische_Dokumentation.md)
- [Projektdokumentation](docs/Projektdokumentation.md)

## Autoren

- **Vova**
- **Alex** ([GigaOaxl](https://github.com/GigaOaxl))
