//
//  main.cpp
//  SumTo100_C++
//
//  Created by chenyufeng on 9/25/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[])
{
    int arr[] = {44,66,1,2,0,99,55,45};
    vector<int> vectorArray(arr, arr + sizeof(arr)/sizeof(int));

    // 先进行排序
    sort(vectorArray.begin(), vectorArray.end());

    long i,j;
    bool isFound = false;

    for (i = 0,j = vectorArray.size() - 1; i < vectorArray.size() && i < j;)
    {
        if (vectorArray[i] + vectorArray[j] == 100)
        {
            isFound = true;
            cout << vectorArray[i] << "   " << vectorArray[j] << endl;
            // 可能会有多对，所以要继续查找
            i++;
            j--;
        }
        else if (vectorArray[i] + vectorArray[j] < 100)
        {
            i++;
        }
        else if (vectorArray[i] + vectorArray[j] > 100)
        {
            j--;
        }
    }

    if (!isFound)
    {
        cout << "not found" << endl;
    }

    return 0;
}
