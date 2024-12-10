#include <stdio.h>
#include <stdlib.h>

char *ChargerChaine(int N) {
    char *chaine = (char *)malloc(N + 1); 
    if (chaine == NULL) {
        printf("خطأ في تخصيص الذاكرة\n");
        exit(1);
    }

    int i = 0;
    char c;
    while ((c = getchar()) != '\n' && i < N) {
        chaine[i++] = c;
    }
    chaine[i] = '\0'; 
    return chaine;
}

int longueur(char *chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        i++;
    }
    return i;
}

void copier(char *source, char *destination) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

void inverser(char *chaine) {
    int i = 0, j = longueur(chaine) - 1;
    char temp;
    while (i < j) {
        temp = chaine[i];
        chaine[i] = chaine[j];
        chaine[j] = temp;
        i++;
        j--;
    }
}

void afficher(char *chaine) {
    printf("%s\n", chaine);
}

int main() {
    int n;
    printf("donnélongueur: ");
    scanf("%d", &n);

    char *chaine = ChargerChaine(n);

    int longueurChaine = longueur(chaine);
    printf("longueurchaine: %d\n", longueurChaine);

    char chaineCopie[longueurChaine + 1];
    copier(chaine, chaineCopie);
    printf("chainecopie: %s\n", chaineCopie);

    inverser(chaine);
    printf("chaineinversée: %s\n", chaine);

    free(chaine);

    return 0;
}
