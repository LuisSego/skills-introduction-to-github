#include <bits/stdc++.h>

using namespace std;
template <typename T>
class Punto{
    private:
        T X;
        T Y;
    public:
        Punto(T X,T Y){
            this->X=X;
            this->Y=Y;
        }
        void desplasar(T dpX,T dpY){
            X+=dpX;
            Y+=dpY;
        }
        void imprimir(){
            cout<<X<<", "<<Y<<endl;
        }
};
int main(){
    Punto<float> p(3.4,-5.8);
    p.desplasar(-3,8);
    p.imprimir();
    p.desplasar(-5.3,2.38);
    p.imprimir();
    return 0;
}
