// priorityqueue.h
//
// TODO:  write this header comment
#pragma once

#include <iostream>
#include <sstream>
#include <set>

using namespace std;

template<typename T>
class priorityqueue {
private:
    struct NODE {
        int priority;  // used to build BST
        T value;  // stored data for the p-queue
        bool dup;  // marked true when there are duplicate priorities
        NODE* parent;  // links back to parent
        NODE* link;  // links to linked list of NODES with duplicate priorities
        NODE* left;  // links to left child
        NODE* right;  // links to right child
    };
    NODE* root;  // pointer to root node of the BST
    int size;  // # of elements in the pqueue
    NODE* curr;  // pointer to next item in pqueue (see begin and next)
    
public:
    //
    // default constructor:
    //
    // Creates an empty priority queue.
    // O(1)
    //
    priorityqueue() {
        root = nullptr;
        size = 0;
        curr = nullptr;
    }
    
    //
    // operator=
    //
    // Clears "this" tree and then makes a copy of the "other" tree.
    // Sets all member variables appropriately.
    // O(n), where n is total number of nodes in custom BST
    //
    priorityqueue& operator=(const priorityqueue& other) {
        if(this == &other){
            return *this;
        }
        clear();
        // TO DO: write this function.
        
        this->root = other->root;
        this->size = other.size;
        this->curr = other->curr;
        return *this;
    }
    
    //
    // clear:
    //
    // Frees the memory associated with the priority queue but is public.
    // O(n), where n is total number of nodes in custom BST
    //
    void clear() {
        //CHANGE
        NODE* current = new NODE();
        current = root;
        if(curr != nullptr){
            if(curr->left != nullptr){
                curr->left = nullptr;
            }
            if(curr->right != nullptr){
                curr->right = nullptr;
            }
        }
        else{
            root = nullptr;
            return;
        }
        free(curr);
    }
    
    //
    // destructor:
    //
    // Frees the memory associated with the priority queue.
    // O(n), where n is total number of nodes in custom BST
    //
    ~priorityqueue() {
        
        
        // TO DO: write this function.
        // might call clear
        // clear();
        
    }
    
    //
    // enqueue:
    //
    // Inserts the value into the custom BST in the correct location based on
    // priority.
    // O(logn + m), where n is number of unique nodes in tree and m is number of
    // duplicate priorities
    //
    // this is the insert fucntion
    void enqueue(T value, int priority) {
        cout << "hello";
        NODE* previous = nullptr;
        NODE* current = root;

        while(current != nullptr){
            // if value is equal to target, return
            if(priority == current->priority){
                // current->value = value;
                current->dup = true; // must add if condition for if dup is true
            }
            // if value is less than target, go left
            else if(priority < current->priority){
                // current->value = value;
                previous = current;
                current = current->left; // goes left
            }
            // if value is greater than target, go right
            else{ 
                // current->value = value;
                previous = current;
                current = current->right; // goes right
            }
        }
        // if there is a duplicate
        if(current->dup == true){
            NODE* j = new NODE();
            j->priority = priority;
            j->value = value;
            j->left = nullptr;
            j->right = nullptr;
            j->dup = true;

            if(previous->link == nullptr){
                previous->link = j;
                j->link = nullptr;
            }
            else{
                while(previous->link != nullptr){
                    previous = previous->link;
                }
                previous->link = j;
                j->link = nullptr;
            }
        }
        // if value is not found then insert
        else{
            NODE* n = new NODE();
            n->priority = priority;
            n->value = value;
            n->dup = false;
            n->left = nullptr;
            n->right = nullptr;
            n->link = nullptr;
            n->parent = nullptr;

            if(previous == nullptr){
                root = n;
            }
            else if(priority < previous->priority){
                previous->left = n;
            }
            else{
                previous->right = n;
            }
        }
        size++;
    }
    //
    // dequeue:
    //
    // returns the value of the next element in the priority queue and removes
    // the element from the priority queue.
    // O(logn + m), where n is number of unique nodes in tree and m is number of
    // duplicate priorities
    //
    T dequeue() {
        
        
        // TO DO: write this function.
        T valueOut;
        return valueOut; // TO DO: update this return
        
        
    }
    
    //
    // Size:
    //
    // Returns the # of elements in the priority queue, 0 if empty.
    // O(1)
    // 
    int Size() {
        return size;
    }
    
    //
    // begin
    //
    // Resets internal state for an inorder traversal.  After the
    // call to begin(), the internal state denotes the first inorder
    // node; this ensure that first call to next() function returns
    // the first inorder node value.
    //
    // O(logn), where n is number of unique nodes in tree
    //
    // Example usage:
    //    pq.begin();
    //    while (tree.next(value, priority)) {
    //      cout << priority << " value: " << value << endl;
    //    }
    //    cout << priority << " value: " << value << endl;
    void begin() {
        
        
        // TO DO: write this function.
        
        
    }
    
    //
    // next
    //
    // Uses the internal state to return the next inorder priority, and
    // then advances the internal state in anticipation of future
    // calls.  If a value/priority are in fact returned (via the reference
    // parameter), true is also returned.
    //
    // False is returned when the internal state has reached null,
    // meaning no more values/priorities are available.  This is the end of the
    // inorder traversal.
    //
    // O(logn), where n is the number of unique nodes in tree
    //
    // Example usage:
    //    pq.begin();
    //    while (pq.next(value, priority)) {
    //      cout << priority << " value: " << value << endl;
    //    }
    //    cout << priority << " value: " << value << endl;
    //
    bool next(T& value, int &priority) {
        
        
        // TO DO: write this function.
        return true; // TO DO: update this return
        
        
    }
    
    //
    // toString:
    //
    // Returns a string of the entire priority queue, in order.  Format:
    // "1 value: Ben
    //  2 value: Jen
    //  2 value: Sven
    //  3 value: Gwen"
    //
    string toString() {
        
        
        // TO DO: write this function.
        string str = "";
        return str; // TO DO: update this return
        
        
    }
    
    //
    // peek:
    //
    // returns the value of the next element in the priority queue but does not
    // remove the item from the priority queue.
    // O(logn + m), where n is number of unique nodes in tree and m is number of
    // duplicate priorities
    //
    T peek() {
        
        
        // TO DO: write this function.
        T valueOut;
        return valueOut; // TO DO: update this return
        
        
    }
    
    //
    // ==operator
    //
    // Returns true if this priority queue as the priority queue passed in as
    // other.  Otherwise returns false.
    // O(n), where n is total number of nodes in custom BST
    //
    bool operator==(const priorityqueue& other) const {
        
        
        // TO DO: write this function.
        return true; // TO DO: update this return
        
        
    }
    
    //
    // getRoot - Do not edit/change!
    //
    // Used for testing the BST.
    // return the root node for testing.
    //
    void* getRoot() {
        return root;
    }
};
