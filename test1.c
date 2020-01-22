#include <stdio.h>
#include <time.h>

int checkAdress(int *ptr);
int max(int num1, int num2);
void getSeconds(unsigned long *par);

int main () {

    // Variables declaration and assignment:
    int c;
    int var1 = 20;          

    // Pointers declaration and assignment:
    int *ip2 = NULL;                
    unsigned int *ip = NULL;


    printf("the value for VAR1 is: %d\n",var1);
    printf("the integer's hexadecimal for VAR1 is: %x\n",var1);

    printf("the value for pointer ip is: %p\n",ip);
    printf("the value for pointer ip2 is: %p\n",ip2);

    printf("\nChecking the addresses for pointers\n");
    printf("the address for pointer ip is: %p\n",&ip);
    printf("the address for pointer ip2 is: %p\n",&ip2);

    printf("\nAssigning address of VAR1 to pointer ip: %p\n",(void *)*ip);
    *ip = &var1;
    printf("the address for pointer ip is: %p\n",&ip);
    printf("the value for pointer ip is: %p\n",ip);

/*
    printf("the address for VAR1 is: %x\n", &var1);
    printf("the address for pointer VAR1 is: %x\n", &ip);
    printf("\n\n");

    *ip = NULL;
    printf("assigning NULL to pointer \n");
    printf("the value for pointer is: %d\n",ip);
    printf("\n\n");

    *ip = &var1;
    printf("assigning NULL to pointer \n");
    printf("the address for pointer VAR1 is: %x\n", &ip);    

    ip = &var1;             // store address of var1 in pointer variable

    //printf("the value for *ip is: %d\n",ip);

    // printf("acess the value stored in var1 using pointer: %d\n\n", *ip);

/*
    printf("Enter a value :");
    c = getchar();

    printf("\nValue entered: ");
    putchar(c);

    unsigned long sec;
    getSeconds( &sec );

    printf("Seconds: %d",sec);
*/
    return 0;
}

void getSeconds(unsigned long *par){
    *par = time( NULL );
}

int checkAddress(int *ptr){

    //printf("value stored in pointer: %x\n", ptr);
    return 0;
}


int max(int num1, int num2){

    int result;

    if (num1 > num2)
        result = num1;
    else
        result = num2;
            
    return result;
}