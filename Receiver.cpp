#include "Receiver.h"

void Receiver::DoSomething(const std::string &a, int b) {
    std::cout << "Receiver: Working on (" << b << ".)\n";
}
void Receiver::DoSomethingElse(const std::string &b) {
    std::cout << "Receiver: Also working on (" << b << ".)\n";
}
void Receiver::Wykrzacz()
{
	std::cout << "Wykrzaczamy";
}
