#include <stdio.h>

int main() {
    //declare and intialize variables
    int i = 1;
    char c = 1;
    long l = 1;

    //print addresses
    printf("addresses of variables:\n");
    printf("int hex: %p\nint dec: %lu\n",&i,&i);
    printf("char hex: %p\nchar dec: %lu\n",&c,&c);
    printf("long hex: %p\nlong dec: %lu\n\n",&l,&l);

    //declare and intialize pointers
    int *ip = &i;
    char *cp = &c;
    long *lp = &l;

    //print pointer values
    printf("values of pointers:\n");
    printf("int hex: %p\nint dec: %lu\n",ip,ip);
    printf("char hex: %p\nchar dec: %lu\n",cp,cp);
    printf("long hex: %p\nlong dec: %lu\n\n",lp,lp);

    //modifying variables through pointers
    *ip = 2;
    *cp = 2;
    *lp = 2;
    printf("modifying variables through pointers\n");
    printf("int value: %d\n",i);
    printf("char value: %d\n",(int)c);
    printf("long value: %ld\n\n",l);

    //making new pointers and an unsigned int
    unsigned int ui = 1;
    int *uip1 = &ui;
    char *uip2 = &ui;

    //printing new addresses/values
    printf("new addresses/values\n");
    printf("uip1: %p points to: %d\n",uip1,*uip1);
    printf("uip2: %p points to: %d\n\n",uip2,*uip2);

    //printing the unsigned int
    printf("printing the unsigned int\n");
    printf("ui as hex: %x\n",ui);
    printf("ui as dec: %u\n\n",ui);

    //printing each byte of the unsigned int
    printf("each byte of the unsigned int\n");
    int j;
    for(j = 0; j < sizeof(unsigned int); j++) {
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(uip2+j),j,*(uip2+j));
    }
    printf("\n");

    //sames as before but adding 1 first to each byte
    printf("each byte of the unsigned int except adding 1\n");
    for(j = 0; j < sizeof(unsigned int); j++) {
        *(uip2+j) += 1;
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(uip2+j),j,*(uip2+j));
    }
    printf("\n");

    //same as before but adding 16 to the each byte
    printf("each byte of the unsigned int except adding 16\n");
    for(j = 0; j < sizeof(unsigned int); j++) {
        *(uip2+j) += 16;
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(uip2+j),j,*(uip2+j));
    }
    printf("\n");


    //more experamentation

    ui = 10000000000;
    printf("each byte of the unsigned int after set to 10^10\n");
    for(j = 0; j < sizeof(unsigned int); j++) {
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(uip2+j),j,*(uip2+j));
    }
    printf("\n");

    //sames as before but adding 1 first to each byte
    printf("each byte of the unsigned int except adding 1\n");
    for(j = 0; j < sizeof(unsigned int); j++) {
        *(uip2+j) += 1;
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(uip2+j),j,*(uip2+j));
    }
    printf("\n");

    //same as before but adding 16 to the each byte
    printf("each byte of the unsigned int except adding 16\n");
    for(j = 0; j < sizeof(unsigned int); j++) {
        *(uip2+j) += 16;
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(uip2+j),j,*(uip2+j));
    }
    printf("\n");


    //even more experimentation

    i = (1<<31)+1;
    int *ip2 = &i;
    printf("each byte of the int after set to minimum int\n");
    for(j = 0; j < sizeof(int); j++) {
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(ip2+j),j,*(ip2+j));
    }
    printf("the num %d\n",i);

    //sames as before but adding 1 first to each byte
    printf("each byte of the int except adding 1\n");
    for(j = 0; j < sizeof(int); j++) {
        *(ip2+j) += 1;
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(ip2+j),j,*(ip2+j));
    }
    printf("the num %d\n",i);

    //same as before but adding 16 to the each byte
    printf("each byte of the int except adding 16\n");
    for(j = 0; j < sizeof(int); j++) {
        *(ip2+j) += 16;
        printf("byte %d hex: %hhx  byte %d dec: %hhu\n",j,*(ip2+j),j,*(ip2+j));
    }
    printf("\n");
    printf("the num %d\n",i);

    //I don't really see what is going on for ints

    return 0;
}
