
class Implementation {
 public:
  Implementation (int value) {
    setValue (value);
  }
  void setValue (int val) {
    value = val;
  }
  int getValue () const{
    return value;
  }
 private:
 int value;
};