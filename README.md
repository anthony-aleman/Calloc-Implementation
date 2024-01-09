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
