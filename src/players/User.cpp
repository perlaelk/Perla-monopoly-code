#include "User.hpp"
#include <corecrt_io.h>
#include "User.hpp"
namespace player
{
    Player::Player(const std::string& name, int score, int cash)
    {
    }
    Player::Player(const std::string& name, int score, int cash)
    {
    }
    Player::Player(const std::string& name, int score, int cash)
        : name(name), score(score), cash(cash)
    {}

    player::Player::Player(const std::string& name, int score, int cash)
    {
    }

    std::string Player::getName() const {
        return name;
    }

    int Player::getScore() const {
        return score;
    }

    int Player::getCash() const {
        return cash;
    }

    void Player::setName(const std::string& name) {
        this->name = name;
    }

    void Player::getName(const std::string& name)
    {
    }

    void Player::setScore(int score) {
        this->score = score;
    }

    void Player::setCash(int cash) {
        this->cash = cash;
    }

    void Player::addCash(int amount)
    {
    }

}