#include <iostream> 
using namespace std;
 
class Shape {
   protected:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      virtual int area() {
         cout << "Parent class area :" <<endl;
         return 0;
      }
};

class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Rectangle class area :" <<endl;
         return (width * height); 
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a = 0, int b = 0):Shape(a, b) { }
      
      int area () { 
         cout << "Triangle class area :" <<endl;
         return (width * height / 2); 
      }
};

class Trapezium: public Shape {
   private:
      int side;
   public:
      Trapezium( int a = 0, int b = 0, int c = 0):Shape(a, b) {
         side = c;
      }
      int area () { 
         cout << "Trapezium class area :" <<endl;
         return ((width + side) * height / 2); 
      }
};

// Main function for the program
int main() {
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
   Trapezium trap(5, 4, 7);

   // store the address of Rectangle
   shape = &rec;
   
   // call rectangle area.
   cout << shape->area() << endl;

   // store the address of Triangle
   shape = &tri;
   
   // call triangle area.
   cout << shape->area() << endl;
   
   // store the address of Trapezium
   shape = &trap;
   
   // call trapezium area.
   cout << shape->area() << endl;
   
   return 0;
}

