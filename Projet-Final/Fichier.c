#include<stdio.h>
#include "Fichier.h"

//Etape 1
void rempl(char array[]){
    char alphabet [4] = "NGHU";
    for(int i=0;i<LENGTH-1;i++){
        int random = rand() %4;
        array[i] = alphabet[random];
        printf("%c",array[i]);
    }
    
}

void print_uni(struct occus *uni)
{
    printf("for the union \n");
    printf("the number of occurences found is %d \n",uni->nombre_motif);
    int i ;
    for(i = 0 ;i != uni->nombre_motif;i++)
    {
        printf("patern found in the first and second motif and are now in the union are %s \n",uni->occu[i].array);
    }
    printf("\n");
}


void print_occu(struct occus *occus)
{
    int all = 0;
    printf("for the patern %s \n \n",occus->motif);
    int i , j;
    for(i = 0;i < occus->nombre_motif;i++)
    {
        printf("the occurences %s appear %d \n",occus->occu[i].array,occus->occu[i].nombre_occu);
        printf("\n");

        all += occus->occu[i].nombre_occu; 
             
        for(j = 0;j != occus->occu[i].x;)
        {
            printf("start = %d ",occus->occu[i].pos_occu[j]);
            j++;
            printf("end = %d \n",occus->occu[i].pos_occu[j]);
            j++;
        }
        printf("\n");
    }
    printf("and the number total of occurence for the pattern %s is %d and the number of motif found for this pattern is %d \n",occus->motif,all,occus->nombre_motif);
    printf("=============================================================================\n");
    occus->nombre_occu_total = all;
}

void union_s (struct occus *motif1,struct occus *motif2,struct occus *uni)
{
    int k = 0;
    int i , j;
    for(i = 0;i < motif1->nombre_motif;i++)
    {
        for(j = 0;j < motif2->nombre_motif;j++)
        {
            if(strcmp(motif1->occu[i].array,motif2->occu[j].array) == 0)
            {
                uni->occu[k].array = motif1->occu[i].array;
                uni->nombre_motif ++;
                k++;
            }
        }
    }
}

void tri(struct occus *occus)
{
	struct occu tmp;
    int i , j;
	for(i = 0;i < occus->nombre_motif - 1;i++)
    {
        for(j = 0;j < occus->nombre_motif - i - 1;j++)
        {
            if(occus->occu[j].nombre_occu < occus->occu[j + 1].nombre_occu)
            {
                //make the swap with my struct
                tmp = occus->occu[j];
                occus->occu[j] = occus->occu[j + 1];
                occus->occu[j + 1] = tmp;
            }
        }
    }
}



