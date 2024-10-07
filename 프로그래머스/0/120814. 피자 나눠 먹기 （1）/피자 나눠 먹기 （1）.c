#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    
    //7명은 최소 한조각씩 먹을라면 1판이필요 
    
    if(n%7==0){
        answer = n/7;
    }else if(n%7!=0){
        answer = n/7+1;
    }
        
    //피자수 1판(7조각) 사람 7까지는 1판
    //9부터 2판
    

    return answer;
}