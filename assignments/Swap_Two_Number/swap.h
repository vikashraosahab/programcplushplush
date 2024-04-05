// CREATE A CLASS SWAP

class Swap {
    public:
    Swap (int val1,int val2) {
        value1 = val1;
        value2 = val2;
    }
     
     void swap (){
        int swap = value1;
        value1 = value2;
        value2 = swap;
     };

     void print () const {
        std::cout << "Value 1 " << this->value1 << std::endl;
        std::cout << "Value 2 " << this-> value2 << std::endl;
     };

    private:
    int value1;
    int value2;
};