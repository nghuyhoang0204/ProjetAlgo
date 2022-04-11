#include "Fichier.h"

int main(){
    char array[LENGTH];
    rempl(array);
    

    //Motif1 :
    struct occus *motif1 = (struct occus*)malloc(sizeof(struct occus));
    motif1 -> occu = (struct occu *)malloc(200 *sizeof(struct occu));
    strcpy(motif1->motif,"NG*HU*");
    motif1 -> nombre_motif = 0;
    motif1 -> nombre_occu_total = 0;
    

    //Motif2
    struct occus *motif2 = (struct occus*)malloc(sizeof(struct occus));
    motif2 -> occu = (struct occu *)malloc(200 *sizeof(struct occu));
    strcpy(motif2->motif,"N+GHU?");
    motif2 -> nombre_motif = 0;
    motif2 -> nombre_occu_total = 0;

    struct occus *uni = (struct occus*)malloc(sizeof(struct occus));
    uni->occu = (struct occu *)malloc(200 *sizeof(struct occu));

    strcpy(uni->motif,"union");

    uni->nombre_motif = 0;

    union_s(motif1,motif2,uni);

    tri(uni);
    print_uni(uni);
    print_occu(motif1);


}
