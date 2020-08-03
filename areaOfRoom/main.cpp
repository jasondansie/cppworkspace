#include <iostream>

using namespace std;

int main(){
    
    cout << "Enter the rooms width: ";
    int room_width {0};
    cin >> room_width;
    
    cout << "Enter the rooms height: ";
    int room_height {0};
    cin >> room_height;
    
    cout << "The area of the room is " << room_height * room_width << " square feet" << endl;
    
    return 0;
}