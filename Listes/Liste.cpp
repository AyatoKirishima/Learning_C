#include <stdio.h>
#include <stdlib.h>
#include "Liste.h"

/* Type liste : présent dans Liste.h
struct liste
{
    int v;
    liste *s;
}*/

/* Insertion d'un element en tete*/
liste *AjoutEntete(liste *l, int e)
{
    liste *r;
    r = new liste;
    r->v = e;
    r->s = l;
    return r;
}

/* Insertion d'un element en fin de liste
liste *AjoutEnqueue(liste *l);*/

/* Affichage d'une liste*/
void EcritListe(liste *l)
{
    liste *p;
    for (p = l; p != NULL; p = p->s)
    {
        printf("%d", p->v);
        printf("\n");
    }
}

/* Calcul de la taille d'1 liste*/
int Taille(liste *l)
{
        if (!l)
        {
            return 0;
        }
        else
        {
            return 1 + Taille(l->s);
        }
}

/* Verifier l'appartenance d'1 liste
liste *Appartient(liste *l, int e);*/

/* Recherche d'un minimum (son adresse)
liste *Minimum(liste *l);*/

/* Recherche du maximum (son adresse)
liste *Maximum(liste *l);*/

