
typedef struct __attribute__((__packed__)){
	uint32_t 
	
}pool_descriptor;

/* Record marker is written after data to control integrity */
struct cfg_rec_marker {
	uint16_t chksum;
	uint8_t  validator;
	uint8_t  status;	
};

struct cfg_storage {
	struct cfg_pool	pool[2];
	uint8_t		epoch;
};