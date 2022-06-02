
#include "Exceptions.h"

Exceptions::Exceptions(std::string text): message(text) {}

std::string Exceptions::getMessage() {

    return this->message;
}

