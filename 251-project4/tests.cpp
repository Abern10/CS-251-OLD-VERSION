// #include <gtest/gtest.h>
#include "priorityqueue.h"
#include <map>
#include <vector>
#include <iostream>

//------------------------------------------------------------------------------------
// begin enqueue() tests
void testEnqueueFucntion1(){
    map<int, vector<int> > map1;
    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[] = {1, 2, 3, 2, 2, 2, 2, 3, 3};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }

    if(pq.Size() != 9){
        cout << "Enqueue Function Test 1 Failed!" << endl;
    }
    else if(pq.Size() == 9){
        cout << "Enqueue Function Test 1 Passed!" << endl;
    }
    pq.clear();
}

void testEnqueueFunction2(){
    map<int, vector<string> > map1;
    int n = 6;
    string names[] = {"Alex", "Iza", "Daniel", "Monica", "Marta", "Staszek"};
    int prs[] = {1, 2, 3, 2, 4, 2};
    priorityqueue<string> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
    }

    if(pq.Size() != 6){
        cout << "Enqueue Function Test 2 Failed!" << endl;
    }
    else if(pq.Size() == 6){
        cout << "Enqueue Function Test 2 Passed!" << endl;
    }
    pq.clear();
}

void testEnqueueFunction3(){
    map<int, vector<string> > map1;
    int n = 4;
    string names[] = {"Alex", "Pedro", "Adam", "Iza"};
    int prs[] = {2, 1, 2, 2};
    priorityqueue<string> pq;

    for(int i = 0; i < n; i++){
        pq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
    }

    if(pq.Size() != 4){
        cout << "Enqueue Function Test 3 Failed!" << endl;
    }
    else if(pq.Size() == 4){
        cout << "Enqueue Function Test 3 Passed!" << endl;
    }
    pq.clear();
}
// end enqueue() tests
//------------------------------------------------------------------------------------
// begin to toString() tests
void testToStringFunction1(){
    map<int, vector<int> > map1;
    int n = 4;
    int vals[] = {15, 20, 17, 1};
    int prs[] = {1, 2, 3, 2};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }
    cout << pq.toString() << endl;
    pq.clear();
}

void testToStringFunction2(){
    map<int, vector<int> > map1;
    int n = 7;
    int vals[] = {15, 20, 17, 1, 2, 200, 75};
    int prs[] = {1, 2, 3, 2, 1, 4, 6};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }
    cout << pq.toString() << endl;
    pq.clear();
}

void testToStringFunction3(){
    map<int, vector<int> > map1;
    int n = 10;
    int vals[] = {15, 20, 17, 1, 2, 200, 75, 54, 23, 10};
    int prs[] = {1, 2, 3, 2, 1, 4, 6, 2, 3, 4};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }
    cout << pq.toString() << endl;
    pq.clear();
}

void testToStringFunction4(){
    map<int, vector<string> > map1;
    int n = 4;
    string names[] = {"Alex", "Pedro", "Adam", "Iza"};
    int prs[] = {2, 1, 2, 2};
    priorityqueue<string> pq;

    for(int i = 0; i < n; i++){
        pq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
    }
    cout << pq.toString() << endl;
    pq.clear();
}

void testToStringFunction5(){
    map<int, vector<float> > map1;
    int n = 5;
    float floats[] = {5.6, 6.6, 7.6, 3.0, 13.54};
    int prs[] = {1, 2, 1, 3, 4};
    priorityqueue<float> pq;

    for(int i = 0; i < n; i++){
        pq.enqueue(floats[i], prs[i]);
        map1[prs[i]].push_back(floats[i]);
    }
    cout << pq.toString() << endl;
    pq.clear();
}
// end toString() tests
//------------------------------------------------------------------------------------
// begin clear() tests
void testClearFunction1(){
    map<int, vector<int> > map1;
    int n = 3;
    int vals[] = {15, 20, 17};
    int prs[] = {1, 2, 3};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }
    pq.clear();
    cout << pq.Size() << endl;

}

void testClearFunction2(){
    map<int, vector<int> > map1;
    int n = 7;
    int vals[] = {15, 20, 17, 11, 10, 200, 76};
    int prs[] = {1, 2, 3, 2, 3, 2, 4};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }
    pq.clear();
    cout << pq.Size() << endl;
}

void testClearFunction3(){
    map<int, vector<int> > map1;
    int n = 7;
    int vals[] = {15, 20, 17, 14, 13, 200, 76};
    int prs[] = {1, 2, 3, 1, 3, 2, 4};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }
    pq.clear();
    cout << pq.Size() << endl;
}

void testClearFunction4(){
    map<int, vector<string> > map1;
    int n = 4;
    string names[] = {"Alex", "Pedro", "Adam", "Iza"};
    int prs[] = {2, 1, 2, 2};
    priorityqueue<string> pq;

    for(int i = 0; i < n; i++){
        pq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
    }

    pq.clear();
    cout << pq.Size() << endl;
}
// end clear() tests
//------------------------------------------------------------------------------------
// begin =operator tests
void testEqualOperator1(){
    map<int, vector<int> > map1;
    int n = 7;
    int vals[] = {15, 20, 17, 14, 13, 200, 76};
    int prs[] = {1, 2, 3, 1, 3, 2, 4};
    priorityqueue<int> pq;
    priorityqueue<int> dq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map1[prs[i]].push_back(vals[i]);
    }

    dq = pq;

    cout << dq.toString();
    pq.clear();
    dq.clear();
}

void testEqualOperator2(){
    map<int, vector<string> > map1;
    int n = 8;
    string names[] = {"John", "Alex", "Iza", "Daniel", "Monica", "Adam", "Stanley", "Marta"};
    int prs[] = {1, 2, 2, 1, 3, 2, 4, 5};
    priorityqueue<string> pq;
    priorityqueue<string> dq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
    }

    dq = pq;

    cout << dq.toString();
    pq.clear();
    dq.clear();
}

void testEqualOperator3(){
    map<int, vector<string> > map1;
    map<int, vector<string> > map2;
    int n = 8;
    int j = 3;
    string names[] = {"John", "Alex", "Iza", "Daniel", "Monica", "Adam", "Stanley", "Marta"};
    string names2[] = {"Rob", "Chris", "Michael"};
    int prs[] = {1, 2, 2, 1, 3, 2, 4, 5};
    int prs2[] = {3, 4, 3};
    priorityqueue<string> pq;
    priorityqueue<string> dq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
    }

    for(int i = 0; i < j; i++){
        dq.enqueue(names2[i], prs2[i]);
        map2[prs2[i]].push_back(names2[i]);
    }

    cout << dq.toString() << endl << "Clearing dq now" << endl;
    dq.clear();

    dq = pq;

    cout << dq.toString() << endl;
    pq.clear();
    dq.clear();
}
// end =operator tests
//------------------------------------------------------------------------------------
// begin ==operator tests
void testEqualityOperator1(){
    map<int, vector<string> > map1;
    map<int, vector<string> > map2;
    int n = 8;
    int j = 3;
    string names[] = {"John", "Alex", "Iza", "Daniel", "Monica", "Adam", "Stanley", "Marta"};
    string names2[] = {"Rob", "Chris", "Michael"};
    int prs[] = {1, 2, 2, 1, 3, 2, 4, 5};
    int prs2[] = {3, 4, 3};
    priorityqueue<string> pq;
    priorityqueue<string> dq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
    }

    for(int i = 0; i < j; i++){
        dq.enqueue(names2[i], prs2[i]);
        map2[prs2[i]].push_back(names2[i]);
    }

    if(dq == pq){
        cout << "Equality Test 1 Failed!" << endl;
    }
    else{
        cout << "Equality Test 1 Passed!" << endl;
    }
    pq.clear();
    dq.clear();
}

void testEqualityOperator2(){
    map<int, vector<string> > map1;
    map<int, vector<string> > map2;
    int n = 8;
    string names[] = {"John", "Alex", "Iza", "Daniel", "Monica", "Adam", "Stanley", "Marta"};
    int prs[] = {1, 2, 2, 1, 3, 2, 4, 5};
    priorityqueue<string> pq;
    priorityqueue<string> dq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(names[i], prs[i]);
        dq.enqueue(names[i], prs[i]);
        map1[prs[i]].push_back(names[i]);
        map2[prs[i]].push_back(names[i]);
    }

    if(dq == pq){
        cout << "Equality Test 2 Passed!" << endl;
    }
    else{
        cout << "Equality Test 2 Failed!" << endl;
    }
    pq.clear();
    dq.clear();
}

//------------------------------------------------------------------------------------
// main function to call test functions
int main(){
    testEnqueueFucntion1();
    testEnqueueFunction2();
    testEnqueueFunction3();
    testToStringFunction1();
    testToStringFunction2();
    testToStringFunction3();
    testToStringFunction4();
    testToStringFunction5();
    testClearFunction1();
    testClearFunction2();
    testClearFunction3();
    testClearFunction4();
    testEqualOperator1();
    testEqualOperator2();
    testEqualOperator3();
    testEqualityOperator1();
    testEqualityOperator2();
}

