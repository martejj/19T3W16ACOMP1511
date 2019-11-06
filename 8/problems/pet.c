#include <stdio.h>
#include <stdlib.h>

struct pet {
    int age;
    char name[100];
    double weight;
    char type[100];
};

void printPet(Pet *p);
void agePet(struct pet *p);
struct pet *newPet();

int main(void) {

    struct pet *p = newPet();
    
    printPet(p);
    
}

void printPet(struct pet *p) {
    printf("%s is a %s that weighs %lfkg and is %d years old\n", p->name, p->type, p->weight, p->age);
}

void agePet(struct pet *p) {
    p->age += 1;
    p->weight = p->weight *(1.0*p->age)/(p->age - 1);
}

struct pet *newPet() {
    
    struct pet *p = malloc(sizeof(struct pet));
    
    printf("Age:\n");
    scanf("%d", &p->age);
    printf("Name:\n");
    scanf("%s", p->name);
    printf("Type:\n");
    scanf("%s", p->type);
    printf("Weight:\n");
    scanf("%lf", &p->weight);
    
    return p;
    
}











