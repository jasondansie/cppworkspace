#include <iostream>

using namespace std;

int main(){
  
    double small_room_price {25.00};
    double big_room_price {35.00};
    double taxes {0.06};
    int experation_date {30};
    
    cout << "Welcome to Jason's Cleaning services. ";
    int num_of_small_rooms {0};
    cout << "\nHow many small rooms do you want cleaned? ";
    cin >> num_of_small_rooms;
    
    int num_of_big_rooms {0};
    cout << "\nHow many big rooms do you want cleaned? ";
    cin >> num_of_big_rooms;

    cout << "Estimat for cleaning service";
    cout << "\nNumber of small rooms: " << num_of_small_rooms;
    cout << "\nNumber of big rooms: " << num_of_big_rooms;
    cout << "\nPrice per small room: $" << small_room_price;
    cout << "\nPrice per big room: $" << big_room_price;
    
    double small_room_cost {num_of_small_rooms * small_room_price};
    double big_room_cost {num_of_big_rooms * big_room_price};
    double total_room_cost {big_room_cost + small_room_cost};
    double total_tax { total_room_cost * taxes};
    double total_cost {total_room_cost + total_tax};
    
    cout << "\nCost: $" << total_room_cost;
    cout << "\nTaxes: $" << total_tax;
    cout << "\n==========================";
    
    cout << "\n Total Estimate: $" << total_cost;
    cout << "\nThis estimate is good for " << experation_date << " days." << endl;
    
    return 0;
}