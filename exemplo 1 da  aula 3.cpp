#include<iostream>

int main(){
      int numero;
      std::cout << "Digite um número";
      std::cin >> numero;
      
      if(numero % 2==0){
          std::cout << "O número é par."<< std::endl;
      }else{
           std::cout << "O número é impar."<< std::endl;
      }
      
      return 0;