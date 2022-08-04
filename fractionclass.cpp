class fraction{
    private:
    int numerator;
    int denominator;
    public:

    fraction(){

    }

    fraction(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }

    int getnumerator() const{
        return numerator;
    }
    int getdenominator()const{
        return denominator;
    }
    int setnumerator(int n){
        numerator=n;
    }
    int setdenominator(int d){
        denominator=d;
    }

    void print()const{
        cout<<numerator<<"/"<<denominator<<endl;
    }

    void simplify(){
        int gcd =1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<=j;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd=i;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }

    void add(fraction const &f2){
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;

        int num=x*numerator+(y*f2.numerator);

        numerator=num;
        denominator=lcm;

        simplify();


    }
    void multiply(fraction const &f2){
        numerator=numerator*f2.numerator;
        denominator=denominator*f2.denominator;

        simplify();
    }


};