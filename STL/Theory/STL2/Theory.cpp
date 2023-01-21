#include<iostream>
using namespace std;

int main()
{
    //Stack
    //LIFO
    //stacks doesn't support indexing
    //operations - .size(), .push, .empty, .pop, .top

    //Queue
    //FIFO
    //operations - .size(), .empty, .push, .pop, .front

    //both stack and queue, use deque as default constructor
    //deque - insertion and deletion from both sides, open container
    //operations, .push_front, pop_front, d.back(), d.front()
    //dequeue doesn't support indexing
    //deques are marginally slower than vectors in terms of performance


    //Stacks are useful when elements cancel each other. eg- check if paranthesis string is balanced or not
    //queue - useful for implementing graph functions, or when FIFO is necessary. They are unique, as they only support pop and push from one side

    //Priority Queue - similar to queue, except that popped iterm will be sorted in decreasing order(by default)- max heap
    //takes log n time to push, pop elements
    //p_q can store duplicates, simlilar to multiset
    // no indexing and binary search on priority queue
    //pq are faster than sets, as tehy have lower constant factor

    // priority_queue<T, vector<t>, decltype(&cmp)>pq(cmp>);

    //Stl binary search functions -  binary_search() returns the iterator of first element greater or equal to the given target
    //lower_bound - return the iterator of the first element greater or equal to the given target
    //upper_bound - return the iterator of the first element smaller or equal to the given target

    // auto it = sorted_type.lower_bound(target);
    
}