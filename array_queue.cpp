#include<iostream>
using namespace std;

int array[10];



int front = 1;
int rear = 1;

bool IsEmpty(){
    if(rear<=sizeof(array)/sizeof(array[0]))
        return 1;
    else
        return 0;
    }


void enqueue(int elem){
    if(IsEmpty()==true){
        while(rear)
        {array[rear] = elem;
        rear++;
        break;}
    }
    }

void dequeue(){

        array[1]=NULL;
        rear--;
        for(int k = 2;array[k]!=NULL;k++)
        {array[k-1] = array[k];
        array[k]=NULL;}

    }


int main(){




    enqueue(4);
    enqueue(10);
    enqueue(9);
    enqueue(3);
    enqueue(5);
    enqueue(16);
    enqueue(32);
    enqueue(10);
    enqueue(7);
    enqueue(100);


    dequeue();
    enqueue(15);
    dequeue();
    dequeue();
    enqueue(121);
    enqueue(50);
    //dequeue();
    //dequeue();
    //dequeue();
    //dequeue();



   for(int i =  1;array[i]!=NULL;i++)
    cout<<array[i]<<endl;

        return 0;

    }
