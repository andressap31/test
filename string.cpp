#include <iostream>
#include <cstring>
using namespace std;


char* reverte(char *str){
    int size = strlen(str);
    char *str_aux = new char[size + 1]; // +1 para o caractere nulo no final da string
    int j = 0;

    for (int i = size - 1; i >= 0; i--){
        str_aux[j] = str[i];
        j++;
    }

    str_aux[size] = '\0'; // Adiciona o caractere nulo no final da string
    return str_aux;
}
int main()
{
    char str[100]; // Defina um tamanho máximo para a string de entrada
    cout << "Digite uma string:";
    cin.getline(str, 100);
    
    char *str_invertida = reverte(str);

    cout << "String invertida: " << str_invertida << endl;

    delete[] str_invertida; // Não esqueça de liberar a memória alocada
    return 0;
}
