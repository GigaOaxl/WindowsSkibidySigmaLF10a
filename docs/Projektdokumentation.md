# Projektdokumentation

## 1. Projektübersicht

| Punkt        | Inhalt |
|--------------|--------|
| Projekt      | Windows-Anwendung mit C++Builder (Lernfeld 10a) |
| Team         | Vova, Alex |
| Zeitraum     | ab 27.11.2026 – Abgabe: **(offen)** |
| Repository   | https://github.com/GigaOaxl/WindowsSkibidySigmaLF10a |

## 2. Projektablauf

| Datum      | Schritt | Wer |
|------------|---------|-----|
| 27.11.2026 | Repository eingerichtet, `.gitignore`, `.gitattributes`, Dokumentationsgerüst | Vova |
| 27.11.2026 | VCL-Projekt `Project1` mit leerem Hauptformular `frmHaupt` angelegt | Vova |
| 27.11.2026 | Oberfläche: Beschriftungen, Buttons, Eingabefeld, Farbraster, Ereignisse zugewiesen | Vova |
| 27.11.2026 | Logik der vier Ereignishandler umgesetzt | Vova |

## 3. Aufgabenverteilung

Grundregel: `.dfm` und `.cbproj` lassen sich schlecht mergen. **Am Formular arbeitet
immer nur eine Person gleichzeitig.** Wer das Formular gerade „besitzt“, steht hier.

| Aufgabe | Verantwortlich | Branch | Status |
|---------|----------------|--------|--------|
| Repository und Dokumentationsgerüst | Vova | `main` | erledigt |
| VCL-Projekt und Hauptformular | Vova | `main` | erledigt |
| Ereignishandler (Logik) | Vova | `main` | erledigt |
| Benutzerhandbuch, README | Vova | `main` | erledigt |
| Test in C++Builder (T01–T06), Screenshots | Vova / Alex | `main` | offen |
| Klären: Edit2, RadioButton1/2, Animate1, FormClick | Vova / Alex | – | offen |
| Fazit | Vova / Alex | `main` | offen |

**Formular wird aktuell bearbeitet von:** niemand

## 4. Arbeitsweise

- Gearbeitet wird direkt auf `main`: vor dem Arbeiten `git pull`, danach committen und pushen.
- Wer gerade am Formular arbeitet, steht in Abschnitt 3.
- Kleine Commits mit deutschen Nachrichten.
- Nach jedem Feature Dokumentation aktualisieren.

## 5. Probleme und Lösungen

| Problem | Lösung |
|---------|--------|
| Ursprünglich waren Feature-Branches mit Pull Requests geplant. Für zwei Personen und ein kleines Projekt war das zu aufwendig. | Umstellung auf direktes Arbeiten auf `main`, Absprache über das Formular. |
| Das Projekt wurde außerhalb der IDE (mit Claude Code unter Linux) angelegt, `Project1.cbproj` ist also nicht von C++Builder erzeugt. | Beim ersten Öffnen in C++Builder prüfen. Falls die IDE die Datei ablehnt: neues VCL-Projekt anlegen, `Unit1.cpp` über **Projekt → Dem Projekt hinzufügen** einbinden und als `Project1.cbproj` speichern. |

## 6. Fazit

*(Am Projektende: Was hat gut funktioniert? Was würden wir beim nächsten Mal anders machen?
Was haben wir gelernt?)*
