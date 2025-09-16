#include<stdio.h>
int main(){
int numbers[5];
int i;
printf("Ente 5 numbers :\n");
for(i=0;i<5;i++){
    printf("Element %d :",i+1);
    scanf("%d",&numbers[i]);
}    printf("\n You extern :\n");
    for(i=0;i<5;i++){
        printf("Element at index %d= %d\n:",i,numbers[i]);

    }
    return 0;
}
