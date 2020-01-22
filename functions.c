#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void FunctionA()
{
 
    struct bank {
        int account;
        float balance;
    };

    struct person {
        char name[32];
        int age;
    };

    int a;
    char b;
    float c;

    printf("An int variable occupies %lu bytes of storage\n",sizeof(a));
    printf("the scruct 'person' occupies %lu bytes of storage\n",sizeof(struct person));

    puts("Memory locations:");
    printf("A is at %p\n",&a);
    printf("B is at %p\n",&b);
    printf("C is at %p\n",&c);

    struct person President = {"Iron Woman", 67};
    struct bank checking;

    checking.account = 1234;
    checking.balance = 2560.89;

    printf("Account %d has a balance of %.2f\n",
            checking.account,checking.balance);
    
    printf("%s was %d years old\n",President.name,President.age);

    int pokey;
    int *p;

    pokey = 987;
    p = &pokey;

    printf("The address of pokey is %p\n",&pokey);
    printf("The address of p is %p\n",p);

    printf("The address of pokey is %d\n",pokey);
    printf("The address of p is %d\n",*p);

}