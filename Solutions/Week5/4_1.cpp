#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int>& a, int x) {
    int left = 0, right = (int)a.size() -1;
    //write your code here

    while (left <= right)
    {
        int mid = left + ((right - left) / 2);
        if (x == a[mid])
        {
            return mid;
        }
        else if (x < a[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int linear_search(const vector<int>& a, int x) {
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == x) return i;
    }
    return -1;
}