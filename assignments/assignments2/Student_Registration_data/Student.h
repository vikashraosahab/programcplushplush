// CREATE A CLASS NAMED AS STUDENT

class Students {
   public: // ACCESS SPECIFIER LABEL
   int length;
   Students (); // DEFAULT CONSTRUCTOR
   Students (
   const char *n,
   const char *f,
   const char *d,
   const char *c,
   const char *sId,
   const char *a,
   const char *sY,
   const char *eY,
   const char *cD
   ); 

   
   
   // PARAMETERIZED CONSTRUCTOR
  ~Students (); // DESTURCTOR
   // CASCASE MEMBER FUNCTION 
   Students &display();
  // void clearInputBuffer ();
   //Students &join (); 
   private: // ACCESS SPECIFIER LABEL
   /*
    DATA MEMBER
   */
   char *name;
   char *father;
   char *department;
   char *course;
   char *studentId;
   char *age;
   char *startYear;
   char *endYear;
   char *courseDuration;
};