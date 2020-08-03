#include <iostream>
#include <vector>

using namespace std;

int main(){
   
    vector <int> vector1;
     
     
    vector1.push_back(10);
    vector1.push_back(20);

    cout << "element 1 is: " << vector1.at(0) << endl;
    cout << "element 2 is: " << vector1.at(1) << endl;
     cout << "The size of the vector 1 is: " << vector1.size() << endl<< endl;

    vector <int> vector2;
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "element 1 of vector 2 is: " << vector2.at(0) << endl;
    cout << "element 2 o vector 2 is: " << vector2.at(1) << endl;
    cout << "The size of the vector 2 is: " << vector1.size() << endl<< endl;
     
     
     vector <vector<int>> vector_2d ;
     
     vector_2d.push_back(vector1);
     vector_2d.push_back(vector2);
     
    cout << "element 1 1 of vector_2d is: " << vector_2d.at(0).at(0) << endl;
    cout << "element 1 2 o vector_2d is: " << vector_2d.at(0).at(1) << endl;
    cout << "element 2 1 of vector_2d is: " << vector_2d.at(1).at(0) << endl;
    cout << "element 2 2 o vector_2d is: " << vector_2d.at(1).at(1) << endl;
    
    cout << "The size of the vector_2d is: " << vector1.size() << endl<< endl;
     
     vector1.at(0) = 1000;
     
     cout << "element 1 1 of vector_2d is: " << vector_2d.at(0).at(0) << endl;
    cout << "element 1 2 o vector_2d is: " << vector_2d.at(0).at(1) << endl;
    cout << "element 2 1 of vector_2d is: " << vector_2d.at(1).at(0) << endl;
    cout << "element 2 2 o vector_2d is: " << vector_2d.at(1).at(1) << endl;
    
    cout << "The size of the vector_2d is: " << vector1.size() << endl<< endl;
     
     cout << "element 1 is: " << vector1.at(0) << endl;
    cout << "element 2 is: " << vector1.at(1) << endl;
     cout << "The size of the vector 1 is: " << vector1.size() << endl<< endl;

    return 0;
}