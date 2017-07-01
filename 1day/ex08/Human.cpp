#include "Human.hpp"
# define CALL_ACTION(obj, func)  ((obj)->*(func))

void Human::meleeAttack(std::string const & target) {
    std::cout << target << " in meleeAttack" << std::endl;
}

void Human::rangedAttack(std::string const & target) {
    std::cout << target << " in rangedAttack" << std::endl;
}

void Human::intimidatingShout(std::string const & target) {
    std::cout << target << " in intimidatingShout" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {
     typedef  void (Human::*ptrFun)(std::string const &target);
        ptrFun p[] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
        std::string name[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
        for (int i = 0; i < 3; i++)
            if (name[i] == action_name) {
                ((this)->*(p[i]))(target);
            }
}
