#include <stdio.h>

/**
 * This is function send a value to elements in array by calling the pointer function getNext.
 * 
 * @param array the array pointer to storage values
 * @param array_size size of the array
 * @param getNext the function pointer, it should gave a integer value
 */
void populate_array(int *array, size_t array_size, int (*getNext)(void))
{
    for (size_t i = 0; i < array_size; i++)
    {
        array[i] = getNext();
    }
}