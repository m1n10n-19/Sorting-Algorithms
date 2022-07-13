// Find minimum from the list and put it first iteratively

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size, temp, i, j, min_index;
    cin>>size;
    vector<int> arr;

    for(i = 0; i < size; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    for(i = 0; i < size - 1; i++)
    {
        min_index = i;
        for(j = i + 1; j < size; j++)
        {
            if(arr[min_index] > arr[j])
                min_index = j;
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    auto ele = arr.begin();
    for(; ele != arr.end(); ele++)
    {
        cout<<*ele<<" ";
    }
}