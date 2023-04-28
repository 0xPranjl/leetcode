class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> lnd;
        for(int i=0;i<m;i++){
            ld.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            ld.push_back(nums2[i]);
        }
        sort(ld.begin(),ld.end());
        nums1.clear();
        for(int i=0;i<lnd.size();i++){
            nums1.push_back(lnd[i]);
        }

    }
};
