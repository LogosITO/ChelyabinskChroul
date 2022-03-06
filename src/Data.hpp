#ifndef __DATA_HPP__
#define __DATA_HPP__

#include <cassert>

class Data
{
// variables
private:
    int health_points;
    int damage;
    double velocity;
    double acceleration;
    double slide_cooldown;
    double armour_cooldown;
    double attack_cooldown;

// functions
public:
    // constructor
    Data(int, int, double, double, double, double, double);

    // getters

    int get_health_points() { return health_points; }
    int get_damage() { return damage; }
    double get_velocity() { return velocity;}
    double get_acceleration() { return acceleration; }
    double get_armour_cooldown() { return armour_cooldown; }
    double get_slide_cooldown() { return slide_cooldown; }
    double get_attack_cooldown() { return attack_cooldown; }

    // setters
    void set_velocity(double new_v) { velocity = new_v; }
    void set_acceleration(double new_a) { acceleration = new_a; }
    void set_health_points(int newhp) { health_points = newhp;}
    void set_damage(int new_dmg) { damage = new_dmg; }
    void set_armour_cooldown(double new_armour_cd) { armour_cooldown = new_armour_cd; }
    void set_slide_cooldown(double new_slide_cd) { slide_cooldown = new_slide_cd; }
    void set_attack_cooldown(double new_attack_cd) { attack_cooldown = new_attack_cd; }
};

Data::Data(int _hp, int _dmg, double _v, double _a, double _slide_cd, double _armour_cd, double _attack_cd):
    health_points(_hp), damage(_dmg), velocity(_v), acceleration(_a), slide_cooldown(_slide_cd), armour_cooldown(_armour_cd), attack_cooldown(_attack_cd)
{
    assert(health_points >= 0);
    assert(damage >= 0);
    assert(slide_cooldown > 0);
    assert(armour_cooldown > 0);
    assert(attack_cooldown > 0);
}

#endif // __DATA_HPP__
