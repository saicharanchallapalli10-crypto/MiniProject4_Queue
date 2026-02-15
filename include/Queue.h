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
    Queue();
void enqueue(int item);
int dequeue();
int peek() const;

bool isEmpty() const;
bool isFull() const;

int size() const;
void clear();
};

#endif
