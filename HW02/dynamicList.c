#include <stdio.h>
#include <stdlib.h>

struct stack {
       int data;
       struct stack *next;
};

struct stack *create(struct stack *, int);/*add item*/
struct stack *createfirst(struct stack *, int);/*adding the first item*/
void list(struct stack *);/*viewing a list*/
void del(struct stack *);/*deleting the first element*/
void delAll(struct stack *);/*deleting the entire list*/
int seek(struct stack *, int);/*search for an item in the list*/

main() {
    int n;
    char str[80];
    struct stack *head;
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
    free(head);
    printf("\nGoodbye!\n");
}

struct stack *createfirst(struct stack *head, int x) {
       struct stack *item;
       item = (struct stack *)malloc(sizeof(struct stack));
       item->next = NULL;
       item->data = x;
       return item;

}

struct stack *create(struct stack *head, int x) {
    while (head->next != NULL) {
        head = head->next;
    }
    struct stack *item;
    item = (struct stack *)malloc(sizeof(struct stack));
    item->next = NULL;
    item->data = x;
    head->next = item;
    return item;
}

void list(struct stack *p){
     while (p != NULL) {
           printf("%d\n", p->data);
           p = p->next;
     }
}

void del(struct stack *p){
     while (p->next->next != NULL) {
           p = p->next;
     }
     p->next = NULL;
}

void delAll(struct stack *p){
     p == NULL;
}

int seek(struct stack *p, int x) {
    int h = 0, flag = -1;
     while (p != NULL) {
        h++;
        if (p->data == x) {flag = h; break;}
        p = p->next;
     }
     return flag;
}
