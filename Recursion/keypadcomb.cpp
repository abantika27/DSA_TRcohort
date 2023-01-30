const vector<string> pad = { "" , "" , "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz" };
    vector<string> letterCombinations(string digits) {
    
         
        if( digits.length() == 0)
        {
            vector <string > v= {};
            return v;
        }
        
        char c =  digits[0];
        vector < string > v = letterCombinations(digits.substr(1));
        string s = pad[c -'0'];//imp conversion from char to int 
        vector  < string > temp;
        
        if(v.size() == 0)
        {
            for(int i=0;i<s.length();i++)
            {
                temp.push_back(s.substr(i,1));//substr takes two arguments(starting position,length);substr(1,2) means 2 char starting from pos 1

             }
        }
        for(int j=0;j<s.length();j++)
        {
            for(int i=0;i<v.size();i++)
            {
                temp.push_back( s[j] + v[i] );
            }
        }
        return temp;
    }
