#ifndef QUEUE_H
#define QUEUE_H
class Queue {
private:
    static const int CAP = 5;
    int arr[CAP];
    int frontIndex;
    int rearIndex;
    int count;
public:

//constructor used to intialize an empty queue
    Queue();

//Adds an item to the end of an queue
void enqueue(int item);

//"Removes" ad returns the first item in the queue
int dequeue();

//Tells the user what the front item in the queue is 
int peek() const;

//returns "true" if the queue has no values in it 
bool isEmpty() const;

//return "true" if the queue is full
bool isFull() const;

//returns number of items in the queue
int size() const;
//Removes all the items in queue, basically like a reset button
void clear();
};

#endif
