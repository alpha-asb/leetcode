class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){return false;}
        map<int,int>mp;
        for(int i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        while(!mp.empty()){
            int first = mp.begin()->first;
            for(int i=0;i<groupSize;i++){
                if(mp[first+i]==0){
                    return false;
                }
                mp[first+i]--;
                if(mp[first+i]==0){
                    mp.erase(first+i);
                }
            }
        }
        return true;
    }
};
