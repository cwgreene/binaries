#include <stdio.h>
class CreatedBeforeMain {
public:
    CreatedBeforeMain() {
        printf("Hello, I was created before main!\n");
    }
    ~CreatedBeforeMain() {
        printf("Hello, I was destroyed on exit!\n");
    }
};

CreatedBeforeMain static_obj;

int main() {
    printf("Hello, I am main!\n");
}
