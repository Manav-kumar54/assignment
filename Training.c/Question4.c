//write a program to find position of the only set bit 

#include <stdio.h>

int count_set_bit(int data)
{
    int count = 0, pos = 0;
    while (data != 0)
    {
        if ((data & 1) == 1)
        {
            count++;
            printf("Position of set bit: %d\n", pos);
        }
        pos++;
        data = data >> 1;
    }
    return count;
}
int main()
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    int set_bits_count = count_set_bit(x);
    printf("Total number of set bits: %d\n", set_bits_count);
    return 0; 
}
