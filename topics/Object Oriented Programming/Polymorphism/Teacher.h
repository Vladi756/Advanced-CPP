#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>
#include <iostream>
#include "User.h"

class Teacher : public User {
    public:
        Teacher();
        std::vector<std::string> classes;
        void output();
};

#endif
