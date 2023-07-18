#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int j = 0; j < n; j++)
            nums1.pop_back();

        for(int i = 0; i < n; i++)
            nums1.push_back(nums2.at(i));

        sort(nums1.begin(), nums1.end());
    }
};


int main(int argc, char *argv[]) {
    Solution s;
    int m = 3, n = 3;

    int vet[] = {1,2,3,0,0,0};
    vector<int> n1 (vet, vet + 6);

    int vet2[] = {2,5,6};
    vector<int> n2 (vet2, vet2 + 3);

    s.merge(n1, m, n2, n);

    for(int i : n1)
        cout << i << ", ";

    return 0;
}
