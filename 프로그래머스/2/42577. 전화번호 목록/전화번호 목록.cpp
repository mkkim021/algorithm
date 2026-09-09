#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    unordered_set<string> set;
    
    for(auto& n:phone_book){
        set.insert(n);
    }
    
    for(auto& n:phone_book){
        for(int i=1;i<n.size();i++){
            if(set.contains(n.substr(0,i)))return false;
        }
    }
    return true;

    
}