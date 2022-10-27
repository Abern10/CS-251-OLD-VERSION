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
        this->clear();

        // pre-order traversal
        // in pre order traversal you would have the current valu and priority call enqueue in traversal

    }
    
    //
    // clear:
    //
    // Frees the memory associated with the priority queue but is public.
    // O(n), where n is total number of nodes in custom BST
    //
    // clear recursive helper function
    void _clear(NODE* node){
        if(node == nullptr){ // base case if BST is empty
            return;
        }
        else{ // traverses the BST using post-order
            _clear(node->left);
            _clear(node->right);
            if(node->dup == true){ // checks for duplicates
                while(node->link != nullptr){
                    NODE* nextNode = node->link;
                    delete node;
                    node = nextNode;
                }
            }
        }
        delete node;
    }

    void clear(){
        _clear(root);
        root = nullptr;
        curr = nullptr;
        size = 0;
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
        NODE* current = root;
        NODE* newNode = new NODE;
        newNode->priority = priority;
        newNode->value = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        newNode->parent = nullptr;
        newNode->link = nullptr;

        if(current == nullptr){ // traversing BST base case if BST is empty
            root = newNode;
        }
        else{ // traversing BST if BST is not empty
            NODE* previous = new NODE;

            while(current != nullptr){ // while loop to traverse BST
                previous = current;
                if(priority == current->priority){ // if input priority is equal to current priority set duplicate to true
                    newNode->dup = true;
                    previous = current;
                    break;
                }
                if(priority < current->priority){ // if input priority is less than current priority, go left to continue search
                    current = current->left; // goes left
                }
                else if(priority > current->priority){ // if input priority is greater than current priority, go right to continue search
                    current = current->right; // goes right
                }
            }
            if(newNode->dup == true){ // if input priority is a duplicate
                previous->dup = true;
                if(previous->link == nullptr){ // if no duplicate is already made create new duplicate
                    previous->link = newNode;
                }
                else{
                    while(previous->link != nullptr){ // if duplicate is already in BST loop to end of linked list
                        previous = previous->link;
                    }
                    previous->link = newNode;
                    newNode->link = nullptr;
                    newNode->parent = previous;
                }
            } // if current was still a nullptr loop through BST again to insert new node
            else if(priority < previous->priority){ // if input priority is less than current priority, go left
                previous->left = newNode; // inserts new node
                newNode->parent = previous;
            }
            else if(priority > previous->priority){ // if input priority is greater than current priority, go right
                previous->right = newNode; // inserts new node
                newNode->parent = previous;
            }
        }
        curr = root;
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
        // keep going left until it hits null
        
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
    // to string recursive helper function
    void _toString(NODE* node, ostream& output){
        if (node == nullptr){ // BST base case to check if BST is empty
            return;
        }
        else{ // uses in-order traversal through the BST
            _toString(node->left, output); // recursive function call for left side of BST
            output << node->priority << " value: " << node->value << endl; // outputs the value of each node

            if(node->dup == true){ // check for duplicates
                NODE* placeholderNode = node;
                // output << "duplicate case: " << node->priority << " value: " << node->value << endl; // outputs the value of each node
                while(node->link != nullptr){
                    NODE* nextNode = node->link;
                    output << nextNode->priority << " value: " << nextNode->value << endl;
                    node = nextNode;
                }
                node = placeholderNode;
            }
            _toString(node->right, output); // recursive function call for right side of BST
        }
    }
    
    string toString() {
        stringstream ss;
        // call helper fucntion
        _toString(curr, ss);
        curr = root;
        return ss.str(); // TO DO: update this return
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
