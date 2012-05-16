/*******************************************************************************************
  Font name: Bitstream Vera Sans Mono
  Font width: 7 (monospaced font)
  Font height: 14
  Encode: ANSI+

  Data length: 8 bits
  Data format: Big Endian, Row based, Row preferred, Packed
 *******************************************************************************************/

/*******************************************************************************************
  Data table provides the bitmap data of each character.

  To get the starting data offset of character 'A', you can use the following expression:

     const unsigned char index = index_table['A'];
     const unsigned int offset = offset_table[index];
     const unsigned char *pData = data_table[offset];

 *******************************************************************************************/
const unsigned char BitStreamVeraSansMono9Width = 7;
const unsigned int BitStreamVeraSansMono9Offset = 13;
const unsigned short BitStreamVeraSansMono9DataLength = 8;//bits
const unsigned short BitStreamVeraSansMono9CharHeight = 14;
const unsigned char BitStreamVeraSansMono9Data_table[] = {

/* character 0x0020 (' '): (width=7, offset=0) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x0021 ('!'): (width=7, offset=13) */
0x00, 0x00, 0x40, 0x81, 0x02, 0x04, 0x08, 0x00, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x0022 ('"'): (width=7, offset=26) */
0x00, 0x00, 0xA1, 0x42, 0x80, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x0023 ('#'): (width=7, offset=39) */
0x00, 0x00, 0x00, 0xA2, 0x4F, 0xCA, 0x14, 0xFC, 
0x91, 0x40, 0x00, 0x00, 0x00, 

/* character 0x0024 ('$'): (width=7, offset=52) */
0x00, 0x00, 0x41, 0xC5, 0x4A, 0x1C, 0x0E, 0x14, 
0xA8, 0xE0, 0x81, 0x00, 0x00, 

/* character 0x0025 ('%'): (width=7, offset=65) */
0x00, 0x01, 0x84, 0x89, 0x0C, 0x86, 0x36, 0x12, 
0x24, 0x30, 0x00, 0x00, 0x00, 

/* character 0x0026 ('&'): (width=7, offset=78) */
0x00, 0x00, 0x71, 0x02, 0x06, 0x0C, 0x25, 0x4E, 
0xC8, 0xE8, 0x00, 0x00, 0x00, 

/* character 0x0027 ('''): (width=7, offset=91) */
0x00, 0x00, 0x40, 0x81, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x0028 ('('): (width=7, offset=104) */
0x00, 0x18, 0x20, 0x41, 0x02, 0x04, 0x08, 0x10, 
0x10, 0x20, 0x60, 0x00, 0x00, 

/* character 0x0029 (')'): (width=7, offset=117) */
0x00, 0x60, 0x40, 0x80, 0x81, 0x02, 0x04, 0x08, 
0x20, 0x41, 0x80, 0x00, 0x00, 

/* character 0x002A ('*'): (width=7, offset=130) */
0x00, 0x00, 0x42, 0xA3, 0x87, 0x15, 0x08, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x002B ('+'): (width=7, offset=143) */
0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x7F, 0x10, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x002C (','): (width=7, offset=156) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x41, 0x00, 0x00, 0x00, 

/* character 0x002D ('-'): (width=7, offset=169) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x002E ('.'): (width=7, offset=182) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x002F ('/'): (width=7, offset=195) */
0x00, 0x00, 0x08, 0x20, 0x41, 0x02, 0x08, 0x10, 
0x40, 0x82, 0x00, 0x00, 0x00, 

/* character 0x0030 ('0'): (width=7, offset=208) */
0x00, 0x00, 0xF1, 0x24, 0x28, 0x52, 0xA1, 0x42, 
0x48, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0031 ('1'): (width=7, offset=221) */
0x00, 0x01, 0xC0, 0x81, 0x02, 0x04, 0x08, 0x10, 
0x21, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0032 ('2'): (width=7, offset=234) */
0x00, 0x00, 0xF2, 0x10, 0x20, 0x41, 0x04, 0x10, 
0x41, 0xF8, 0x00, 0x00, 0x00, 

/* character 0x0033 ('3'): (width=7, offset=247) */
0x00, 0x00, 0xF2, 0x10, 0x20, 0x47, 0x01, 0x02, 
0x84, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0034 ('4'): (width=7, offset=260) */
0x00, 0x00, 0x30, 0x61, 0x46, 0x89, 0x22, 0x7E, 
0x08, 0x10, 0x00, 0x00, 0x00, 

/* character 0x0035 ('5'): (width=7, offset=273) */
0x00, 0x01, 0xF2, 0x04, 0x0F, 0x81, 0x81, 0x02, 
0x8C, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0036 ('6'): (width=7, offset=286) */
0x00, 0x00, 0x71, 0x14, 0x0B, 0x99, 0xA1, 0x42, 
0x4C, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0037 ('7'): (width=7, offset=299) */
0x00, 0x01, 0xF8, 0x30, 0x40, 0x82, 0x04, 0x10, 
0x20, 0x80, 0x00, 0x00, 0x00, 

/* character 0x0038 ('8'): (width=7, offset=312) */
0x00, 0x00, 0xF2, 0x14, 0x28, 0x4F, 0x21, 0x42, 
0x84, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0039 ('9'): (width=7, offset=325) */
0x00, 0x00, 0xF3, 0x24, 0x28, 0x59, 0x9D, 0x02, 
0x88, 0xE0, 0x00, 0x00, 0x00, 

/* character 0x003A (':'): (width=7, offset=338) */
0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x003B (';'): (width=7, offset=351) */
0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 
0x20, 0x41, 0x00, 0x00, 0x00, 

/* character 0x003C ('<'): (width=7, offset=364) */
0x00, 0x00, 0x00, 0x00, 0x23, 0x98, 0x30, 0x1C, 
0x04, 0x00, 0x00, 0x00, 0x00, 

/* character 0x003D ('='): (width=7, offset=377) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x7E, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x003E ('>'): (width=7, offset=390) */
0x00, 0x00, 0x00, 0x04, 0x07, 0x01, 0x83, 0x38, 
0x80, 0x00, 0x00, 0x00, 0x00, 

/* character 0x003F ('?'): (width=7, offset=403) */
0x00, 0x00, 0x71, 0x10, 0x21, 0x86, 0x08, 0x00, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x0040 ('@'): (width=7, offset=416) */
0x00, 0x00, 0x00, 0xE2, 0x68, 0x53, 0xA9, 0x52, 
0x9D, 0x81, 0x01, 0xC0, 0x00, 

/* character 0x0041 ('A'): (width=7, offset=429) */
0x00, 0x00, 0x60, 0xC1, 0x84, 0x89, 0x12, 0x3C, 
0x85, 0x08, 0x00, 0x00, 0x00, 

/* character 0x0042 ('B'): (width=7, offset=442) */
0x00, 0x01, 0xF2, 0x14, 0x28, 0x5F, 0x21, 0x42, 
0x85, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0043 ('C'): (width=7, offset=455) */
0x00, 0x00, 0x71, 0x14, 0x08, 0x10, 0x20, 0x40, 
0x44, 0x70, 0x00, 0x00, 0x00, 

/* character 0x0044 ('D'): (width=7, offset=468) */
0x00, 0x01, 0xE2, 0x24, 0x28, 0x50, 0xA1, 0x42, 
0x89, 0xE0, 0x00, 0x00, 0x00, 

/* character 0x0045 ('E'): (width=7, offset=481) */
0x00, 0x01, 0xFA, 0x04, 0x08, 0x1F, 0xA0, 0x40, 
0x81, 0xF8, 0x00, 0x00, 0x00, 

/* character 0x0046 ('F'): (width=7, offset=494) */
0x00, 0x01, 0xFA, 0x04, 0x08, 0x1F, 0xA0, 0x40, 
0x81, 0x00, 0x00, 0x00, 0x00, 

/* character 0x0047 ('G'): (width=7, offset=507) */
0x00, 0x00, 0x71, 0x14, 0x08, 0x11, 0xA1, 0x42, 
0x44, 0x70, 0x00, 0x00, 0x00, 

/* character 0x0048 ('H'): (width=7, offset=520) */
0x00, 0x01, 0x0A, 0x14, 0x28, 0x5F, 0xA1, 0x42, 
0x85, 0x08, 0x00, 0x00, 0x00, 

/* character 0x0049 ('I'): (width=7, offset=533) */
0x00, 0x01, 0xF0, 0x81, 0x02, 0x04, 0x08, 0x10, 
0x21, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x004A ('J'): (width=7, offset=546) */
0x00, 0x00, 0x70, 0x20, 0x40, 0x81, 0x02, 0x04, 
0x88, 0xE0, 0x00, 0x00, 0x00, 

/* character 0x004B ('K'): (width=7, offset=559) */
0x00, 0x01, 0x0A, 0x24, 0x8A, 0x1C, 0x24, 0x4C, 
0x89, 0x08, 0x00, 0x00, 0x00, 

/* character 0x004C ('L'): (width=7, offset=572) */
0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 
0x81, 0xF8, 0x00, 0x00, 0x00, 

/* character 0x004D ('M'): (width=7, offset=585) */
0x00, 0x01, 0x0B, 0x36, 0x6B, 0x56, 0xAD, 0x42, 
0x85, 0x08, 0x00, 0x00, 0x00, 

/* character 0x004E ('N'): (width=7, offset=598) */
0x00, 0x01, 0x8B, 0x15, 0x2A, 0x56, 0xA5, 0x4A, 
0x8D, 0x18, 0x00, 0x00, 0x00, 

/* character 0x004F ('O'): (width=7, offset=611) */
0x00, 0x00, 0xF1, 0x24, 0x28, 0x50, 0xA1, 0x42, 
0x48, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0050 ('P'): (width=7, offset=624) */
0x00, 0x01, 0xF2, 0x14, 0x28, 0x5F, 0x20, 0x40, 
0x81, 0x00, 0x00, 0x00, 0x00, 

/* character 0x0051 ('Q'): (width=7, offset=637) */
0x00, 0x00, 0xF1, 0x24, 0x28, 0x50, 0xA1, 0x42, 
0x4C, 0xF0, 0x20, 0x40, 0x00, 

/* character 0x0052 ('R'): (width=7, offset=650) */
0x00, 0x01, 0xF2, 0x14, 0x28, 0x5F, 0x22, 0x42, 
0x85, 0x00, 0x00, 0x00, 0x00, 

/* character 0x0053 ('S'): (width=7, offset=663) */
0x00, 0x00, 0xF2, 0x14, 0x0C, 0x0F, 0x01, 0x02, 
0x84, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0054 ('T'): (width=7, offset=676) */
0x00, 0x03, 0xF8, 0x81, 0x02, 0x04, 0x08, 0x10, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x0055 ('U'): (width=7, offset=689) */
0x00, 0x01, 0x0A, 0x14, 0x28, 0x50, 0xA1, 0x42, 
0x84, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0056 ('V'): (width=7, offset=702) */
0x00, 0x01, 0x0A, 0x12, 0x44, 0x89, 0x12, 0x18, 
0x30, 0x60, 0x00, 0x00, 0x00, 

/* character 0x0057 ('W'): (width=7, offset=715) */
0x00, 0x02, 0x0C, 0x99, 0x35, 0x6A, 0xD5, 0x6C, 
0x89, 0x10, 0x00, 0x00, 0x00, 

/* character 0x0058 ('X'): (width=7, offset=728) */
0x00, 0x01, 0x09, 0x22, 0x43, 0x06, 0x0C, 0x24, 
0x49, 0x08, 0x00, 0x00, 0x00, 

/* character 0x0059 ('Y'): (width=7, offset=741) */
0x00, 0x02, 0x0A, 0x22, 0x85, 0x04, 0x08, 0x10, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x005A ('Z'): (width=7, offset=754) */
0x00, 0x01, 0xF8, 0x30, 0x41, 0x06, 0x08, 0x20, 
0xC1, 0xF8, 0x00, 0x00, 0x00, 

/* character 0x005B ('['): (width=7, offset=767) */
0x00, 0x30, 0x40, 0x81, 0x02, 0x04, 0x08, 0x10, 
0x20, 0x40, 0xC0, 0x00, 0x00, 

/* character 0x005C ('\'): (width=7, offset=780) */
0x00, 0x01, 0x01, 0x02, 0x02, 0x04, 0x04, 0x08, 
0x08, 0x10, 0x10, 0x00, 0x00, 

/* character 0x005D (']'): (width=7, offset=793) */
0x00, 0x60, 0x40, 0x81, 0x02, 0x04, 0x08, 0x10, 
0x20, 0x41, 0x80, 0x00, 0x00, 

/* character 0x005E ('^'): (width=7, offset=806) */
0x00, 0x00, 0xC2, 0x48, 0x40, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x005F ('_'): (width=7, offset=819) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x1F, 0x80, 

/* character 0x0060 ('`'): (width=7, offset=832) */
0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x0061 ('a'): (width=7, offset=845) */
0x00, 0x00, 0x00, 0x03, 0x88, 0x81, 0x1E, 0x44, 
0x88, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0062 ('b'): (width=7, offset=858) */
0x00, 0x81, 0x02, 0x07, 0x88, 0x91, 0x22, 0x44, 
0x89, 0xE0, 0x00, 0x00, 0x00, 

/* character 0x0063 ('c'): (width=7, offset=871) */
0x00, 0x00, 0x00, 0x03, 0x8C, 0x90, 0x20, 0x40, 
0xC0, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0064 ('d'): (width=7, offset=884) */
0x00, 0x08, 0x10, 0x23, 0xC8, 0x91, 0x22, 0x44, 
0x88, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0065 ('e'): (width=7, offset=897) */
0x00, 0x00, 0x00, 0x03, 0x8C, 0x91, 0x3E, 0x40, 
0x88, 0xE0, 0x00, 0x00, 0x00, 

/* character 0x0066 ('f'): (width=7, offset=910) */
0x00, 0x18, 0x40, 0x87, 0xC2, 0x04, 0x08, 0x10, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x0067 ('g'): (width=7, offset=923) */
0x00, 0x00, 0x00, 0x03, 0xC8, 0x91, 0x22, 0x44, 
0xC8, 0xF0, 0x22, 0x43, 0x00, 

/* character 0x0068 ('h'): (width=7, offset=936) */
0x00, 0x81, 0x02, 0x05, 0x8C, 0x91, 0x22, 0x44, 
0x89, 0x10, 0x00, 0x00, 0x00, 

/* character 0x0069 ('i'): (width=7, offset=949) */
0x00, 0x20, 0x00, 0x07, 0x02, 0x04, 0x08, 0x10, 
0x21, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x006A ('j'): (width=7, offset=962) */
0x00, 0x10, 0x00, 0x03, 0x81, 0x02, 0x04, 0x08, 
0x10, 0x20, 0x40, 0x86, 0x00, 

/* character 0x006B ('k'): (width=7, offset=975) */
0x00, 0x81, 0x02, 0x04, 0x49, 0x14, 0x30, 0x50, 
0x91, 0x10, 0x00, 0x00, 0x00, 

/* character 0x006C ('l'): (width=7, offset=988) */
0x00, 0xE0, 0x40, 0x81, 0x02, 0x04, 0x08, 0x10, 
0x20, 0x30, 0x00, 0x00, 0x00, 

/* character 0x006D ('m'): (width=7, offset=1001) */
0x00, 0x00, 0x00, 0x07, 0xCA, 0x95, 0x2A, 0x54, 
0xA9, 0x50, 0x00, 0x00, 0x00, 

/* character 0x006E ('n'): (width=7, offset=1014) */
0x00, 0x00, 0x00, 0x05, 0x8C, 0x91, 0x22, 0x44, 
0x89, 0x10, 0x00, 0x00, 0x00, 

/* character 0x006F ('o'): (width=7, offset=1027) */
0x00, 0x00, 0x00, 0x03, 0x88, 0x91, 0x22, 0x44, 
0x88, 0xE0, 0x00, 0x00, 0x00, 

/* character 0x0070 ('p'): (width=7, offset=1040) */
0x00, 0x00, 0x00, 0x07, 0x88, 0x91, 0x22, 0x44, 
0x89, 0xE2, 0x04, 0x08, 0x00, 

/* character 0x0071 ('q'): (width=7, offset=1053) */
0x00, 0x00, 0x00, 0x03, 0xC8, 0x91, 0x22, 0x44, 
0x88, 0xF0, 0x20, 0x40, 0x80, 

/* character 0x0072 ('r'): (width=7, offset=1066) */
0x00, 0x00, 0x00, 0x03, 0xC6, 0x48, 0x10, 0x20, 
0x40, 0x80, 0x00, 0x00, 0x00, 

/* character 0x0073 ('s'): (width=7, offset=1079) */
0x00, 0x00, 0x00, 0x03, 0x88, 0x90, 0x1C, 0x04, 
0x88, 0xE0, 0x00, 0x00, 0x00, 

/* character 0x0074 ('t'): (width=7, offset=1092) */
0x00, 0x00, 0x40, 0x87, 0xC2, 0x04, 0x08, 0x10, 
0x20, 0x70, 0x00, 0x00, 0x00, 

/* character 0x0075 ('u'): (width=7, offset=1105) */
0x00, 0x00, 0x00, 0x04, 0x48, 0x91, 0x22, 0x44, 
0x88, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x0076 ('v'): (width=7, offset=1118) */
0x00, 0x00, 0x00, 0x04, 0x48, 0x8A, 0x14, 0x28, 
0x20, 0x40, 0x00, 0x00, 0x00, 

/* character 0x0077 ('w'): (width=7, offset=1131) */
0x00, 0x00, 0x00, 0x08, 0x30, 0x55, 0x2A, 0x6C, 
0x50, 0xA0, 0x00, 0x00, 0x00, 

/* character 0x0078 ('x'): (width=7, offset=1144) */
0x00, 0x00, 0x00, 0x04, 0x45, 0x0A, 0x08, 0x28, 
0x51, 0x10, 0x00, 0x00, 0x00, 

/* character 0x0079 ('y'): (width=7, offset=1157) */
0x00, 0x00, 0x00, 0x04, 0x48, 0x8A, 0x14, 0x28, 
0x60, 0x40, 0x82, 0x0C, 0x00, 

/* character 0x007A ('z'): (width=7, offset=1170) */
0x00, 0x00, 0x00, 0x07, 0xC0, 0x82, 0x08, 0x20, 
0x81, 0xF0, 0x00, 0x00, 0x00, 

/* character 0x007B ('{'): (width=7, offset=1183) */
0x00, 0x38, 0x40, 0x81, 0x02, 0x18, 0x08, 0x10, 
0x20, 0x40, 0xE0, 0x00, 0x00, 

/* character 0x007C ('|'): (width=7, offset=1196) */
0x00, 0x20, 0x40, 0x81, 0x02, 0x04, 0x08, 0x10, 
0x20, 0x40, 0x81, 0x00, 0x00, 

/* character 0x007D ('}'): (width=7, offset=1209) */
0x00, 0xE0, 0x40, 0x81, 0x02, 0x03, 0x08, 0x10, 
0x20, 0x43, 0x80, 0x00, 0x00, 

/* character 0x007E ('~'): (width=7, offset=1222) */
0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x07, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 

/* character 0x007F (''): (width=7, offset=1235) */
0x00, 0x00, 0x07, 0x0A, 0x14, 0x28, 0x50, 0xA1, 
0x43, 0x80, 0x00, 0x00, 0x00, 

};

/*******************************************************************************************
  The offset talbe is skipped.

  This is a monospaced font, the bitmap data size of each character is the same.
  You can calculate the offset of each character easily.

  For example:

  To get the starting offset of character 'A', you can use the following expression:

     const unsigned char index = index_table['A'];
     const unsigned int offset = index * sizeGlyph;
                                 (here sizeGlyph is the data size of single character)
 *******************************************************************************************/


/*******************************************************************************************
  Index table is used to find the mapping index of a character.

  If you can find a simple mathematical expression for index mapping, you can use that.
  If you do not have such a mathematical expression, this index table is just for you.

  To get the index of character 'A', you can use the following expression:

     const unsigned char index = index_table['A'];

 *******************************************************************************************/
const unsigned char BitStreamVeraSansMono9Index_table[] = {
/*		index   hexcode   decimal  char */
/*		=====   =======   =======  ==== */
  		  0, /*   00          0     .   */
  		  0, /*   01          1     .   */
  		  0, /*   02          2     .   */
  		  0, /*   03          3     .   */
  		  0, /*   04          4     .   */
  		  0, /*   05          5     .   */
  		  0, /*   06          6     .   */
  		  0, /*   07          7     .   */
  		  0, /*   08          8     .   */
  		  0, /*   09          9     .   */
  		  0, /*   0A         10     .   */
  		  0, /*   0B         11     .   */
  		  0, /*   0C         12     .   */
  		  0, /*   0D         13     .   */
  		  0, /*   0E         14     .   */
  		  0, /*   0F         15     .   */
  		  0, /*   10         16     .   */
  		  0, /*   11         17     .   */
  		  0, /*   12         18     .   */
  		  0, /*   13         19     .   */
  		  0, /*   14         20     .   */
  		  0, /*   15         21     .   */
  		  0, /*   16         22     .   */
  		  0, /*   17         23     .   */
  		  0, /*   18         24     .   */
  		  0, /*   19         25     .   */
  		  0, /*   1A         26     .   */
  		  0, /*   1B         27     .   */
  		  0, /*   1C         28     .   */
  		  0, /*   1D         29     .   */
  		  0, /*   1E         30     .   */
  		  0, /*   1F         31     .   */
  		  0, /*   20         32         */
  		  1, /*   21         33     !   */
  		  2, /*   22         34     "   */
  		  3, /*   23         35     #   */
  		  4, /*   24         36     $   */
  		  5, /*   25         37     %   */
  		  6, /*   26         38     &   */
  		  7, /*   27         39     '   */
  		  8, /*   28         40     (   */
  		  9, /*   29         41     )   */
  		 10, /*   2A         42     *   */
  		 11, /*   2B         43     +   */
  		 12, /*   2C         44     ,   */
  		 13, /*   2D         45     -   */
  		 14, /*   2E         46     .   */
  		 15, /*   2F         47     /   */
  		 16, /*   30         48     0   */
  		 17, /*   31         49     1   */
  		 18, /*   32         50     2   */
  		 19, /*   33         51     3   */
  		 20, /*   34         52     4   */
  		 21, /*   35         53     5   */
  		 22, /*   36         54     6   */
  		 23, /*   37         55     7   */
  		 24, /*   38         56     8   */
  		 25, /*   39         57     9   */
  		 26, /*   3A         58     :   */
  		 27, /*   3B         59     ;   */
  		 28, /*   3C         60     <   */
  		 29, /*   3D         61     =   */
  		 30, /*   3E         62     >   */
  		 31, /*   3F         63     ?   */
  		 32, /*   40         64     @   */
  		 33, /*   41         65     A   */
  		 34, /*   42         66     B   */
  		 35, /*   43         67     C   */
  		 36, /*   44         68     D   */
  		 37, /*   45         69     E   */
  		 38, /*   46         70     F   */
  		 39, /*   47         71     G   */
  		 40, /*   48         72     H   */
  		 41, /*   49         73     I   */
  		 42, /*   4A         74     J   */
  		 43, /*   4B         75     K   */
  		 44, /*   4C         76     L   */
  		 45, /*   4D         77     M   */
  		 46, /*   4E         78     N   */
  		 47, /*   4F         79     O   */
  		 48, /*   50         80     P   */
  		 49, /*   51         81     Q   */
  		 50, /*   52         82     R   */
  		 51, /*   53         83     S   */
  		 52, /*   54         84     T   */
  		 53, /*   55         85     U   */
  		 54, /*   56         86     V   */
  		 55, /*   57         87     W   */
  		 56, /*   58         88     X   */
  		 57, /*   59         89     Y   */
  		 58, /*   5A         90     Z   */
  		 59, /*   5B         91     [   */
  		 60, /*   5C         92     \   */
  		 61, /*   5D         93     ]   */
  		 62, /*   5E         94     ^   */
  		 63, /*   5F         95     _   */
  		 64, /*   60         96     `   */
  		 65, /*   61         97     a   */
  		 66, /*   62         98     b   */
  		 67, /*   63         99     c   */
  		 68, /*   64        100     d   */
  		 69, /*   65        101     e   */
  		 70, /*   66        102     f   */
  		 71, /*   67        103     g   */
  		 72, /*   68        104     h   */
  		 73, /*   69        105     i   */
  		 74, /*   6A        106     j   */
  		 75, /*   6B        107     k   */
  		 76, /*   6C        108     l   */
  		 77, /*   6D        109     m   */
  		 78, /*   6E        110     n   */
  		 79, /*   6F        111     o   */
  		 80, /*   70        112     p   */
  		 81, /*   71        113     q   */
  		 82, /*   72        114     r   */
  		 83, /*   73        115     s   */
  		 84, /*   74        116     t   */
  		 85, /*   75        117     u   */
  		 86, /*   76        118     v   */
  		 87, /*   77        119     w   */
  		 88, /*   78        120     x   */
  		 89, /*   79        121     y   */
  		 90, /*   7A        122     z   */
  		 91, /*   7B        123     {   */
  		 92, /*   7C        124     |   */
  		 93, /*   7D        125     }   */
  		 94, /*   7E        126     ~   */
  		 95, /*   7F        127        */
  		  0, /*   80        128   ? */
  		  0, /*   81        129   � */
  		  0, /*   82        130   ? */
  		  0, /*   83        131   ? */
  		  0, /*   84        132   ? */
  		  0, /*   85        133   ? */
  		  0, /*   86        134   ? */
  		  0, /*   87        135   ? */
  		  0, /*   88        136   ? */
  		  0, /*   89        137   ? */
  		  0, /*   8A        138   ? */
  		  0, /*   8B        139   ? */
  		  0, /*   8C        140   ? */
  		  0, /*   8D        141   � */
  		  0, /*   8E        142   ? */
  		  0, /*   8F        143   � */
  		  0, /*   90        144   � */
  		  0, /*   91        145   ? */
  		  0, /*   92        146   ? */
  		  0, /*   93        147   ? */
  		  0, /*   94        148   ? */
  		  0, /*   95        149   ? */
  		  0, /*   96        150   ? */
  		  0, /*   97        151   ? */
  		  0, /*   98        152   ? */
  		  0, /*   99        153   ? */
  		  0, /*   9A        154   ? */
  		  0, /*   9B        155   ? */
  		  0, /*   9C        156   ? */
  		  0, /*   9D        157   � */
  		  0, /*   9E        158   ? */
  		  0, /*   9F        159   ? */
  		  0, /*   A0        160   � */
  		  0, /*   A1        161   � */
  		  0, /*   A2        162   � */
  		  0, /*   A3        163   � */
  		  0, /*   A4        164   � */
  		  0, /*   A5        165   � */
  		  0, /*   A6        166   � */
  		  0, /*   A7        167   � */
  		  0, /*   A8        168   � */
  		  0, /*   A9        169   � */
  		  0, /*   AA        170   � */
  		  0, /*   AB        171   � */
  		  0, /*   AC        172   � */
  		  0, /*   AD        173   � */
  		  0, /*   AE        174   � */
  		  0, /*   AF        175   � */
  		  0, /*   B0        176   � */
  		  0, /*   B1        177   � */
  		  0, /*   B2        178   � */
  		  0, /*   B3        179   � */
  		  0, /*   B4        180   � */
  		  0, /*   B5        181   � */
  		  0, /*   B6        182   � */
  		  0, /*   B7        183   � */
  		  0, /*   B8        184   � */
  		  0, /*   B9        185   � */
  		  0, /*   BA        186   � */
  		  0, /*   BB        187   � */
  		  0, /*   BC        188   � */
  		  0, /*   BD        189   � */
  		  0, /*   BE        190   � */
  		  0, /*   BF        191   � */
  		  0, /*   C0        192   � */
  		  0, /*   C1        193   � */
  		  0, /*   C2        194   � */
  		  0, /*   C3        195   � */
  		  0, /*   C4        196   � */
  		  0, /*   C5        197   � */
  		  0, /*   C6        198   � */
  		  0, /*   C7        199   � */
  		  0, /*   C8        200   � */
  		  0, /*   C9        201   � */
  		  0, /*   CA        202   � */
  		  0, /*   CB        203   � */
  		  0, /*   CC        204   � */
  		  0, /*   CD        205   � */
  		  0, /*   CE        206   � */
  		  0, /*   CF        207   � */
  		  0, /*   D0        208   � */
  		  0, /*   D1        209   � */
  		  0, /*   D2        210   � */
  		  0, /*   D3        211   � */
  		  0, /*   D4        212   � */
  		  0, /*   D5        213   � */
  		  0, /*   D6        214   � */
  		  0, /*   D7        215   � */
  		  0, /*   D8        216   � */
  		  0, /*   D9        217   � */
  		  0, /*   DA        218   � */
  		  0, /*   DB        219   � */
  		  0, /*   DC        220   � */
  		  0, /*   DD        221   � */
  		  0, /*   DE        222   � */
  		  0, /*   DF        223   � */
  		  0, /*   E0        224   � */
  		  0, /*   E1        225   � */
  		  0, /*   E2        226   � */
  		  0, /*   E3        227   � */
  		  0, /*   E4        228   � */
  		  0, /*   E5        229   � */
  		  0, /*   E6        230   � */
  		  0, /*   E7        231   � */
  		  0, /*   E8        232   � */
  		  0, /*   E9        233   � */
  		  0, /*   EA        234   � */
  		  0, /*   EB        235   � */
  		  0, /*   EC        236   � */
  		  0, /*   ED        237   � */
  		  0, /*   EE        238   � */
  		  0, /*   EF        239   � */
  		  0, /*   F0        240   � */
  		  0, /*   F1        241   � */
  		  0, /*   F2        242   � */
  		  0, /*   F3        243   � */
  		  0, /*   F4        244   � */
  		  0, /*   F5        245   � */
  		  0, /*   F6        246   � */
  		  0, /*   F7        247   � */
  		  0, /*   F8        248   � */
  		  0, /*   F9        249   � */
  		  0, /*   FA        250   � */
  		  0, /*   FB        251   � */
  		  0, /*   FC        252   � */
  		  0, /*   FD        253   � */
  		  0, /*   FE        254   � */
  		  0, /*   FF        255   � */
};