#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int start = 0, end = size - 1;
    int target = 4;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            cout << "Element Found At " << mid << " Index\n";
            return 0; // Exit after finding the element
        }
        else if ( target > arr[mid])
        {
            start = mid + 1; // Narrow the search to the right half
        }
        else
        {
            end = mid - 1; // Narrow the search to the left half
        }
    }

    cout << "Element Not Found\n"; // If the loop completes, the element isn't in the array
    return 0;
}
