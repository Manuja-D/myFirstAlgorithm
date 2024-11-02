#include <stdio.h>
#include <stdbool.h>


struct stackalgo{
    int top;
}a;



void push(int n, int array[], int len){
    a.top++;
    array[a.top] = n;
    printf("%d is added :) \n \n " , n);

}


int pop(int arr[],int len){
    int output = arr[a.top];
    a.top -- ;
    return output ;

}

void display(int arr[],int len){
    for(int i = 0; i <len ; i++){
        printf("%d , " , arr[i]);
    }
}

int isfull(int len){
    if(a.top == len){
        return true;
    }else{
        return false;
    }
}




int main(){
    a.top = -1;

    printf("Hello there lets start this programme \n \n ");

    int len;

    printf("Enter the maximum size of the array : ");

    scanf("%d", &len);

    int array[len];

    bool func = isfull(len);

    do{

        printf("If you want to add an item press 1 : \n");
        printf("If you want to remove the lastly added item press 2 :\n");

        int ans;
        scanf("%d",&ans);

        if(ans == 1){
            int val;
            printf("Enter a value to add");
            scanf("%d" , &val);
            push(val,array,len);
            func = isfull(len);

        }else{
            printf("%d was removed :(  \n", pop(array,len));
        }

    }while(func);


    display(array,len);

    return 0;

}


