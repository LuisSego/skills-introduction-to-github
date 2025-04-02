#include <bits/stdc++.h>

using namespace std;
class Punto{
    private:
        int X;
        int Y;
    public:
        Punto(int X,int Y){
            this->X=X;
            this->Y=Y;
        }
        template<typename T>
        void cuadrante(T p){
            if(p.X>0&&p.Y>0){
                cout<<"1"<<endl;
            }else if(p.X<0&&p.Y>0){
                cout<<"2"<<endl;
            }else if(p.X<0&&p.Y<0){
                cout<<"3"<<endl;
            }else if(p.X>0&&p.Y<0){
                cout<<"4"<<endl;
            }else if(p.X==0&&p.Y>0){
                cout<<"12"<<endl;
            }else if(p.X<0&&p.Y==0){
                cout<<"23"<<endl;
            }else if(p.X==0&&p.Y<0){
                cout<<"34"<<endl;
            }else if(p.X>0&&p.Y==0){
                cout<<"14"<<endl;
            }else if(p.X==0&&p.Y==0){
                cout<<"0"<<endl;
            }
        }
};
int main(){
    Punto p(0, -2.45);
    p.cuadrante(p);
    Punto p2(-5.32, 3);
    p2.cuadrante(p2);
    Punto p3(0,0);
    p3.cuadrante(p3);
    Punto p4(-10, -8);
    p3.cuadrante(p4);
    return 0;
} 