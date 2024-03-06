#include <stdio.h>
#include <stdlib.h>

void showMenu(){
    printf("*** Welcome to My Calculator ***\n");
    printf("1. Add\n");
    printf("2. Sub\n");
    printf("3. Mul\n");
    printf("4. Div\n");
    printf("5. Mod\n");
    printf("6. Exit\n");
    printf("Enter your choice : \n");
}

void add() {
    int n1, n2;
    printf("Enter two numbers : \n");
    scanf("%d%d",&n1,&n2);
    printf("Sum=%d \n", (n1+n2));
}

/*
void sub() {
    int n1, n2;
    printf("Enter two numbers : \n");
    scanf("%d%d",&n1,&n2);
    printf("Sub=%d", (n1-n2));
}

void mul() {
    int n1, n2;
    printf("Enter two numbers : \n");
    scanf("%d%d", &n1,&n2);
    printf("Mul=%d", (n1*n2));
}

void div() {
    int n1, n2;
    printf("Enter two numbers : \n");
    scanf("%d%d", &n1,&n2);
    printf("Div=%d", (n1/n2));
}

void mod(){
    int n1, n2;
    printf("Enter two numbers : \n");
    scanf("%d%d",&n1,&n2);
    printf("mod=%d", (n1%n2));
}*/

int main() {
    int choice;
    do{
        //system("cls");
        showMenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            //sub();
            break;
        case 3:
            //mul();
            break;
        case 4:
           // div();
            break;
        case 5:
            //mod();
            break;   
        case 6:
           break;    
        default:
            printf("Invalid choice, try again .\n");
            break;
        }

    }while(choice != 6);

    return 0;
}