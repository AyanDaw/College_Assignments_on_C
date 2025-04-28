#include <stdio.h>

void quick(int list[], int first, int last) { /*age sajache pore bhangche*/
    int pivot, i, j, temp;
    if (first < last) { // Ensure the logic is enclosed in this block
        pivot = first;
        i = first;
        j = last;

        while (i < j) {
            while (list[i] <= list[pivot] && i < last)
                i++;
            while (list[j] > list[pivot])
                j--;
            if (i < j) {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        temp = list[pivot];
        list[pivot] = list[j];
        list[j] = temp;
        quick(list, first, j);
        quick(list, j + 1, last);
    }
}

void merge(int list[], int first, int mid, int last) {
    int temp[20]; // Temporary array for merging
    int i = first, j = mid + 1, k = first;

    while (i <= mid && j <= last) {
        if (list[i] <= list[j]) {
            temp[k++] = list[i++];
        } 
        else {
            temp[k++] = list[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = list[i++];
    }

    while (j <= last) {
        temp[k++] = list[j++];
    }

    for (i = first; i <= last; i++) {
        list[i] = temp[i];
    }
}

void mergesort(int list[], int first, int last) {/*age bhangche pore sajache*/
    int mid;
    if (first < last) {
        mid = (first + last) / 2;
        mergesort(list, first, mid);
        mergesort(list, mid + 1, last);
        merge(list, first, mid, last); // Merge the sorted halves
    }
}

int main() {
    int size, list1[20], list2[20], i;
    printf("Enter size of the list: ");
    scanf("%d", &size);
    printf("Enter %d integer values: ", size);
    for (i = 0; i < size; i++){
        scanf("%d", &list1[i]);
        list2[i] = list1[i];
    }
    quick(list1, 0, size - 1);
    printf("List after quick sort is: ");
    for (i = 0; i < size; i++)
        printf("%d ", list1[i]); // Add space for readability
    printf("\n");

    mergesort(list2, 0, size - 1);
    printf("List after merge sort is: ");
    for (i = 0; i < size; i++)
        printf("%d ", list2[i]); // Add space for readability
    printf("\n");
    return 0;
}