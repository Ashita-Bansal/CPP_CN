class ComplexNumbers{
    private:
    int real;
    int imaginary;
    public:
    ComplexNumbers(int real,int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void plus(ComplexNumbers f2){
        this->real=this->real+f2.real;
        this->imaginary=this->imaginary+f2.imaginary;
    }
    void multiply(ComplexNumbers f2){
        int a=(real*f2.real)-(imaginary*f2.imaginary);
        int b=(real*f2.imaginary)+(imaginary*f2.real);
        real = a;
        imaginary=b;
    }
    void print(){
        cout<<real<<" + i"<<imaginary<<endl;
    }
};