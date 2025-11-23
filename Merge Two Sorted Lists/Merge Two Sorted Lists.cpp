
#include <iostream>
#include<vector>
using namespace std;

   
class Solution {
public:
    void merge(vector<int>& nums1, vector<int>& nums2) {


        for (int i = 0;i < nums2.size();i++)
        {
            for (int j = 0;j < nums1.size();j++)
            {
                if (nums1[j] == 0)
                {
                    nums1[j] = nums2[i];
                    break;
                }

            }
        }

        // sort
        for (int i = 0;i < nums1.size() - 1;i++)
        {
            for (int j = 0;j < nums1.size() - i - 1;j++)
            {
                if (nums1[j] > nums1[j + 1])
                    swap(nums1[j], nums1[j + 1]);
            }
        }
    }

    void displayNums1(vector<int>& nums1)
    {
        cout << "[";
        for (int i = 0;i < nums1.size();i++)
        {
            cout << nums1[i] << " ";
        }
        cout << "]" << "\n";
    }
    void displayNums2(vector<int>& nums2)
    {
        cout << "[";
        for (int i = 0;i < nums2.size();i++)
        {
            cout << nums2[i] << " ";
        }
        cout << "]" << "\n";
    }
};
int main()
{
    /*vector<int>nums1 = { 1,2,3,0,0,0 };
    vector<int>nums2 = { 2,5,6 };*/

    vector<int>nums1 = { -1,0,0,3,3,3,0,0,0 };
    vector<int>nums2 = { 1,2,2 };
    

    Solution s;
    cout << "Nums 1:" << "\n";
    s.displayNums1(nums1);
    cout << "Nums 1:" << "\n";
    s.displayNums2(nums2);


    s.merge(nums1,nums2);
    cout << "After merging and sorting "<<"\n";
    s.displayNums1(nums1);
   
}

