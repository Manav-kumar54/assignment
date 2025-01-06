//write a program for Power set
#include<stdio.h>
#include<math.h>
void count_set_bit(int arr[],int n){
    int data;
    for(int i=0;i<pow(2,n);i++){
        int pos=0;
        data=i;
        while(data!=0){
            if((data&1)==1){
                printf("%d",arr[pos]);
            }
            pos++;
            data=data>>1;
        }
        printf("\n");
    }
}
int main() {
    int arr[] = {1, 2, 3};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    printf("Power Set:\n");
    count_set_bit(arr, n);
    return 0;
}