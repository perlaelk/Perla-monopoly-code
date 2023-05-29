#ifndef MECHANICS_Player_HPP
#define MECHANICS_Player_HPP
#include <string>

namespace player
{

    class Player
    {
    public:
        Player(const std::string& name, int score, int cash);
        Player(const std::string& name, int score, int cash);
        Player(const std::string& name, int score, double cash);
        Player(const std::string& name, int score, int cash);
        std::string name;
        std::string getName() const;
        int getScore() const;
        int getCash() const;

        void setName(const std::string& name);


        void getName(const std::string& name);
        void setScore(int score);
        void setCash(int cash);
        void addCash(int amount);
       


    private:
        std::string name;
        int score;
        double cash;
    };
};
#endif

