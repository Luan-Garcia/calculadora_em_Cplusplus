#include <iostream>
#include <cmath>

using namespace std;

double calculaEnergia(float m, double c) {
    double resultado;
    resultado = m * pow(c,2);
    return resultado;
}

double calculaMassa(float e, double c) {
    double resultado;
    resultado = e / pow(c,2);
    return resultado;
}

void init () {
    int op;
    double c = 300000000, r;
    cout << "Escola o que quer calcular: \n 1 - Energia \n 2 - Massa" << endl;
    cin >> op;

    if (op == 1) {
        float m;
        cout << "Informe a massa(kg): " << endl;
        cin >> m;
        r = calculaEnergia(m, c);
        cout << "A energia eh: " << r << "Joules" << endl;
    }
    else if (op == 2) {
        float e;
        cout << "Informe a energia(J): " << endl;
        cin >> e;
        r = calculaMassa(e, c);
        cout << "A massa eh: " << r << "Kg" << endl;
    }
    else cout << "opcao invalida!" << endl;

}

int main()
{
    int escolha; 
    int num1;
    int num2;
    cout << "Digite (1) para somar" << endl;
    cout << "Digite (2) para subtrair" << endl;
    cout << "Digite (3) para dividir" << endl;
    cout << "Digite (4) para multiplicar" << endl;
    cout << "Digite (5) para potencia" << endl;
    cout << "Digite (06) para uma raiz quadrada" << endl;
    cout << "Digite (07) para arredondar" << endl;
    cout << "Digite (08) para calcular massa ou energia" << endl;
    cout << "Digite (09) para calcular o seno" << endl;
    cout << "Digite (10) para calcular o cosseno" << endl;
    cout << "Digite (11) para calcular a tangente" << endl;
    cout << "Digite (0) para sair" << endl;
    cin >> escolha;

    switch (escolha) {

        case 1 :
            int soma;
            cout << "Digite o primeiro numero: " << endl;
            cin >> num1;
            cout << "Digite o segundo numero: " << endl;
            cin >> num2;
            soma = num1 + num2;
            cout << soma << endl;
               break;
        case 2 :
            int sub;
            cout << "Digite o primeiro numero: " << endl;
            cin >> num1;
            cout << "Digite o segundo numero: " << endl;
            cin >> num2;
            sub = num1 - num2;
            cout << sub << endl;
            break;

        case 3:
            int div;
            cout << "Digite o primeiro numero: " << endl;
            cin >> num1;
            cout << "Digite o segundo numero: " << endl;
            cin >> num2;
            div = num1 / num2;
            cout << div << endl;
            break;

         case 4:
            int mult;
            cout << "Digite o primeiro numero: " << endl;
            cin >> num1;
            cout << "Digite o segundo numero: " << endl;
            cin >> num2;
            mult = num1 * num2;
            cout << mult << endl;
            break;

         case 5:
            int base;
            int expoente;
            int resultado;
            cout << "Digite a base da sua potencia: " << endl;
            cin >> base;
            cout << "Digite o expoente da sua potencia: " << endl;
            cin >> expoente;
            resultado = pow(base, expoente);
            cout << "O resultado da sua potencia eh: " << resultado << endl;
            break;

         case 6:
             int base2;
             int resultado2;
             cout << "Digite o numero que voce deseja saber a raiz quadrada: " << endl;
             cin >> base;
             resultado = sqrt(base);
             cout << "A raiz quadrada do seu numero eh: " << resultado << endl;
             break;

         case 7:
             float base3;
             int resultado3;
             int resultado4;
             cout << "Digite o numero que voce deseja arredondar: " << endl;
             cin >> base3;
             resultado3 = floor(base3);
             resultado4 = ceil(base3);
             cout << "O seu numero arredondado para baixo eh: " << resultado3 << endl;
             cout << "O seu numero arredondado para cima eh: " << resultado4 << endl;
             break;

         case 8:
             init();
             break;

         case 9:
            int angulo;
            float resultado5;
            cout << "Insira o angulo que voce deseja calcular o seno: " << endl;
            cin >> angulo;
            resultado5 = sin ( angulo  * 3.14159 / 180);
            cout << "o valor do seno de " << angulo << " eh: " << resultado5 << endl;
            break;

         case 10:
            int angulo1;
            float resultado6;
            cout << "Insira o angulo que voce deseja calcular o cosseno: " << endl;
            cin >> angulo1;
            resultado6 = cos ( angulo1 * 3.14159 / 180);
            cout << "O valor do cosseno de " << angulo1 << " eh: " << resultado6 << endl;
            break;

         case 11:
            int angulo2;
            float resultado7;
            cout << "Insira o angulo que voce deseja calcular a tangente: " << endl;
            cin >> angulo2;
            resultado7 = tan (angulo2 * 3.14159 / 180 );
            cout << "O valor da tangente de " << angulo2 << " eh: " << resultado7 << endl;
            break;



        case 0:
            cout << "Voce saiu" << endl;
            break;


        default:
            cout << "Numero nao permitido" << endl;


    }
}
