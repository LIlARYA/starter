#include <iostream>

int main(int argc, char **argv){

    float weight;
    std::cout << "Enter weight in pounds : ";
    std::cin >> weight;
    std::cout << "Entered weight : " << weight << "[lb]" << std::endl;
    std::cout << "Entered weight : " << weight/2.205 << "[kg]" << std::endl;



    return 0;
}