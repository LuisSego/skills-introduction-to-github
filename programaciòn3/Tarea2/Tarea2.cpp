#include <bits/stdc++.h>

using namespace std;
class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        Fecha(int dia,int mes,int anio){
            this-> anio=anio;
            this-> mes=mes;
            this-> dia=dia;
        }
        int dias(Fecha otra){
            const int diasMes[]={31,28,31,30,31,30,31,31,30,31,30,31};
            int totaldias=0;
            int anios=0;
            int diasmes=0;
            if(anio<otra.anio){
                int cont=mes-1;
                anios=otra.anio-anio;
                anios*=365;
                while(cont<otra.mes-1){
                    diasmes+=diasMes[cont];
                    cont++;
                }
                diasmes-=dia;
                totaldias=anios+diasmes+otra.dia+viciesto(anio,otra.anio)-1;
            }else if(anio>otra.anio){
                anios=anio-otra.anio;
                anio*=365;
                int cont=otra.mes-1;
                while(cont<mes-1){
                    diasmes+=diasMes[cont];
                    cont++;
                }
                diasmes-=otra.dia;
                totaldias=anios+diasmes+dia+viciesto(anio,otra.anio)-1;
            }
            else{
                if(mes<otra.mes){
                    int cont=mes-1;
                    while(cont<otra.mes-1){
                        diasmes+=diasMes[cont];
                        cont++;
                    }
                    diasmes-=dia;
                    totaldias=diasmes+otra.dia+viciesto(anio,otra.anio)-1;
                }else if(otra.mes<mes){
                    int cont=otra.mes;
                    while(cont<mes){
                        diasmes+=diasMes[cont];
                        cont++;
                    }
                    diasmes-=otra.dia;
                    totaldias=anios+diasmes+dia+viciesto(anio,otra.anio)-1;
                }else{
                    if(dia<otra.dia){
                        return otra.dia-dia+viciesto(anio,otra.anio)-1;
                    }else{
                        return dia-otra.dia+viciesto(anio,otra.anio)-1;
                    }
                }
            }
            return totaldias;
        } 
       int viciesto(int anio,int otro){
            int pviciesto;
            int cont=0;
            if(anio<otro){
                for(int i=0;i<3;i++){
                    if(anio%4==0&&(anio%100!=0||anio%400==0)){
                        pviciesto=anio; 
                        break;         
                    }
                    anio++;
                }
                while(pviciesto<=otro){
                    cont++;
                    pviciesto+=4;
                }
            }
            else{
                for(int i=0;i<3;i++){
                    if(otro%4==0&&(otro%100!=0||otro%400==0)){
                        pviciesto=otro; 
                        break;         
                    }
                    anio++;
                }
                while(pviciesto<=anio){
                    cont++;
                    pviciesto+=4;
                }
            }
            return cont;
        }   
};

int main(){
    Fecha fecha(1,1,int(2000));
    Fecha otra(27,3,int(2025));
    cout<<fecha.dias(otra);
    return 0;
}