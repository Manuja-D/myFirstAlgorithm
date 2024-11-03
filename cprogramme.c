#include <stdio.h>
#include <stdbool.h>


struct stackalgo{
    int top;
}a;



void push(int n, int array[], int len){
    if(a.top >= len -1){
        printf("Stack overflow cannot add more \n");
    }else{
        a.top++;
        array[a.top] = n;
        printf("%d is added :) \n \n " , n);
    }
}


int pop(int arr[],int len){
    if(a.top < 0){
        return -1;
    }else{
        int output = arr[a.top];
        a.top -- ;
        return output ;
    }
}

void display(int arr[],int len){
    if(a.top < 0){
        printf("Empty!");
    }else{
        for(int i = 0; i <len ; i++){
            printf("%d , " , arr[i]);

        }
    }

}

bool isfull(int len){
    return a.top == len -1;

}


int main(){
    a.top = -1;

    printf("Hello there lets start this programme \n \n ");

    int len;

    printf("Enter the maximum size of the array : ");

    scanf("%d", &len);

    int array[len];

    bool func = false;

    do{
        printf("If you want to add an item press 1 : \n");
        printf("If you want to remove the lastly added item press 2 :\n");
        printf("Press 3 to display all the values...");

        int ans;
        scanf("%d",&ans);


        if(ans == 1){
            int val;

            printf("Enter a value to add");

            scanf("%d" , &val);
            push(val,array,len);
            func = isfull(len);

        }else if(ans == 2){

            printf("%d was removed :(  \n", pop(array,len));

        }else if(ans == 3){
            display(array,len);

        }else{
            printf("Invalid input(should only contain integer values -_- )");

        }

    }while(!func);

    display(array,len);

    return 0;

}
