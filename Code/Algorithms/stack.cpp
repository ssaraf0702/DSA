#include<iostream>
#include<stack>

using namespace std;

class Stack{
    int size;
    int *arr;
    int top;

    public: 
      Stack()
      {
         top = -1;
         size = 10000;
         arr = new int[size];

      }

      void push(int x)
      {
          arr[++top] = x;

      }
      int pop()
      {
          int res = arr[top];
          top--;
          return res;
      }
      int Top()
      {
          return (arr[top]);
      }
      int Size()
      {
          return (top+1);
      }
};

int main()
{
  Stack s;
  s.push(5);
  s.push(1000);
  s.push(10);
  s.push(1);
  s.push(7);
  s.push(2);
  cout <<  s.Size() << endl;
  cout <<  s.Top()  << endl;
  cout <<  s.pop()  << endl;
  cout <<  s.Size()   << endl;
  cout <<  s.Top()   << endl;
     
    return 0;
}