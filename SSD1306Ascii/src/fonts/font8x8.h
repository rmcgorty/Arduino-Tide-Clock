#ifndef FONT8x8_H
#define FONT8x8_H

GLCDFONTDECL(font8x8) = {
    0x0, 0x1, // size of one indicates fixed font width and no pixel padding
    0x08, // width
    0x08, // height
    0x20, // first char
    0x5f, // char count

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x00,0x00,0x5F,0x00,0x00,0x00,  // !
0x00,0x00,0x00,0x03,0x00,0x03,0x00,0x00,  // "
0x00,0x24,0x7E,0x24,0x24,0x7E,0x24,0x00,  // #
0x00,0x2E,0x2A,0x7F,0x2A,0x3A,0x00,0x00,  // $
0x00,0x46,0x26,0x10,0x08,0x64,0x62,0x00,  // %
0x00,0x20,0x54,0x4A,0x54,0x20,0x50,0x00,  // &
0x00,0x00,0x00,0x04,0x02,0x00,0x00,0x00,  // '
0x00,0x00,0x00,0x3C,0x42,0x00,0x00,0x00,  // (
0x00,0x00,0x00,0x42,0x3C,0x00,0x00,0x00,  // )
0x00,0x10,0x54,0x38,0x54,0x10,0x00,0x00,  // *
0x00,0x10,0x10,0x7C,0x10,0x10,0x00,0x00,  // +
0x00,0x00,0x00,0x80,0x60,0x00,0x00,0x00,  // ,
0x00,0x10,0x10,0x10,0x10,0x10,0x00,0x00,  // -
0x00,0x00,0x00,0x60,0x60,0x00,0x00,0x00,  // .
0x00,0x40,0x20,0x10,0x08,0x04,0x00,0x00,  // /

0x3C,0x62,0x52,0x4A,0x46,0x3C,0x00,0x00,  // 0
0x44,0x42,0x7E,0x40,0x40,0x00,0x00,0x00,  // 1
0x64,0x52,0x52,0x52,0x52,0x4C,0x00,0x00,  // 2
0x24,0x42,0x42,0x4A,0x4A,0x34,0x00,0x00,  // 3
0x30,0x28,0x24,0x7E,0x20,0x20,0x00,0x00,  // 4
0x2E,0x4A,0x4A,0x4A,0x4A,0x32,0x00,0x00,  // 5
0x3C,0x4A,0x4A,0x4A,0x4A,0x30,0x00,0x00,  // 6
0x02,0x02,0x62,0x12,0x0A,0x06,0x00,0x00,  // 7
0x34,0x4A,0x4A,0x4A,0x4A,0x34,0x00,0x00,  // 8
0x0C,0x52,0x52,0x52,0x52,0x3C,0x00,0x00,  // 9
0x00,0x00,0x00,0x48,0x00,0x00,0x00,0x00,  // :
0x00,0x00,0x80,0x64,0x00,0x00,0x00,0x00,  // ;
0x00,0x00,0x10,0x28,0x44,0x00,0x00,0x00,  // <
0x00,0x28,0x28,0x28,0x28,0x28,0x00,0x00,  // =
0x00,0x00,0x44,0x28,0x10,0x00,0x00,0x00,  // >
0x00,0x04,0x02,0x02,0x52,0x0A,0x04,0x00,  // ?

0x00,0x3C,0x42,0x5A,0x56,0x5A,0x1C,0x00,  // @
0x7C,0x12,0x12,0x12,0x12,0x7C,0x00,0x00,  // A
0x7E,0x4A,0x4A,0x4A,0x4A,0x34,0x00,0x00,  // B
0x3C,0x42,0x42,0x42,0x42,0x24,0x00,0x00,  // C
0x7E,0x42,0x42,0x42,0x24,0x18,0x00,0x00,  // D
0x7E,0x4A,0x4A,0x4A,0x4A,0x42,0x00,0x00,  // E
0x7E,0x0A,0x0A,0x0A,0x0A,0x02,0x00,0x00,  // F
0x3C,0x42,0x42,0x52,0x52,0x34,0x00,0x00,  // G
0x7E,0x08,0x08,0x08,0x08,0x7E,0x00,0x00,  // H
0x00,0x42,0x42,0x7E,0x42,0x42,0x00,0x00,  // I
0x30,0x40,0x40,0x40,0x40,0x3E,0x00,0x00,  // J
0x7E,0x08,0x08,0x14,0x22,0x40,0x00,0x00,  // K
0x7E,0x40,0x40,0x40,0x40,0x40,0x00,0x00,  // L
0x7E,0x04,0x08,0x08,0x04,0x7E,0x00,0x00,  // M
0x7E,0x04,0x08,0x10,0x20,0x7E,0x00,0x00,  // N
0x3C,0x42,0x42,0x42,0x42,0x3C,0x00,0x00,  // O

0x7E,0x12,0x12,0x12,0x12,0x0C,0x00,0x00,  // P
0x3C,0x42,0x52,0x62,0x42,0x3C,0x00,0x00,  // Q
0x7E,0x12,0x12,0x12,0x32,0x4C,0x00,0x00,  // R
0x24,0x4A,0x4A,0x4A,0x4A,0x30,0x00,0x00,  // S
0x02,0x02,0x02,0x7E,0x02,0x02,0x02,0x00,  // T
0x3E,0x40,0x40,0x40,0x40,0x3E,0x00,0x00,  // U
0x1E,0x20,0x40,0x40,0x20,0x1E,0x00,0x00,  // V
0x3E,0x40,0x20,0x20,0x40,0x3E,0x00,0x00,  // W
0x42,0x24,0x18,0x18,0x24,0x42,0x00,0x00,  // X
0x02,0x04,0x08,0x70,0x08,0x04,0x02,0x00,  // Y
0x42,0x62,0x52,0x4A,0x46,0x42,0x00,0x00,  // Z
0x00,0x00,0x7E,0x42,0x42,0x00,0x00,0x00,  // [
0x00,0x04,0x08,0x10,0x20,0x40,0x00,0x00,  // <backslash>
0x00,0x00,0x42,0x42,0x7E,0x00,0x00,0x00,  // ]
0x00,0x08,0x04,0x7E,0x04,0x08,0x00,0x00,  // ^
0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,  // _

0x3C,0x42,0x99,0xA5,0xA5,0x81,0x42,0x3C,  // `
0x00,0x20,0x54,0x54,0x54,0x78,0x00,0x00,  // a
0x00,0x7E,0x48,0x48,0x48,0x30,0x00,0x00,  // b
0x00,0x00,0x38,0x44,0x44,0x44,0x00,0x00,  // c
0x00,0x30,0x48,0x48,0x48,0x7E,0x00,0x00,  // d
0x00,0x38,0x54,0x54,0x54,0x48,0x00,0x00,  // e
0x00,0x00,0x00,0x7C,0x0A,0x02,0x00,0x00,  // f
0x00,0x18,0xA4,0xA4,0xA4,0xA4,0x7C,0x00,  // g
0x00,0x7E,0x08,0x08,0x08,0x70,0x00,0x00,  // h
0x00,0x00,0x00,0x48,0x7A,0x40,0x00,0x00,  // i
0x00,0x00,0x40,0x80,0x80,0x7A,0x00,0x00,  // j
0x00,0x7E,0x18,0x24,0x40,0x00,0x00,0x00,  // k
0x00,0x00,0x00,0x3E,0x40,0x40,0x00,0x00,  // l
0x00,0x7C,0x04,0x78,0x04,0x78,0x00,0x00,  // m
0x00,0x7C,0x04,0x04,0x04,0x78,0x00,0x00,  // n
0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00,  // o

0x00,0xFC,0x24,0x24,0x24,0x18,0x00,0x00,  // p
0x00,0x18,0x24,0x24,0x24,0xFC,0x80,0x00,  // q
0x00,0x00,0x78,0x04,0x04,0x04,0x00,0x00,  // r
0x00,0x48,0x54,0x54,0x54,0x20,0x00,0x00,  // s
0x00,0x00,0x04,0x3E,0x44,0x40,0x00,0x00,  // t
0x00,0x3C,0x40,0x40,0x40,0x3C,0x00,0x00,  // u
0x00,0x0C,0x30,0x40,0x30,0x0C,0x00,0x00,  // v
0x00,0x3C,0x40,0x38,0x40,0x3C,0x00,0x00,  // w
0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00,  // x
0x00,0x1C,0xA0,0xA0,0xA0,0x7C,0x00,0x00,  // y
0x00,0x44,0x64,0x54,0x4C,0x44,0x00,0x00,  // z
0x00,0x08,0x08,0x76,0x42,0x42,0x00,0x00,  // {
0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,  // |
0x00,0x42,0x42,0x76,0x08,0x08,0x00,0x00,  // }
0x00,0x00,0x04,0x02,0x04,0x02,0x00,0x00,  // ~
};

#endif
