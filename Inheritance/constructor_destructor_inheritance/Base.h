#ifndef BASE_H
#define BASE_H

class Base {
    private:
    int value;
    int age;
    
    public:
    Base (const int &val, const int &val2);
    ~Base ();
    void print () const;
};

// CLASS DEFINTION 
Base::Base (const int &val, const int &val2) {
    value = val;
    age = val2;
};

void Base::print () const {
    std::cout << "Hello world" << std::endl;
    std::cout << this->age << this->value << std::endl;
}


#endif