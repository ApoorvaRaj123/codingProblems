#include <iostream>
using namespace std;

int main() {
    
    int arr[3][4];
    
    
    // Taking input in rows format
    
    for(int i=0;i<3;i++){
        for(int j = 0;j<4;j++){
            cin >>arr[i][j];
        }
    }
    
    // Taking input in columns format
    
    for(int i=0;i<4;i++){
        for(int j = 0;j<3;j++){
            cin >>arr[i][j];
        }
    }
    
    
    // Print
    
    
    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}
