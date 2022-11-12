#include <gtest/gtest.h>
#include "mymap.h"

TEST(mymap, putFunctionForSize1) {
    mymap<int, int> map1;
    int arr[] = {2, 1, 3};
    
    for(int i = 0; i < 3; i++) {
        map1.put(arr[i], arr[i]);
    }
    
    ASSERT_EQ(map1.Size(), 3);
}

// TEST(mymap, putFunctionForSize2) {
//     mymap<int, float> map1;
//     float arr[] = {10.5, 9.5, 8.5, 7.5, 6.5, 5.5};

//     for(int i = 0; i < 6; i++) {
//         map1.put(arr[i], arr[i]);
//     }

//     ASSERT_EQ(map1.Size(), 6);
// }

TEST(mymap, containFunction) {
    mymap<int, int> map1;
    mymap<int, string> map2;

    int arr[] = {2, 1, 3};
    string arr2[] = {"Alex", "John", "Pedro", "Iza", "Daniel"};

    for(int i = 0; i < 3; i++) {
        map1.put(arr[i], arr[i]);
    }

    for(int i = 0; i < 5; i++) {
        map2.put(arr[i], arr2[i]);
    }

    for(int i = 0; i < 3; i++) {
        EXPECT_TRUE(map1.contains(arr[i]));
    }

    for(int i = 0; i < 5; i++) {
        EXPECT_TRUE(map2.contains(arr[i]));
    }
}

TEST(mymap, getFunction) {
    mymap<int, int> map1;

    int arr[] = {2, 1, 3};

    for(int i = 0; i < 3; i++) {
        map1.put(arr[i], arr[i]);
    }

    for(int i = 0; i < 3; i++) {
        ASSERT_EQ(map1.get(arr[i]), arr[i]);
        ASSERT_EQ(map1.Size(), 3);
    }
}

// TEST(mymap, toStringFunction) {
//     mymap<int, int> map1;

//     int arr[] = {2, 4, 6, 1};

//     for (int i = 0; i < 4; i++) {
//         map1.put(i, arr[i]);
//     }

//    cout << map1.toString();

//    string sol = "key: 1 value: 1\nkey:2 value: 2\nkey: 3 value: 3\n";

//     EXPECT_EQ(sol, map1.toString());
    
// }

TEST(mymap, bracketOperator) {
    mymap<int, int> map1;

    int arr[] = {2, 1, 3, 5 };

    for(int i = 0; i < 4; i++) {
        map1.put(arr[i], arr[i]);
    }

    for(int i = 0; i < 4 ; i++) {
        EXPECT_EQ(map1[arr[i]], arr[i]);
        EXPECT_EQ(map1.Size(), 4);
    }

    cout << map1.toString();
}
