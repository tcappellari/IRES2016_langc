# Esame linguaggio C

## Introduzione
Implementare i seguenti esercizi in linguaggio C.
Condividere il risultato sul proprio repository di github.
Creare una cartella esame e per ogni esercizio una sottocartella con il nome dell'esercizio (Esercizio1, Esercizio2, ...)

## Esercizi

### Esercizio 1 (2.5 punti)
Creare una funzione che accetti in input un array di interi e restituisca la media in double degli elementi contenuti.
Stampare a console la media di un array che contenga i primi 100 numeri interi divisibili per 3. (ovveri: 3, 6, 9, …).

### Esercizio 2 (2.5 punti)
Implementare una funzione, denominata zip, che dato due array di interi a e b della stessa lunghezza crei un terzo array che contenga i valori dei precedenti array intervallati tra di loro (partendo dal primo elemento dell’array a).
Esempio (in pseudocodice):
```sh
a = [1,7,9,4]
b = [4,5,6,9]
Risultato array:
risultato: [1,4,7,5,9,6,4,9]
```

Testare la funzione creando un array contenente i primi 100 numeri interi pari [0,2,4,6,8,...] e un array contenente i primi 100 numeri interi dispari [1,3,5,7,9,11,13,...].
Stampare a console l’array risultate dalla chiamata alla funzione zip.

### Esercizio 3 (2.5 punti)
Creare due funzioni, somma e moltiplicazione.
La prima accetta due interi positivi e restituisce la loro somma.
La seconda accetta due interi positivi e restituisce il loro prodotto, senza usare l’operatore *, ma basandosi sulla funzione somma precedentemente creata.

Implementare la prima funzione (somma) su un file denominato: somma.c e dichiararla su un file somma.h
Implementare la seconda funzione (moltiplicazione) su un file denominato: moltiplicazione.c e  dichiararla su un file moltiplicazione.h
Creare infine un file main.c contenente la funzione main che stampa a console il risultato del prodotto di 3 per 5 e del prodotto di 0 e 15 utilizzando la funzione moltiplicazione.

### Esercizio 4 (2.5 punti)
Creare una struttura Studente caratterizzata da un cognome e dal voto ottenuto.
Implementare le funzioni setCognome, getCognome, setVoto e getVoto che ne impostano e restituiscano rispettivamente il cognome e il voto ottenuto dallo studente. Nota: non porrere limiti alla lunghezza del cognome.

Creare un array di 100000 Studenti così denominati:
```sh
Studente 1:
Cognome: “Cognome_1”
Voto: 1

Studente 2:
Cognome: “Cognome_2”
Voto: 2
…
Studente i:
Cognome: “Cognome_i”
Voto: i%10
..
Studente 100000:
Cognome: “Cognome_100000”
Voto: 0
```

Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10).

PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la stringa rappresentante l’intero i.

Calcolare la somma dei voti degli studenti.


## Criteri di assegnazione voto
Il voto terrà conto dei seguenti parametri:
* Sinstassi (20%)
    * utilizzo di nomi delle variabili e funzioni significative
    * identazione secondo le convenzioni viste in classe
    * uso di eventuali commenti adeguato
* Semantica (45%)
    * uso appropriato dei costrutti di C e in particolare di:
    * passaggio parametri funzioni, 
    * puntatori, strutture
    * creazione memoria dinamica
* Esecuzione e Test (35%)
    * correttezza risultato 
