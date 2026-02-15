#include <iostream>
#include "include/Queue.h"
using namespace std;  
int main() {
    Queue q; 
    int choice;
    int value;

    do {
        cout << "Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Size\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice) {
            case 1: 
                cout << "Enter value to enqueue: ";
                cin >> value;
                try {
                    q.enqueue(value);
                    cout << value << " added to the queue.\n";
                } catch (runtime_error) {
                    cout << "Queue is full" << endl;
                }
                break;
            case 2: 
                try {
                    value = q.dequeue();
                    cout << value << " removed from the queue.\n";
                } catch (runtime_error) {
                    cout << "Queue is empty" << endl;
                }
                break;
            case 3:  
                try {
                    value = q.peek();
                    cout << "Front of the queue: " << value << endl;
                } catch (runtime_error) {
                    cout <<"Queue is empty" << endl;
                }
                break;
            case 4:  
                cout << "Number of people in queue: " << q.size() << endl;
                break;

            case 5:
                cout << "Exiting.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 5);

    return 0;
}
