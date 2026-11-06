#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;
        
        for (int i = 0; i < strs.size(); i++) {
            string key = strs[i];
            sort(key.begin(), key.end());
            anagramGroups[key].push_back(strs[i]);
        }

        vector<vector<string>> result;
        for (auto it = anagramGroups.begin(); it != anagramGroups.end(); it++) {
            result.push_back(it->second);
        }

        return result;
    }
};
