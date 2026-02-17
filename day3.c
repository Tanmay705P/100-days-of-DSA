//Implement linear search to find key k in an array. Count and display the number of comparisons 
 #include <stdio.h>

int main() {
    int n, i, key;
    int comparisons = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        comparisons++;   // count comparison

        if(arr[i] == key) {
            printf("Element found at position %d\n", i + 1);
            printf("Number of comparisons: %d\n", comparisons);
            return 0;
        }
    }

    printf("Element not found\n");
    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
