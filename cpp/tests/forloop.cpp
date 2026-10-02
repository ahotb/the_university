#include <iostream>


int main(){
    
    for (int x = 1; x <= 12;x++){
        for (int y = 1; y < 60;y++){
            for (int i = 1; i < 60;i++){
            std::cout << "H: " << x << ":" << y << ":" << i << std::endl;
            }
        }
    }
    

    return 0;
}