namespace targets {
class Alien {
public:
  Alien(int x, int y) {
    x_coordinate = x;
    y_coordinate = y;
  }

  int x_coordinate;
  int y_coordinate;

  int get_health() { return health; }
  bool hit() {
    if (health > 0) {
      health--;
    }
    return is_alive();
  }

  bool is_alive() { return get_health() > 0; }

  bool teleport(int x_new, int y_new) {
    x_coordinate = x_new;
    y_coordinate = y_new;
    return true;
  }

  bool collision_detection(Alien alien) {
    if (alien.y_coordinate == y_coordinate &&
        alien.x_coordinate == x_coordinate)
      return true;
    return false;
  }

private:
  int health{3};
};
} // namespace targets
