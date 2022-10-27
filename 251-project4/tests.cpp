
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

// TO DO: write lots of tests here.
int main(){
    cout << "hello2";
    map<int, vector<int> > map;

    

    int n = 9;
    int vals[] = {15, 16, 17, 6, 7, 8, 9, 2, 1};
    int prs[] = {1, 2, 3, 2, 2, 2, 2, 3, 3};
    priorityqueue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.enqueue(vals[i], prs[i]);
        map[prs[i]].push_back(vals[i]);
    }

    cout << pq.Size() << endl;

    // TEST TO SEE IF IT UPDATES ON MAC
    

}

