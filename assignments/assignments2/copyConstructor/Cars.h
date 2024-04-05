// CLASS DECLARATION 
// CREATE A CLASS  NAMED AS CARS

class Cars {
    public: // ACCESS SPECIFIER LABLE (PUBLIC)
    int length;  // PUBLIC DATA MEMBER
    Cars (); // DEFAULT CONSTRUCTOR
    Cars (const char *company, const char *model, const int *numberPlate, const char *colors); /* CLAS CONSTRUCTOR */
    Cars &display() const; // CASCADE MEMBER FUNCTION 
    Cars &joinDetails(
        const char *,
        const char *,
        const int *,
        const char *
    ); // CASCADE MEMBER FUNCTION 

    private: // ACCESS SPECIFIER LABLE (PRIVATE)
    char *brand;
    char *carModel;
    int *numberPlate;
    char *color;

};