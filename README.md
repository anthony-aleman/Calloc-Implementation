# Calloc-Implementation

Here is my implementation of the dynamic memory allocation function calloc()

```<C>
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
```

Assigning Integer items with my implementation is as follows: 

```<C>
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
```
