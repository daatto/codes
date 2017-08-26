#include <bits/stdc++.h>

using namespace std;
#define MAX_SIZE 10

 int item[MAX_SIZE];
 int tail=0;
 int head=0;
void enqueue(int data){
    item[tail] = data;
    tail = (tail+1)%MAX_SIZE;
}


int dequeue(){
    int temp;
    temp = item[head];
    head = (head+1)%MAX_SIZE;
    return temp;
}


int Qsize(){
    return (tail - head);
}




bool isEmpty(){
    if(abs(head) == abs(tail)){
        return true;
    }else{
        return false;
    }
}

bool isFull(){
    if(head==(tail+1)%MAX_SIZE){
        return true;
    }else{
        return false;
    }
}
int main()
{
    int n;
    for(int i=0;i<10;i++)
    {
        cin>>n;
        enqueue(n);
    }
    cout<<dequeue()<<endl;
    enqueue(3);
    for(int i=0;i<10;i++)
    {

        cout<<dequeue()<<endl;
    }

}


