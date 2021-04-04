#ifndef USER_H
#define USER_H

class User {

    std::string ranking = "Gold";   // Private

    public:

        std::string firstName;
        std::string lastName;
        std::string getRank();
        virtual void output();

        friend std::istream& operator >> (std::istream &input, User &user);
        friend std::ostream& operator << (std::ostream& output, const User user);
};


#endif // USER_H
