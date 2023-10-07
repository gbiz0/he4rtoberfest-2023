#include <iostream>
#include <string>
using namespace std;

bool verificar (const string& text){
    int esquerda = 0;
    int direita = text.length() - 1;
    bool palindrono = true;

    for (int i = esquerda; i < direita; i++) {
        int posicaoReversa = direita - i;
        if (text.substr(i, 1) != text.substr(posicaoReversa, 1)) {
            palindrono = false;
            break;
        }
    }
    return palindrono;

};

int main(){
    string text;
    cout << "Escreva uma palavra: " << endl;
    getline(std::cin, text);

    if (verificar(text)) {
        std::cout << "É um palíndromo." << std::endl;
    } else {
        std::cout << "NÂO é um palíndromo." << std::endl;
    }
    return 0;
};