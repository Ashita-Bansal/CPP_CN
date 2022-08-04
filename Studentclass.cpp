class student{
    public:
    int rollno;
    private:
    int age;
    public:

    ~student(){
        cout<<"Destructor called !"<<endl;
    }

    //default constructor
    student(){
        cout<<"Constructor 1 called !"<<endl;
    }
    //parametrized constructor
    student(int rollno){
        cout<<"Constructor 2 called"<<endl;
        this->rollno=rollno;
    }

    student(int a,int r){
        cout<<"Constructor 3 called !"<<endl;
        this->age=a;
        this->rollno=r;
    }

    void display(){
        cout<<age<<" "<<rollno<<endl;
    }
    int getage(){
        return age;
    }
    void setage(int a,int password){
        if(password != 123){
            return;
        }
        if(a<0){
            return;
        }
    }
};