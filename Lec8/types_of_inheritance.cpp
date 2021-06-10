// Single inheritance
class Parent{};
class Child : public Parent{};

// Hierarchial inheritance
class Parent{};
class Child : public Parent{};
class Child2: public Parent{};

// Multiple  inheritance
class Parent1{};
class Parent2{};
class Child: public Parent1, public Parent2{}; 

// Multilevel inheritance
class Parent{};
class Child : public Parent{};
class GrandChild: public Child{};

// Hybrid inheritance
class Parent{};
class Child1 : public Parent{};
class Child2 : public Parent{};
class GrandChild : public Child1, public Child2{};