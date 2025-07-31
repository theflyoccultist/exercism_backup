namespace hellmath {

enum class AccountStatus { troll, guest, user, mod };

enum class Action { read, write, remove };

bool display_post(AccountStatus poster, AccountStatus viewer) {
  switch (poster) {
  case AccountStatus::troll:
    return viewer == AccountStatus::troll;
  default:
    return true;
  }
};

bool permission_check(Action action, AccountStatus status) {
  switch (status) {
  case AccountStatus::guest:
    return action == Action::read;
  case AccountStatus::mod:
    return true;
  default:
    return action == Action::read || action == Action::write;
  }
};

bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
  switch (player1) {
  case AccountStatus::troll:
    return player2 == AccountStatus::troll;
  case AccountStatus::guest:
    return false;
  default:
    return player2 == AccountStatus::user || player2 == AccountStatus::mod;
  }
}

bool has_priority(AccountStatus player1, AccountStatus player2) {
  switch (player1) {
  case AccountStatus::troll:
    return false;
  case AccountStatus::guest:
    return player2 == AccountStatus::troll;
  case AccountStatus::user:
    return player2 == AccountStatus::user || player2 == AccountStatus::mod
               ? false
               : true;
  case AccountStatus::mod:
    return player2 != AccountStatus::mod;
  }
  return false;
}

} // namespace hellmath
