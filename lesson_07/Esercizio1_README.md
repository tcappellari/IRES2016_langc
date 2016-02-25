# Introduzione
Creare per ogni esercizio una cartella con il nome dell'esercizio (Esercizio1, Esercizio2, ...)

## Esercizio 1
Creare una funzione che accetti in input un array di interi e restituisca la radice quadrata della somma dei quadrati dei valori contenuti.
Nota: per calcolare la radice quadrata utilizzare la funzione:
```sh
#include <math.h>
double sqrt(double x);
```
Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri interi divisibili per 6. (ovveri: 6, 12, 18, …).


## Esercizio 2
Implementare una funzione che dato in input un array di interi restituisca un array contente il cubo dei valori dell’array di input.
Stampare a console il risultato ottenuto a partire da un array contenente i primi 10 numeri interi divisibili per 3. (ovveri: 6, 12, 18, …).

## Esercizio 3
Implementare le due funzioni precendenti f1 e f2 su due coppie di files .h e .c, ovvero f1.h, f1.c , f2.h e f2.c.

Creare infine un file main.c contenente il main che stampa a console i valori come negli esercizi 1 e 2.

## Esercizio 4
Creare una struttura Software caratterizzata da un nome e da una versione.
Implementare le funzioni setName, getName, setVersion, getVersion che ne impostano e restituiscano rispettivamente il nome e versione del software. Nota: non porrere limiti alla lunghezza del nome e cognome.

Creare un array di 100000 Softwares così denominati:
```sh
Software 1:
Nome: “SW1”
Versione 1

Software 2:
Nome: “SW2”
Versione 2
…
..
Nome: “SW1000”
Versione 1000
```

PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la stringa rappresentante l’intero i.
