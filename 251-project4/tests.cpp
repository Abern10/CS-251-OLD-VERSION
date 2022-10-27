
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
    string vals[] = {"Alex", "Iza", "Daniel", "Monica", "Marta", "Staszek"};
    int prs[] = {1, 2, 3, 2, 4, 2};
    priorityqueue<string> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }

    if(pq.Size() != 6){
        cout << "Enqueue Function Test 2 Failed!" << endl;
    }
    else if(pq.Size() == 6){
        cout << "Enqueue Function Test 2 Passed!" << endl;
    }
}

// TO DO: write lots of tests here.
int main(){

    testEnqueueFucntion1();
    testEnqueueFunction2();
}

