#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 8, 12, 16};
    int left = 0, right = 4, target = 12;

    while(left <= right)
    {
        int mid = (left + right) / 2;

        if(arr[mid] == target)
        {
            cout << "Found at index " << mid;
            break;
        }
        else if(arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return 0;
}
