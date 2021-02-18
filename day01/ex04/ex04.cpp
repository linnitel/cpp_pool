
# include <iostream>

void pointerChange(std::string* WeaponPointer) {
    *WeaponPointer += "! AND I AM CLEVER";
}

void referenceChange(std::string& WeaponReference) {
    WeaponReference += "! WHAT I WAS THINKING ABOUT?";
}

int main() {
    std::string Brain = "HI THIS IS BRAIN";
    std::string* brainPointer = &brain;
    std::string& brainReference = brain;
    std::cout << "brain // :" << brain << std::endl;
    std::cout << "brainPointer // Before change:" << *brainPointer << std::endl;
    pointerChange(brainPointer);
    std::cout << "brainPointer // After change:" << *brainPointer << std::endl;
    std::cout << "brainReference // Before change:" << brainReference << std::endl;
    referenceChange(brainReference);
    std::cout << "brainReference // After change:" << brainReference << std::endl;
    std::cout << "brain // After changing reference:" << brain << std::endl;
    return (0);
}