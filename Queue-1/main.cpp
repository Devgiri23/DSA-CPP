#include<iostream>
using namespace std;
#include<queue>
//-----------------------------------------------------Queue STL-----------------------------------------------


/*
int main(){
	
	queue<int> q;
	
	q.push(11);
	q.push(13);
	q.push(14);
	q.push(15);
	
	cout<<q.size()<<endl;
	
	q.pop();
	
	
	cout<<q.size()<<endl;
	
	if(q.empty()){
		cout<<"empty"<<endl;
	}
	else{
		cout<<"not empty"<<endl;
	}
	
	
	cout<<q.front()<<endl;
	
	
}*/


//========================================================================================================================================================
//-------------------------------IMPLEMENTATION OF QUEUE BY ARRAY-----------------------------------------------------------------------------------------
/*
class Queue{

	int* arr;
	int size;
	int qfront;
	int rear;
public:		

	Queue(){
		size=10001;
		arr=new int(size);
		qfront=0;
		rear=0;
	}
	
	
	//function if Queue is empty or nmot
	
	bool isEmpty(){
		if(qfront==rear){
			return true;
			
		}
		else{
			return false;
			
		}
		
	}
	
	//for push operation
	void enQueue(int data){
		if(rear==size){
			cout<<"Queue is already full"<<endl;
		}
		else{
			arr[rear]=data;
			rear++;
			
		}
		
	}
	
	
	//for pop operation
	int deQueue(){
		if(qfront==rear){
			cout<<"Queue is emoty"<<endl;
		}
		
		else{
			int ans=arr[qfront];
			arr[qfront]=-1;
			qfront++;
			if(qfront==rear){
				qfront=0;
				rear=0;
				return ans;
			}
			
		}
		
 	}
	
	//for front element
	int front(){
		if(qfront==rear){
			return -1;
		}
		else{
			return arr[qfront];
		}
		return arr[qfront];
	}
};
int main(){
	Queue q;
	q.enQueue(5);
	q.enQueue(6);
	q.enQueue(7);
	q.enQueue(8);
	q.enQueue(9);
	  
	cout<<"pop first element----"<< q.deQueue()<<endl; 
	cout<<"front element after poping--"<<q.front()<<endl;
	
}

*/

//===================================================================================================================================================
//-----------------------------------Circular queue--------------------------------------------------------------------------------------------------------
/*
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //to check whther queue is full
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
            //cout << "Queue is Full";
            return false;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            
        }
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }
};
int main(){
    CircularQueue q(4);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	
	cout<<q.dequeue()<<endl;
}



*/
//================================================================================================================================
//------------------------------------------------------------DEQUE------------------------------------------------------

class Deque
{	
    int *arr;
    int front;
    int rear;
    int size;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushFront(int x)
    {
        //check full or not
        if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0;
        }
        else if(front == 0 && rear != size-1) {
            front = size-1;
        } 
        else
        {
            front--;
        }
        arr[front] = x;
        return true;
    }

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        if( isFull() ) {
            return false;
        }
        else if(isEmpty()) {
            front  = rear = 0;
        }
        else if(rear == size-1 && front != 0) {
            rear = 0;
        } 
        else
        {
             rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
        if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[front];
        arr[front] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
         if(isEmpty()){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        
        int ans = arr[rear];
        arr[rear] = -1;
        
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(rear == 0) {
            rear = size-1; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear--;
        }
        return ans;
    }

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
       if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        if(front == -1)
            return true;
        else
            return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
		if( (front == 0 && rear == size-1) || (front != 0 && rear == (front-1)%(size-1) ) ) {
            return true;
        }
        else
        {
            return false;
        }
    }
};


int main(){
	Deque d(4);
	cout<<d.pushFront(1);
	d.pushRear(2);
	
	
}























