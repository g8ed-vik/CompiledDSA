#include <stdio.h>  
   
int assg9prog5()  
{  
    int rows, cols, size, count = 0;  
          
    //Initialize matrix a  
    int a[][3] = {     
                    {4, 0, 0},  
                    {0, 5, 0},  
                    {0, 0, 6}  
                };  
      
    //Calculates number of rows and columns present in given matrix  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      
    //Calculates the size of array  
    size = rows * cols;  
   
    //Count all zero element present in matrix  
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
          if(a[i][j] == 0)  
            count++;  
        }  
    }  
      
    if(count > (size/2))  
        printf("Given matrix is a sparse matrix");  
    else  
        printf("Given matrix is not a sparse matrix");  
          
    return 0;  
}