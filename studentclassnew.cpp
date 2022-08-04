class Student{
    int age;
    

    public:
    char *name;

    Student(int age, char *name){
        this->age= age;
        //shallow copy (we should avoid this)
        // this->name=name;  

        //Deep copy
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    Student(Student const &s){
        this->age=s.age;
        this->name=s.name; //shallow copy therefore it should be avoided

        //deep copy
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);  
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }
};