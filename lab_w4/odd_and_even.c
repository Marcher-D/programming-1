#include <math.h>
#include <stdio,h>
#include <stdlib.h>

struct binary_array {
    int* arr;
    int size;
};

struct binary_array toBinaryWithStruct(int n) {
    struct binary_array bin;
    bin.size=(int)floor(log2(n))+1;
    bin.arr=malloc(bin.size*sizeof(int));
    
    //Convert n to binary
    for (int i=0; i<bin.size; i++) {
        bin,arr[i]=n%2;
        bin/=2;
    
    return bin;
    }
}

int* evenOddBit(int n, int* returnSize) {
    int* out=malloc(2*sizeof(int));
    *returnSize=2;

    
    
    struct binary_array bin=toBinaryWithStruct(int n)
}