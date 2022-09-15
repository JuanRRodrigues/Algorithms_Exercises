/********************************************************************************
*   File:   MergeSort.c                                                         *
*   Author:  Juan R. Rodrigues                                              *                                     
*********************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 5


void Merge(int *A,int *L,int start,int *R,int end) {
	int i,j,k;


	i = 0; j = 0; k =0;

	while(i<start && j< end) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < start) A[k++] = L[i++];
	while(j < end) A[k++] = R[j++];
}


void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; 

	mid = n/2;  


	L = (int*)malloc(mid*sizeof(int)); 
	R = (int*)malloc((n- mid)*sizeof(int)); 
	
	for(i = 0;i<mid;i++) L[i] = A[i]; 
	for(i = mid;i<n;i++) R[i-mid] = A[i]; 

	MergeSort(L,mid);  
	MergeSort(R,n-mid);  
	Merge(A,L,mid,R,n-mid);  
        free(L);
        free(R);
}
int main()
{
  int i;
  
  int vetor[5]={36,27,29,58,2};
  printf("|Ordenação original: ");
  for (i = 0; i < TAM; i++)
      printf("   [%d] ", vetor[i]);
      printf("\n\n");

  MergeSort(vetor,TAM);

    printf("|Ordenação Crescente : ");
    for(i = 0; i < TAM; i++)
       printf(" [%d] ", vetor[i]);
}