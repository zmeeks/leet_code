class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len = strs.size();
        vector<pair<string, string> > vec_p(len);
        vector<vector<string> > ret;
        pair<string, string> tmp;
        vector<string> vec_s;
        string str;
        for(int i=0; i<len; i++){
            str = strs[i];
            sort(str.begin(), str.end(), [](char a, char b){return tolower(a)<tolower(b);}); //tolower() not actually needed. std sort func would suffice here
            vec_p[i] = ((pair<string, string>){strs[i], str});
        }
        sort(vec_p.begin(),vec_p.end(), [](pair<string, string> a, pair<string, string> b){return a.second < b.second;});
        vec_s.emplace_back(vec_p[0].first);
        for(int i=1; i<len; i++){
            if(vec_p[i].second == vec_p[i-1].second){
                vec_s.emplace_back(vec_p[i].first);
            }
            else{
                ret.emplace_back(vec_s);
                vec_s.resize(0);
                vec_s.emplace_back(vec_p[i].first);
            }
        }
        ret.emplace_back(vec_s);
        return ret;
    }
};