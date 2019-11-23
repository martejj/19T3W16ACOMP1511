#include<stdio.h>

#include "hello.h"

void sayHelloTwice(char *name) {
    sayHello(name);
    sayHello(name);
}

void sayHello(char *name) {
    printf("Hello %s\n", name);
}
