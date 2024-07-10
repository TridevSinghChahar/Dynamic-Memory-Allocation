#include <stdio.h>
#include <stdlib.h>

int main() {
    
    /*
    
    // Dynamic memory allocation using malloc function
    
    int *arr;
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("The value of %d element is %d\n",i,arr[i]);
    }
    printf("\n");
    
    */
    
    
    
    
    
    
    // Dynamic memory allocation using calloc function 
    
    /*
    int *ptr;
    int n;

    printf("Enter the size of an array: ");
    scanf("%d", &n);
    
    ptr = (int*)calloc(n, sizeof(int));

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }
    printf("Elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("The value of %d element is %d\n",i,ptr[i]);
    }
    printf("\n");
    */
    
  // Dynamic reallocation of memory using realloc function 
    
    int n1;
    printf("Enter the size of an array: ");
    scanf("%d", &n1);
    
    
    int *ptr = (int*)malloc(n1 * sizeof(int));

    printf("Enter the numbers:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n\n");
    
    int n2;
    printf("Enter the size of an extended array: ");
    scanf("%d", &n2);

    
    int *new_ptr = (int*)realloc(ptr, n2 * sizeof(int));

    ptr = new_ptr; 

    printf("\nEnter %d more numbers:\n",n2-n1);
    for (int i = n1; i < n2; i++) {
        scanf("%d", &ptr[i]);
    }
    printf("\n");

    printf("New array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", ptr[i]);
    }




    

    

    return 0;
}