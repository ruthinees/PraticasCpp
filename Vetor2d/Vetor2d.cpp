#include <iostream>

class Vetor2d{
    private:
        float x, y;
    
    public:

        void setX(float x_){
            x = x_;
        }
        
        float getX(){
            return x;
        }

         void setY(float y_){
            y = y_;
        }
        
        float getY(){
            return y;
        }
};


int main (void){
    Vetor2d v;

    v.setX(3);
    v.setY(4);
    std::cout << "(" << v.getX() << "," << v.getY() << ")\n";
    
    return 0;
}