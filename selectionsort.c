#include<stdio.h>


void display(int array[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++)
        printf("%d ",array[i]);
    
    printf("\n"); 
}


int main() 
{ 
    int array[] = {72, 50, 10, 44, 8, 20}; 
    int size = sizeof(array)/sizeof(array[0]);

    printf("Before sorting: \n"); 
    display(array, size);
    
    int i, j, min_idx,temp;  
  

    for (i = 0; i < size-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < size; j++){
            if (array[j] < array[min_idx])  
                min_idx = j;  
        }
              
        temp = array[min_idx];
        array[min_idx] = array[i]; 
        array[i] = temp;
    }
    printf("\nAfter sorting: \n"); 
    display(array, size); 

    return 0; 
}
