#include <iostream>

using namespace std;

int main(){
    int sum {0};
    for(int i {0}; i <16;  i++){
        if(i % 2 != 0) 
            sum += i ;
    
     cout << "sum: " << sum << endl;
    }
    
    return 0;
}