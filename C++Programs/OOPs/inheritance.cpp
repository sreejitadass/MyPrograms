class Parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class Child1: public Parent{
    //x is public
    //y is protected
    //z is inaccessible
};

class Child2: protected Parent{
    //x is protected
    //y is protected
    //z is inaccessible
};

class Child3: private Parent{
    //x is private
    //y is private
    //z is inaccessible
};
