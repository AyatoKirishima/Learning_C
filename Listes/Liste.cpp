#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "Liste.h"

/* Type liste : présent dans Liste.h
struct liste
{
    int v;
    liste *s;
}*/

/* Insertion d'un element en tete*/
liste *AjoutEnTete(liste *l, int e)
{
    liste *r;
    r = new liste;
    r->v = e;
    r->s = l;
    return r;
}

/* Insertion d'un element en fin de liste */
void AjoutEnQueue(liste *&l, int e)
{
    if(l == NULL)
    {
        liste *r;
        r = new liste;

        r->v = e;

        r->s = NULL;

        l = r; 
    }
    else
    {
        AjoutEnQueue(l->s, e);
    }
}

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

/* Affichage d'une liste en récursif */
void EcritRec(liste *l) 
{
    if(l)  // non vide
    {
        printf("%d",l->v);
        printf("\n");
        EcritRec(l->s);
    }
    //printf("\n");
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

/* Verifier l'appartenance d'1 liste */
liste *Appartient(liste *l, int e) {
    if (!l) 
    {
        return  NULL;
    } 
    else
    {
        if (l->v == e) 
        {
            return l;
        }
        else
        {
            return Appartient(l->s, e);
        }
    }
}

/* Recherche d'un minimum (son adresse) 

Liste *Minimum(Liste *l) {
    if (l) {
        Liste *p = Minimum(l->s);
        if(p){
            if(p->v<l->v)return p;
            else return l;
        }
        else return l;
    }
    else return l;
}*/
liste *Minimum(liste *l) 
{
    if (l) // Non vide
    {
        liste *p = Minimum(l->s);
        if (p) // non vide
        {
            if (p->v < l->v)
            {
                return p;
            }
            else
            {
                return l;
            }
        }
        else 
        {
            return l;
        }
    }
    else
    {
        return NULL; //ou l
    }
}

/* Recherche du maximum (son adresse) */
liste *Maximum(liste *l)
{
    if (l)
    {
        liste *p = Maximum(l->s);
        if(p)
        {
            if(p->v>l->v)return p;
            else return l;
        }
        else return l;
    }
    else return l;
}

/* Vérifier l'existence d'un diviseur pour une nombre e dans une liste l */
bool ContientDiviseur(liste *l, int e) 
{
    if(l) 
    {
        if(e%l->v == 0) 
        {
            return true;
        }
        else 
        {
            return ContientDiviseur(l->s, e);
        }
    }
    else 
    {
        return false;
    }
}

/* Construire la liste des nombres premiers <= n donné */
liste *Nbprem(int n) 
{
    if(n<2) 
    {
        return NULL;
    }
    else
    {
        liste *l = Nbprem(n-1);
        if (!ContientDiviseur(l,n))
        {
            AjoutEnQueue(l,n);
        }
        return l;
    }
}

/* Vérifier si la liste donnée est croissante */
bool EstCroissant(liste *l)
{
    if(l && l->s) //au moins 2 éléments
    {
        return (l->v < l->s->v) && EstCroissant(l->s);
    }
    else
    {
        return true; // l est vide ou contient un seul élément
    }
}

/* Adresses du minimum et du maximum */
void PosMinMax(liste *l, liste *&lmin, liste *&lmax) //avec liste *&lmin, liste *&lmax les résultats
{
    if(!(l && l->s)) // l est vide ou contient 1 élément
    {
        lmin = lmax = l;
    }
    else
    {
        PosMinMax(l->s, lmin, lmax);
        // lmin->v < lmax->v
        if(l->v < lmin->v)
        {
            lmin = l;
        }
        else
        {
            if(l->v > lmax->v)
            {
                lmax = l;
            }
        }
    }
}

/* Valeur du minimum */
int long ValMin(liste *l)
{
    if(l) //Non vide
    {
        int e = ValMin(l->s);
        if(e < l->v)
        {
            return e;
        }
        else
        {
            return l->v;
        }
    }
    else
    {
        return LONG.MAX;
    }
}

/*Tri / insertion dans liste triée */