#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> q;
    int time = 1;
    int num = 0;
    q.push(num);
    int curW = truck_weights[0];
    
    while(!q.empty()){
        time++;
        if(time>bridge_length){
            if(q.front()!=-1)curW -= truck_weights[q.front()];
            q.pop();
        }
        if(num < truck_weights.size()-1){
            if(weight>=curW + truck_weights[num+1]){
                num++;
                q.push(num);
                curW += truck_weights[num];
            }
            else q.push(-1);
        }
        
    }
    return time;
}
