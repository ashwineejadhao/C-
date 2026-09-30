// Implement functions to set, clear, and toggle bits in a register.

// Constraints:
// - Use bitwise ops.
// - Return new value.
// - Only bit 0 affected.



#include <cstdint>
uint32_t setb(uint32_t x, uint8_t bit_pos);
uint32_t clearb(uint32_t x, uint8_t bit_pos);
uint32_t toggleb(uint32_t x, uint8_t bit_pos);


uint32_t setb(uint32_t x, uint8_t bit_pos)
            {
                x = x | ( 1U << bit_pos);
                return x;
            }
               
uint32_t clearb(uint32_t x, uint8_t bit_pos)
           {
                x = x & (~( 1U << bit_pos));
                return x;
           }
uint32_t toggleb(uint32_t x, uint8_t bit_pos)
			{
            	x = x ^ (1U << bit_pos);
                return x;
            }

int main()
{  	
    volatile uint32_t reg_address = 0x00000000;
    uint32_t *ptr = reg_address;
    uint32_t x = &ptr;
    
    x = setb(x, 0);
 	x = clearb(x, 1);
 	x = toggleb(x, 1);
}
