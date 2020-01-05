#ifndef A_h
#define A_h

class B;
class C;

class A {

 public:

    virtual void perimetre();

    virtual void aire();

 public:
    Integer R;
    Integer Center;
    String cle;

 public:

    B *A_B;

    C *A_C;
};

#endif // A_h
