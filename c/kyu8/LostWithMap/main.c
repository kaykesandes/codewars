#include <stdlib.h>

int *maps(const int *arr, size_t size)
{
    int *new_arr = malloc(size * sizeof(int));

    if (size == 0)
        return NULL;

    for (int i = 0; i < size; i++)
        new_arr[i] = arr[i] * 2;

    return new_arr;
}

int main(int argc, char const *argv[])
{

    return 0;
}
