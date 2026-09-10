#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int start = 0,end = people.size()-1;
    sort(people.begin(),people.end());
    
    while(start<=end){
        answer++;
        if(limit-people[end]>=people[start]){
            start++;
                
        }
        end--; 
    }
    return answer;
}