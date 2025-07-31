#include "queen_attack.h"
#include <stdbool.h>
#include <stdlib.h>

static bool is_same_position(position_t pos_1, position_t pos_2) {
  return pos_1.column == pos_2.column && pos_1.row == pos_2.row;
}

static bool is_valid_position(position_t pos) {
  return pos.row <= 7 && pos.column <= 7;
}

attack_status_t can_attack(position_t queen_1, position_t queen_2) {

  // Same position = invalid
  if (is_same_position(queen_1, queen_2))
    return INVALID_POSITION;

  // Out of bounds = invalid
  if (!is_valid_position(queen_1) || !is_valid_position(queen_2))
    return INVALID_POSITION;

  // Same row or same column
  if (queen_1.column == queen_2.column || queen_1.row == queen_2.row)
    return CAN_ATTACK;

  // Diagonal attack = difference in rows == difference in columns
  if (abs(queen_1.column - queen_2.column) == abs(queen_1.row - queen_2.row))
    return CAN_ATTACK;

  return CAN_NOT_ATTACK;
}
