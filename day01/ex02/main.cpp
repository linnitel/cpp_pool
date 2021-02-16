
#include "Pony.hpp"

void ponyOnTheHeap() {
    Pony ben("Ben", "White", "Sugar", "Flying", 4, 3, "HEE-HAW!!! I am Pony on the Heap");
    ben.PonyFeed("Carrot");
}

void ponyOnTheStack() {
    Pony *charly;

    charly = new Pony("Charly", "Black", "Carrot", "Sparkle shower", 3, 10, "HEE-HAW!!! I am Pony on the Stack");
    charly->PonyFeed("Carrot");
    delete charly;
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}