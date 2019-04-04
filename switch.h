/*
 * switch.h
 */

struct switch_fwd {
	int valid;	// valid flag
	char dest;	// destination host ID
	int port;	// port number
};

void switch_main(int switch_id);


