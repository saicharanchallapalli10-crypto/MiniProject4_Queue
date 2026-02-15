
Test 1: Enqueue until full
Steps I took:
1. Create a queue with capacity 5.
2. Enqueue values: 10, 20, 30, 40, 50.
3. Check the queue size- should be 5.
4. Try to enqueue 60- should give error
Results: 
1. Queue contains 10, 20, 30, 40, 50.
2. Enqueue 60 is rejected with an error message.

This worked fine after a lot of testing and errors.
****************************************************************************************************************
Test 2: Dequeue until empty
Steps I took:
1. Create a queue and enqueue: 10, 20, 30.
2. Dequeue three times- should return 10, 20, 30.
3. Try to dequeue again- should give error
Results: 
1. Items dequeued in order: 10, 20, 30.
2. Further dequeue attempts produce an error.

After test one, I cleared up a lot of errors so this test worked fine
******************************************************************************************************************
Test 3: Wrap-around test
Steps:
1. Create a queue of capacity 5.
2. Enqueue 1,2,3,4,5.
3. Dequeue two items- removes 1 and 2.
4. Enqueue 6,7-should occupy the freed spots at the start of the array.
5. Dequeue all-should return 3,4,5,6,7 in order.
Resualts:
1.Wrap-around works correctly.


This test also gave me a lot of errors, but once I sat down and really looked into it, it started working.
********************************************************************************************************************
Test 4: Mixed operations sequence test
What I had to do:
1. Create an empty queue.
2. Enqueue 10, 20.
3. Dequeue-should return 10.
4. Enqueue 30.
5. Peek-should return 20.
6. Enqueue 40.
7. Dequeue-should return 20.
8. Enqueue 50, 60.
9. Check size-should be 4.
10. Dequeue all- should return 30, 40, 50, 60 in order.

After all the tests, I had spent so much time fixing errors, so this test was a breeze. 

