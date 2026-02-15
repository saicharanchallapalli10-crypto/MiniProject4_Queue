#include "../include/Queue.h"
#include <stdexcept>
using namespace std;   
Queue::Queue() {
    frontIndex = 0;
    rearIndex = 0;
    count = 0;
}
bool Queue::isEmpty() const {
    return count == 0;
}
bool Queue::isFull() const {
    return count == CAP;
}
int Queue::size() const {
    return count;
}
void Queue::clear() {
    frontIndex = 0;
    rearIndex = 0;
    count = 0;
}
void Queue::enqueue(int item) {
    if (isFull())
        throw runtime_error("Queue is full"); 

    arr[rearIndex] = item;      
    rearIndex = (rearIndex + 1) % CAP;  
    count++;                    
}
int Queue::dequeue() {
    if (isEmpty())
        throw runtime_error("Queue is empty");

    int value = arr[frontIndex];       
    frontIndex = (frontIndex + 1) % CAP; 
    count--;                           
    return value;
}
int Queue::peek() const {
    if (isEmpty())
        throw runtime_error("Queue is empty");
    return arr[frontIndex];   
}

