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

## 3. Aufgabenverteilung

Grundregel: `.dfm` und `.cbproj` lassen sich schlecht mergen. **Am Formular arbeitet
immer nur eine Person gleichzeitig.** Wer das Formular gerade „besitzt“, steht hier.

| Aufgabe | Verantwortlich | Branch | Status |
|---------|----------------|--------|--------|
| Repository und Dokumentationsgerüst | Vova | `main` | erledigt |
| *(wird ergänzt)* | | | |

**Formular wird aktuell bearbeitet von:** niemand

## 4. Arbeitsweise

- Pro Aufgabe ein Branch, Merge über Pull Request, die andere Person schaut kurz drüber.
- Kleine Commits mit deutschen Nachrichten.
- Nach jedem Feature Dokumentation aktualisieren.

## 5. Probleme und Lösungen

| Problem | Lösung |
|---------|--------|
| Das Projekt wurde außerhalb der IDE (mit Claude Code unter Linux) angelegt, `Project1.cbproj` ist also nicht von C++Builder erzeugt. | Beim ersten Öffnen in C++Builder prüfen. Falls die IDE die Datei ablehnt: neues VCL-Projekt anlegen, `Unit1.cpp` über **Projekt → Dem Projekt hinzufügen** einbinden und als `Project1.cbproj` speichern. |

## 6. Fazit

*(Am Projektende: Was hat gut funktioniert? Was würden wir beim nächsten Mal anders machen?
Was haben wir gelernt?)*
