#include <string>
#include <vector>
#include <algorithm>

using namespace std;
vector<string> route;
bool dfs(string start,int used,vector<bool>& isused,vector<vector<string>>& tickets){
    if(used==tickets.size()){
        route.push_back(start);
        return true;
    }
    for(int i=0;i<tickets.size();i++){
        if(!isused[i]&&tickets[i][0]==start){
            isused[i] = true;
            route.push_back(start);
            if(dfs(tickets[i][1],used+1,isused,tickets)) return true;
            route.pop_back();
            isused[i] = false;
        }
    }
    return false;
}
vector<string> solution(vector<vector<string>> tickets) {
    
    sort(tickets.begin(),tickets.end());
    vector<bool> isUsed(tickets.size());
    dfs("ICN",0,isUsed,tickets);
    
    return route;
}