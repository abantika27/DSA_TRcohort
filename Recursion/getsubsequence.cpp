#include <bits/stdc++.h> 
vector<string> gss(string s){


        if(s.length()==1){ //In the base case length is taken to be 1 instead of 0 so that it doesnt give any segmentation faults


            vector<string> ans;
            ans.push_back("");
            ans.push_back(s);
            
            return ans;
        }

        vector<string>ans2 = gss(s.substr(1)); //Answer returned by passing the substring of the original string
        vector<string>result;

        int i=0;
        int j=0;
        for(i=0;i<ans2.size()*2;i++){
            if(i<ans2.size()){
                result.push_back(ans2[i]);
            }else{
                result.push_back(s[0]+ans2[j]);
                j++;
            }
        }
        return result;

}
