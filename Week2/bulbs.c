#include <stdio.h>
#include <string.h>

int main(void)
{
    char bulbs[100];

    printf("Message: ");
    scanf("%s",&bulbs);

    int array[strlen(bulbs)];

    for(int i = 0; i < strlen(bulbs); i++)
    {   
        int div = 1;
        //printf("%i ",i);

        array[i] = bulbs[i]%2;

        //printf("%i\n",array[i]);



        // 1*2^0 + 1*2^1 + 1*2^2 + 1*2^3 + 1*2^4 + 1*2^5 + 1*2^6 + 1*2^8
        // 1 +      2 +     4 +     8 +     16 +    32 +    64 +    128
        // 1 01 11 001 101 011 111 001 101 011 111

    }
    int size = sizeof(array) / sizeof(array[0]); //to find the length of the array you take the total amount of memory used and divide it by the memory used for 1 element
    //printf("%i\n",sizeof(array)); //amount of memory in bytes that the array uses (24 bytes)
    //printf("%i\n",sizeof(array[0]));// amount of memory in bytes that a single element of the array uses (4 bytes)
    //printf("%i",size);
    for(int j = size-1; j >= 0; j--)
    {
        printf("%i",array[j]);
    }
    //printf("%i ",array[0][1]);
}
