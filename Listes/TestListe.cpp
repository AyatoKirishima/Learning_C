#include "Liste.cpp"

int main() {
    liste *L1;
    L1 = AjoutEntete(NULL, 3);
    L1 = AjoutEntete(L1, 5);
    L1 = AjoutEntete(L1, 13);
    L1 = AjoutEntete(L1, 2);

    // Affichage
    printf("Contenu de L1 :\n");
    EcritListe(L1);
    printf("Taille de L1 = %d\n", Taille(L1));
}