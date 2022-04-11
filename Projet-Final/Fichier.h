#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#ifndef _Mon_Fichier_H
#define _Mon_Fichier_H

#define LENGTH 200
struct occu
{
    char *array;
    int pos_occu[LENGTH];
    int x;
    int nombre_occu;
};
//struct of the pattern that can store multiple struct for multiple moitf
struct occus
{
    struct occu *occu;
    char motif[6];
    int nombre_motif;
    int nombre_occu_total;
};



void rempl(char []);
void print_occu(struct occus *);
void print_uni(struct occus *);
void tri(struct occus *);
void union_s (struct occus *,struct occus *,struct occus *);

#endif



