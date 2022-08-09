#include <stdio.h>
int Maxsize=7;
int stack[7];
int top=-1;
int isEmpty(){

    if(top==-1)
    return 1;
    else
    return 0;
}

int isFull(){
    if(top==Maxsize)
    return 1;
    else
    return 0;
}
int peek(){
    return stack[top];
}
int pop(){
    int data;
    if(!isEmpty()){
    data=stack[top];
    top=top-1;
    return data;
    }
    else{
    printf("Stack is empty!!\n");
}
}
int push(int data){
    if(!isFull()){
        top=top+1;
        stack[top]=data;

    }
    else{
        printf("Stack is full!!\n");
    }
}
int main(void) {
	// push into the stack
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);

  /* int y=pop();
    printf("%d",y);
	*/
    printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");

    //print satck data

    /*while(!isEmpty()){
        int data=pop();
        printf("%d\n",data);
    }*/
    printf("Stack is Full: %s\n", isFull()?"True":"False");
    printf("Stack is Empty: %s\n", isEmpty()?"True":"Fatse");

    return 0;
}

