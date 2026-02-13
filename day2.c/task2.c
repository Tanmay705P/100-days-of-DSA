//Delete an Element from an Array
#include <stdio.h>

int main()
{
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int index_to_delete = 1;
    int i;

    if (index_to_delete < 0 || index_to_delete >= size)
    {
        printf("Invalid index for deletion.\n");
    }
    else
    {
        for (i = index_to_delete; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Array after deletion: ");
        for (i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
