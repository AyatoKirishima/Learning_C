#include "Liste.cpp"

int main() {
    liste *L1;
    L1 = AjoutEntete(NULL, 3);
    L1 = AjoutEntete(L1, 5);
    L1 = AjoutEntete(L1, 13);
    L1 = AjoutEntete(L1, 2); // liste = 2 13 5 3

    /* Affichage
    printf("Contenu de L1 : \n");
    EcritListe(L1);
    printf("Taille de L1 = %d\n", Taille(L1));

    printf("Liste à partir de l'élément cherché :\n");
    EcritListe(Appartient(L1, 5));*/

    printf("Verif appartenance\n");
    EcritRec(Appartient(L1,13));
}