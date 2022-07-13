// Sort backwards the first part of the string always

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size, temp, i, j;
    cin>>size;
    vector<int> arr;

    for(i = 0; i < size; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    for(i = 1; i < size; i++)
    {
        for(j = i - 1; j >= 0 && arr[j] > arr[j+1]; j--)
        {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }

    auto ele = arr.begin();
    for(; ele != arr.end(); ele++)
    {
        cout<<*ele<<" ";
    }
}