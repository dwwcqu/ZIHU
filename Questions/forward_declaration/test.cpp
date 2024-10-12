class MyClass;

// 1. 作为函数声明的参数列表
void DoSomething(MyClass obj);

// 2. 作为函数声明的返回值
MyClass GetSomething();

// 3. 函数定义时的指针/引用参数
void DoSomething(MyClass *obj){}
void DoSomething(MyClass &obj){}

// 4. 函数定义时的指针/引用返回
MyClass* GetSomething1(){}
MyClass& GetSomething2(){}

// 5. 声明指针/引用对象
MyClass *obj1;
MyClass &obj2;

// 6. 定义一个对象？
MyClass obj3;

// 7. 作为基类？
class Derived : MyClass {};

// 8. 函数定义的参数/返回
void DoSomething(MyClass obj) {}
MyClass GetSomething() {}

// 9. 使用指针/引用获取对象里面的成员变量
auto mem1 = obj1->mem_var;
auto mem2 = obj2.mem_var;

// 10. 使用指针/引用调用成员函数
obj1->mem_func();
obj2.mem_func();