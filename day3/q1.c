/*Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)*/

#include <stdio.h>

int main() {
    int n, arr[100], k, comps = 0;
    printf("Enter the number of elements to input: ");
    scanf("%d", &n);

    printf("\nEnter array elements: \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter key to search: \n");
    scanf("%d", &k);

    int found = 0;

    for (int i = 0; i < n; i++) {
        comps++;
        if (arr[i] == k) {
            printf("\n Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found) {
        printf("\nComparisons = %d", comps);
    } else {
        printf("\nNot found!");
    }


}
