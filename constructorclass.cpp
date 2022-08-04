class student{
    public : 
    int rollno;
    private : 
    int age;
    public : 

    ~student(){
        cout<<"destructor called ! "<<endl;
    }

    student(int rollno){
        cout<<"constructor 2 called !"<<endl;
        this -> rollno=rollno;
    }
    student(int a,int r){
        cout<<" this : "<<this<<endl;
        cout<<"constructor 3 called !"<<endl;
        this -> age = a;
        this -> rollno=r;
    }
    void display(){
        cout<<age<<" "<<rollno<<endl;
    }
};