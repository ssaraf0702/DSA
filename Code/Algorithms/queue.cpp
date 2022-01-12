#include<iostream>
#include<queue>

using namespace std;

class Queue{
    int size;
    int *arr;
    int front;
    int end;
    int cursize;

    public: 
      Queue()
      {
         front = end = -1;
         size = 100;
         arr = new int[size];
         cursize = 0;
      }

      void push(int x)
      {
          if(cursize == size)
          {
              cout << "full..............." << endl;
              exit(1);
          }
          if(end == -1)
          {
              front = 0;
              end = 0;
          }

          else{
           end = (end+1)%size;
          } 
          arr[end] = x;
          cursize++;
      }
      int pop()
      {
          if(front == -1)
          {
              cout << "empty..........." << endl;
          }
          int res = arr[front];
          if(cursize == 1)
          {
              front = -1;
              end = -1;
          }
          else{
          front++;}
          cursize--;
          return res;
      }
      int Top()
      {
          if(front == -1)
          {
              cout << "empty..........." << endl;
              exit(1);
          }
          return (arr[front]);
      }
      int Size()
      {
          return cursize;
      }
};

int main()
{
  Queue q;
  q.push(5);
  q.push(1000);
  q.push(10);
  q.push(1);
  q.push(7);
  q.push(2);
  cout <<  q.Size() << endl;
  cout <<  q.Top()  << endl;
  cout <<  q.pop()  << endl;
  cout <<  q.Size()   << endl;
  cout <<  q.Top()   << endl;
     
    return 0;
}