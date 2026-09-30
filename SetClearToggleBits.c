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
    uint32_t x = 0x00000000;
    volatile uint32_t *ptr = &x;
    
    x = setb(x, 0);
 	x = clearb(x, 1);
 	x = toggleb(x, 1);
}
