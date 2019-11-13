#include <stdio.h>

struct pet {
    int age;
    char *name;
    double weight;
    char *type;
};

void printPet(struct pet p);
void agePet(struct pet *p);

int main(void) {

    struct pet pink;
    pink.age = 123;
    pink.name = "Pink";
    pink.weight = 10;
    pink.type = "Cat";
    
    struct pet floyd;
    floyd.age = 123;
    floyd.name = "Floyd";
    floyd.weight = 5;
    floyd.type = "Cat";
    
    
    printPet(pink);
    printPet(floyd);
    
    agePet(&pink);
    
    printPet(pink);
    
}

void printPet(struct pet p) {
    printf("%s is a %s that weighs %lfkg and is %d years old\n", p.name, p.type, p.weight, p.age);
}

void agePet(struct pet *p) {
    p->age += 1;
    p->weight = p->weight *(1.0*p->age)/(p->age - 1);
}












