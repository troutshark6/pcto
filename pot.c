#include <stdio.h>

// dichiarazione della funzione potenza
int potenza(int base, int esponente);

int main() {
    int base, esponente, risultato;

    // richiesta di input all'utente
    printf("Inserisci la base: ");
    scanf("%d", &base);

    printf("Inserisci l'esponente: ");
    scanf("%d", &esponente);

    // chiamata della funzione potenza
    risultato = potenza(base, esponente);

    // stampa del risultato
    printf("%d elevato a %d = %d", base, esponente, risultato);

    return 0;
}

// definizione della funzione potenza
int potenza(int base, int esponente) {
    int risultato = 1;

    for(int i = 1; i <= esponente; i++) {
        risultato *= base;
    }

    return risultato;
}