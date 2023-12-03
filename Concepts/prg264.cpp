#include <iostream>
#include <concepts>

/* template <typename T>
requires std::integral<T>
T add(T a,T b){
    return a+b;
} */

/*t emplate <std::integral T>
T add(T a,T b){
    return a+b;
}
 */

/* auto add(std::integral auto a,std::integral auto b)
{
    return a +b;
}
 */

template <typename T>

T add(T a,T b)requires std::integral<T>{
    return a+b;
} 

int main()
{
    int result = add(1,2);
    std::cout << "Result: " << result <<std::endl;

    return 0;
}
