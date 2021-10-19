#include "Liste.cpp"
// /!\ un void ne peut pas s'affecter à une variable !

int main() {
    liste *L1;
    L1 = AjoutEnTete(NULL, 1);
    L1 = AjoutEnTete(L1, 5);
    L1 = AjoutEnTete(L1, 7);
    L1 = AjoutEnTete(L1, 13);
    L1 = AjoutEnTete(L1, 2); // liste = 2 13 5 3
    AjoutEnQueue(L1, 9);

    /* Affichage
    printf("Contenu de L1 : \n");
    EcritListe(L1);
    printf("Taille de L1 = %d\n", Taille(L1));

    printf("Liste à partir de l'élément cherché :\n");
    EcritListe(Appartient(L1, 5));*/

    printf("Verif appartenance\n");
    EcritRec(Appartient(L1,13));

    printf("\n");

    printf("Liste des nombres premiers <= 30\n");
    EcritRec(Nbprem(30));
    printf("\n");

    liste *min;
    liste *max;
    PosMinMax(L1, min, max);
    printf("Le minimum est : ");
    EcritRec(min);
    printf("Le maximum est : ");
    EcritRec(max);
    }