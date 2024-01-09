#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
// Author: Anthony Aleman
// Date 1/8/2024
// Description: Implementation of C calloc function
// Notes: This is a work in progress


/*
    myCalloc() takes two parameters numItems and size
    -> numItems is the number of elements to allocate
    -> size is the size of each element

    myCalloc() returns a pointer to the allocated memory and NULL if the allocation fails
    allocated memory is initialized to 0
*/
void * myCalloc(size_t numItems, size_t size) {
    void *pointer = malloc(numItems * size);

    // check if malloc failed
    if (pointer == NULL) {
        return NULL;
    }

    unsigned int i = 0;

    // initialize memory to 0
    while (i < (numItems * size))
    {
        *((char *)pointer + i) = 0;
        i++;
    }
    

    return pointer;
}


void intCalloc() {
    int *p;

    int numElements = 5;

    int size = sizeof(int);

    p = (int*)myCalloc(numElements, size);

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory allocation successful\n");
        


        printf("Assigning values to allocated array\n");
        for (int i = 0; i < numElements; i++)
        {
            p[i] = i;
        }

        printf("Printing allocated memory\n");
        for (int i = 0; i < numElements; i++)
        {
            printf("%d\n", p[i]);
        }

        
    }
    
    printf("Freeing allocated memory\n");
    free(p);
}

void charCalloc() {
    char *p;

    int numElements = 5;

    int size = sizeof(char);

    p = (char*)myCalloc(numElements, size);

    if (p == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        printf("Memory allocation successful\n");

        printf("Assigning values to allocated array\n");
        for (int i = 0; i < numElements; i++)
        {
            p[i] = 'a' + i;
        }

        printf("Printing allocated memory\n");
        for (int i = 0; i < numElements; i++)
        {
            printf("%c\n", p[i]);
        }
    }
    printf("Freeing allocated memory\n");
    free(p);
}


void floatCalloc() {
    float *p;

    int numElements = 5;

    float size = sizeof(float);

    p = (float*)myCalloc(numElements, size);

    if(p == NULL) {
        printf("Memory allocation failed\n");
    }
    else {
        printf("Memory allocation successful\n");

        printf("Assigning values to allocated array\n");
        float value = 0.0;
        for (int i = 0; i < numElements; i++){
            p[i] = value++;
        }

        printf("Printing allocated memory\n");
        for(int i = 0; i < numElements; i++) {
            printf("%f\n", p[i]);
        }
    }
    printf("Freeing allocated memory\n");
    free(p);
}


int main() {
    printf("Testing Calloc with int\n");
    intCalloc();

    printf("Testing Calloc with char\n");
    charCalloc();

    printf("Testing Calloc with float\n");
    floatCalloc();
    return 0;
}