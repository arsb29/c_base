#include <stdio.h>
#include <stdlib.h>

struct stack {
       int data;
       struct stack *next;
};

struct stack *create(struct stack *, int);// присоединение элемента к голове, возврат адреса головы
struct stack *createfirst(struct stack *, int);
void list(struct stack *); // просмотр стека
void del(struct stack *);
void delAll(struct stack *);
int seek(struct stack *, int);

main() {
    int i, n, m, e;
    char str[80];
    struct stack *head;
    struct stack *k; // адрес, указывающий на голову стека
    head = NULL;
    printf("Hello!\n ");
    printf("\nAdd the first item in the list: ");
    scanf("%s", &str);
    n = atof(str);
    head = createfirst(head, n);

    n = 0;
    while(n != 6) {
        printf("\n1. Add item\n2. Delete last item\n3. See list\n4. Delete all\n5. Seek item\n6. Exit\n\nOption: ");
        scanf("%s", &str);
        n = atof(str);
        while (n<1 || n>6) {
            printf("\nError. Try again\nOption: ");
            scanf("%s", &str);
            n = atof(str);
        }
        switch(n) {
        case 1:
            printf("\nAdd new item: ");
            scanf("%s", &str);
            n = atof(str);
            create(head, n);
            break;

        case 2:
            if (head->next == NULL) {
                printf("\nLast element was deleted\n");
                printf("\nList is empty\n\n1. Add new item\n2. Exit\n\nOption: ");
                scanf("%s", &str);
                n = atof(str);
                while (n<1 || n>2) {
                    printf("\nError. Try again\nOption: ");
                    scanf("%s", &str);
                    n = atof(str);
                }
                if (n==2) {n = 6; break;}
                else {
                    printf("\nAdd the first item in the list: ");
                    scanf("%s", &str);
                    n = atof(str);
                    head = createfirst(head, n);
                }
            }
            else {
            del(head);
            printf("\nLast element was deleted\n");
            }
            break;

        case 3:
            printf("\n");
            list(head);
            break;

        case 4:
            delAll(head);
            printf("\nList is empty\n\n1. Add new item\n2. Exit\n\nOption: ");
            scanf("%s", &str);
            n = atof(str);
            while (n<1 || n>2) {
                printf("\nError. Try again\nOption: ");
                scanf("%s", &str);
                n = atof(str);
            }
            if (n==2) {n = 6; break;}
            else {
                printf("\nAdd the first item in the list: ");
                scanf("%s", &str);
                n = atof(str);
                head = createfirst(head, n);
            }
            break;

        case 5:
            printf("\nWhich item to find: ");
            scanf("%s", &str);
            n = atof(str);
            int p = seek(head,n);
            if (p == -1)  printf("\nOops... This item does not exist\n");
            else printf("\nItem %d has index %d\n", n, seek(head,n));
            break;

        }
    }
    printf("\nGoodbye!\n");
}

struct stack *createfirst(struct stack *head, int x) {
       struct stack *item; // указатель на новую структуру
       item = (struct stack *)malloc(sizeof(struct stack));
       item->next = NULL;
       item->data = x;
       return item;

}

struct stack *create(struct stack *head, int x) {
    while (head->next != NULL) { // пока не конец стека
        head = head->next; // продвижение по списку
    }
    struct stack *item; // указатель на новую структуру
    item = (struct stack *)malloc(sizeof(struct stack)); // выделяем память
    item->next = NULL;
    item->data = x;
    head->next = item;
    return item;
}

void list(struct stack *p){
     while (p != NULL) { // пока не конец стека
           printf("%d\n", p->data);
           p = p->next; // продвижение по списку
     }
}

void del(struct stack *p){
     while (p->next->next != NULL) { // пока не конец стека
           p = p->next;
     }
     p->next = NULL;
}

void delAll(struct stack *p){
     p == NULL;
}

int seek(struct stack *p, int x) {
    int h = 0;
    int flag = -1;
     while (p != NULL) { // пока не конец стека
        h++;
        if (p->data == x) {flag = h; break;}
        p = p->next; // продвижение по списку
     }
     return flag;
}
