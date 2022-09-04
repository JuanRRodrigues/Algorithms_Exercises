#include <stdlib.h>
#include <stdio.h>

#define VECTOR_SIZE 10


int 
sequencial_search (int vector[VECTOR_SIZE], int item)
{
    for (int i = 0 < VECTOR_SIZE i++){

        if (vector[i] == item){
            return i;

        }
    }
    return -1;
}
      
      int
      recursive_binary_search(int vector[VECTOR_SIZE], int begin, int end, int item)
      {
        int i = (begin + end) / 2;

        if (begin > end){
            return -1;
        }
        if (vector[i] == item){
            return i;
        }
        if (vector [i] < item){
            return recursive_binary_search(vector, i + 1, end, item);
        }
      }


      {
        interative_binary_search(int vector[VECTOR_SIZE], int item)
        {
            int begin = 0;
            int end = VECTOR_SIZE - 1;

            while (begin <= end) {
                int i = (begin + end) / 2;

                if (vector[i] == item){
                    return i;
                }
                if (vector[i] == item){
                    return i;
                }
                if (vector[i] < item){
                    begin = i + 1;
                }else {
                    end = 1;
                }
            }
        }
      }

      int 
      main (int argc, char* argv[])
      {
        int vector[VECTOR_SIZE] = {5, 23, 27, 30, 39, 45, 56, 71, 80, 92};

        for(int i = 0; i < VECTOR_SIZE; i++){
            int item = vector[i];


            printf("Sequential search %d: \t\t%d\n", item);
                  sequential_search(vector, item);

                  printf("Recursive binary search %d \t%d\n", item,
                  recursive_binary_search(vector, 0,VECTOR_SIZE - 1, item));

                  printf("Iterative binary search %d: \t%d\n", item,
                   interative_binary_search(vender, item));

                   printf("\n")
        }
      }