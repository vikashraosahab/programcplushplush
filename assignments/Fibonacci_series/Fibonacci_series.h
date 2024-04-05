// CREATE A CLASS NAMED AS FIBONACCI_SERIES

class FibonacciSeries {
    
   // PUBLIC ACCESS SPECIFIER
   public:
   // SET THE LENGTH OF FIBONACCI_SERIES
   int length;
    FibonacciSeries ();
    ~FibonacciSeries();
    void getFibonacci_series ();
   // PRIVATE ACCESS SPECIFIER
   private:
   //int fib_series [length];
};

// CLASS DEFINITION 
FibonacciSeries::FibonacciSeries () {
  std::cout << "Enter your last value : ";
  std::cin >> length;
};

void FibonacciSeries::getFibonacci_series (){
   int first_value = 0;
   int second_value = 1;
   int i = 0;
   
   for (int i = 0; i < length; i++) {
     if (i == 0) {
       std::cout << first_value << " ";
     }
     else if (i == 1) {
        std::cout << second_value << " ";
     }
     else {
        int swap = first_value + second_value;
        std::cout << swap << " ";
        // SWAPPING THE VALUES
        first_value = second_value;
        second_value = swap;
     }
   }
   
};

FibonacciSeries::~FibonacciSeries () {
    std::cout << "\nYour program is ended now !" << std::endl;
}

