#include <iostream>
#include <iomanip>

using namespace std;


int function_activation_count {0};


double a_penny_doubled_everyday(int , double amount = 0.01 );//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

void amount_accumulated() {
    double total_amount {0};
    
    total_amount =a_penny_doubled_everyday(25);
    
    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount << endl;
}


double a_penny_doubled_everyday(int n, double amount) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES

    if(n <= 1)
        return amount; // base case
    return   a_penny_doubled_everyday(--n, amount*2) ; 
    
    function_activation_count++;
    
}

int test_function_activation_count() {
    return function_activation_count;
}

int main(){
   amount_accumulated();
    return 0;
}