// CLASS DEFINITION 

class Header {

    public:
    Header();
    Header(string s);
    ~Header();
    void displayMessage () const;
    void join () const;

    private:
    char *name;
    int length;
}