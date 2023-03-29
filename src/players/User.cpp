#include "User.hpp"
namespace player {

    long Player::getCurrentCash() const
    {
        return cash;
    }

    std::string Player::getPlayerName() const
    {
        return name;
    }

}