vector<string> helper(int sr,int sc,int dr,int dc){
        if(sr==dr && sc==dc){
            vector<string> bres;
            bres.push_back("");
            return bres;
        }
        vector<string> paths;
        //horizontal moves
  for(int move_size=1;move_size<=dc-sc;move_size++){
     vector<string> hpaths = helper(int sr,int sc + move_size,int dr,int dc);
     for(int i=0;i<hpaths.size();i++){
            paths.push_back("h"+ move_size + hpaths[i]);
        }
  }
        //vertical paths
   for(int move_size=1;move_size<=dr-sr;move_size++){
     vector<string> vpaths = helper(int sr + move_size,int sc,int dr,int dc);
     for(int i=0;i<vpaths.size();i++){
            paths.push_back("v"+ move_size + vpaths[i]);
        }
  }
        //diagonal paths
    for(int move_size=1;move_size<=dc-sc && move_size<=dr-sr;move_size++){
     vector<string> dpaths = helper(int sr + move_size,int sc + move_size,int dr,int dc);
     for(int i=0;i<dpaths.size();i++){
            paths.push_back("d"+ move_size + dpaths[i]);
        }
  }
    
    
        return paths;
}
