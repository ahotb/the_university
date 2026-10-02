#include <iostream>


int main(){
    int numLoops;
    std::cin >> numLoops;
    int sum = 0;
    while (numLoops) // هذا ياخذ العدد الاول وكم مره راح يكون يشتغل 
    {
        int n;
        std::cin >> n; // هنا ياخذ المدخلات الجديده على العدد الي حطه اول مره
        sum += n; // هنا نجمع الاعداد
        numLoops--;
    }
     std::cout << sum << std::endl; // هنا يطبع مجموع الاعداد الي ادخلهم في n
    
    return 0;
}