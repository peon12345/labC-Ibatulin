#include "Harl.h"

int main(int argc, char* argv[]) {
     
    int filterID = atoi(argv[1]);
    Harl harl(static_cast<TypeMsg>(filterID));

    harl.complain(TypeMsg::DEBUG);
    harl.complain(TypeMsg::INFO);
    harl.complain(TypeMsg::WARNING);
    harl.complain(TypeMsg::ERROR);

    return 0;
}
