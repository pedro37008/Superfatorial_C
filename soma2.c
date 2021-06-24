#include <stdio.h>
#include <stdlib.h>

float **alocaMatriz(int linhas, int colunas);
void recebeMatriz(float **matriz, int linhas, int colunas);
float **somaMatriz(float **matriz1, float **matriz2, int linhas, int colunas,float **smatriz);
void exibeMatriz(float **matriz, int linhas, int colunas);

int main(){
    int L, C, i;
    float **m, **m1, **m2;
    
    scanf("%d %d", &L, &C);

    m1 = alocaMatriz(L, C);
    m2 = alocaMatriz(L, C);
    m = alocaMatriz(L, C);
    recebeMatriz(m1, L, C);
    recebeMatriz(m2, L, C);
    somaMatriz(m1, m2, L, C, m);
    exibeMatriz(m, L, C);

    for (i=0; i<L; i++)
    {
        free(m[i]);
    }
    free(m);
    
return 0;
}


float **alocaMatriz(int linhas, int colunas){
    int i;
    float **ma;

    ma = (float**) malloc(linhas * sizeof(float));
    for (i=0; i<linhas; i++)
    {
        ma[i] = (float*) malloc(colunas * sizeof(float));
    }
    
return ma;
}


void recebeMatriz(float **matriz, int linhas, int colunas){
    int i,j;
    for (i=0; i<linhas; i++)
    {
        for (j=0; j<colunas; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
        
    }
}



float **somaMatriz(float **matriz1, float **matriz2, int linhas, int colunas,float **smatriz){
    int i,j;
    for (i=0; i<linhas; i++)
    {
        for (j=0; j<colunas; j++)
        {
            smatriz[i][j] = matriz1[i][j] + matriz2[i][j];
        }
        
    }
    return smatriz;
}



void exibeMatriz(float **matriz, int linhas, int colunas){
    int i,j;
    for (i=0; i<linhas; i++)
    {
        for (j=0; j<colunas; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
    printf("\n");   
    }
}