#include <iostream>

using namespace std;

class Cat{
public:
    static int cat_counter; // using static keyword

//Constructor
   Cat(){
      ++cat_counter;
    }

    void display(){
        cout << "There are " << cat_counter << " cats under the building. " << endl;
    }

};
//Initialize outside the class

 int Cat::cat_counter = 0;

int main() {

    Cat cat1;
    Cat cat2;
    Cat cat3;
    Cat cat4;
    cat2.display();
    return 0;
}