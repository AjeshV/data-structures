#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

//#define MAX_SIZE 100
//#define T int  // define Priority Queue element type

// Minimal Priority Queue implemented with a binary heap
// Stores item of type T
template< class T, int MAX_SIZE >
class PQueue{
public:
    PQueue(); // default constructor
    void insert(T); // insert an item; duplicates are allowed.
    T findMin(); // return the smallest item from the queue
    void deleteMin(); // remove the smallest item from the queue
    bool isEmpty(); // test if the priority queue is logically empty
    int size(); // return queue size
private:
    int _size; // number of queue element
    T _array[MAX_SIZE]; // the heap array, items are stored starting at index 1
    //void buildHeap(); // heap construction (not required)
    void moveDown(int); // move down element at given index
    void moveUp(); // move up the last element in the heap
};
#include "PQueue.cpp"
#endif