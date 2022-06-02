
#include <string>

class Exceptions {

private:
    std::string message;

public:

    explicit Exceptions(std::string text);

    std::string getMessage();

};


