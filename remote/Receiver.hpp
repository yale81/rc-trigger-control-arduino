// Defines the configuration that can be supplied for a receiver
class Receiver {	
  private:
    // Member variables
    float limit_upper;
    float limit_lower;
    float neutral_upper;
    float neutral_lower;
    int lostcon_upper;
    int lostcon_lower;
    bool rate_change_limit;
    int rx_input;
    int max_diff;
	//tracks positions for rate change limiting
    int last_pos = 0;
	
  public:
    // Member functions
	Receiver(float neutral_upper, 
	  float neutral_lower, 
	  float limit_upper, 
	  float limit_lower, 
	  int lostcon_upper, 
	  int lostcon_lower, 
	  bool rate_change_limit, 
	  int max_diff,
	  int rx_input);
    int update_position();
    float upper_percent(int pos);
    float lower_percent(int pos);
    bool is_connection_lost(int pos);
    void pin_input();
    bool is_forward(int pos);
    bool is_backward(int pos);
    bool is_left(int pos);
    bool is_right(int pos);
};
