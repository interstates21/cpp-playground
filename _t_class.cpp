cntr + space - SHOW SNIPPET LIST

class MyClass
{
public:
    MyClass();
    MyClass(MyClass &&) = default;
    MyClass(const MyClass &) = default;
    MyClass &operator=(MyClass &&) = default;
    MyClass &operator=(const MyClass &) = default;
    ~MyClass();

private:
    
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}