// external web assembly functions
__attribute__((import_module("env"))) extern void echo(char * str);

// logo ABI
__attribute__((import_module("turtle_v0"))) extern void turtle_move(int axis, int mode, int value);
__attribute__((import_module("turtle_v0"))) extern void turtle_stop();
__attribute__((import_module("turtle_v0"))) extern void turtle_wait(int ms);

#define TURTLE_MODE_SET 1
#define TURTLE_MODE_INC 2

#define TURTLE_AXIS_X 1
#define TURTLE_AXIS_Y 2
#define TURTLE_AXIS_Z 3
#define TURTLE_AXIS_LASER 4

// local wrappers
void turtle_forward(int speed) {
  turtle_move(TURTLE_AXIS_Y, TURTLE_MODE_INC, speed);
}
void turtle_backward(int speed) {
  turtle_move(TURTLE_AXIS_Y, TURTLE_MODE_INC, -speed);
}
void turtle_strafe(int speed) {
  turtle_move(TURTLE_AXIS_X, TURTLE_MODE_INC, speed);
}
void turtle_spin(int speed) {
  turtle_move(TURTLE_AXIS_Z, TURTLE_MODE_INC, speed);
}


// main
int main() {
  echo("echo world!\n");
  return 0;
}