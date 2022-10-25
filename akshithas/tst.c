#include<stdio.h>
#include<stdbool.h>
int linersearch(int list[], int sk, int size);
int main(){

    int arr[20];
    int value;
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d value of array: ", i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the Search Key: ");
    scanf("%d",&value); 
    
    printf("Possition is %d", linersearch(arr, value, n));
}

int linersearch(int list[], int sk, int size){

    int position = -1;
    int index = 0;
    bool found = false;

    while(index  < size && found == false ){
        if(list[index] == sk){
            found = true;
            position = index;
        }
        index++;

    }

    return position;


}