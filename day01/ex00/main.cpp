
#include "Pony.hpp"

void ponyOnTheStack() {
    Pony ben("Ben", "White", "Sugar", "Flying", 4, 3, "HEE-HAW!!! I am Pony on the Stack");
    ben.PonyFeed("Carrot");
}

void ponyOnTheHeap() {
    Pony *charly;

    charly = new Pony("Charly", "Black", "Carrot", "Sparkle shower", 3, 10, "HEE-HAW!!! I am Pony on the Heap");
    charly->PonyFeed("Carrot");
    delete charly;
}

int main() {
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}