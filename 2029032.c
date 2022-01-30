#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include "name_time_display.c"
int input();
int main()
{
    begin_display();
    float result;
	int choice, num,ch;

    menu:
    while (1)
    {
	printf("\nPress 1 For Assignment 1\n");
    printf("Press 2 For Assignment 2\n");
    printf("Press 3 For Assignment 3\n");
    printf("Press 4 For Assignment 4\n");
    printf("Press 5 For Assignment 5\n");
    printf("Press 6 for Assignment 6\n");
    printf("Press 7 for Assignment 7\n");
    printf("Press 8 for Assignment 8\n");
    printf("Press 9 for Assignment 9\n");
    printf("Press 10 for Assignment 10\n");
    printf("Press 11 to exit the program\n");
    printf("Enter your choice:\n");
    ch = input();
    switch (ch) {
	    case 1: {
             {           
	printf("\nPress 1 to find out the smallest and largest element stored in an array of n integers.\n");
	printf("Press 2 to reverse the contents of an array of n elements.\n");
	printf("Press 3 to search an element in an array of n numbers.\n");
	printf("Press 4 to sort an array of n numbers.\n");
	printf("Press 5 to find and display the number of elements between two elements a and b (both inclusive).\n");
	printf("Press 6 to exchange the biggest and smallest element into the array of n integers\n");
    printf("Press 7 to return back to Assignment list\n");
    printf("Press 8 to Exit The Program \n");
    printf("Enter your choice:\n");
	choice = input();
	
	switch (choice) {
        case 1: {
            #include "assg1_prog1.c"
            assg1prog1();
            break;
        }
        case 2: {
            #include "assg1_prog2.c"
            assg1prog2();
            break;
        }
        case 3: {
            #include "assg1_prog3.c"
            assg1prog3();
            break;
        }
        case 4: {
            #include "assg1_prog4.c"
            assg1prog4();
            break;
        }
        case 5: {
            #include "assg1_prog5.c"
            assg1prog5();
            break;
        }
        case 6: {
            #include "assg1_prog6.c"
            assg1prog6();
            break;
        }
        case 7: {
            goto menu;
            break;
        }
        case 8: {
            printf("Thanks For Checking out the Questions");
            exit(1);
            break;
        }
        default: {
            printf("Wrong Input");
        }
        break;
    }
             }
        }
    
     case 2: {            
            {
                printf("\nPress 1 to sort an array of n numbers");
                printf("\nPress 2 to find minimum distance between x and y in an unsorted array which may contain duplicates");
                printf("\nPress 3 to find out second smallest and second largest element stored in an array");
                printf("\nPress 4 to arrange elements of array such that even numbers are followed by odd numbers");
                printf("\nPress 5 to replace every array element by multiplying previous and next of any n element");
                printf("\nPress 6 to find the largest number and counts of occurrence of largest number in an array of n integers using single loop");
                printf("\nPress 7 to segregate an array of 0s and 1s such that 0s are on left side and 1s are on right side");
                printf("\nPress 8 to find and display number of elements between 2 elements a and b (both inclusive) in an unsported array of size n");
                printf("\nPress 9 to find out kth smallest and kth largest integer stored in a dynamic array of n integers, where k>n");
                printf("\nPress 10 to go back to Assignment List");
                printf("\nPress 11 to exit");
                choice = input();
                switch (choice) {
                    case 1: {
                        #include "assg2_prog1.c"
                        assg2prog1();
                        break;
                    }
                    case 2: {
                        #include "assg2_prog2.c"
                        assg2prog2();
                        break;
                    }
                    case 3: {
                        #include "assg2_prog3.c"
                        assg2prog3();
                        break;
                    }
                    case 4: {
                        #include "assg2_prog4.c"
                        assg2prog4();
                        break;
                    }
                    case 5: {
                        #include "assg2_prog5.c"
                        assg2prog5();
                        break;
                    }
                    case 6: {
                        #include "assg2_prog6.c"
                        assg2prog6();
                        break;
                    }
                    case 7: {
                        #include "assg2_prog7.c"
                        assg2prog7();
                        break;
                    }
                    case 8: {
                        #include "assg2_prog8.c"
                        assg2prog8();
                        break;
                    }
                    case 9: {
                        #include "assg2_prog9.c"
                        assg2prog9();
                        break;
                    }
                    case 10: {
                        goto menu;
                        break;
                    }
                    case 11: {
                        printf("Thanks For Checking Out The Questions");
                        exit(1);
                        break;
                    }
                    default : {
                        printf("Wrong Input");
                        break;
                    }
                
                }
            }
     }
     case 3: {
            
            {
                printf("\nPress 1 to store employee data and calculate gross pay of each employee");
                printf("\nPress 2 to add two distances (in km) by passing structure to a function");
                printf("\nPress 3 to create a menu driven program to perform the following operations in a single linked list by using user suitable defined functions for creating a list and display it and to check whether the list is empty");
                printf("\nPress 4 to go back to Assignment List");
                printf("\nPress 5 to exit the program");
                choice = input();
                switch(choice){
                    case 1: {
                        #include "assg3_prog1.c"
                        assg3prog1();
                        break;
                    }
                    case 2: {
                        #include "assg3_prog2.c"
                        assg3prog2();
                        break;
                    }
                    case 3: {
                        #include "assg3_prog3.c"
                        assg3prog3();
                        break;
                    }
                    case 4: {
                        goto menu;
                        break;
                    }
                    case 5: {
                        printf("Thanks For Checking Out The Questions");
                        exit(1);
                        break;
                    }
                    default : {
                        printf("Wrong Input");
                    }
                }
            }
        }
        case 4 : {
             {
                printf("\nPress 1 to insert new list from any position or from the front or from the end");
                printf("\nPress 2 to delete list from any position or from the front or from the end");
                printf("\nPress 3 to search an element in a simple linked list. If the node is found then the node is inserted at beginning otherwise an appropriate message is shown");
                printf("\nPress 4 to check whether sinkly linged list is palindrome or not");
                printf("\nPress 5 to display contents of linked list in reverse order");
                printf("\nPress 6 to rotate elements of linked list counter clockwise by k nodes where k is a given positive integer");
                printf("\nPress 7 to remove duplicates from a inked list of n nodes");
                printf("\nPress 8 to return back to list of Assignments");
                printf("\nPress 9 to exit");
                choice = input();
                switch (choice) {
                    case 1 :  {
                        #include "assg4_prog1.c"
                        assg4prog1();
                        break;
                    }
                    case 2 : {
                        #include "assg4_prog2.c"
                        assg4prog2();
                        break;
                    }
                    case 3 : {
                        #include "assg4_prog3.c"
                        assg4prog3();
                        break;
                    }
                    case 4 : {
                        #include "assg4_prog4.c"
                        assg4prog4();
                        break;
                    }
                    case 5 : {
                        #include "assg4_prog5.c"
                        assg4prog5();
                        break;
                    }
                    case 6 : {
                        #include "assg4_prog6.c"
                        assg4prog6();
                        break;
                    }
                    case 7 : {
                        #include "assg4_prog7.c"
                        assg4prog7();
                        break;
                    }
                    case 8 : {
                        goto menu;
                        break;
                    }
                    case 9 : {
                        printf("\nThanks For Checking Out The Questions");
                        exit(1);
                        break;
                    }
                    default : {
                        printf("Wrong Input");
                    }
                }
            }
        }
        case 5 : {
            {
                printf("\nPress 1 to create a double linked list of n nodes and display the linke dlist by using suitable user defined functions for create and display functions");
                printf("\nPress 2 to reverse the sequence elements of a dobule linked list");
                printf("\nPress 3 to create a menu driven program and traverse list forward, traverse list backward, check if list is empty, insert and delete node at certain position, delete node for given key and search for an element in linked list");
                printf("\nPress 4 to create singular double linked list of n nodes and display linked by using user defined functions for create and display functions");
                printf("\nPress 5 to removed duplicates in a sorted double linked list");
                printf("\nPress 6 to convert a given sinkly linked list to a circular list");
                printf("\nPress 7 to implement doubly linked list by unsing singly linked list");
                printf("\nPress 8 to print middle of doubly linked list");
                printf("\nPress 9 to rotate elements of doubly linked list counter clockwise by k nodes");
                printf("\nPress 10 to return back to Assignment list");
                printf("\nPress 11 to exit the program");
            }
                choice = input();
                switch (choice) {
                    case 1 : {
                        #include "assg5_prog1.c"
                        assg5prog1();
                        break;
                    }
                    case 2 : {
                        #include "assg5_prog2.c"
                        assg5prog2();
                        break;
                    }
                    case 3 : {
                        #include "assg5_prog3.c"
                        assg5prog3();
                        break;
                    }
                    case 4 : {
                        #include "assg5_prog4.c"
                        assg5prog4();
                        break;
                    }
                    case 5 : {
                        #include "assg5_prog5.c"
                        assg5prog5();
                        break;
                    }
                    case 6 : {
                        #include "assg5_prog6.c"
                        assg5prog6();
                        break;
                    }
                    case 7 : {
                        #include "assg5_prog7.c"
                        assg5prog7();
                        break;
                    }
                    case 8 : {
                        #include "assg5_prog8.c"
                        assg5prog8();
                        break;
                    }
                    case 9 : {
                        #include "assg5_prog9.c"
                        assg5prog9();
                        break;
                    }
                    case 10 : {
                        goto menu;
                        break;
                    }
                    case 11 : {
                        printf("Thanks for checking out the questions");
                        exit(1);
                        break;
                    }
                    default : {
                        printf("Wrong Input");
                        break;
                    }
                }
            }
        
    case 6 : {
         {
            printf("\nPress 1 to write a menu driven program to perform - check if stack is empty, display contents of stack, push and pop using array and user defined functions");
            printf("\nPress 2 to write a menu driven program to perform operations of stack using linked list");
            printf("\nPress 3 to convert an infix expression into equivalent postfix notation");
            printf("\nPress 4 to convert an infix expression into equivalent prefix notation");
            printf("\nPress 5 to determine whethe input sequence of brackets is balanced or not. If balanced, print YES otherwise print NO");
            printf("\nPress 6 to reverse a stack with using extra stack");
            printf("\nPress 7 to sort elements inside a stack using only push and pop operation.");
            printf("\nPress 8 to return back to Assignment List");
            printf("\nPress 9 to exit");
        }
        choice = input();
        switch (choice){
            case 1: {
                #include "assg6_prog1.c"
                assg6prog1();
                break;
            }
            case 2 : {
                #include "assg6_prog2.c"
                assg6prog2();
                break;
            }
            case 3 : {
                #include "assg6_prog3.c"
                intopo();
                break;
            }
            case 4 : {
                #include "assg6_prog4.c"
                assg6prog4();
                break;
            }
            case 5 : {
                #include "assg6_prog5.c"
                assg6prog5();
                break;
            }
            case 6 : {
                #include "assg6_prog6.c"
                assg6prog6();
                break;
            }
            case 7 : {
                #include "assg6_prog7.c"
                assg6prog7();
                break;
            }
            case 8 : {
                goto menu;
                break;
            }
            case 9 : {
                printf("Thanks for checking out the questions");
                exit(1);
                break;
            }
            default : {
                printf("Wrong Input");
                break;
            }
        }
    }
    case 7 : {
        {
                printf("\nPress 1 to implement a stack which will support three additional operations - peekLowestElement, peekHighestElement and peekMiddleElement along with push and pop");
                printf("\nPress 2 to implement queue operations such as enqueue, dequeue, peek, Display Of Elements, IsEmpty, IsFull using static array");
                printf("\nPress 3 to implement queue operations such as enqueue, dequeue, peek, Display Of Elements, IsEmpty using Linked List");
                printf("\nPress 4 to reverse a queue by using function and stack");
                printf("\nPress 5 to implement circular queue operations such as enqueue, dequeue, peek, Display Of Elements, IsEmpty using static array");
                printf("\nPress 6 to implement circular queue operations such as enqueue, dequeue, peek, Display Of Elements, IsEmpty using linked list");
                printf("\nPress 7 to retun to Assignment List");
                printf("\nPress 8 to exit");
         }
         choice = input();
         switch (choice){
             case 1 : {
                 #include "assg7_prog1.c"
                 assg7prog1();
                 break;
             }
             case 2 : {
                 #include "assg7_prog2.c"
                 assg7prog2();
                 break;
             }
             case 3 :  {
                 #include "assg7_prog3.c"
                 assg7prog3();
                 break;
             }
             case 4 : {
                 #include "assg7_prog4.c"
                 assg7prog4();
                 break;
             }
             case 5 : {
                 #include "assg7_prog5.c"
                 assg7prog5();
                 break;
             }
             case 6: {
                 #include "assg7_prog6.c"
                 assg7prog6();
                 break;
             }
             case 7: {
                 goto menu;
                 break;
             }
             case 8 : {
                 printf("Thanks For Checking Out The Questions");
                 exit(1);
                 break;
             }
             default : {
                 printf("Wrong Input");
                 break;
             }
            }

        }
        case 8 : {
            printf("\nPress 1 to read an array of integers and search for an element using linear search");
            printf("\nPress 2 to read an array of integers and search for an element using binary search");
            printf("\nPress 3 to find whether integer hunt is present in an array container");
            printf("\nPress 4 ti find the number in array that more than or equal to n/2 times where n is length of sorted array");
            printf("\nPress 5 to search an element in a dynamic array of n integers using linear search and recursion");
            printf("\nPress 6 to search an element in a dynamic array of n integers usign binary search and recursion");
            printf("\nPress 7 to return back to assignment list");
            printf("\nPress 8 to exit");
        }
        choice = input();
        switch (choice) { 
            case 1 : {
              #include "assg8_prog1.c"
              assg8prog1();
              break;  
            }
            case 2 : {
                #include "assg8_prog2.c"
                assg8prog2();
                break;
            }
            case 3 : {
                #include "assg8_prog3.c"
                assg8prog3();
                break;
            }
            case 4 : {
                #include "assg8_prog4.c"
                assg8prog4();
                break;
            }
            case 5 : {
                #include "assg8_prog5.c"
                assg8prog5();
                break;
            }
            case 6 : {
                #include "assg8_prog6.c"
                assg8prog6();
                break;
            }
            case 7 : {
                goto menu;
                break;
            }
            case 8 : {
                printf("Thank You For Checking Out The QUestions");
                exit(1);
                break;
            }
            default : {
                printf("Wrong Input");
            }
        }
        case 9 : {
            printf("\nPress 1 to create a linked list that represets a polynomial express with single variable and display polynmoial using user functions for creation and display");
            printf("\nPress 2 to modify 1 to add 2 polynomials with single bariable and use same function as 1 for creation and display");
            printf("\nPress 3 to represent a sparse matrix using linked list");
            printf("\nPress 4 to find out transpose of a sparse matrix");
            printf("\nPress 5 to determine whether the given matrix is sparse or not");
            printf("\nPress 6 to determine whether the given matrix id lower triangular or upper triangular or tri-diagonal matrix");
            printf("\nPress 7 to add two sparse matrices");
            printf("\nPress 8 to multiply two sparse matrices");
            printf("\nPress 9 to return to Assignment List");
            printf("\n[ress 10 to exit");
        }
        choice = input();
        switch (choice){
            case 1 :  {
                #include "assg9_prog1.c"
                assg9prog1();
                break;
            }
            case 2 : {
                #include "assg9_prog2.c"
                assg9prog2();
                break;
            }
            case 3 : {
                #include "assg9_prog3.c"
                assg9prog3();
                break;
            }
            case 4 : {
                #include "assg9_prog4.c"
                assg9prog4();
                break;
            }
            case 5 : {
                #include "assg9_prog5.c"
                assg9prog5();
                break;
            }
            case 6 : {
                #include "assg9_prog6.c"
                assg9prog6();
                break;
            }
            case 7 : {
                #include "assg9_prog7.c"
                assg9prog7();
                break;
            }
            case 8 : {
                #include "assg9_prog8.c"
                assg9prog8();
                break;
            }
            case 9 : {
                goto menu;
                break;
            }
            case 10 : {
                printf("Thank You For Checking Out The Questions");
                exit(1);
                break;
            }
            default : {
                printf("Wrong Input");
                break;
            }

        }
        case 10 : {
            #include "assg10_prog1.c"
            assg10prog1();
            break;
        }
        case 11 : {
            printf("Thank You For Checking Out The Menu Driven Program");
            exit(1);
            break;
        }
        default : {
            printf("Wrong Input");
            break;
        }
    }
}
return 0;
} 
int input()
{
	int number;
	scanf("%d", &number);
	return number;
}

void output(float number)
{
	printf("%f", number);
}
