/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        for(int i = 0; i < nums.size(); i++) {

            if(nums.at(i) == val) {
                nums.erase(nums.begin() + i);
                i--;
            }
        }

        return nums.size();

        /*FASTER:
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
        */
    }
};


int main(int argc, char *argv[]) {
    Solution s;
    int n = 1;
    int k;

    int vet[] = {1};
    vector<int> n1 (vet, vet + 1);

    k = s.removeElement(n1, n);
    cout << k << endl;

    for(int i : n1)
        cout << i << ", ";

    return 0;
}

