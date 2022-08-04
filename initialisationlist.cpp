class student{
    public:
    int age;
    const int rollno;
    int &x;//age reference variable



    student(int r,int age) : rollno(r), age(age),x(this->age) {
        // rollno = r;

    }

};