#include <stdio.h>
#include <iostream>
using namespace std;

class Aluno{
    private:
        int matricula;
        string nome;
    public:
    Aluno(int m, string n){
        matricula = m;
        nome = n;
    }
};