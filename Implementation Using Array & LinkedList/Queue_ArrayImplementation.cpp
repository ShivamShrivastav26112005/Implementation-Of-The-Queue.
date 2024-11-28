// #include<iostream>
// using namespace std;
// class Queue
// {
//     public:
//     int f;
//     int b;
//     int arr[5];
//     Queue()
//     {
//         f=0;
//         b=0;
//     }

//     void push(int val)
//     {
//         if(b==5)
//         {
//             cout<<"Queue is full "<<endl;
//             return ;
//         }
//         arr[b]=val;
//         b++;
//     }

//     void pop()
//     {
//         if(f-b==0)
//         {
//             cout<<"Queue is empty "<<endl;
//             return ;
//         }
//         f++;
//     }

//     int front()
//     {
//         if(f-b==0)
//         {
//             cout<<"Queue is empty "<<endl;
//             return -1;
//         }
//         return arr[f];
//     }

//     int back()
//     {
//         if(f-b==0)
//         {
//             cout<<"Queue is empty "<<endl;
//             return -1;
//         }
//         return arr[b-1];
//     }

//     int size()
//     {
//         return b-f;
//     }

//     int empty()
//     {
//         if(f-b==0) return true;
//         else return false;
//     }

//     void display()
//     {
//         for(int i=f; i<b; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main()
// {
//         Queue q;
//         q.push(10);
//         q.push(20);
//         q.push(30);
//         q.push(40);
//         q.display();
//         q.push(50);
//         q.push(60);
//         q.display();
//         q.pop();
//         q.display();
// }







// queues -: all operations 
// queue is implemented as array 

// #include<iostream>
// #include<array>
// using namespace std;
// class Queue
// {
//     public:
//     int f;
//     int b;
//     int arr[5];
//     Queue() // constructor 
//     {
//         f=0;
//         b=0;
//     }

// int push(int val)
// {
//     if(b==5)
//     {
//         cout<<"Queue is full "<<endl;
//         return -1;
//     }
//         arr[b]=val;
//         b++;
// }

// void pop()
// {   // (b-f) is equal to (size)
//     if(b-f==0) // From (b-f) we find size of the array means if size==0 then array/queue is empty 
//     {
//         cout<<"Queue is empty"<<endl;
//         return ;
//     }
//     f++;
// }

// int front()
// {
//     if(b-f==0)
//     {
//         cout<<"Queue is empty "<<endl;
//         return -1;
//     }
//     return arr[f];
// }

// int back()
// {
//     if(f-b==0)
//      {
//          cout<<"Queue is empty "<<endl;
//         return -1;
//     }
//     return arr[b-1];
// }

// int size()
// {
//     return b-f;
// }

// bool empty()
// {
//     if(f-b==0) return true;
//     else return false;
// }

// void display()
// {
//     for(int i=f; i<b; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// };

// int main()
// {
//     // Queue q;
//     // q.push(10);
//     // // cout<<endl;
//     // // q.display();
//     // q.push(20);
//     // q.push(30);
//     // cout<<q.size()<<endl;
//     // q.push(40);
//     // q.pop();
//     // // q.display();
//     // // cout<<q.size()<<endl;
//     // q.push(50);
//     // q.push(60);
//     // q.display();
//     // cout<<endl;
//     // q.pop();
//     // q.display();
//     // cout<<endl;
//     // // cout<<q.size()<<endl;
//     // cout<<endl;
//     // cout<<q.back();
//     // cout<<endl;
//     // cout<<q.front();





//     Queue q;
//         q.push(10);
//         q.push(20);
//         q.push(30);
//         q.push(40);
//         q.display();
//         q.push(50);
//         q.push(60);
//         q.display();
//         q.pop();
//         q.display();
// }





// // 10 20 30 40 
// // Queue is full
// // 10 20 30 40 50
// // 20 30 40 50










// in this code we declare size of the queue in the main function 


#include<iostream>
#include<array>
#include<vector>
using namespace std;
class Queue
{
    public:
    int f;
    int b;
    vector<int>arr; // arr vector is now empty 
    Queue(int size) // constructor  size is basically our queue'size
    {
        f=0;
        b=0;
        vector<int>v(size);   // v is vector name size is a vector size 
        arr=v;
    }

int push(int val)
{
    if(b==arr.size())
    {
        cout<<"Queue is full "<<endl;
        return -1;
    }
        arr[b]=val;
        b++;
}

void pop()
{   // (b-f) is equal to (size)
    if(b-f==0) // From (b-f) we find size of the array means if size==0 then array/queue is empty 
    {
        cout<<"Queue is empty"<<endl;
        return ;
    }
    f++;
}

int front()
{
    if(b-f==0)
    {
        cout<<"Queue is empty "<<endl;
        return -1;
    }
    return arr[f];
}

int back()
{
    if(f-b==0)
     {
         cout<<"Queue is empty "<<endl;
        return -1;
    }
    return arr[b-1];
}

int size()
{
    return b-f;
}

bool empty()
{
    if(f-b==0) return true;
    else return false;
}

void display()
{
    for(int i=f; i<b; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};

int main()
{
    // hm yhi q ka size set karna chahte h size = 5 , in constructor we use vectors 
    Queue q(5); // here we declare queue with their size then we make a vector to implementent queue
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.display();
        q.push(50);
        q.push(60);
        q.display();
        q.pop();
        q.display();
}



// 10 20 30 40 
// Queue is full
// 10 20 30 40 50
// 20 30 40 50
