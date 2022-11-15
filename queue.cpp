#include <iostream>

using namespace std;
#define n 100 

class queue {
    int *arr;
    int back;
    int front;
    
    public:
    queue(){
        arr= new int[n];
        back=-1;
        front=-1;
    }
    
    void push(int x){
        if(back==n-1)
        {
            cout<<"queue is overflow";
            return;
        }
         back++;
         arr[back]=x;
        if(front==-1){
            front++;
        }
        
    }
    
    void pop(){
        if(front==-1 || front>back){
            cout<<"it is empty";
            return;
        }
            
        
        front--;
        
    }
    int peek(){
        if(front==-1 || front>back){
             return -1;
             }
        else
           return arr[front];
    }
           

    bool isempty(){
        if(front==-1 || front>back){
          
            return true;
        }
        else
        return false;
        
    }   
    
};

int main()
{
    queue q;
    q.push(9);
    q.pop();
    q.push(8);
    q.pop();
    if(q.peek()==-1)
    {
        cout<<"Queue is Empty";
    }
    else
    cout<<q.peek();

    return 0;
}
