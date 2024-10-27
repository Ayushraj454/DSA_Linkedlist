#include <bits/stdc++.h>

#include <iostream>

using namespace std;

class Stack {
   public:
    int* arr;
    int cap;
    int top;
    float loadFactor;

    Stack() {
        cap = 16;
        arr = new int[cap];
        top = -1;
        loadFactor = 0.7;
    }

    void push(int val)
    {

        top++;

        arr[top] = val;
        verifyCapacity();

    }

    int pop()
    {
        if(top == -1)
        {
            throw out_of_range("pop called on empty stack");
        }
        int res = arr[top];
        top--;

        return res;
    }

    int peek()
    {
        if(top == -1)
        {
            throw out_of_range("peek called on  empty stack");
        }
        return arr[top];
    }

    int size()
    {
        return (top + 1);
    }

    bool empty()
    {
        return top == -1;
    }

    void print()
    {   for(int i = 0 ; i <= top ; i++)
        cout<<""<<arr[i]<<" ";
        cout<<endl;
    }

    private:

    void verifyCapacity()
    {
        if(top > loadFactor*cap)
        {
            int* aux = new int[2*cap];
            copy(arr,arr + cap , aux);
            arr = aux;
            cap = cap*2;

        }
    }

};

int main()
{
    Stack s;

    for(int j = 0 ; j <= 1000 ; j++)
    s.push(j);

    cout<<s.empty()<<endl;
    s.push(5);
    s.push(2);
    s.push(3);
    cout<<s.peek()<<endl;
    s.push(4);
    s.push(6);
    s.push(8);
    cout<<s.peek()<<endl;

    cout<<s.empty()<<endl;

    s.print(); 

    

    s.pop();
    s.pop();

    cout<<s.peek()<<endl;

    


}
