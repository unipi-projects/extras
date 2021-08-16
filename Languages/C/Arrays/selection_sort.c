#include <stdio.h>


void Swap(int *array_value_1, int *array_value_2);      // Swap the values of two variables
void SelectionSort(int array[], int length_of_array);    // Sort an array using Selection Sort

int main(void)
{
    int array[] = {9, 1, 7, 16, 5};

    // get the length of the array by dividing the bytes of
    // the entire array and the bytes of the first element
	int length_of_array = sizeof(array)/sizeof(array[0]);

    printf("Array before sorting:\n");
    
    // print each element of the unsorted array
    for(int i = 0; i < length_of_array; ++i)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
    
    SelectionSort(array, length_of_array);

    printf("\nArray after sorting:\n");

    // print each element of the sorted array
    for(int i = 0; i < length_of_array; ++i)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

void Swap(int *array_value_1, int *array_value_2)
{
    int temp = *array_value_1;
    *array_value_1 = *array_value_2;
    *array_value_2 = temp;
}

void SelectionSort(int array[], int length_of_array)
{
    for(int i = 0; i < length_of_array-1; ++i)
    {
        int small = i;
        for(int j = i + 1; j < length_of_array; ++j)
        {
            // Find the smallest element of the array
            if(array[j] < array[small]) 
            {
                small = j;
            }
        }

        if(small != i)
        {
            Swap(&array[i], &array[small]); // Call function to swap the values
        }
    }
}