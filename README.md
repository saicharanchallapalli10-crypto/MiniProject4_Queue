MiniProject04 Report - Sitarama Challapalli - 2/14/26

*********************************************************************************************************************
Prior to awnsering the bullet points given in the instructions, I tried my best to follow all given instructions in the asingment details, however I had to make an assumption regarding the CAP (array size). The asignment stated to make it fixed so I did make it fixed at five elements, however, I wasn't completly sure if the user should have had the chance to pick their CAP. Also since I had to sort of learn how to use try,throw,catch, <stdexcept> , and run time error function I'm not too sure if I used them correctly, but in my testing it worked fine. 
*************************************************************************************************************

******************************************************************************************************************
1. Build/Run commands 

In order to build the script, compile it, I had to type in the following 

g++ main.cpp src/Queue.cpp -I include -o queueProgram

In order to run the script in my terminal I had to type the following 

./queueProgram

**********************************************************************************************************************

2.  File Structure Explanation

This project, as directed by the directions in the asignment, is stored in a very organized passion. To begin all the content is stored in the MiniProject4_Queue folder within my EECE2140 folder. 

Then within my Miniproject folder is a folder called "include"; include contains a header file required for the program. 

Next within another folder called "src" is a cpp file that fully defines everything in my header file.

Then in my Miniproject folder is the main.cpp that houses all the main code that calls the functions and works with the user to simulate the queue. 

Then lastly, my Readme and testing file are also in my miniproject folder 

Visually: Miniproject4_Queue>Include>Queue.h 
          Miniproject4_Queue>src>Queue.cpp
          Miniproject4_Queue>main.cpp>Readme>testing

********************************************************************************************************************
Example Usage:

saicharan@Laptop99:~/EECE2140/MiniProject4_Queue$ g++ -std=c++17 main.cpp src/Queue.cpp -I include -o queueProgram
saicharan@Laptop99:~/EECE2140/MiniProject4_Queue$ ./queueProgram
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 1
Enter value to enqueue: 2
2 added to the queue.
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 13
Invalid choice. Try again.
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 1
Enter value to enqueue: 13
13 added to the queue.
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 2
2 removed from the queue.
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 3
Front of the queue: 13
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 4
Number of people in queue: 1
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 1
Enter value to enqueue: 12
12 added to the queue.
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 1
Enter value to enqueue: 14
14 added to the queue.
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 3
Front of the queue: 13
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 4
Number of people in queue: 3
Queue Menu ---
1. Enqueue
2. Dequeue
3. Peek
4. Size
5. Exit
Enter your choice: 5
Exiting.
saicharan@Laptop99:~/EECE2140/MiniProject4_Queue$ 
