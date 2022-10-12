/*
Lab 03 Pthreads - 04N11 - SO

Nomes:
    Caio Sampaio Oliveira, TIA: 32195621;
    Guilherme Picoli Rodrigues, TIA: 32147317;
    Leonardo Henrique de Oliveira Matos, TIA: 32139561.
   
Pré-requisito para a compilação:
    O programa é compatível o Sistema Operacional Linux;
    Foi utilizado as distribuições Ubuntu.
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int thread_count, m = 6;
int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}}, x[3] = {10,11,12}, y[3];

void *Pth_mat_vect(void* rank);

int main(int argc, char* argv[]){
	long thread = 0;
        pthread_t* thread_handles;

        //thread_count = strtol(argv[1], NULL, 10);
	thread_count = 3;

        thread_handles = malloc(thread_count * sizeof(pthread_t));

        for (thread = 0; thread < thread_count; thread++){
                pthread_create(&thread_handles[thread], NULL, Pth_mat_vect, (void*) thread);
        }

	for (thread = 0; thread < thread_count; thread++){
                pthread_join(thread_handles[thread], NULL);
        }

	printf("\nMatriz A:\n");

        for (int i = 0; i < 3; i++){
		
        	for (int k = 0; k < 3; k++){
			printf(" %d ", A[i][k]);
        	}
		printf("\n");
	}

	printf("\nMatriz X:\n");

        for (int i = 0; i < 3; i++){
		printf(" %d \n", x[i]);
        }

        printf("\nMatriz Y:\n");

	for (int i = 0; i < 3; i++){
		printf(" %d \n", y[i]);
	}

        free(thread_handles);

        return 0;
}

void *Pth_mat_vect(void* rank){
        long my_rank = (long) rank;
        int i, j;
        int local_m = m / thread_count;
        int my_first_row = my_rank * local_m;
        int my_last_row = (my_rank + 1) * local_m - 1;
        
        for (i = my_first_row; i <= my_last_row; i++){
                y[i] = 0.0;
                
                for (j = 0; j < m; j++){
                        y[i] += A[i][j] * x[j];
                }       
        }       
        
        return NULL;
}
