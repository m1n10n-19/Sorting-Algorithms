// Compare all the elements with first element and make first element the smallest

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size, temp;
    cin>>size;
    vector<int> arr;

    for(int i = 0; i < size; i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    auto ele = arr.begin();
    for(; ele != arr.end(); ele++)
    {
        cout<<*ele<<" ";
    }
}