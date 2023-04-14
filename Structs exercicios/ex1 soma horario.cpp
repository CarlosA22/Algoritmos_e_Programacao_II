#include <iostream>
#include <time.h>
using namespace std;

struct horario{
    int hora, minuto, segundo;
};

horario defHorario(){
    horario h;

    do{
        cout<<"Informe a hora";
        cin>>h.hora;
    }while(h.hora < 0 || h.hora > 23);
    do{
        cout<<"Informe o minuto";
        cin>>h.minuto;
    }while(h.minuto < 0 || h.minuto > 59);
    do{
        cout<<"Informe o segundo";
        cin>>h.segundo;
    }while(h.segundo < 0 || h.segundo > 59);

    return h;
}

horario somaHorario(horario h1, horario h2){
    horario h;

    h.segundo = (h1.segundo + h2.segundo)%60;
    h.minuto = (h1.minuto + h2.minuto + (h1.segundo + h2.segundo)/60)%60;
    h.hora = (h1.hora + h2.hora + (h1.minuto + h2.minuto + (h1.segundo + h2.segundo)/60)/60)%24;
    
    return h;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    horario h1, h2, h3;

    h1=defHorario();
    h2=defHorario();
    h3=somaHorario(h1, h2);
    cout<<"Horario final: \n"<<"Hora: "<<h3.hora<<" Minuto: "<<h3.minuto<<" Segundo: "<<h3.segundo;

    return 0;
}