class Alien:
    """Solution to Ellen's Alien Game exercise."""
    total_aliens_created = 0

    def __init__(self, location_x, location_y):
        self.x_coordinate = location_x
        self.y_coordinate = location_y
        self.health = 3
        Alien.total_aliens_created += 1


    def hit(self):
        self.health -= 1
        max(self.health, 0)


    def is_alive(self):
        return self.health > 0


    def teleport(self, new_x, new_y):
        self.x_coordinate = new_x
        self.y_coordinate = new_y


    def collision_detection(self, other_object):
        return None



def new_aliens_collection(alien_start_positions):
    return [Alien(x_coor, y_coor) for x_coor, y_coor in alien_start_positions]