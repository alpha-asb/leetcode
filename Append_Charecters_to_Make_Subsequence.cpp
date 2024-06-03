class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0;
        int j=0;

        for(int k=0;k<s.size();k++){
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
        return t.size()-j;
    }
};
