// #include <gtest/gtest.h>
#include "priorityqueue.h"
#include <map>
#include <vector>
#include <iostream>

// TEST(priorityqueue, one) {
//     map<int, vector<int> > map;
// int n = 9;
// int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
// int prs[] = {1, 2, 3, 2, 2, 2, 2, 3, 3};
// priorityqueue<int> pq;
// for (int i = 0; i < n; i++) {
//     pq.enqueue(vals[i], prs[i]);
//     map[prs[i]].push_back(vals[i]);
// }
// EXPECT_EQ(pq.Size(), 9);
// stringstream ss;
// for (auto e: map) {
//     int priority = e.first;
//     vector <int> values = e.second;
//     for (size_t j = 0; j < values.size(); j++){
//         ss << priority << " value: " << values[j] << endl;
//     }
// }

// }

void testEnqueueFucntion1(){

    map<int, vector<int> > map;
    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[] = {1, 2, 3, 2, 2, 2, 2, 3, 3};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }

    if(pq.Size() != 9){
        cout << "Enqueue Function Test 1 Failed!" << endl;
    }
    else if(pq.Size() == 9){
        cout << "Enqueue Function Test 1 Passed!" << endl;
    }
}

void testEnqueueFunction2(){
    map<int, vector<string> > map;
    int n = 6;
    string names[] = {"Alex", "Iza", "Daniel", "Monica", "Marta", "Staszek"};
    int prs[] = {1, 2, 3, 2, 4, 2};
    priorityqueue<string> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(names[i], prs[i]);
        map[prs[i]].push_back(names[i]);
    }

    if(pq.Size() != 6){
        cout << "Enqueue Function Test 2 Failed!" << endl;
    }
    else if(pq.Size() == 6){
        cout << "Enqueue Function Test 2 Passed!" << endl;
    }
}

void testEnqueueFunction3(){
    map<int, vector<string> > map;
    int n = 4;
    string names[] = {"Alex", "Pedro", "Adam", "Iza"};
    int prs[] = {2, 1, 2, 2};
    priorityqueue<string> pq;

    for(int i = 0; i < n; i++){
        pq.enqueue(names[i], prs[i]);
        map[prs[i]].push_back(names[i]);
    }

    if(pq.Size() != 4){
        cout << "Enqueue Function Test 3 Failed!" << endl;
    }
    else if(pq.Size() == 4){
        cout << "Enqueue Function Test 3 Passed!" << endl;
    }
}


void testToStringFunction1(){
    map<int, vector<int> > map;
    int n = 4;
    int vals[] = {15, 20, 17, 1};
    int prs[] = {1, 2, 3, 2};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    cout << pq.toString() << endl;
}

void testToStringFunction2(){
    map<int, vector<int> > map;
    int n = 7;
    int vals[] = {15, 20, 17, 1, 2, 200, 75};
    int prs[] = {1, 2, 3, 2, 1, 4, 6};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    cout << pq.toString() << endl;

}

void testToStringFunction3(){
    map<int, vector<int> > map;
    int n = 10;
    int vals[] = {15, 20, 17, 1, 2, 200, 75, 54, 23, 10};
    int prs[] = {1, 2, 3, 2, 1, 4, 6, 2, 3, 4};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    cout << pq.toString() << endl;

}

void testClearFunction1(){
    map<int, vector<int> > map;
    int n = 3;
    int vals[] = {15, 20, 17};
    int prs[] = {1, 2, 3};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq.clear();
    cout << pq.Size() << endl;
}

void testClearFunction2(){
    map<int, vector<int> > map;
    int n = 7;
    int vals[] = {15, 20, 17, 11, 10, 200, 76};
    int prs[] = {1, 2, 3, 2, 3, 2, 4};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq.clear();
    cout << pq.Size() << endl;
}

void testClearFunction3(){
    map<int, vector<int> > map;
    int n = 7;
    int vals[] = {15, 20, 17, 14, 13, 200, 76};
    int prs[] = {1, 2, 3, 1, 3, 2, 4};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }
    pq.clear();
    cout << pq.Size() << endl;
}

void testEqualOperator(){
    map<int, vector<int> > map;
    int n = 7;
    int vals[] = {15, 20, 17, 14, 13, 200, 76};
    int prs[] = {1, 2, 3, 1, 3, 2, 4};
    priorityqueue<int> pq;
    priorityqueue<int> dq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }

    dq = pq;

    cout << dq.toString();
}



// TO DO: write lots of tests here.
int main(){
    // testEnqueueFucntion1();
    // testEnqueueFunction2();
    // testEnqueueFunction3();
    // testToStringFunction1();
    // testToStringFunction2();
    // testToStringFunction3();
    // testClearFunction1();
    // testClearFunction2();
    // testClearFunction3();
    testEqualOperator();
}

