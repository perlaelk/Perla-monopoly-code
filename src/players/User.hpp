#ifndef MECHANICS_DICE_HPP
#define MECHANICS_DICE_HPP
#include <string>
namespace player {

    class Player
    {
    public:
        Player(const std::string& name, int score, double cash);

        std::string getName() const;
        int getScore() const;
        double getCash() const;

        void setName(const std::string& name);
        void setScore(int score);
        void setCash(double cash);

    private:
        std::string name;
        int score;
        double cash;
    };
};
#endif
