#ifndef MECHANICS_DICE_HPP
#define MECHANICS_DICE_HPP
#include <string>
namespace player {

    class Player
    {
    private:
        long cash;
        std::string name;
    public:
        Player(std::string playerName)
        {
            name = playerName;
            cash = 0;
        }
        ~Player() {}

        long getCurrentCash() const;
        std::string getPlayerName() const;
    };
}

#endif
