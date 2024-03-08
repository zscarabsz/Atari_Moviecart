

#include <stdint.h>
#include <stdio.h>


uint8_t TitleGraph1[5*192] =
{
	0xc0, 0x00, 0x01, 0x1f, 0xd9, 0x3e, 0x0f, 0xf8, 0xc1, 0x01, 0x1f, 0xfb, 0xf1, 0x00, 0x00, 0xf0, 0x86, 0x6c, 0x1f, 0x07, 0xff, 0x8d, 0x3e, 0xe7,
	0x83, 0x3f, 0xf8, 0xff, 0x7f, 0xf0, 0xfe, 0xfc, 0xe0, 0x0f, 0x0e, 0xff, 0x37, 0xf0, 0xd8, 0xbf, 0xde, 0x77, 0xef, 0x07, 0x7b, 0xe0, 0x07, 0x39,
	0xfc, 0x0f, 0xfe, 0x7e, 0xff, 0x7f, 0xf1, 0xdf, 0xc7, 0xf0, 0x03, 0x3f, 0x3f, 0xf8, 0xc7, 0x03, 0xf7, 0xf7, 0xff, 0xff, 0x37, 0xff, 0x8c, 0x63,
	0x9c, 0xfa, 0xff, 0xff, 0xbf, 0xe3, 0x67, 0x71, 0xff, 0xfc, 0xff, 0xff, 0xbf, 0x73, 0x77, 0x73, 0xff, 0xff, 0xff, 0xff, 0x9d, 0x9c, 0x9c, 0xfa,
	0xff, 0xff, 0x3f, 0xff, 0x99, 0xcc, 0xdc, 0xfa, 0xff, 0xff, 0x7f, 0x98, 0x66, 0xcc, 0xff, 0xfc, 0xff, 0xff, 0x7f, 0x77, 0x67, 0x31, 0xff, 0xff,
	0xff, 0xff, 0xc6, 0x77, 0x27, 0xfc, 0xff, 0xff, 0x7f, 0xff, 0xc6, 0x3b, 0x27, 0xfc, 0xff, 0xff, 0xff, 0xd8, 0xcd, 0xc6, 0xff, 0xfe, 0xff, 0xff,
	0xff, 0xd8, 0x27, 0xe6, 0xff, 0xff, 0xff, 0xff, 0x33, 0xd8, 0xd8, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xcd, 0x66, 0xa6, 0xff, 0xff, 0xff, 0xff, 0xd8,
	0x76, 0x66, 0xff, 0xfe, 0xff, 0xff, 0xff, 0x2f, 0xd9, 0xdd, 0xff, 0xff, 0xff, 0xff, 0x01, 0xd0, 0xc9, 0xff, 0xff, 0xff, 0xff, 0xff, 0x93, 0xb6,
	0x36, 0xff, 0xff, 0xff, 0xff, 0x2e, 0x03, 0xcc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2e, 0x96, 0x6e, 0xff, 0xff, 0xff, 0xff, 0x03, 0x2e, 0x16, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf8, 0x80, 0xff, 0xf0, 0xff, 0xff, 0x9f, 0xff, 0x07, 0x3f, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xa9, 0xf6, 0xf0, 0xff,
	0xff, 0xff, 0x03, 0x7f, 0x61, 0xff, 0xf0, 0xff, 0xcf, 0xff, 0x33, 0xff, 0xe9, 0xff, 0xff, 0xff, 0xc7, 0x5d, 0xa1, 0xf2, 0xf0, 0xff, 0xff, 0xff,
	0xc7, 0x7d, 0xf5, 0xfb, 0xfb, 0xff, 0xff, 0xfe, 0x21, 0x5d, 0x75, 0xfe, 0xf0, 0x3f, 0x87, 0xf8, 0x60, 0x0f, 0x75, 0xfc, 0x0c, 0x1e, 0x87, 0x7b,
	0x60, 0x0f, 0xf0, 0xf8, 0x0c, 0xf0, 0x83, 0x7e, 0xf7, 0x87, 0xf0, 0x8f, 0x05, 0xe0, 0xe0, 0xf6, 0xb3, 0xf0, 0xf0, 0xcf, 0x03, 0xe0, 0xe0, 0x86,
	0xbb, 0xf0, 0x01, 0xcf, 0x03, 0xbd, 0xc0, 0x86, 0xf0, 0xf0, 0x83, 0xe0, 0x03, 0x75, 0x5b, 0x07, 0xf0, 0xef, 0x83, 0xe0, 0xc0, 0x79, 0x7b, 0xf0,
	0xf0, 0xef, 0x01, 0xe0, 0xc0, 0x07, 0x2d, 0xf0, 0x83, 0xef, 0x41, 0x43, 0xd0, 0x7f, 0xf0, 0xf0, 0xc7, 0xe0, 0xc1, 0x47, 0x9f, 0xf7, 0xf0, 0xcf,
	0xc7, 0xe0, 0x98, 0x87, 0x03, 0xf0, 0xf0, 0x9f, 0xc1, 0xf0, 0x98, 0xef, 0xc3, 0xf8, 0xe7, 0x3f, 0xc0, 0x0f, 0xbd, 0x0f, 0xf0, 0xfc, 0xef, 0xf8,
	0xe1, 0x1f, 0xe1, 0x3f, 0xf1, 0x7f, 0xff, 0xff, 0xbf, 0x1f, 0xf1, 0xfe, 0xff, 0xff, 0xf8, 0x3f, 0xff, 0xff, 0xf1, 0xcf, 0xff, 0xff, 0xf0, 0x1f,
	0xff, 0xff, 0xff, 0x8f, 0xff, 0x1f, 0xe1, 0x1f, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xf3, 0x0f, 0xfe, 0xff, 0xc1, 0xff, 0xff, 0xff,
	0x23, 0x03, 0xfc, 0x81, 0xc1, 0x0f, 0xff, 0xfd, 0x4e, 0x07, 0xf8, 0xff, 0x81, 0xcf, 0xf7, 0xff, 0x0e, 0x30, 0xf8, 0xff, 0xff, 0x9f, 0xe3, 0x0f,
	0x3f, 0xf0, 0x81, 0xff, 0xff, 0xff, 0x07, 0x0f, 0xf8, 0x80, 0x81, 0xdf, 0xff, 0xff, 0x3f, 0x0f, 0xf8, 0xff, 0x81, 0xb7, 0xef, 0xff, 0x7f, 0x10,
	0xf8, 0xfe, 0xff, 0xff, 0xe3, 0x0f, 0x7f, 0x10, 0x83, 0xfe, 0xff, 0xff, 0xb7, 0x0f, 0xf8, 0x10, 0x81, 0xff, 0xff, 0xff, 0x7f, 0x0f, 0xf8, 0xfe,
	0x81, 0xff, 0x87, 0xff, 0x7f, 0x10, 0xf8, 0xfe, 0xff, 0xcf, 0x43, 0x09, 0x7f, 0x10, 0xc1, 0x9e, 0xff, 0xff, 0x77, 0x0b, 0xf8, 0x10, 0xe1, 0xf7,
	0xff, 0xff, 0x7f, 0x03, 0xf8, 0x3f, 0xf0, 0xff, 0x57, 0xff, 0x7f, 0x80, 0xfc, 0x7f, 0x3f, 0xfe, 0xff, 0x87, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x07,
	0xff, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x07, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x3d, 0xff, 0xf0,
	0xff, 0xff, 0xff, 0xff, 0x7f, 0xfc, 0x03, 0xff, 0xff, 0xff, 0x1f, 0xff, 0x7f, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc3, 0xf4, 0xfc, 0xff, 0xff,
	0xff, 0xff, 0x3f, 0xff, 0xcb, 0xff, 0xff, 0xff, 0x3f, 0xff, 0x3f, 0x07, 0xa4, 0xff, 0xff, 0xff, 0xff, 0x89, 0x80, 0xfb, 0xff, 0x00, 0x00, 0x00,
	0xff, 0xff, 0x21, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
	0xff, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xf8, 0x00, 0x07, 0x00, 0x00, 0x80, 0xfc, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfd, 0xff, 0x0f,
	0x1e, 0x00, 0xc3, 0xf8, 0xff, 0xfc, 0xff, 0x1f, 0x80, 0x1f, 0xc7, 0xfd, 0xff, 0xfd, 0xff, 0x9f, 0xe1, 0xfc, 0xef, 0xfd, 0xff, 0xfd, 0xff, 0x3f,
	0xf3, 0xfe, 0xff, 0x00, 0xf6, 0xbf, 0xff, 0x7f, 0xef, 0xfe, 0x3f, 0xfc, 0x03, 0xbf, 0xf3, 0x7f, 0xef, 0x00, 0x9d, 0xc8, 0xff, 0x9b, 0xfb, 0xff,
	0xef, 0x80, 0x07, 0xfc, 0xff, 0x7f, 0xfb, 0xde, 0xc2, 0xc3, 0x0f, 0x98, 0xfb, 0x7f, 0xcf, 0xff, 0xfc, 0x1f, 0x9f, 0x01, 0xfb, 0x00, 0x00, 0xc7,
	0xfe, 0xff, 0x00, 0x03, 0xfb, 0x00, 0x0f, 0xef, 0x9f, 0xff, 0x0f, 0xec, 0xc0, 0xf0, 0xff, 0xaf, 0xff, 0xc7, 0xff, 0x1f, 0x1f, 0xfc, 0xff, 0xff,
	0xff, 0xe7, 0xe0, 0x7f, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xef, 0xf9, 0xfe, 0xbf, 0xff, 0xff, 0xfa, 0xff, 0x7f, 0xf9, 0xfe, 0xff, 0xff, 0xd8, 0xef,
	0xff, 0xff, 0xbf, 0xfe, 0xf4, 0xe8, 0xff, 0xed, 0xf9, 0xff, 0x3f, 0xfc, 0xd2, 0x00, 0xff, 0x00, 0x69, 0xda, 0x3f, 0x1c, 0x7f, 0x03, 0xff, 0xff,
	0xfb, 0xff, 0xc0, 0x3f, 0xe1, 0xfe, 0xfd, 0x7f, 0x00, 0xe4, 0xf0, 0x3f, 0xf1, 0x00, 0xe1, 0xff, 0x3f, 0x7f, 0xfc, 0xff, 0xff, 0xe0, 0xe0, 0xe0,
	0x3f, 0x7f, 0xfb, 0xff, 0x3f, 0x1f, 0xe0, 0xf0, 0xfc, 0xff, 0xfb, 0xf9, 0x7f, 0x3f, 0x7f, 0xf8, 0xfe, 0xff, 0xfb, 0xf9, 0xf8, 0xff, 0xff, 0x7f,
	0xfe, 0xff, 0xff, 0xf9, 0xf8, 0xfc, 0xff, 0x5f, 0x9b, 0xff, 0xff, 0xff, 0xfd, 0xfc, 0xff, 0xff, 0x00, 0xfd, 0xff, 0xff, 0xff, 0x00, 0xff, 0x9f,
	0xff, 0x9f, 0xfd, 0xb7, 0x00, 0xbf, 0xf9, 0xff, 0xfb, 0xff, 0x4f, 0xfb, 0xff, 0xf8, 0x3c, 0xf8, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xfc, 0xff,
	0x00, 0xd9, 0x9b, 0xdf, 0xe0, 0x0f, 0xff, 0xf8, 0xff, 0xd9, 0xff, 0xff, 0xf1, 0x3f, 0x07, 0xfc, 0xe0, 0xe0, 0xff, 0xff, 0xff, 0x3f, 0x3f, 0x3f,
};


uint8_t TitleGraph2[5*192] =
{
	0x1f, 0xf9, 0x27, 0x00, 0xff, 0xc3, 0x3e, 0xe8, 0x36, 0x07, 0xff, 0xb0, 0xe7, 0x8c, 0xc0, 0xf0, 0x81, 0x6e, 0x7f, 0xc7, 0x1f, 0x07, 0x2f, 0xff,
	0xff, 0xfc, 0xf9, 0xfc, 0xc0, 0x0f, 0x1f, 0xfb, 0x37, 0x19, 0xf4, 0xf0, 0xde, 0xf0, 0x03, 0x0f, 0xfe, 0x3f, 0xc3, 0x06, 0xf3, 0xf0, 0x0f, 0xf0,
	0x83, 0x1f, 0xfc, 0xf1, 0x1f, 0xf0, 0xff, 0x9e, 0x7c, 0xdc, 0x87, 0x7c, 0x7f, 0xff, 0x98, 0x03, 0x0c, 0xf0, 0xff, 0xff, 0xbf, 0xff, 0x9d, 0x71,
	0x9c, 0xfa, 0xff, 0xff, 0x3f, 0x9c, 0x9c, 0x8c, 0xff, 0xfa, 0xff, 0xff, 0xbf, 0xe7, 0x9c, 0x73, 0xff, 0xff, 0xff, 0xff, 0x66, 0x77, 0x67, 0xfc,
	0xff, 0xff, 0xbf, 0xff, 0xe7, 0x73, 0x67, 0xfd, 0xff, 0xff, 0x7f, 0x98, 0x99, 0xcc, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xd8, 0xd8, 0xcc, 0xff, 0xff,
	0xff, 0xff, 0xbb, 0xd8, 0xd8, 0xfd, 0xff, 0xff, 0x7f, 0xff, 0xc4, 0xce, 0x27, 0xfe, 0xff, 0xff, 0xff, 0xd8, 0xcd, 0xc6, 0xff, 0xfe, 0xff, 0xff,
	0xff, 0x37, 0x37, 0x99, 0xff, 0xff, 0xff, 0xff, 0xcd, 0xda, 0x27, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xc9, 0x66, 0x26, 0xfe, 0xff, 0xff, 0xff, 0x3f,
	0x67, 0x99, 0xff, 0xfc, 0xff, 0xff, 0xff, 0x2e, 0xd9, 0x5d, 0xff, 0xff, 0xff, 0xff, 0x9b, 0xd1, 0x16, 0xff, 0xff, 0xff, 0xff, 0xff, 0x23, 0xb3,
	0xc9, 0xff, 0xff, 0xff, 0xff, 0xd0, 0x43, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd1, 0xe9, 0xd3, 0xff, 0xff, 0xff, 0xff, 0x03, 0xff, 0xe1, 0xff,
	0xf8, 0xff, 0x17, 0xff, 0xf8, 0x7f, 0xff, 0xf8, 0xff, 0xff, 0xff, 0x6d, 0xdf, 0xe4, 0xf0, 0xff, 0xff, 0xff, 0xef, 0x1c, 0xe9, 0xe0, 0xf0, 0xff,
	0xff, 0xff, 0x93, 0x7f, 0xf9, 0xff, 0xe0, 0xff, 0xc7, 0xff, 0x91, 0xf2, 0xed, 0xff, 0xff, 0xff, 0xc7, 0x5d, 0xa1, 0xf8, 0xf1, 0xff, 0xff, 0xff,
	0xc7, 0x5d, 0xf1, 0x3b, 0xf9, 0xff, 0x1e, 0xfc, 0xe1, 0x5b, 0x75, 0xfe, 0xf0, 0x1e, 0x83, 0xf8, 0x60, 0x0d, 0x75, 0xfc, 0x0c, 0x9f, 0x87, 0xdf,
	0xe0, 0x8f, 0xf0, 0xf8, 0x0d, 0xf0, 0x03, 0x32, 0xbf, 0x86, 0xe0, 0xcf, 0x05, 0xe0, 0xe0, 0x3e, 0xbb, 0xf0, 0xf0, 0xcf, 0x03, 0xe0, 0xe0, 0x86,
	0xdb, 0xf0, 0x01, 0xef, 0x03, 0xf5, 0xc0, 0x07, 0xf0, 0xf0, 0x83, 0xe0, 0x03, 0x75, 0x5b, 0x07, 0xf0, 0xef, 0x83, 0xe0, 0xc0, 0x6b, 0x0b, 0xf0,
	0xf0, 0xef, 0x41, 0xe0, 0xd0, 0xff, 0x05, 0xf0, 0xc3, 0xcf, 0xc1, 0xd3, 0x98, 0xff, 0xf0, 0xf0, 0xc7, 0xe0, 0xc1, 0x07, 0x87, 0x67, 0xf0, 0xdf,
	0xc7, 0xf0, 0x98, 0x07, 0xc3, 0xf8, 0xf0, 0x9f, 0xc0, 0xf0, 0x99, 0x0f, 0xc3, 0xf8, 0xe7, 0x7f, 0xe1, 0x0f, 0xbd, 0x1f, 0xf1, 0xfe, 0xff, 0xfc,
	0xff, 0x1f, 0xe1, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0x1f, 0xf1, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xfd, 0xf3, 0x8f, 0xff, 0xff, 0xe1, 0x3f,
	0xff, 0xff, 0xff, 0x0f, 0xff, 0x9f, 0xc1, 0x1f, 0xf3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xe1, 0x07, 0x4e, 0xc3, 0xc1, 0xff, 0xff, 0xff,
	0xe3, 0x03, 0xf8, 0xb1, 0x81, 0x9f, 0xff, 0xff, 0x0e, 0x07, 0xf8, 0xff, 0x81, 0x0f, 0xf7, 0xfe, 0x0e, 0x70, 0xf8, 0xff, 0xff, 0x07, 0xeb, 0x0f,
	0x3e, 0xc0, 0x81, 0xff, 0xff, 0xff, 0xf3, 0x0f, 0xf8, 0x80, 0x81, 0x9f, 0xff, 0xff, 0x3f, 0x0f, 0xf8, 0xff, 0x81, 0x07, 0xef, 0xfc, 0x7e, 0x10,
	0xf8, 0xfe, 0xff, 0x8f, 0xe7, 0x0f, 0x7f, 0x10, 0x81, 0xfe, 0xff, 0xff, 0xb7, 0x0f, 0xf8, 0x10, 0x81, 0x03, 0xff, 0xff, 0x7e, 0x0f, 0xf8, 0xfe,
	0xc1, 0xdf, 0xf7, 0xfc, 0x7f, 0x10, 0xf8, 0xde, 0xff, 0xff, 0xdf, 0x0b, 0x7f, 0x10, 0xc1, 0x1e, 0xff, 0xff, 0x77, 0x03, 0xf8, 0x00, 0xe0, 0xff,
	0xff, 0xff, 0x7f, 0x87, 0xf8, 0x3f, 0xf8, 0xfe, 0xd7, 0xf8, 0xff, 0x89, 0xff, 0xff, 0x0f, 0xff, 0xfe, 0xce, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x1f,
	0xff, 0xfc, 0xff, 0xff, 0xff, 0xd7, 0x07, 0xfe, 0xff, 0xf8, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xc3, 0x4b, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xe0, 0xfc, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xdb, 0x7f, 0xfd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xcb, 0xf4, 0xf8, 0xff, 0xff,
	0xff, 0xff, 0xc0, 0x8b, 0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xf9, 0x24, 0xff, 0xff, 0x00, 0x00, 0x01, 0x7f, 0x03, 0x00, 0xff, 0xff, 0xff,
	0x00, 0x00, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0xc0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x30,
	0xff, 0x01, 0x00, 0x00, 0x80, 0xfc, 0xff, 0xf8, 0x00, 0x07, 0x00, 0x00, 0x80, 0xfd, 0xff, 0xfc, 0x06, 0x00, 0x00, 0xc0, 0xff, 0xfd, 0xff, 0x0f,
	0xff, 0x00, 0xc7, 0xfc, 0xff, 0xfd, 0xff, 0x9f, 0xc1, 0x1f, 0xcf, 0xff, 0xff, 0xfd, 0xff, 0x9f, 0xf1, 0xfe, 0xef, 0xfd, 0xff, 0xfc, 0xff, 0x7f,
	0xf3, 0xfe, 0xff, 0x7e, 0xe8, 0x9f, 0xff, 0x7f, 0xcf, 0xff, 0x4f, 0xf8, 0x03, 0xbf, 0xfb, 0x7f, 0xef, 0x80, 0xff, 0x00, 0xff, 0xbf, 0xfb, 0xff,
	0x6f, 0xc1, 0x0f, 0x1e, 0xff, 0x7f, 0xfb, 0x7f, 0xe0, 0xc7, 0x1f, 0x00, 0xff, 0x7f, 0x8f, 0x9c, 0xfc, 0xff, 0x9f, 0x01, 0xe0, 0xf4, 0x8f, 0xef,
	0xff, 0xff, 0x4f, 0x83, 0x1d, 0xc0, 0x1f, 0xef, 0x9f, 0xff, 0x7f, 0x1f, 0xe0, 0xf8, 0xff, 0xef, 0xbf, 0xc7, 0xff, 0x3f, 0x9f, 0xfc, 0xff, 0xff,
	0xff, 0xef, 0xf1, 0x7f, 0xbf, 0xdf, 0x3f, 0xff, 0xff, 0xe4, 0xf9, 0xfe, 0xbf, 0x2f, 0x6f, 0xff, 0xff, 0x7f, 0xfb, 0xfe, 0xff, 0xfe, 0xd9, 0xff,
	0xfe, 0xff, 0xef, 0xfe, 0x97, 0xff, 0x5e, 0xe9, 0xff, 0xff, 0x00, 0xf3, 0xe0, 0xde, 0xe9, 0xfe, 0xff, 0xff, 0x00, 0x3f, 0xc0, 0x0f, 0x60, 0xff,
	0xdd, 0xdf, 0xe0, 0x7f, 0xf1, 0xf6, 0x00, 0xdf, 0x36, 0xfe, 0xf8, 0x7f, 0xfb, 0xe0, 0xfb, 0x1f, 0x3f, 0x7f, 0xfc, 0xff, 0x0f, 0xf0, 0xc0, 0xe0,
	0x7f, 0xff, 0xfb, 0xff, 0x7f, 0x3f, 0xf0, 0xf8, 0xfc, 0x7f, 0xfb, 0xf9, 0xff, 0x7f, 0xff, 0xfc, 0xfe, 0xff, 0xf8, 0xf9, 0xf8, 0xff, 0xff, 0x17,
	0xfe, 0xf4, 0xff, 0xf9, 0xf9, 0xfc, 0xff, 0x00, 0xe8, 0xfe, 0xff, 0xff, 0xfd, 0xfd, 0x9b, 0xff, 0xff, 0xff, 0xd3, 0xff, 0xe0, 0xfd, 0x22, 0xff,
	0xf7, 0xdf, 0xf9, 0xb6, 0xff, 0xe0, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfe, 0xf8, 0xff, 0xff, 0xfe, 0xff, 0xc0, 0xff, 0xff, 0xfc,
	0xbf, 0xfd, 0xfc, 0x00, 0xe0, 0x1f, 0xff, 0xf8, 0x00, 0x3f, 0xff, 0xff, 0xf1, 0x3f, 0x1f, 0xfe, 0xf0, 0xe0, 0x00, 0xe0, 0xff, 0x00, 0x08, 0x00,
};


uint8_t TitleColor1[5*192] =
{
	0x00, 0xf0, 0x20, 0x60, 0x60, 0x00, 0xf2, 0x20, 0x62, 0x20, 0xf2, 0xf0, 0x22, 0xf0, 0x10, 0x34, 0x20, 0x20, 0x34, 0x56, 0x54, 0x62, 0x52, 0x64,
	0x22, 0x22, 0x34, 0x22, 0x48, 0x48, 0xf2, 0x22, 0x34, 0x54, 0x54, 0xf2, 0x48, 0x48, 0x62, 0x34, 0x4a, 0x34, 0x48, 0x56, 0x46, 0x4a, 0x48, 0x48,
	0x4a, 0x4a, 0x4a, 0x46, 0xf4, 0x4a, 0x62, 0x20, 0x4a, 0x52, 0x06, 0x04, 0x06, 0x06, 0x20, 0x48, 0x62, 0xe2, 0x04, 0x06, 0x04, 0x06, 0xf2, 0x54,
	0x34, 0x04, 0x06, 0x08, 0x06, 0x48, 0x62, 0x34, 0x06, 0x04, 0xd8, 0xb8, 0x06, 0x48, 0x20, 0x46, 0x06, 0x08, 0x08, 0x08, 0x46, 0xf2, 0x36, 0x06,
	0xe8, 0x08, 0x06, 0xd8, 0x48, 0x20, 0x46, 0x06, 0x08, 0x0a, 0xb8, 0x64, 0x62, 0xf2, 0x06, 0xb6, 0x0a, 0x08, 0x06, 0x46, 0xf2, 0x46, 0x08, 0x0a,
	0x0a, 0xba, 0xf2, 0x48, 0x62, 0x06, 0x08, 0x0a, 0x06, 0x0a, 0x62, 0x48, 0xf2, 0xb8, 0x0a, 0xdc, 0x06, 0x22, 0x20, 0x20, 0x0a, 0x06, 0x0c, 0xdc,
	0x08, 0x22, 0x20, 0xf2, 0x0a, 0x0c, 0x0c, 0x0a, 0x46, 0x22, 0x48, 0x06, 0x0a, 0x0c, 0xd8, 0x0c, 0xf2, 0xf2, 0xf2, 0x06, 0x0c, 0x0e, 0x08, 0x52,
	0x34, 0x22, 0x0a, 0xb8, 0xde, 0x0c, 0x9e, 0x34, 0x46, 0x34, 0xdc, 0x0e, 0x0e, 0x0c, 0x06, 0x20, 0x48, 0x08, 0x0c, 0x0e, 0x08, 0x0e, 0x04, 0x64,
	0xf2, 0x08, 0x0e, 0x0e, 0x0a, 0x46, 0x06, 0x34, 0xde, 0x08, 0x0e, 0x0e, 0xdc, 0x46, 0x44, 0x34, 0x0c, 0x0e, 0x0e, 0x0e, 0x06, 0x56, 0x20, 0x08,
	0x0e, 0x0e, 0x0a, 0x0e, 0x46, 0x04, 0x22, 0x0a, 0x0e, 0x0e, 0x0c, 0x22, 0x08, 0x54, 0x0e, 0x0a, 0x0e, 0x0e, 0xae, 0x34, 0x48, 0x04, 0x0e, 0x0e,
	0x0e, 0x0e, 0x06, 0x34, 0x4a, 0x0a, 0x0e, 0x0e, 0x0c, 0x0e, 0x06, 0x36, 0x48, 0x0c, 0x0e, 0x0e, 0x0c, 0x56, 0x06, 0x06, 0x0e, 0xbc, 0x0e, 0x0e,
	0x0c, 0x46, 0x48, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x46, 0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x0e, 0x24, 0x34, 0x4a, 0x0c, 0x0e, 0x0e, 0x0e, 0x48,
	0x04, 0xf2, 0x0e, 0x0c, 0x0e, 0x0e, 0x0e, 0x48, 0x48, 0x54, 0x0e, 0x0e, 0x0c, 0x0e, 0x04, 0x46, 0x48, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x04, 0xf4,
	0x48, 0x0e, 0x0e, 0x0e, 0x0e, 0x34, 0x06, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0c, 0x46, 0x48, 0xd6, 0x0e, 0x0e, 0x0e, 0x0e, 0xb8, 0x46, 0x48, 0x0e,
	0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x48, 0x0e, 0x0e, 0x0e, 0x0e, 0xf6, 0xb8, 0x08, 0x0e, 0x0e, 0x0e, 0x0e, 0x0c, 0x04, 0x48, 0x08, 0x0e, 0x0e,
	0x0e, 0x0e, 0x08, 0x06, 0x48, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x08, 0x06, 0x06, 0x0e, 0x0e, 0x0e, 0x0c, 0x06, 0x08, 0x06, 0x0e, 0x0e, 0x0e, 0x0e,
	0x0e, 0xb6, 0x04, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x06, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xdc, 0x08, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0xd6,
	0x0a, 0x08, 0x0e, 0x0c, 0x0e, 0x0e, 0x0e, 0x06, 0x04, 0x08, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x06, 0x06, 0x0c, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x0a,
	0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x06, 0x0a, 0x0a, 0x0e, 0x0c, 0x0e, 0x0e, 0x0e, 0x06, 0x04, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0xdc, 0x06, 0x06, 0x0c,
	0x0e, 0x0e, 0x0e, 0x0e, 0x0c, 0x0a, 0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x04, 0x0a, 0x08, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x26, 0xba, 0x0e, 0x04,
	0x0e, 0x0e, 0xdc, 0x04, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x08, 0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x04, 0x0a, 0x0a, 0x0e, 0x0c, 0x0e, 0x0e,
	0x0e, 0x36, 0x36, 0xba, 0x0e, 0x0e, 0x0e, 0x0e, 0xdc, 0x04, 0x48, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x08, 0x48, 0x0a, 0x0e, 0x04, 0x0c, 0x04,
	0x0a, 0xda, 0x0e, 0x0c, 0x0e, 0x0e, 0x0e, 0xf4, 0x48, 0x08, 0x0e, 0x10, 0x0e, 0x0e, 0xdc, 0x22, 0x34, 0x0c, 0x0e, 0x0e, 0x0e, 0x0e, 0x08, 0x06,
	0x22, 0x0e, 0x0e, 0x0e, 0x0e, 0x54, 0xba, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x22, 0x54, 0x06, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x22, 0x32, 0x0e,
	0x0e, 0x0e, 0x0e, 0x0e, 0x08, 0x08, 0x20, 0x0e, 0x0e, 0x0e, 0x0e, 0x54, 0xda, 0x04, 0x0e, 0x0c, 0x0e, 0x0e, 0x0e, 0x46, 0x54, 0x08, 0x0e, 0x0e,
	0x0e, 0x0e, 0x0a, 0x22, 0x62, 0x0c, 0x0e, 0x0e, 0x0e, 0x0e, 0x08, 0x34, 0x52, 0x0c, 0x0e, 0x0e, 0x0a, 0x46, 0x20, 0x04, 0x0e, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0x00,
	0x9a, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x9c, 0x9a, 0x00, 0x9c, 0x00, 0x00, 0x9c, 0x8c, 0x8e, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x8a, 0x8c, 0x9c,
	0x8c, 0x00, 0x9c, 0xac, 0x8c, 0x9a, 0x94, 0x9a, 0xa0, 0x9a, 0x9c, 0x94, 0x8c, 0x8a, 0x9c, 0x8c, 0x9c, 0x9c, 0x8c, 0xe2, 0x02, 0x04, 0x9a, 0x9c,
	0x9a, 0x9a, 0xa4, 0xa0, 0x02, 0x96, 0x8c, 0x8e, 0x8a, 0x8c, 0x94, 0x92, 0x86, 0x86, 0x8c, 0x8c, 0x86, 0xf0, 0x72, 0x72, 0x88, 0x02, 0x04, 0x76,
	0x92, 0x9a, 0xac, 0xa0, 0x86, 0x88, 0x86, 0x94, 0x74, 0x9a, 0x9c, 0x02, 0x84, 0x74, 0x72, 0xa0, 0x9c, 0x9a, 0x8e, 0x86, 0x02, 0xa0, 0xa0, 0x9c,
	0x9c, 0xac, 0xa0, 0x9c, 0x72, 0xf0, 0x8c, 0x8e, 0x8c, 0x9c, 0x98, 0xf0, 0x02, 0x9c, 0x9c, 0x8c, 0x8a, 0x9c, 0xac, 0x8c, 0xac, 0x9e, 0x8c, 0x8c,
	0x86, 0x9a, 0x9c, 0xac, 0x9a, 0x94, 0x8a, 0x8a, 0x9c, 0x8c, 0x9c, 0x9a, 0x8c, 0x02, 0x02, 0x76, 0x8e, 0x9a, 0x9a, 0x8c, 0x94, 0xa0, 0x02, 0x88,
	0x8a, 0x8e, 0x88, 0x96, 0x02, 0x94, 0xa0, 0x86, 0x8a, 0x96, 0x86, 0x90, 0x72, 0xa0, 0x86, 0x02, 0x76, 0x86, 0x84, 0x96, 0xe0, 0x92, 0x94, 0x86,
	0x84, 0x02, 0x8a, 0x9c, 0x9e, 0xa0, 0x72, 0x92, 0xa0, 0xf0, 0xac, 0x9c, 0x9c, 0xa0, 0xe0, 0x90, 0x92, 0x9c, 0x9c, 0x9c, 0xa0, 0x9c, 0xa0, 0x86,
	0x9c, 0x8c, 0x8c, 0x9c, 0x9c, 0x92, 0x9a, 0x9c, 0x8e, 0x8a, 0x8a, 0x9c, 0xac, 0x9c, 0x9c, 0x9c, 0x8c, 0x8c, 0x76, 0x9a, 0x9c, 0x9c, 0x9a, 0x94,
	0x88, 0x8a, 0x8e, 0x8c, 0x9c, 0x9a, 0x8c, 0x74, 0x74, 0x86, 0x8c, 0x8e, 0x8c, 0x8a, 0x74, 0x72, 0xa0, 0x94, 0x88, 0x8a, 0x94, 0x86, 0x72, 0x10,
	0xf0, 0x02, 0x88, 0x88, 0x02, 0xa0, 0xa0, 0xa0, 0x86, 0xe0, 0x92, 0x84, 0xf0, 0x9c, 0x9a, 0xa0, 0xa2, 0x92, 0x92, 0x72, 0x90, 0x9c, 0x9e, 0xa0,
	0xf0, 0xa0, 0xa0, 0xf0, 0x9c, 0x9c, 0x9a, 0x86, 0xf0, 0xf0, 0x8c, 0x9c, 0x9a, 0x9c, 0x8a, 0x9c, 0x02, 0x8c, 0xac, 0x8c, 0x8e, 0x8e, 0x9c, 0x8c,
};

uint8_t TitleColor2[5*192] =
{
	0x60, 0x60, 0x20, 0x20, 0xf2, 0x60, 0x22, 0x64, 0x60, 0x34, 0x54, 0x62, 0x54, 0x20, 0x62, 0x34, 0x64, 0x62, 0x46, 0x22, 0x34, 0x20, 0x22, 0x22,
	0x20, 0xf2, 0x46, 0x54, 0x34, 0x62, 0x54, 0x56, 0x48, 0x46, 0x48, 0x62, 0x4a, 0x4a, 0x46, 0x4a, 0x4a, 0x46, 0x4a, 0x48, 0x48, 0x4a, 0x48, 0x48,
	0xf2, 0x4a, 0x4c, 0xf2, 0x06, 0x04, 0xf2, 0x62, 0xf2, 0x20, 0x04, 0x06, 0x06, 0x06, 0x52, 0x48, 0x46, 0x04, 0x06, 0xd8, 0x04, 0x06, 0x22, 0x32,
	0x56, 0x04, 0x08, 0x08, 0x04, 0x20, 0x46, 0x62, 0xb8, 0x06, 0x08, 0x06, 0x06, 0x48, 0x48, 0x48, 0x06, 0xba, 0x08, 0x08, 0x20, 0x46, 0x62, 0x04,
	0xaa, 0x0a, 0x06, 0x08, 0xf2, 0x46, 0x20, 0x04, 0xda, 0xda, 0x06, 0x22, 0x46, 0x62, 0x08, 0x06, 0x0a, 0x0a, 0x06, 0x22, 0x48, 0x20, 0xda, 0x0a,
	0xbc, 0x08, 0x34, 0x22, 0x46, 0x06, 0x08, 0x0c, 0x08, 0x0a, 0xf2, 0xf2, 0x20, 0x06, 0x0c, 0x0c, 0xb8, 0x54, 0xf2, 0x62, 0x08, 0x06, 0xdc, 0x0a,
	0x08, 0x48, 0xf2, 0x48, 0xbc, 0x0c, 0x0c, 0x0a, 0x64, 0x22, 0x64, 0xd8, 0x0a, 0xde, 0x08, 0xdc, 0xf2, 0x52, 0x20, 0x08, 0x0e, 0x0e, 0x08, 0x46,
	0x58, 0x46, 0x0c, 0x08, 0x0e, 0x0c, 0xda, 0x56, 0x46, 0x46, 0x0c, 0x0e, 0x0e, 0x0c, 0x04, 0xf2, 0x62, 0x08, 0x0c, 0x0e, 0x0a, 0xde, 0x06, 0xf2,
	0x48, 0xba, 0x0e, 0x0e, 0x0a, 0x20, 0x06, 0x04, 0x0c, 0x0a, 0x0e, 0x0e, 0x0a, 0x20, 0x48, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x22, 0x48, 0xda,
	0x0e, 0x0e, 0xdc, 0x0e, 0x56, 0x34, 0x56, 0x0a, 0x0e, 0x0e, 0x0c, 0x54, 0x06, 0x26, 0x0e, 0xbc, 0x0e, 0x0e, 0x0c, 0x56, 0x48, 0xb6, 0x0e, 0x0e,
	0x0e, 0x0e, 0x06, 0x34, 0x48, 0x0a, 0x0e, 0x0e, 0x0c, 0x0e, 0x06, 0x06, 0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x46, 0x06, 0x06, 0x0e, 0x0c, 0x0e, 0x0e,
	0x0c, 0x46, 0x48, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x04, 0x34, 0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x0e, 0x24, 0x54, 0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x46,
	0x04, 0x22, 0x0e, 0x0e, 0x0c, 0x0e, 0x0e, 0x48, 0x48, 0xf2, 0x0e, 0x0e, 0x0e, 0x0e, 0x04, 0x46, 0x48, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x04,
	0x48, 0x0e, 0x0e, 0x0e, 0x0e, 0x46, 0x06, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x34, 0x48, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x08, 0x04, 0x4a, 0x0e,
	0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x48, 0x0e, 0x0e, 0x0e, 0x0c, 0x04, 0x06, 0xb8, 0x0e, 0x0e, 0x0e, 0x0e, 0x0c, 0x06, 0x58, 0x06, 0x0e, 0x0e,
	0x0e, 0x0e, 0x08, 0x06, 0x26, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0xb8, 0x06, 0x36, 0x0e, 0x0e, 0x0e, 0x0c, 0x06, 0x0a, 0xb8, 0x0e, 0x0e, 0x0e, 0x0e,
	0x0c, 0x06, 0x06, 0x08, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x06, 0xf6, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0xda, 0x04, 0x0e, 0x0e, 0x0e, 0x0c, 0x06,
	0x0a, 0x9e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x04, 0xda, 0x0e, 0x0e, 0x0e, 0x0e, 0xdc, 0x06, 0x06, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0c, 0x08,
	0x06, 0x0c, 0x0e, 0x04, 0x0e, 0x06, 0x0a, 0xba, 0x0e, 0xdc, 0x0e, 0x0e, 0x0e, 0x06, 0x24, 0x08, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x06, 0x06, 0x0e,
	0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0xda, 0x04, 0x0e, 0x0e, 0xb2, 0x0e, 0x06, 0x0a, 0x08, 0x0e, 0x0c, 0x0e, 0x0e, 0x0e, 0x06, 0x56, 0x0a, 0x0e, 0x0e,
	0x0e, 0x0e, 0x0a, 0x06, 0x36, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0xda, 0x48, 0x0c, 0x0e, 0x0e, 0x0e, 0x06, 0x0a, 0x08, 0x0e, 0x0c, 0x0e, 0x0e,
	0x0e, 0x04, 0x48, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x34, 0x48, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x08, 0x48, 0x0c, 0x0e, 0x00, 0xde, 0xf4,
	0x0a, 0x08, 0x0e, 0xda, 0x0e, 0x0e, 0x0c, 0x54, 0x48, 0xba, 0x0e, 0x0c, 0x0e, 0x0e, 0x0a, 0x22, 0x54, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x06,
	0x22, 0x0e, 0x0e, 0x0e, 0x0e, 0x34, 0x0a, 0xd8, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x54, 0x22, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0a, 0x34, 0x62, 0x0e,
	0x0e, 0x0e, 0x0e, 0x0e, 0x04, 0xb8, 0x22, 0x0e, 0x0e, 0x0e, 0x0e, 0x34, 0x08, 0x06, 0x0e, 0x0c, 0x0e, 0x0e, 0x0e, 0x56, 0x22, 0xd8, 0x0e, 0x0e,
	0x0e, 0x0e, 0x04, 0x46, 0x20, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x20, 0x08, 0x0e, 0x00, 0x00, 0x22, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00, 0x00, 0x98,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9c, 0x9c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9a, 0x94,
	0x9a, 0xa2, 0x00, 0x00, 0xa0, 0x9a, 0x9c, 0x9e, 0x00, 0xac, 0x00, 0x00, 0x9c, 0x8a, 0x8c, 0x9a, 0xa0, 0x00, 0x00, 0x8a, 0x9a, 0x88, 0x88, 0x9c,
	0xac, 0x00, 0x9c, 0x9e, 0x8c, 0x8c, 0x86, 0x8e, 0x9a, 0xac, 0x9a, 0x84, 0x88, 0x88, 0x9c, 0x8c, 0x9c, 0x9a, 0x8c, 0x74, 0x92, 0x86, 0x8e, 0x9a,
	0x9a, 0x8e, 0x74, 0x90, 0x72, 0x88, 0x8c, 0x8e, 0x88, 0x96, 0x74, 0x02, 0x9a, 0x02, 0x8c, 0x96, 0x02, 0x88, 0xa0, 0xa0, 0x94, 0x72, 0x94, 0x94,
	0x02, 0x9a, 0x9c, 0x86, 0x02, 0x94, 0x92, 0x74, 0x9a, 0x9c, 0x9c, 0xa0, 0xf0, 0x02, 0xf0, 0x72, 0xac, 0x9e, 0x9a, 0x9a, 0x02, 0x72, 0xa0, 0x9a,
	0x9c, 0x9c, 0x72, 0x9a, 0xf0, 0x94, 0x9c, 0x8c, 0x8a, 0x9a, 0x9c, 0x92, 0x9a, 0xac, 0x9a, 0x88, 0x88, 0x9c, 0x9c, 0x9c, 0x9c, 0x9c, 0x8c, 0x8c,
	0x92, 0x8e, 0x9c, 0x9c, 0x8e, 0x86, 0x88, 0x04, 0x9a, 0x8c, 0x9a, 0x9a, 0x8c, 0x74, 0x72, 0x94, 0x8e, 0x8e, 0x8e, 0x8c, 0x74, 0xf0, 0x72, 0x88,
	0x96, 0x8a, 0x86, 0x88, 0x02, 0x72, 0x00, 0x02, 0x88, 0x86, 0x02, 0xe0, 0xa0, 0xf0, 0x86, 0x72, 0x94, 0x92, 0xf0, 0x9c, 0x96, 0x9a, 0x10, 0x02,
	0x02, 0x72, 0x9a, 0x9c, 0x9c, 0xf0, 0xa0, 0x02, 0xf0, 0xa0, 0x9c, 0x9c, 0x9a, 0x92, 0x72, 0xe0, 0x9a, 0x9a, 0x9c, 0x9c, 0x8c, 0x9c, 0x02, 0x9a,
	0xac, 0x8c, 0x8c, 0x9a, 0x9c, 0x8e, 0x9c, 0x9c, 0x9a, 0x04, 0x96, 0x9c, 0x9c, 0xac, 0x8e, 0x9a, 0x8a, 0x8a, 0x94, 0x8e, 0x9c, 0x9a, 0x8c, 0x94,
	0x94, 0x04, 0x9a, 0x8a, 0x9a, 0x8e, 0x88, 0xa0, 0x74, 0x84, 0x8a, 0x8c, 0x8a, 0x04, 0xb2, 0xf0, 0x90, 0x86, 0x94, 0x96, 0x92, 0x94, 0x72, 0x72,
	0xa0, 0x92, 0x76, 0x74, 0x84, 0x9a, 0x00, 0xe0, 0x02, 0x72, 0x02, 0x10, 0xa0, 0x9c, 0x9c, 0x82, 0x72, 0x02, 0x72, 0xa0, 0x9a, 0x9c, 0x9c, 0xe0,
	0xa0, 0x72, 0x94, 0xa0, 0x9c, 0x9c, 0x9a, 0x9a, 0xa0, 0xa2, 0x9c, 0x9a, 0x9a, 0x9a, 0x9a, 0x9c, 0x8c, 0x9c, 0xf0, 0x00, 0x8c, 0xf0, 0x60, 0x10,
};

uint8_t TitleBackColor1[1*192 + 1] =
{
	0xf0, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x20, 0x48, 0x48, 0xf0, 0x22, 0xf0, 0xf0, 0x48, 0xf0, 0x48, 0xf0, 0xf0, 0x48, 0xf0, 0x20, 0x48, 0x48,
	0x48, 0xf0, 0x48, 0x48, 0x48, 0x46, 0x48, 0x46, 0x20, 0xf2, 0xf2, 0x48, 0x48, 0x48, 0x20, 0x02, 0x46, 0x20, 0x08, 0x22, 0x48, 0xf0, 0x22, 0xa8,
	0xf0, 0xe0, 0x20, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
	0x00, 0x00, 0xe0, 0xe0, 0x00, 0xd0, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x0a, 0x08, 0x98, 0x08, 0x20, 0x08, 0x22, 0x24, 0x0a, 0x20, 0xf0, 0x0a,
	0xf0, 0x08, 0xf2, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xa0, 0xa0, 0x00, 0x00, 0xa0, 0xf0, 0x00, 0xa0, 0xf0, 0xa0, 0xf0, 0xa0, 0xa0, 0xa0, 0x00, 0xa2, 0xf0, 0x00, 0xa2, 0xe0, 0xa0, 0x90, 0x02, 0xa0,
	0xa0, 0xa0, 0xf0, 0xa0, 0xf0, 0x00, 0xf0, 0x90, 0x00, 0xe0, 0xa2, 0xa0, 0x86, 0xe2, 0xa0, 0x88, 0xa2, 0x02, 0x00, 0xf0, 0x9a, 0xa0, 0x00, 0xa0,
	0x00
};


uint8_t TitleBackColor2[1*192 + 1] =
{
	0xf0, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0x20, 0x48, 0x48, 0xf0, 0x22, 0xf0, 0xf0, 0x48, 0xf0, 0x48, 0xf0, 0xf0, 0x48, 0xf0, 0x20, 0x48, 0x48,
	0x48, 0xf0, 0x48, 0x48, 0x48, 0x46, 0x48, 0x46, 0x20, 0xf2, 0xf2, 0x48, 0x48, 0x48, 0x20, 0x02, 0x46, 0x20, 0x08, 0x22, 0x48, 0xf0, 0x22, 0xa8,
	0xf0, 0xe0, 0x20, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0,
	0x00, 0x00, 0xe0, 0xe0, 0x00, 0xd0, 0xf0, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x0a, 0x08, 0x98, 0x08, 0x20, 0x08, 0x22, 0x24, 0x0a, 0x20, 0xf0, 0x0a,
	0xf0, 0x08, 0xf2, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xa0, 0xa0, 0x00, 0x00, 0xa0, 0xf0, 0x00, 0xa0, 0xf0, 0xa0, 0xf0, 0xa0, 0xa0, 0xa0, 0x00, 0xa2, 0xf0, 0x00, 0xa2, 0xe0, 0xa0, 0x90, 0x02, 0xa0,
	0xa0, 0xa0, 0xf0, 0xa0, 0xf0, 0x00, 0xf0, 0x90, 0x00, 0xe0, 0xa2, 0xa0, 0x86, 0xe2, 0xa0, 0x88, 0xa2, 0x02, 0x00, 0xf0, 0x9a, 0xa0, 0x00, 0xa0,
	0x00,
};

FILE* output;

void
pushChar(uint8_t c)
{
	fputc(c, output);
}

void
swap(uint8_t* p)
{
	auto a = p[0];
	auto b = p[1];
	auto c = p[2];

	p[2] = a;
	p[1] = b;
	p[0] = c;
}

void main()
{
	output = fopen("title.mvc", "wb");


	for (int i=0; i<960; i+=3)
	{
		swap(&TitleGraph1[i+0]);
		swap(&TitleGraph2[i+0]);
		swap(&TitleColor1[i+0]);
		swap(&TitleColor2[i+0]);
	}


	for (int i=0; i<192; i+=3)
	{
		swap(&TitleBackColor1[i+0]);
		swap(&TitleBackColor2[i+0]);
	}

//	for (int l=0; l<60; l++)
	{
	for (int f=0; f<2; f++)
	{
		pushChar('M');
		pushChar('V');
		pushChar('C');
		pushChar(0);

		pushChar(0x00); // ff 
		pushChar(0x00); // ff 
		pushChar(f);	// ff

		for (int i=0; i<262; i++)
			pushChar(0);		// sound

		for (int i=0; i<960; i++)
			pushChar((f==0) ? TitleGraph1[i] : TitleGraph2[i]);

		for (int i=0; i<60; i++)
			pushChar(0);	// timecode

		for (int i=0; i<960; i++)
			pushChar((f==0) ? TitleColor1[i] : TitleColor2[i]);

		for (int i=0; i<192; i++)
			pushChar((f==0) ? TitleBackColor1[i] : TitleBackColor2[i]);

		for (int i=0; i<(119+1536); i++)
			pushChar(0);	// padding
	}
	}

	fclose(output);
}

