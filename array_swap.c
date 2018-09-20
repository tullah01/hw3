#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ray[10];
    int *pr = ray;

    srand( time(NULL) );
   
    for(int i = 0; i < (sizeof(ray) / 4) - 1; i++)
        ray[i] = rand();
    ray[9] = 0;

    for (int i = 0; i < sizeof(ray) / 4; i++)
        printf("ray[%d]: %d\n", i, ray[i]);

    int arr[10];
    int *pa = arr;

    for(int i = 0; i < sizeof(arr) / 4; i++)
        *(pa + i) = *(pr + 9 - i);

    for(int i = 0; i < sizeof(arr) / 4; i++)
        printf("arr[%d]: %d\n", i, arr[i]);
}
