#include <String>
using namespace std;

class Person {
private:
  /* data */
  int m_iAge;
public:
  Person ();
  ~Person ();
  void eat();
protected:
  string m_strName;
};
