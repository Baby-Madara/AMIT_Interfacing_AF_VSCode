#ifndef BITMATH_H_INCLUDED
#define BITMATH_H_INCLUDED

#define SET_REG(reg)	(reg =  0xFF)
#define CLEAR_REG(reg)	(reg =  0x00)
#define TOGGLE_REG(reg)	(reg ^= reg )


#define SET_BIT(	reg, bit)	(reg |= (1<<bit))
#define CLEAR_BIT(	reg, bit)	(reg &=~(1<<bit))
#define TOGGLE_BIT(	reg, bit)	(reg ^= (1<<bit))
#define GET_BIT(	reg, bit)	(1   &(reg>>bit))




#endif //BITMATH_H_INCLUDED

