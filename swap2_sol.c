#include <stdio.h>

/*
 * swap where the pointers point to 
 */ 


//TODO: declare the function here
void swap (int ** a, int ** b);


int main(int argc, char **argv)
{
    int val0 = 1;
    int val1 = 2;

    int *p0 = &val0;
    int *p1 = &val1; 
    
    // TODO: call your swap function here
    // (you need to decide what the arguments are
    //  based on how you defined the function) 
     swap( &p0, &p1 );

    if((*p0) != val1)
    {
        printf("first pointer not properly swapped\n");
    }
    else if((*p1) != val0)
    {
        printf("second value not properly swapped\n");
    }
    else
    {
        printf("Swap: OK\n");
    }
    return 0;
}

//TODO: implement/define your function here 

void swap (int ** a, int ** b){
    int * tmp = *a;
    *a = *b;
    *b = tmp;
}



