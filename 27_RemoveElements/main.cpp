#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main();
int removeElements(vector<int> &nums, int val);
void print(int count, vector<int> vec);

int main() {
    vector<int> nums={0};
    int val{0};
    int count=removeElements(nums, val);
    cout << count << endl;
    print(count, nums);
}

int removeElements(vector<int> &nums, int val) {
    int count{0};
    int i{0};
    int j{(int)nums.size()-1};
    while(i<=j) {
        // if(i==j && nums[i]==val) {
        //     count++;
        //     break;
        // }
        if(nums[i]==val) {
            if(nums[j]!=val) {
                nums[i]=nums[j];
                nums[j]=val;
                i++;
                j--;
                count++;
            }
            else {
                j--;
                count++;
            }
        }
        else {
            i++;
        }
    }
    return nums.size()-count;
}

void print(int count, vector<int> vec) {
    for(int i=0; i<count; ++i) {
        cout << vec[i] << " ";
    }
    for(int i=count; i<(int)vec.size(); ++i) {
        cout << "_" << " ";
    }
}

