class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> v;
        
        for(int i=0;i<nums1.size();i++){
            map[nums1[i]] += 1;
        }
        for(int j=0;j<nums2.size();j++){
            if(map.find(nums2[j])!=map.end() && map[nums2[j]]>0){
                map[nums2[j]] -= 1;
                v.push_back(nums2[j]);
            }
        }
        // for(auto const& i: map){
        //     cout<<i.first<<i.second<<endl;
        // }
        return v;
        
    }
};
