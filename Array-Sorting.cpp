#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the index of the target or the position to insert it
int searchInsertPosition(vector<int>& nums, int target) {
    // Sort the array
    sort(nums.begin(), nums.end());

    // Binary search to find the index of the target or the position to insert it
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // If the target is not found, left will indicate the position to insert it
    return left;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    // Find the index of the target or the position to insert it
    int result = searchInsertPosition(nums, target);
    cout << "Output: " << result << endl;

    return 0;
}
