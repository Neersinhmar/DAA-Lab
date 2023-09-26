#include<stdio.h>
#include <stdlib.h>

typedef struct store {
    int *ptr;
} store;

store *uArr(int num);

void p(int length);

store *uArr(int num) {
    store *data = (store *)calloc(num ,sizeof(store));
       for (int i = 1; i <= num; i++)
    {
        int r = num;
        int k = 0;
        data[i-1].ptr = num % i != 0 ? (int *)calloc(((num / i) + 1) ,sizeof(int)) : (int *)calloc((num / i) ,sizeof(int));
        while (r > 0) {
            data[i - 1].ptr[k++] = (r / i != 0 && r != i) ? i : r;
            r -= i;
        }
    }
    return data;
}

void p(int length) {
    store *data = uArr(length);

    for (int i = 0; i < length; i++) {
        int n = (length / (i + 1) != 0) ? (length / (i + 1) + 1) : (length / (i + 1));
        for (int j = 0; j < n; j++) {
            printf("%d+ ", data[i].ptr[j]);
        }
        printf("\n");
        free(data[i].ptr); // Free the allocated memory
    }
    free(data); // Free the array of store structures
}

int main() {
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    p(n);
    return 0;
}