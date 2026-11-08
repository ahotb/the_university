#include <iostream>


int main(){
    
    // for (int x = 1; x <= 12;x++){
    //     for (int y = 1; y < 60;y++){
    //         for (int i = 1; i < 60;i++){
    //         std::cout << "H: " << x << ":" << y << ":" << i << std::endl;
    //         }
    //     }
    // }

    int n = -1;
    while (n < 1 || n > 10){
        std::cin >> n;
    }
    // في حال ان الارقام المدخله اكبر من 10 واصغر من 1 يستمر التكرار وفي حال كانت الارقام بين 1 و 10 يتوقف التكرار 

    return 0;
}