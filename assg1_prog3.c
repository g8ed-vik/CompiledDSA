//Souvik Pal 2029032

// Q3 WAP to search an element in an array of n numbers.
//#include <stdio.h>
void assg1prog3(){
    int a[10], i, x, y,n;
    printf("\nEnter the number of elements : ");
    scanf("%d", &n);
    printf("\nInput the array elements : ");
    for (i = 0; i < n; ++i)
    scanf("%d", &a[i]);
    printf("No. you wanna search :");
    scanf("%d", &x);
    for (i = 0; i < sizeof(a) / 4; i++)
    {
        if (a[i] == x)
        {
            printf(" %d is present in Index No. %d", x, i);
            break;
        }
        else{
            printf("The number is not present in the array\n");
            break;
        }
    }
}