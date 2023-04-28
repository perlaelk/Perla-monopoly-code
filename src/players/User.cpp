#include "User.hpp"
namespace player {


    Player::Player(const std::string& name, int score, double cash)
        : name(name), score(score), cash(cash)
    {}

    std::string Player::getName() const {
        return name;
    }

    int Player::getScore() const {
        return score;
    }

    double Player::getCash() const {
        return cash;
    }

    void Player::setName(const std::string& name) {
        this->name = name;
    }

    void Player::setScore(int score) {
        this->score = score;
    }

    void Player::setCash(double cash) {
        this->cash = cash;
    }
}