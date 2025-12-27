// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    int n;
    int arr[100];
    
    printf("Enter array length: ");
    scanf("%d",&n);
    
    int i;
    for (i=0; i<n; i++){
        printf("Enter value of %dth element: ",i);
        scanf("%d",&arr[i]);
    }
    
    int j;
    printf("Array Elements are as below: \n");
    for (j=0; j<n; j++){
        
        printf("%d\n",arr[j]);
    }
    
    
    return 0;
}



