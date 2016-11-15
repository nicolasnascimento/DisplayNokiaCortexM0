#ifndef LCD_H
#define LCD_H

/*
  Commands and Color specification codes (Epson S1D15G00)
  Author: Nicolas Nascimento (nicolas.nascimento@acad.pucrs.br)
*/

#define DISON   0xAF      // Display on
#define DISOFF  0xAE      // Display off
#define DISNOR  0xA6      // Normal Display
#define DISINV  0xA7      // Inverse Display
#define COMSCN  0xBB      // Common scan Direction
#define DISCTL  0xCA      // Display Control
#define SLPIN   0x95      // Sleep in
#define SLPOUT  0x94      // Sleep out
#define PASET   0x75      // Page address set
#define CASET   0x15      // Column address set
#define DATCTL  0xBC      // Data scan direction, etc.
#define RGSSET8 0xCE      // 256-color position set
#define RAMWR   0x5c      // Writing to memory
#define RAMRD   0x5D      // Reading fomr memory
#define PTLIN   0xA8      // Partial display in
#define PTLOUT  0xA9      // Partial display out
#define RMWIN   0xE0      // Read and modify write
#define RMWOUT  0xEE      // End
#define ASCSET  0xAA      // Area scroll set
#define SCSTART 0xAB      // Scroll start set
#define OSCON   0xD1      // Internal oscilation on
#define OSCOFF  0xD2      // Internal oscliation off
#define PWRCTR  0x20      // Power control
#define VOLCTR  0x81      // Electronic volume control
#define VOLUP   0xD6      // Increment eletronic control by 1
#define VOLDOWN 0xD7      // Decrement eletronic control by 1
#define TMPGRD  0x82      // Temperature gradient set
#define EPCTIN  0xCD      // Control EEPROM
#define EPCOUT  0xCC      // Cancel EEPROM control
#define EPMWR   0xFC      // Write into EEPROM
#define EPMRD   0xFD      // Read from EEPROM
#define ESPRRD1 0x7C      // Read register 1
#define ESPRRD2 0x7D      // Read register 2
#define NOP     0x25      // NOP instruction

// Backlight
#define BKLGHT_LCD_ON   1
#define BKLGHT_LCD_OFF  2

// Booleans
#define NOFILL          0
#define FILL            1

// 12-bit color definitions
#define WHITE           0xFFF
#define BLACK           0x000
#define RED             0xF00
#define GREEN           0x0F0
#define BLUE            0x00F
#define CYAN            0x0FF
#define MAGENTA         0xF0F
#define YELLOW          0xFF0
#define BROWN           0xB22
#define ORANGE          0xFA0
#define PINK            0xF6A

// Font sizes
#define SMALL           0
#define MEDIUM          1
#define LARGE           2

// Bit definition
#define BIT(N) (1 << N)

// Hardware definitions
#define SPI_SR_TXEMPTY
#define LCD_RESET_LOW   GPIOA->BRR = BIT(0)
#define LCD_RESET_HIGH  GPIOA->BRR = BIT(0)


#endif // LCD_H
