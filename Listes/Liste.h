#ifndef LISTE_H
#define LISTE_H

// Type liste
struct liste
{
    int v;
    liste *s;
};

/* Insertion d'un element en tete*/
liste *AjoutEntete(liste *l, int e);

/* Insertion d'un element en fin de liste*/
liste *AjoutEnqueue(liste *l);

/* Affichage d'une liste*/
void EcritListe(liste *l);

/* Calcul de la taille d'1 liste*/
int Taille(liste *l);

/* Verifier l'appartenance d'1 liste*/
liste *Appartient(liste *l, int e);

/* Recherche d'un minimum (son adresse)*/
liste *Minimum(liste *l);

/* Recherche du maximum (son adresse)*/
liste *Maximum(liste *l);

/* Affichage d'une liste en récursif */
void EcritRec(liste *l);

/* Vérifier l'existence d'un diviseur pour une nombre e dans une liste l */
bool ContientDiviseur(liste *l, int e);

/* Construire la liste des nombres premiers <= n donné */
Liste *Nbprem(int n);
#endif