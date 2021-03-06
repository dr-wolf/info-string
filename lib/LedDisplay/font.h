#define RAMP_SIZE 1

const byte ramps[1] = {89};

const byte meta[256] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x05, 0x06, 0x09, 0x0E, 0x13, 0x18, 0x1D, 0x1E,
  0x21, 0x24, 0x29, 0x2E, 0x30, 0x33, 0x35, 0x39,
  0x3E, 0x43, 0x48, 0x4D, 0x52, 0x57, 0x5C, 0x61,
  0x66, 0x6B, 0x6D, 0x6F, 0x73, 0x78, 0x7C, 0x81,
  0x86, 0x8B, 0x90, 0x95, 0x9A, 0x9F, 0xA4, 0xA9,
  0xAE, 0xB1, 0xB6, 0xBB, 0xC0, 0xC5, 0xCA, 0xCF,
  0xD4, 0xD9, 0xDE, 0xE3, 0xE8, 0xED, 0xF2, 0xF7,
  0xFC, 0x02, 0x07, 0x09, 0x0D, 0x0F, 0x14, 0x1A,
  0x1C, 0x21, 0x26, 0x2B, 0x30, 0x35, 0x39, 0x3E,
  0x43, 0x46, 0x49, 0x4E, 0x51, 0x56, 0x5B, 0x60,
  0x65, 0x6A, 0x6F, 0x74, 0x78, 0x7D, 0x82, 0x87,
  0x8C, 0x91, 0x96, 0x99, 0x9A, 0x9D, 0xA2, 0xA7,
  0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7,
  0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7,
  0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7,
  0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7,
  0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7, 0xA7,
  0xA7, 0xAF, 0xAF, 0xB5, 0xB5, 0xB5, 0xB5, 0xB5,
  0xB9, 0xBE, 0xBE, 0xBE, 0xBE, 0xBE, 0xBE, 0xBE,
  0xBE, 0xBE, 0xC2, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8,
  0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8, 0xC8
};

const byte font[455] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0xBF, 0x03, 0x00,
  0x03, 0x0A, 0x1F, 0x0A, 0x1F, 0x0A, 0x46, 0x89,
  0xFF, 0x89, 0x72, 0xC6, 0x69, 0x76, 0x98, 0x67,
  0x76, 0xC9, 0xB5, 0x42, 0xA0, 0x03, 0x3C, 0x42,
  0x81, 0x81, 0x42, 0x3C, 0x0A, 0x04, 0x1F, 0x04,
  0x0A, 0x10, 0x10, 0x7C, 0x10, 0x10, 0xA0, 0x60,
  0x10, 0x10, 0x10, 0xC0, 0xC0, 0xC0, 0x30, 0x0C,
  0x03, 0x7E, 0xE1, 0x99, 0x87, 0x7E, 0x84, 0x82,
  0xFF, 0x80, 0x80, 0xC2, 0xA1, 0x91, 0x89, 0x86,
  0x42, 0x81, 0x89, 0x89, 0x76, 0x18, 0x14, 0x92,
  0xFF, 0x90, 0x4F, 0x89, 0x89, 0x89, 0x71, 0x7E,
  0x89, 0x89, 0x89, 0x70, 0x01, 0x01, 0xF1, 0x09,
  0x07, 0x76, 0x89, 0x89, 0x89, 0x76, 0x0E, 0x91,
  0x91, 0x91, 0x7E, 0x6C, 0x6C, 0xAC, 0x6C, 0x08,
  0x14, 0x22, 0x41, 0x14, 0x14, 0x14, 0x14, 0x14,
  0x41, 0x22, 0x14, 0x08, 0x02, 0x01, 0xA1, 0x11,
  0x0E, 0x7E, 0x81, 0xBD, 0xA5, 0x9E, 0xF8, 0x26,
  0x21, 0x26, 0xF8, 0xFF, 0x89, 0x89, 0x89, 0x76,
  0x7E, 0x81, 0x81, 0x81, 0x42, 0xFF, 0x81, 0x81,
  0x81, 0x7E, 0xFF, 0x89, 0x89, 0x89, 0x81, 0xFF,
  0x09, 0x09, 0x09, 0x01, 0x7E, 0x81, 0x81, 0x91,
  0x72, 0xFF, 0x08, 0x08, 0x08, 0xFF, 0x81, 0xFF,
  0x81, 0x60, 0x80, 0x80, 0x80, 0x7F, 0xFF, 0x18,
  0x24, 0x42, 0x81, 0xFF, 0x80, 0x80, 0x80, 0x80,
  0xFF, 0x02, 0x0C, 0x02, 0xFF, 0xFF, 0x02, 0x04,
  0x08, 0xFF, 0x7E, 0x81, 0x81, 0x81, 0x7E, 0xFF,
  0x09, 0x09, 0x09, 0x06, 0x7E, 0x81, 0xA1, 0xC1,
  0xFE, 0xFF, 0x09, 0x09, 0x09, 0xF6, 0x46, 0x89,
  0x89, 0x89, 0x72, 0x01, 0x01, 0xFF, 0x01, 0x01,
  0x7F, 0x80, 0x80, 0x80, 0x7F, 0x0F, 0x30, 0xC0,
  0x30, 0x0F, 0xFF, 0x40, 0x30, 0x40, 0xFF, 0xC7,
  0x28, 0x10, 0x28, 0xC7, 0x0F, 0x10, 0xE0, 0x10,
  0x0F, 0xE1, 0x91, 0x89, 0x85, 0x83, 0xFF, 0x81,
  0x03, 0x0C, 0x30, 0xC0, 0x81, 0xFF, 0x04, 0x02,
  0x01, 0x02, 0x04, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x80, 0x01, 0x02, 0x70, 0x88, 0x88, 0x48, 0xF8,
  0xFF, 0x88, 0x88, 0x88, 0x70, 0x70, 0x88, 0x88,
  0x88, 0x90, 0x70, 0x88, 0x88, 0x88, 0xFF, 0x70,
  0xA8, 0xA8, 0xA8, 0xB0, 0x04, 0xFE, 0x05, 0x01,
  0x18, 0xA4, 0xA4, 0xA4, 0x7C, 0xFF, 0x08, 0x08,
  0x08, 0xF0, 0x88, 0xF9, 0x80, 0x80, 0x88, 0x79,
  0xFF, 0x20, 0x30, 0x48, 0x80, 0x81, 0xFF, 0x80,
  0xF8, 0x08, 0xF8, 0x08, 0xF0, 0xF8, 0x10, 0x08,
  0x08, 0xF0, 0x70, 0x88, 0x88, 0x88, 0x70, 0xF8,
  0x48, 0x48, 0x48, 0x30, 0x30, 0x48, 0x48, 0x28,
  0xF8, 0xF8, 0x10, 0x08, 0x08, 0x10, 0x90, 0xA8,
  0xA8, 0xA8, 0x48, 0x08, 0x7F, 0x88, 0x80, 0x78,
  0x80, 0x80, 0x40, 0xF8, 0x18, 0x60, 0x80, 0x60,
  0x18, 0x78, 0x80, 0x78, 0x80, 0x78, 0x88, 0x50,
  0x20, 0x50, 0x88, 0x18, 0xA0, 0xA0, 0xA0, 0x78,
  0x88, 0xC8, 0xA8, 0x98, 0x88, 0x08, 0x76, 0x81,
  0xFF, 0x81, 0x76, 0x08, 0x08, 0x04, 0x0C, 0x08,
  0x04, 0xFF, 0x81, 0x81, 0x81, 0xFF, 0x3C, 0x42,
  0x99, 0xA5, 0xA5, 0x81, 0x42, 0x3C, 0x20, 0x50,
  0x88, 0x20, 0x50, 0x88, 0x06, 0x09, 0x09, 0x06,
  0xA0, 0xA0, 0xF8, 0xA0, 0xA0, 0x06, 0x09, 0x09,
  0x06, 0x88, 0x50, 0x20, 0x88, 0x50, 0x20
};
