#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void beginsert();
void lastinsert();
void begin_delete();
void last_delete();
void search();
void display();

int main() {
    int choice = 0;
    while (choice != 7) {
        printf("\n********Main Menu********\n");
        printf("1. Insert in beginning\n");
        printf("2. Insert at last\n");
        printf("3. Delete from beginning\n");
        printf("4. Delete at the last\n");
        printf("5. Search for an element\n");
        printf("6. Show\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: beginsert(); break;
            case 2: lastinsert(); break;
            case 3: begin_delete(); break;
            case 4: last_delete(); break;
            case 5: search(); break;
            case 6: display(); break;
            case 7: printf("Exiting...\n"); exit(0);
            default: printf("Please enter a valid choice\n");
        }
    }
    return 0;
}

void beginsert() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
        return;
    }
    printf("Enter the node data: ");
    scanf("%d", &item);
    ptr->data = item;
    if (head == NULL) {
        head = ptr;
        ptr->next = head;
    } else {
        temp = head;
        while (temp->next != head)
            temp = temp->next;
        ptr->next = head;
        temp->next = ptr;
        head = ptr;
    }
    printf("Node inserted at beginning.\n");
}

void lastinsert() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW\n");
        return;
    }
    printf("Enter data: ");
    scanf("%d", &item);
    ptr->data = item;
    if (head == NULL) {
        head = ptr;
        ptr->next = head;
    } else {
        temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = ptr;
        ptr->next = head;
    }
    printf("Node inserted at last\n");
}

void begin_delete() {
    struct node *ptr;
    if (head == NULL) {
        printf("\nUNDERFLOW: List is empty\n");
        return;
    }
    if (head->next == head) {
        ptr = head;
        head = NULL;
        free(ptr);
        printf("Node deleted from beginning\n");
        return;
    }
    ptr = head;
    struct node *temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = head->next;
    head = head->next;
    free(ptr);
    printf("Node deleted from beginning\n");
}

void last_delete() {
    struct node *ptr, *preptr;
    if (head == NULL) {
        printf("\nUNDERFLOW: List is empty\n");
        return;
    }
    if (head->next == head) {
        ptr = head;
        head = NULL;
        free(ptr);
        printf("Node deleted from last\n");
        return;
    }
    ptr = head;
    while (ptr->next != head) {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = head;
    free(ptr);
    printf("Node deleted from last\n");
}

void search() {
    struct node *ptr;
    int item, i = 1, flag = 0;
    if (head == NULL) {
        printf("\nEmpty list\n");
        return;
    }
    printf("Enter item to search: ");
    scanf("%d", &item);
    ptr = head;
    do {
        if (ptr->data == item) {
            printf("Item found at location %d\n", i);
            flag = 1;
            break;
        }
        ptr = ptr->next;
        i++;
    } while (ptr != head);
    if (!flag) {
        printf("Item not found in the list\n");
    }
}

void display() {
    struct node *ptr;
    if (head == NULL) {
        printf("\nList is empty.\n");
        return;
    }
    printf("\nPrinting values:\n");
    ptr = head;
    do {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
