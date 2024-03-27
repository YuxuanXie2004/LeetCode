#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main();
int removeDuplicates(vector<int> &nums);
void print(int count, vector<int> vec);

int main() {
    vector<int> nums={0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int count=removeDuplicates(nums);
    cout << count << endl;
    print(count, nums);
}

int removeDuplicates(vector<int> &nums) {
    int i{0};
    int uniq = nums[0];
    for(int j=1; j<(int)nums.size(); ++j) {
        if(nums[j]!=uniq) {
            i++;
            nums[i] = nums[j];
            uniq = nums[j];
        }
    }
    return i+1;
}

void print(int count, vector<int> vec) {
    for(int i=0; i<count; ++i) {
        cout << vec[i] << " ";
    }
    for(int i=count; i<(int)vec.size(); ++i) {
        cout << "_" << " ";
    }
}

