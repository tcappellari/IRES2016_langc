/*
 * ##
 * ## Professore Cappellari Tiziano
 * ## Corso di C per Arduino
 * ## 
 */

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
 * Perchè un corso in C?
 * Perchè il C viene ancora usato ovunque, dai server al kernel
 */ 

/* 
 * Quando più persone partecipano ad un progetto si utilizza un sistema di versionamento per condividere i sorgenti
 * Uno dei più famosi sistemi di versionamento è 'git'
 * Questo strumento è nato per permettere a più persone di modificare conteporaneatmente gli stessi file senza che le modifiche si sovrascrivino a vicenda.
 * Dopo aver creato il sorgente, per darlo a git uso:
 * ~$ git init              # crea un nuovo repository git.
 * ~$ git add 'sorgente'    # aggiunge il sorgente alla libreria di git
 * ~$ git commit            # crea uno snapshot dei sorgenti e permette di commentare le modifiche effettuate
 */

/*
 *  Guida a git:    rogerdudler.github.io/git-guide/index.it.html
 */


/*
 * PASSI PRINCIPALI PER CREARE ED ESEGUIRE UN PROGRAMMA:
 * 1) Crea un file con un editor o con un IDE, scrivi il tuo codice e poi salvalo con estensione .c
 * 2) Da terminale spostati all'interno della directory in cui è presente il file *.c
 * 3) Compilalo eseguendo: 
 *    ~$ gcc -o nomefile *.c    # gcc è il compilatore
 *                              # -o è un argomento per il compilatore che mi permette di dare il nome che preferisco al file compilato
 *                              # nomefile è il nome che voglio abbia il file compilato
 *                              # *.c è il file sorgente
 * 
 */

//------------------------------------------------------------------------------------------------------------------------------------------------------------
 
/*
 * PROGRAMMA DI ESEMPIO
 * 
 * #include<stdio.h>
 * void main() {
 *      printf("Hello World \n");
 * }
 * 
 * #include<stdio.h>    # con #include<> il sorgente quando viene compilato include il file indicato in <> presente in /usr/include/
 * void main(){}        # indica una funzione, con variabile di ritorno void (cioè non torna nulla), la funzione di nome 'main' con argomenti ()
 *                      # il codice contenuto all'interno delle {} viene chiamato blocco di codice funzione main. La funzione main esegue tutto ciò che c'è
 *                      # all'interno.
 * 
 * 
 */
 
 
//------------------------------------------------------------------------------------------------------------------------------------------------------------

/* ###
 * TIPI DI DATO
 * ###
 */

/*
 * ### Tipi ad Interi
 * char              --> 1 Byte      ['da -128 a 127' o 'da 0 a 255']
 * unsigned char     --> 1 Byte      ['da 0 a 255']
 * signed char       --> 1 Byte      ['da -128 a 127']
 * int               --> 2 o 4 Bytes ['da -32760 a 32767' o 'da -2147483648 a 2147483647']
 * unsigned int      --> 2 o 4 Bytes ['da 0 a 65635' o 'da 0 a 4294967295']
 * short             --> 2 Bytes     ['da -32678 a 32767']
 * unsigned short    --> 2 Bytes     ['da 0 a 65535']
 * long              --> 4 Bytes     ['da -2147483648 a 2147483647']
 * unsigned long     --> 4 Bytes     ['da 0 a 4294967295']
 */
/

/*
 * ### Tipi a Virgola Mobile
 * float             --> 4 Bytes     ['da 1.2E-38 a 3.4E+38']        [Precisione '6 posizione decimale']
 * double            --> 8 Bytes     ['da 2.3E-308 a 1.7E+308']      [Precisione '15 posizione decimale']
 *long double       --> 10 Bytes    ['da 3.4E-4932 a 1.1E+4932']    [Precisione '19 posizione decimale']
 */

/*
 * ### Tipi Void
 * Il tipo Void è un particolare tipo di oggetto nel quale non c'è un valore associato. Viene usato in 3 diverse situazioni.
 * 1) Funzione che ritorna Void
 * 2) Argomento della funzione come Void
 * 3) Puntatori a Void
 */
