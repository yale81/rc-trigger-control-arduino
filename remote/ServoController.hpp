#include <Servo.h>

class ServoController {
  private:
    Servo left_servo;
    Servo right_servo;
    int esc_left;
    int esc_right;
	bool channel_swap;
  
  public:
    ServoController(int esc_left, int esc_right, bool channel_swap);
    void attach();
    void move(int left_move, int right_move);
};