/*
    A importância de R$780.000,00 será dividida entre os três primeiros colocados de um concurso, 
    em partes diretamente proporcionais ao pontos conseguidos por eles. 
    Construa um programa que solicite o número depontos dos 3 primeiros colocados e imprima a importância que caberá a cada um
*/

#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

float prize_value;
// map<int,float>winners;

int main()
{
    float score;
    for(int i = 3; i >= 1; i--)
    {
        cout << "Informe a pontuação do " << i << " colocado: ";
        cin >> score;
        if(i == 3)
        {
            
        }
    }
    
    // TO-DO
    // Dividir o prêmio por 50%, 30% e 20%
    
    return 0;
}