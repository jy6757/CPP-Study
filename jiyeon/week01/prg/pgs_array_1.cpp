#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sum;
    
    for(int i=0; i<numbers.size(); i++)
        for(int j = i + 1; j< numbers.size(); j++)
            sum.insert(numbers[i] + numbers[j]);

    
//set to vector
   vector<int> answer(sum.begin(), sum.end());
        
    
    return answer;
}