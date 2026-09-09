#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int total = brown + yellow;
    int r,c;
    
    for(int i=3;i<=total;i++){
        if(total%i==0){
            int r = max(i,total/i);
            int c = min(i,total/i);
            int val = 2*r + 2*c - 4;
            if(val == brown){
                answer.push_back(r);
                answer.push_back(c);
                return answer;
            }
        }

    }

}