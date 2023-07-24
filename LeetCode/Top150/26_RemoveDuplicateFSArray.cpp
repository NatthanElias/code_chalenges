/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int>::iterator it;
        it = unique (nums.begin(), nums.end());

        nums.resize(distance(nums.begin(),it));

        return nums.size();

        /*int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
        }*/
    }
};


int main(int argc, char *argv[]) {
    Solution s;

    int vet[] = {1,1,2};
    vector<int> n1 (vet, vet + 3);

    int k = s.removeDuplicates(n1);
    cout << k << endl;

    for(int i : n1)
        cout << i << ", ";

    return 0;
}

