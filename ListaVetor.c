
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#define InicioVetor 0
#define MaxTam 1000

typedef int TChave;
typedef int AponEDor;

typedef struct {
    TChave Chave;
 /* outros componentes */
} TItem;

typedef struct {
    TItem Item[MaxTam];
    AponEDor Primeiro, Ultimo;
} TLista;



void LConcatena(TLista* lista1, TLista* lista2){
    int i;
    int ultimo1 = lista1->Ultimo;
    int ultimo2 = lista2->Ultimo;
    for(i = ultimo1; i < ultimo1 + ultimo2; i++){
        lista1->Item[i] = lista2->Item[i-ultimo1];
        lista1->Ultimo++;
        printf("%d\n",lista1->Item[i].Chave);
    }    
    printf("\n");
}

int main(){
    TLista lista1;
    TLista lista2;
    
    lista1.Primeiro = 0;
    lista1.Ultimo = 0;
    lista2.Primeiro = 0;
    lista2.Ultimo = 0;
    for (int i = 0; i < 5; i++){
        lista1.Item[i].Chave = i;
        printf("%d\n",lista1.Item[i].Chave);
        (lista1.Ultimo)++;
        
    }
    printf("\n");
    
    for (int i = 0; i < 7; i++){
        lista2.Item[i].Chave = i;
        printf("%d\n",lista2.Item[i].Chave);
        (lista2.Ultimo)++;
    }
    printf("\n");
    LConcatena(&lista1,&lista2);
    
    
    for (int i = 0; i < lista1.Ultimo; i++){
        printf("%d\n",lista1.Item[i].Chave);
    }
    

    
}