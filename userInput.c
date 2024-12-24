#include <stdio.h>
#include <string.h>

int main(){

    char name[25]; //bytes 
    int age;

    printf("What is your name?\n");
    //scanf("%s", &name);
    fgets(name, 25, stdin); // Reads white spaces but includes new line char
    name[strlen(name)-1] = '\0'; // Removes new line char

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("Hello %s, You are %d years old", name, age);

    return 0;
}