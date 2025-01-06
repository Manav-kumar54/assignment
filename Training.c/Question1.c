//Count set bits in an integer
#include<stdio.h>
int count_set_bit(int data)
{
    int count=0;
    while(data!=0)
    {
        if((data&1)==1)
        count++;
        data=data>>1;
    }
    return count;
}
void main(){
    int x;
    printf("Enter data\n");
    scanf("%d",&x);
    int result = count_set_bit(x);
    printf("Number of set bits in %d:%d",x,result);
}