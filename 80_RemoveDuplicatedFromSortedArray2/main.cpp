#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main();
int removeDuplicates(vector<int> &nums);
void print(int count, vector<int> vec);

int main() {
    vector<int> nums={0, 0, 1, 1};
    int count=removeDuplicates(nums);
    cout << count << endl;
    print(count, nums);
}

int removeDuplicates(vector<int> &nums) {
    int i{0};
    int t{1};
    int u{nums[0]};
    for(int j=1; j<(int)nums.size(); ++j) {
        if(nums[j]!=u) {
            i++;
            nums[i] = nums[j];
            u = nums[j];
            t = 1;
        }
        else {
            if(t==1) {
                i++;
                nums[i] = nums[j];
                t = 2;
            }
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

