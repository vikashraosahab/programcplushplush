// CREATE A CLASS

// USING NAMESPACE STD
using namespace std;

class RootQuadratic {
   public: // ACCESS SPECIFIER LABEL
    RootQuadratic (); // CREATE CONSTRUCTOR 
    ~RootQuadratic (); // CREATE DESTRUCTOR
    RootQuadratic &getResult() const;

   private: // ACCESS SPECIFIER LABEL
   int a,b,c;
};
