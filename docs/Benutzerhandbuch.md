# Benutzerhandbuch

## 1. Einleitung

Dieses Handbuch beschreibt die Bedienung des Programms „Hallo Welt“. Mit dem Programm kann
man eine Begrüßung ein- und ausblenden, einen eigenen Text anzeigen lassen und die
Hintergrundfarbe des Fensters ändern.

## 2. Systemvoraussetzungen

- Windows 10 oder 11
- Keine Installation nötig: die Datei `Project1.exe` kann direkt gestartet werden.

## 3. Programmstart

1. `Project1.exe` per Doppelklick starten.
2. Das Fenster „Hallo Welt“ öffnet sich in der Bildschirmmitte.

*(Screenshot des Hauptfensters einfügen: `docs/bilder/hauptfenster.png`)*

## 4. Aufbau des Hauptfensters

| Nr. | Element | Beschreibung |
|-----|---------|--------------|
| 1 | Große Beschriftung oben links | Zeigt beim Start „Label1“, nach Klick auf **Anzeigen** „Hallo Welt“. |
| 2 | Button **Anzeigen** | Zeigt „Hallo Welt“ an. |
| 3 | Button **Zurücksetzen** | Stellt den Ausgangszustand der Beschriftung wieder her. |
| 4 | Fette Beschriftung in der Mitte | Zeigt den übernommenen Text (beim Start „Label2“). |
| 5 | Eingabefeld | Hier wird ein beliebiger Text eingegeben. |
| 6 | Button **Übernehmen** | Überträgt den Text aus dem Eingabefeld in die fette Beschriftung. |
| 7 | Farbraster rechts | 16 Farbfelder zum Ändern der Hintergrundfarbe. |

## 5. Funktionen

### 5.1 „Hallo Welt“ anzeigen

1. Auf **Anzeigen** klicken.
2. Oben links steht jetzt „Hallo Welt“.
3. Der Button **Anzeigen** verschwindet.

### 5.2 Zurücksetzen

1. Auf **Zurücksetzen** klicken.
2. Oben links steht wieder „Label1“.
3. Der Button **Anzeigen** ist wieder sichtbar.

### 5.3 Eigenen Text anzeigen

1. In das Eingabefeld klicken und einen Text eingeben, z. B. `Guten Morgen`.
2. Auf **Übernehmen** klicken.
3. Der Text erscheint fett über dem Eingabefeld.

Ist das Eingabefeld leer, wird die fette Beschriftung geleert.

### 5.4 Hintergrundfarbe ändern

1. Mit der **linken** Maustaste auf ein Feld im Farbraster klicken.
2. Der Hintergrund des Fensters nimmt diese Farbe an.

Ein Klick mit der rechten Maustaste markiert nur eine zweite Farbe im Raster und ändert
den Hintergrund nicht.

## 6. Fehlermeldungen

Im normalen Betrieb erscheinen keine Fehlermeldungen. Sollte trotzdem ein unerwarteter
Fehler auftreten, zeigt Windows ein Meldungsfenster mit der Fehlerbeschreibung an.
Das Programm kann danach normal weiterbenutzt oder beendet werden.

## 7. Programm beenden

Das Fenster über das Kreuz **×** oben rechts schließen (oder **Alt+F4**).
