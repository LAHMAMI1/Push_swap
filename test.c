#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int content;
    int size_a;
    struct s_stack *next;
} t_stack;

// Function to swap two elements in an array
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for Quick Sort
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];  // Choose the pivot as the last element
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Quick Sort function
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    t_stack *a = NULL; // Your stack 'a'
    int size_a = 0;    // Size of stack 'a'

    // Fill the stack 'a' with some elements (example)
    for (int i = 0; i < 10; i++)
    {
        t_stack *new_node = (t_stack *)malloc(sizeof(t_stack));
        new_node->content = rand() % 100; // Random values between 0 and 99
        new_node->next = a;
        a = new_node;
        size_a++;
    }

    // Create an integer array and copy the stack 'a' content into it
    int *arr = (int *)malloc(size_a * sizeof(int));
    t_stack *temp = a;
    for (int i = size_a - 1; i >= 0; i--)
    {
        arr[i] = temp->content;
        temp = temp->next;
    }

    // Print the unsorted array
    printf("Unsorted Array: ");
    for (int i = 0; i < size_a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array using Quick Sort
    quickSort(arr, 0, size_a - 1);

    // Print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < size_a; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(arr);
    while (a != NULL)
    {
        t_stack *temp = a;
        a = a->next;
        free(temp);
    }

    return 0;
}
