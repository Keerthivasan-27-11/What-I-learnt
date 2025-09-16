#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int b[MAX], n = 0,i;

void create();
void insert();
void deletion();
void search();
void display();

int main() {
    int c;
    char g = 'y';

    do {
        printf("\n1. Create\n2. Delete\n3. Search\n4. Insert\n5. Display\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1: create(); break;
            case 2: deletion(); break;
            case 3: search(); break;
            case 4: insert(); break;
            case 5: display(); break;
            case 6: exit(0);
            default: printf("\nEnter the correct choice.\n");
        }

        printf("\nDo you want to continue (y/n): ");
        scanf(" %c", &g);  // Space before %c to consume newline

    } while (g == 'y' || g == 'Y');

    return 0;
}

void create() {
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Maximum limit is %d.\n", MAX);
        n = 0;
        return;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
}

void deletion() {
    int pos;
    printf("Enter the position you want to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid location.\n");
        return;
    }

    for (i = pos; i < n - 1; i++) {
        b[i] = b[i + 1];
    }

    n--;
    printf("Element deleted.\n");
}

void search() {
    int e, found = 0;
    printf("Enter the element to be searched: ");
    scanf("%d", &e);

    for (i = 0; i < n; i++) {
        if (b[i] == e) {
            printf("Value found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value %d is not in the list.\n", e);
    }
}

void insert() {
    int pos, val;
    printf("Enter the position you need to insert: ");
    scanf("%d", &pos);

    if (pos < 0 || pos > n || n >= MAX) {
        printf("Invalid location or list is full.\n");
        return;
    }

    for (i = n; i > pos; i--) {
        b[i] = b[i - 1];
    }

    printf("Enter the element to insert: ");
    scanf("%d", &val);
    b[pos] = val;
    n++;

    printf("Element inserted.\n");
}

void display() {
    if (n == 0) {
        printf("List is empty.\n");
        return;
    }

    printf("The elements of the list are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}
