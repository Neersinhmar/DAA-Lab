#include<stdio.h>
#include<stdlib.h>

typedef struct store
{
    int *ptr;
} store;

int MaxPrice(int length,int price[]){
   store *data=uArr(length);
   int priceArr[length];
   for(int i=0;i<length;i++){
      int temp;
     for(int i=0;i<data[i].ptr)
   }
}

store *uArr(int num)
{
    int r;
    store *data=(store *)malloc(num*sizeof(store));
    for (int i = 1; i <= num; i++)
    {
        r = num;
        int k = 0;
        data[i].ptr = num % i != 0 ? (int *)malloc((num / i + 1) * sizeof(int)) : (int *)malloc((num / i) * sizeof(int));
        while (r > 0)
        {
            if (r / i != 0 && r != i)
            {
                data[i].ptr[k++] = i;
            }
            else
            {
                data[i].ptr[k++] = r;
            }
            r -= i;
        }
    }
    return data;
}

int main(){
        int n=0;
        printf("Enter the length of the wood :");
        scanf("%d",&n);
        int Len[n],price[n];
        for(int i=0;i<n;i++){
            Len[i]=i+1;
        }
        printf("Enter the price crossponding to per length of the wood :");
        for(int i=0;i<n;i++){
            scanf("%d",&price[i]);
        }
        int buyLength;
        printf("Enter the length of wood that you want to buy :");
        scanf("%d",&buyLength);
        int maxPrice=MaxPrice(buyLength,price);
        printf("The maximum price that can you get by buy %d length of wood is %d",buyLength,maxPrice);
            return 0;
}
