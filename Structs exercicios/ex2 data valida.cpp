#include <iostream>
using namespace std;

struct data{
    int dia, mes, ano;

};

bool dataValida(data d){
    switch(d.mes){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if(d.dia >= 1 && d.dia <= 31){
            return true;
        }
        return false;
        break;
        case 4: case 6: case 9: case 11:
        if(d.dia >= 1 && d.dia <= 30){
            return true;
        }
        return false;
        break;
        case 2:
        if((d.ano%4==0 && d.ano%100!=0) || d.ano%400==0){
            if(d.dia <= 1 && d.dia >= 29){
                return true;
            }
            return false;
        }else{
            if(d.dia <= 1 && d.dia >= 28){
                return true;
            }
            return false;
        }
        break;
        default:
        return false;
    }

}

int main(){
    data dia, mes, ano;
    data d;
    cout<<"Insira uma data no formato DD/MM/AAAA:\n";
    cin>>dia>>mes>>ano;

    dataValida(d);
    
    return 0;
}