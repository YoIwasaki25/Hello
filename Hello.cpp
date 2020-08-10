#include<iostream>
#include<tuple>
#include<utility>

std::pair<int, int>f(int p, int q){
    int tmp;
    tmp = p;
    p = q;
    q = tmp;
    return {p, q};
}

void swap(int* p, int* q){
    int tmp;
    tmp = *p;
    *p = *q;
    *q = tmp;
}

int main(){
    int x = 2;
    int y = 3;

    // std::cout << "ポインタ渡し";    
    // std::cout << "x: " << x << "y: " << y << std::endl;
    // swap(&x, &y);
    // std::cout << "x: " << x << "y: " << y << std::endl;

    std::cout << "値をタプルで渡す";
    std::cout << "x: " << x << "y: " << y << std::endl;
    auto[a,b] = f(x, y);
    std::cout << "x: " << a << "y: " << b << std::endl;
    

    return 0;
}