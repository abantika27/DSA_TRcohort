vector<string> helper(int sr,int sc,int dr,int dc){
        if(sr==dr && sc==dc){
            vector<string> bres;
            bres.push_back("");
            return bres;
        }
        vector<string> hpaths;
        vector<string> vpaths;
        if(sr<dr){
            hpaths=helper(sr,sc+1,dr,dc);
        }
        if(sc<dc){
            vpaths=helper(sr+1,sc,dr,dc);
        }
        vector<string> paths;
        for(int i=0;i<hpaths.size();i++){
            paths.push_back("h"+ hpaths[i]);
        }
        for(int i=0;i<vpaths.size();i++){
            paths.push_back("v"+ vpaths[i]);
        }
        return paths;
}
