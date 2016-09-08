#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 4	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 260 570\" width=\"25%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"260\" height=\"570\" x=0 y=0 ry=50 rx=50 style=\"fill:rgb(0,0,0);\" /><rect width=\"230\" height=\"540\" x=15 y=15 ry=30 rx=30 style=\"fill:url(#grad1);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16018, GZIP size: 5296 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6B, 0x73, 0x9B, 0xC8, 0xB2, 0xDF, 0xCF, 0xAF, 
	0x20, 0xA4, 0xD6, 0x16, 0x57, 0x48, 0xE6, 0x29, 0xC9, 0xC2, 
	0xD8, 0xD7, 0x76, 0x92, 0xB5, 0x6B, 0xE3, 0xC4, 0x15, 0x65, 
	0x93, 0xBD, 0x57, 0xA5, 0x4A, 0x61, 0x18, 0x59, 0xC4, 0x18, 
	0x74, 0x01, 0xD9, 0xF1, 0x71, 0xFC, 0xDF, 0x4F, 0xF7, 0xCC, 
	0x00, 0x03, 0x42, 0x8E, 0x92, 0xDD, 0x9B, 0x54, 0x34, 0xCC, 
	0xAB, 0xDF, 0xDD, 0xD3, 0xD3, 0x90, 0x3B, 0x2F, 0x95, 0xCE, 
	0x3E, 0xFB, 0xEE, 0x74, 0x6A, 0xA9, 0xBA, 0x69, 0xAB, 0x86, 
	0x6E, 0xAA, 0xF2, 0xA7, 0x24, 0x5A, 0xDD, 0x12, 0x59, 0xD5, 
	0xF7, 0x67, 0xEA, 0x54, 0x57, 0x47, 0xB6, 0x6A, 0x69, 0x03, 
	0x55, 0x7E, 0xFF, 0x4E, 0x56, 0x07, 0x74, 0x44, 0x2F, 0x86, 
	0x8E, 0xDF, 0x7C, 0x62, 0x63, 0x23, 0xD8, 0x69, 0xAB, 0xA6, 
	0x66, 0xA9, 0xF2, 0x25, 0xF1, 0x6E, 0x64, 0xD5, 0xDC, 0x9F, 
	0xCD, 0x9C, 0x7F, 0xDD, 0x01, 0xF8, 0x80, 0xDC, 0xBD, 0xCD, 
	0x72, 0xC0, 0xA0, 0xC3, 0xFA, 0x8F, 0xAF, 0x2F, 0x00, 0x2E, 
	0x02, 0xB1, 0x55, 0x79, 0xF2, 0x90, 0xE5, 0xE4, 0x56, 0x16, 
	0x16, 0xBE, 0x59, 0xC5, 0x48, 0xCB, 0x54, 0x87, 0xB5, 0x97, 
	0x69, 0x72, 0x9D, 0x7A, 0xB7, 0xD2, 0x24, 0xF5, 0x65, 0xB5, 
	0xA7, 0xAB, 0x3D, 0x43, 0x9D, 0xCA, 0xB2, 0x2A, 0x9F, 0x25, 
	0x51, 0x20, 0xBD, 0x4A, 0xEE, 0x63, 0x78, 0xFE, 0x98, 0x5C, 
	0x5F, 0x47, 0x40, 0xA9, 0x7C, 0xFA, 0xE0, 0x43, 0x3B, 0x43, 
	0xC0, 0x74, 0x2B, 0xB9, 0x0B, 0xC9, 0xFD, 0xDA, 0xD6, 0xE6, 
	0xAA, 0xBB, 0xBD, 0xCB, 0xF4, 0xFA, 0x07, 0xAB, 0x8E, 0xFF, 
	0xFC, 0x4B, 0x7A, 0xBF, 0xCA, 0x97, 0xAB, 0x9C, 0x2F, 0x34, 
	0x9F, 0xA7, 0x84, 0x0E, 0xFE, 0x9E, 0x26, 0xAB, 0xA5, 0x74, 
	0x5C, 0xEF, 0x9E, 0xAC, 0xC1, 0xFE, 0x73, 0x99, 0xE5, 0x29, 
	0x01, 0x1E, 0xFF, 0x20, 0x0F, 0x24, 0x65, 0x44, 0x58, 0x6A, 
	0xCF, 0x6E, 0x9D, 0x96, 0xDE, 0x84, 0x51, 0x54, 0xAE, 0x31, 
	0xDA, 0xD7, 0xC0, 0xEF, 0xDA, 0x12, 0xA4, 0xB0, 0x81, 0x67, 
	0x50, 0x21, 0x69, 0xCE, 0x16, 0x68, 0x06, 0x9B, 0x01, 0x70, 
	0x2C, 0xC2, 0x8A, 0x8B, 0x4B, 0x69, 0x92, 0xB3, 0x7D, 0x43, 
	0x34, 0x10, 0x13, 0x27, 0xB6, 0x51, 0x96, 0x31, 0x52, 0xE5, 
	0x4E, 0xB1, 0x5B, 0xA2, 0x13, 0x4A, 0x05, 0x04, 0x4C, 0x24, 
	0xF7, 0xD2, 0x5C, 0x9E, 0x15, 0xDD, 0xD7, 0x71, 0x80, 0x1D, 
	0x4D, 0xD5, 0x0D, 0x0D, 0x54, 0xB3, 0xCA, 0x13, 0xE9, 0x3C, 
	0xCE, 0x49, 0x7A, 0xE7, 0x45, 0x32, 0xC7, 0xF8, 0xC1, 0x8B, 
	0x83, 0xE4, 0x96, 0xF6, 0x4A, 0x84, 0xEF, 0x11, 0xFD, 0xFB, 
	0xF9, 0xBC, 0x46, 0x50, 0x0D, 0xFF, 0x69, 0x14, 0x2E, 0x19, 
	0x62, 0xA3, 0x36, 0x9C, 0xC4, 0x79, 0x9A, 0x44, 0x6C, 0xA6, 
	0x37, 0xE2, 0xDC, 0x9E, 0xAE, 0x72, 0x14, 0x72, 0x61, 0x20, 
	0x40, 0x85, 0xD0, 0x7D, 0xF3, 0xF1, 0x44, 0xE8, 0x7D, 0x4C, 
	0xBD, 0x38, 0x0B, 0xF3, 0x30, 0x89, 0x81, 0xC5, 0x07, 0x24, 
	0x06, 0x95, 0x43, 0xFD, 0xCA, 0xA8, 0xCD, 0x5E, 0x26, 0x99, 
	0xB0, 0xED, 0x32, 0xF2, 0x1E, 0xA4, 0x0B, 0xCF, 0x4F, 0x01, 
	0x32, 0xFA, 0x9B, 0x86, 0xEC, 0xE0, 0xA0, 0x8C, 0x22, 0x49, 
	0x96, 0x6B, 0x06, 0xC7, 0x45, 0xCC, 0x25, 0xCB, 0x24, 0xF1, 
	0x36, 0x81, 0x85, 0x15, 0x97, 0x1F, 0x88, 0x9F, 0xA4, 0x01, 
	0x83, 0xAA, 0x50, 0xB0, 0x86, 0x56, 0xCD, 0x4E, 0x92, 0x55, 
	0xEA, 0x93, 0x52, 0x03, 0x53, 0xF9, 0x62, 0xEF, 0xB5, 0xA4, 
	0x03, 0x14, 0x6C, 0x0D, 0x99, 0xF9, 0x81, 0xCE, 0xDB, 0xA2, 
	0x6F, 0xF2, 0xD6, 0xE2, 0xAD, 0xCD, 0xDB, 0x01, 0x92, 0xD0, 
	0x13, 0xD5, 0xD7, 0xFB, 0x69, 0xE5, 0x41, 0xEF, 0x93, 0x97, 
	0x3E, 0x48, 0x79, 0x78, 0x1B, 0xC6, 0xD7, 0x92, 0xA1, 0xFD, 
	0xD6, 0x18, 0xB1, 0x61, 0x64, 0x4B, 0x2D, 0x53, 0x2D, 0x05, 
	0x21, 0x55, 0x93, 0x06, 0xFF, 0xF4, 0xAD, 0x8C, 0x73, 0xC8, 
	0x77, 0x49, 0x45, 0x3C, 0xEC, 0x51, 0x3D, 0x94, 0xC3, 0x27, 
	0x5E, 0xE4, 0xC5, 0x7E, 0x39, 0x6E, 0x58, 0xC5, 0xC4, 0x5B, 
	0x72, 0x47, 0xA2, 0x4C, 0x58, 0x2F, 0xE8, 0xF9, 0x83, 0x97, 
	0x33, 0x23, 0x98, 0x72, 0x4C, 0x20, 0xE1, 0xF0, 0x1B, 0xFC, 
	0xBE, 0x0A, 0x51, 0xAB, 0x9F, 0xC3, 0x25, 0x0E, 0xBD, 0xFA, 
	0xF4, 0x5A, 0x66, 0xA6, 0x44, 0x4D, 0xDF, 0xB0, 0x21, 0x5A, 
	0xBE, 0x81, 0x60, 0x48, 0x32, 0x41, 0xA1, 0x0A, 0x83, 0xB3, 
	0x69, 0xBA, 0x11, 0x19, 0x2E, 0x3D, 0x58, 0x80, 0x5B, 0x20, 
	0x32, 0xE8, 0x95, 0x91, 0xAF, 0xF9, 0x76, 0xB9, 0x6E, 0xC0, 
	0xD7, 0xC1, 0x81, 0xF0, 0x26, 0xF1, 0x57, 0x94, 0x1F, 0x93, 
	0xF1, 0x73, 0x9E, 0x86, 0x65, 0x17, 0xA6, 0x27, 0x24, 0xCE, 
	0x92, 0x54, 0xFA, 0xDD, 0x0B, 0x63, 0x3A, 0x2A, 0xF0, 0xA6, 
	0x05, 0x57, 0xF0, 0x3B, 0xA0, 0xBF, 0xBA, 0xC1, 0x9A, 0x11, 
	0x34, 0x33, 0xBE, 0x73, 0xB1, 0xCA, 0x73, 0x16, 0xF9, 0xC4, 
	0x5D, 0xFA, 0x9E, 0xAD, 0xD1, 0x66, 0xC0, 0x9A, 0xA1, 0x4D, 
	0x9B, 0x7D, 0xD6, 0xD3, 0x35, 0xDE, 0x1A, 0xBC, 0xE5, 0x8B, 
	0xF5, 0x11, 0x6B, 0x0D, 0xDE, 0x37, 0xF9, 0x6E, 0x9B, 0xAF, 
	0x1F, 0x1A, 0x76, 0xB1, 0x9F, 0x6F, 0xB0, 0xF8, 0x4A, 0x03, 
	0x47, 0x38, 0x49, 0x9F, 0x17, 0x61, 0x4E, 0x44, 0xDD, 0x8A, 
	0x84, 0x01, 0x68, 0xED, 0x0F, 0x6C, 0x47, 0xAC, 0x35, 0x35, 
	0xDE, 0x1A, 0xBC, 0xB5, 0x78, 0x3B, 0x60, 0xAD, 0xC5, 0xE7, 
	0x2D, 0xBE, 0xCF, 0xE2, 0xFB, 0x6C, 0x3E, 0x6E, 0xF3, 0x7D, 
	0x36, 0xDF, 0x67, 0xF3, 0x7D, 0x03, 0x3E, 0x3F, 0xE0, 0xFB, 
	0x86, 0xBC, 0x3F, 0xE4, 0xFD, 0x11, 0xED, 0x73, 0x23, 0x7D, 
	0x1B, 0xCE, 0x69, 0x3C, 0xB2, 0x2A, 0x05, 0xFD, 0xEE, 0xDD, 
	0xDE, 0x7A, 0x6B, 0x63, 0x4C, 0x3D, 0xC2, 0xD0, 0xD9, 0x8A, 
	0x08, 0x5A, 0xA5, 0xC1, 0xCE, 0xCB, 0x72, 0x61, 0x68, 0xE2, 
	0xE5, 0xAB, 0xD4, 0x43, 0xC3, 0x2D, 0x24, 0xF1, 0x2E, 0x49, 
	0x6F, 0xC1, 0x5F, 0xC1, 0x44, 0x49, 0xC6, 0x26, 0x49, 0x20, 
	0x18, 0xDD, 0x89, 0x97, 0x66, 0x34, 0x7C, 0xFC, 0xD8, 0x2B, 
	0xF7, 0xC1, 0x9D, 0xC3, 0x80, 0x24, 0xD2, 0x47, 0x2F, 0x8A, 
	0xF0, 0x3C, 0xC1, 0x53, 0x95, 0x1F, 0xFA, 0x72, 0x79, 0x86, 
	0xCB, 0x2C, 0x11, 0xD8, 0xC3, 0x6E, 0xB1, 0x8D, 0x79, 0x59, 
	0xB1, 0x8D, 0x3A, 0x19, 0xC3, 0x7E, 0xBA, 0x48, 0x93, 0x5B, 
	0x0F, 0x0D, 0x59, 0x9A, 0x90, 0x3C, 0x87, 0x28, 0xC1, 0x88, 
	0xC1, 0xC8, 0x42, 0x7C, 0x0F, 0xCF, 0x27, 0x60, 0xE9, 0x0E, 
	0x23, 0x24, 0xB8, 0x01, 0x78, 0x0E, 0xA4, 0x30, 0x27, 0x5E, 
	0x7C, 0x23, 0x30, 0x70, 0x7A, 0xFA, 0xE7, 0x8F, 0xF7, 0xA2, 
	0x24, 0xDA, 0x36, 0x5F, 0x9E, 0x5F, 0x52, 0xA7, 0xB4, 0x99, 
	0x29, 0x51, 0x2F, 0x66, 0x87, 0x31, 0x70, 0x96, 0xB0, 0x08, 
	0x80, 0x60, 0x00, 0x1C, 0xC0, 0x2F, 0xC2, 0x1C, 0xD8, 0xE3, 
	0x6F, 0x3D, 0x30, 0x84, 0xDF, 0xA4, 0xFF, 0x4D, 0x30, 0xF8, 
	0x21, 0x3C, 0x96, 0x1F, 0x2D, 0x40, 0xB3, 0x2C, 0x9A, 0xC8, 
	0x2C, 0x6E, 0x82, 0xB2, 0x69, 0xEF, 0x87, 0xA7, 0xAB, 0xF4, 
	0xE7, 0xB2, 0x7C, 0xAC, 0xE2, 0xA0, 0x4D, 0x23, 0x32, 0x06, 
	0x20, 0x80, 0xB6, 0x5F, 0x74, 0x7E, 0x1D, 0xD8, 0x05, 0xB9, 
	0x4D, 0xD2, 0x07, 0x94, 0x12, 0xA6, 0x3A, 0x34, 0xBF, 0x41, 
	0xCB, 0x00, 0x88, 0x18, 0x92, 0x7E, 0x1A, 0x2A, 0xDB, 0x71, 
	0x49, 0xD2, 0x2C, 0x04, 0x2B, 0xE4, 0xD6, 0xCD, 0x16, 0x6C, 
	0xC6, 0x04, 0x9C, 0xF0, 0xF8, 0xC7, 0x0E, 0x0E, 0xDE, 0xFD, 
	0x98, 0x6C, 0x39, 0x77, 0xCC, 0x4E, 0xA5, 0x26, 0x66, 0x7A, 
	0x94, 0x47, 0xDE, 0x35, 0x15, 0xD5, 0xC0, 0xE4, 0x1D, 0x5C, 
	0x08, 0xD6, 0xD1, 0xCE, 0x17, 0x87, 0x72, 0x1E, 0xDF, 0x11, 
	0x76, 0xE8, 0x51, 0xE5, 0xDE, 0x66, 0x54, 0xC5, 0xBC, 0x61, 
	0xAD, 0xCD, 0x5B, 0x1D, 0x7F, 0x8C, 0x8C, 0x51, 0x43, 0x91, 
	0x10, 0x12, 0x5C, 0x79, 0xFE, 0x8D, 0x54, 0x62, 0x13, 0x00, 
	0xD2, 0x55, 0xF2, 0xC7, 0x90, 0x48, 0x70, 0x72, 0x9E, 0x7D, 
	0x3E, 0x7D, 0x09, 0x99, 0xB4, 0xA6, 0xB1, 0x51, 0x96, 0x4A, 
	0xC3, 0x79, 0x3A, 0xE7, 0xBC, 0x81, 0xA3, 0x4A, 0xC7, 0x3E, 
	0x35, 0x38, 0xD6, 0xFF, 0xEC, 0x85, 0xB9, 0x84, 0xC1, 0x2F, 
	0x93, 0x32, 0xC8, 0x04, 0x80, 0x6B, 0x3C, 0xFF, 0xE9, 0xD4, 
	0xE9, 0x2A, 0xCB, 0x93, 0x5B, 0xE9, 0x0C, 0x0E, 0xDF, 0x08, 
	0x82, 0x31, 0xE7, 0xFE, 0x3C, 0xF6, 0x60, 0xFF, 0x1D, 0xB7, 
	0x10, 0x1C, 0xC1, 0xCC, 0x43, 0x82, 0xAD, 0x31, 0xF1, 0x59, 
	0x4E, 0xC6, 0x8C, 0xDE, 0x8B, 0x49, 0x24, 0x9D, 0xA4, 0xE1, 
	0xF5, 0x22, 0x8F, 0x49, 0x86, 0x5E, 0x23, 0xB8, 0xE4, 0x5B, 
	0x38, 0xAC, 0xF3, 0x8C, 0x92, 0xAB, 0x14, 0xF4, 0xB2, 0x99, 
	0x37, 0x61, 0x4C, 0xE0, 0x38, 0x8C, 0xAF, 0x89, 0x38, 0x5B, 
	0x5C, 0x06, 0x20, 0x29, 0x80, 0x5B, 0x43, 0x06, 0x97, 0x81, 
	0x46, 0x26, 0x82, 0x42, 0x39, 0x89, 0x40, 0x46, 0xB0, 0x5E, 
	0x35, 0x54, 0x53, 0xB5, 0x54, 0x1B, 0x5C, 0x71, 0xA8, 0x8E, 
	0xC0, 0xA2, 0xE1, 0x74, 0x07, 0x42, 0xC1, 0x4F, 0xC0, 0x43, 
	0x21, 0xD0, 0x81, 0x8D, 0xEA, 0x03, 0x55, 0x1F, 0xC2, 0x85, 
	0x05, 0x2E, 0x33, 0x2A, 0xA6, 0x1D, 0x18, 0xA0, 0xD0, 0x7A, 
	0x92, 0x28, 0x49, 0xF5, 0xE2, 0x01, 0xF3, 0x99, 0x8B, 0x4B, 
	0x8A, 0xE3, 0x12, 0x9F, 0x27, 0xAB, 0x25, 0x9C, 0x84, 0x2C, 
	0x25, 0xC2, 0x35, 0x11, 0xF1, 0x62, 0x4A, 0x02, 0x7B, 0xFA, 
	0xF9, 0x74, 0x08, 0x00, 0xBF, 0xD6, 0x25, 0xB8, 0x6C, 0x94, 
	0x4F, 0x77, 0xF4, 0xC9, 0x28, 0xC7, 0x8C, 0x62, 0xEC, 0x13, 
	0xE8, 0x88, 0xB7, 0x06, 0x6F, 0x4D, 0xDE, 0x5A, 0xBC, 0xB5, 
	0x79, 0x3B, 0xE0, 0xED, 0x90, 0xB7, 0x23, 0xDA, 0x1A, 0x7C, 
	0xBF, 0xC1, 0xF7, 0x1B, 0x7C, 0xBF, 0xC1, 0xF7, 0x1B, 0x7C, 
	0xBF, 0xC1, 0xF7, 0x1B, 0x7C, 0xBF, 0xC1, 0xF6, 0x83, 0x15, 
	0x1D, 0xF3, 0xF6, 0x84, 0xB7, 0xA7, 0xBC, 0xA5, 0xEE, 0xF6, 
	0xF3, 0x89, 0xA0, 0xCC, 0x12, 0x0B, 0xDC, 0xC3, 0x9E, 0x8C, 
	0xF2, 0xC9, 0x2C, 0x9F, 0xAC, 0x2D, 0x72, 0x39, 0x9E, 0x6B, 
	0xE3, 0xC2, 0x57, 0x93, 0x3F, 0x28, 0x40, 0x6C, 0x99, 0x4D, 
	0x40, 0xB6, 0xCE, 0x14, 0xC8, 0xFB, 0x34, 0x5B, 0x9E, 0x3D, 
	0x9F, 0x66, 0x4D, 0x30, 0xCC, 0x63, 0xFA, 0x41, 0x43, 0x35, 
	0x4B, 0xB5, 0x7E, 0xDA, 0xA2, 0xFE, 0x7A, 0xFB, 0x01, 0x29, 
	0x7B, 0x3D, 0xC1, 0x93, 0xE2, 0xF4, 0xB8, 0x61, 0x4A, 0x17, 
	0x70, 0xA0, 0x52, 0x0C, 0x17, 0x49, 0x1C, 0xE6, 0x49, 0xBA, 
	0x95, 0x88, 0x29, 0xF7, 0xF4, 0x6E, 0x2D, 0x4F, 0xC0, 0x3E, 
	0xB9, 0x68, 0x90, 0xF0, 0x93, 0x24, 0x07, 0x57, 0x95, 0xF1, 
	0x1C, 0xC0, 0x43, 0x5F, 0xFE, 0x80, 0x5E, 0x07, 0xED, 0x5F, 
	0xF0, 0xEF, 0x7F, 0x28, 0x63, 0x41, 0xBE, 0x40, 0xA1, 0x11, 
	0x3E, 0x01, 0xDB, 0xF6, 0x6A, 0x9B, 0xF6, 0xCA, 0x2D, 0x7B, 
	0xE5, 0x86, 0x3D, 0xBE, 0x9C, 0x8A, 0x0B, 0x32, 0x41, 0x6A, 
	0xEA, 0xD0, 0x1A, 0xBC, 0x35, 0x79, 0x6B, 0xF1, 0xD6, 0xE6, 
	0xED, 0x80, 0xB7, 0x43, 0xDE, 0x8E, 0x78, 0xBB, 0xCF, 0x5B, 
	0x5D, 0xDB, 0x8A, 0x5D, 0xA4, 0x03, 0x65, 0xF8, 0x3B, 0x0D, 
	0xED, 0xA2, 0xCE, 0xDE, 0x26, 0xF7, 0x60, 0x1B, 0x05, 0xC5, 
	0xEC, 0x28, 0xC8, 0xC2, 0x7F, 0xD3, 0x3C, 0xD7, 0xF9, 0xD7, 
	0x7C, 0x15, 0xD3, 0x08, 0x27, 0x5D, 0xBF, 0x3E, 0x39, 0xEF, 
	0x10, 0xE5, 0x31, 0x25, 0x90, 0x91, 0xC4, 0x52, 0x00, 0xE9, 
	0xEA, 0x2D, 0x89, 0xF3, 0xFE, 0x35, 0xC9, 0x5F, 0x47, 0x04, 
	0x1F, 0x4F, 0x1E, 0xCE, 0x03, 0x58, 0xF1, 0x54, 0x6E, 0xC9, 
	0x48, 0x7E, 0xDC, 0x21, 0x6A, 0xAE, 0x3C, 0xCE, 0x93, 0xB4, 
	0x83, 0x11, 0x27, 0x96, 0xC2, 0x58, 0xCA, 0x15, 0xD2, 0xC7, 
	0xA9, 0x3C, 0x4F, 0xC3, 0xAB, 0x55, 0x4E, 0x3A, 0xB1, 0x9A, 
	0x4F, 0xE3, 0x99, 0xE2, 0x70, 0xD0, 0xA4, 0x06, 0xE1, 0x2D, 
	0x83, 0xC0, 0xE7, 0x38, 0xC8, 0xC7, 0x24, 0xF6, 0xA3, 0xD0, 
	0xBF, 0x19, 0xEF, 0x52, 0xB2, 0xE4, 0x79, 0xBC, 0xDB, 0xCD, 
	0xBB, 0xBB, 0xB2, 0xD2, 0xCF, 0xE0, 0xE6, 0x15, 0x45, 0x70, 
	0xE7, 0x49, 0x3E, 0x41, 0x66, 0xD3, 0x51, 0x9C, 0x5D, 0xD5, 
	0x5F, 0xA5, 0x90, 0x3A, 0x8F, 0xE5, 0x65, 0x12, 0xE2, 0x55, 
	0x48, 0x7E, 0x12, 0x48, 0x5C, 0x42, 0xC2, 0x96, 0x5F, 0x08, 
	0x7C, 0x15, 0x08, 0xE6, 0x70, 0x57, 0x1E, 0xCB, 0x2F, 0x03, 
	0xFA, 0x47, 0x56, 0x21, 0x7D, 0x4F, 0x6E, 0x08, 0x0C, 0xB0, 
	0xBC, 0x96, 0x75, 0x7B, 0xF7, 0xD4, 0x12, 0xC6, 0xB2, 0xB1, 
	0x0E, 0x73, 0xB2, 0x19, 0xA6, 0x4F, 0xFF, 0x08, 0x30, 0x07, 
	0x83, 0xC1, 0x3A, 0x4C, 0xBD, 0x06, 0xD3, 0x4F, 0x5F, 0xAF, 
	0xCB, 0xA1, 0xD4, 0x81, 0x0F, 0x77, 0x8B, 0x9C, 0x70, 0x35, 
	0x00, 0x62, 0x58, 0x28, 0x6E, 0x9D, 0x6C, 0xBD, 0xF7, 0xDD, 
	0xA4, 0x23, 0x2F, 0xF2, 0x7C, 0x39, 0xDE, 0xDB, 0xBB, 0xBF, 
	0xBF, 0xEF, 0xDF, 0x9B, 0xFD, 0x24, 0xBD, 0xA6, 0xA9, 0xFB, 
	0x5E, 0x76, 0x07, 0x41, 0xB4, 0x01, 0xDA, 0x43, 0xC8, 0xCA, 
	0xA3, 0x77, 0xDA, 0x61, 0x6A, 0xF0, 0xF3, 0x34, 0x0A, 0x6F, 
	0xAF, 0x65, 0x45, 0x15, 0xCD, 0x00, 0xA6, 0x29, 0x7A, 0xD2, 
	0xF7, 0x96, 0x4B, 0x12, 0x07, 0xA7, 0x8B, 0x30, 0x0A, 0x3A, 
	0x22, 0x9C, 0x2C, 0x7F, 0xE7, 0xDD, 0xBE, 0x89, 0x82, 0xAC, 
	0xB2, 0x16, 0xD2, 0x0F, 0xE1, 0x0C, 0x4C, 0xCF, 0x3E, 0x5E, 
	0xBC, 0x75, 0xE1, 0x80, 0xFE, 0xEA, 0x6A, 0xCE, 0xD7, 0x03, 
	0x1D, 0x7E, 0xBA, 0x5D, 0x25, 0x3F, 0xFC, 0xBA, 0xB3, 0xD3, 
	0xA1, 0x60, 0x51, 0x2E, 0x72, 0x18, 0x2F, 0xB1, 0x5A, 0xF0, 
	0x18, 0x06, 0x63, 0x99, 0x82, 0xFA, 0x22, 0x77, 0xBF, 0xAA, 
	0x31, 0xDC, 0xD5, 0xC4, 0x7E, 0x86, 0xB5, 0x81, 0xB1, 0x4C, 
	0xE5, 0x3B, 0x06, 0x96, 0x96, 0xDF, 0x1C, 0x59, 0x85, 0x23, 
	0x70, 0x45, 0xC6, 0x19, 0xE6, 0x68, 0xD9, 0xF4, 0xEB, 0xEC, 
	0xA8, 0x7C, 0x1A, 0xCB, 0x20, 0x7F, 0xE0, 0xA3, 0x22, 0xA3, 
	0xEB, 0xCA, 0x07, 0x57, 0xE9, 0xDE, 0xA1, 0x2C, 0x10, 0x9E, 
	0xBE, 0xBD, 0x8A, 0x04, 0x45, 0x93, 0x7E, 0x4A, 0x96, 0x70, 
	0x6E, 0x92, 0x8E, 0xFC, 0x1D, 0x34, 0x0A, 0xCB, 0x6B, 0xAB, 
	0xEF, 0xD3, 0xC9, 0x09, 0xE3, 0xD0, 0x77, 0x99, 0xC0, 0xB2, 
	0x93, 0x85, 0xDC, 0x25, 0x5D, 0x19, 0x08, 0xCC, 0x15, 0xD5, 
	0xAF, 0xF3, 0xEC, 0xF7, 0x29, 0xC9, 0x7D, 0x4A, 0xB1, 0x7B, 
	0xE1, 0xE5, 0x8B, 0xFE, 0x3C, 0x4A, 0x40, 0x36, 0x3A, 0xAA, 
	0x83, 0x12, 0xDA, 0x8F, 0x48, 0x7C, 0x9D, 0x2F, 0x7A, 0xBA, 
	0xD2, 0x95, 0x7F, 0x93, 0x1D, 0xEA, 0x62, 0x2E, 0x95, 0xC9, 
	0xC2, 0x92, 0x15, 0xA7, 0xB6, 0xE8, 0x50, 0x07, 0xA1, 0xC5, 
	0x02, 0x8A, 0xFA, 0xAC, 0x56, 0xF0, 0x9E, 0xCF, 0xAA, 0xA7, 
	0xB1, 0xE6, 0xBA, 0xF9, 0x51, 0x71, 0x21, 0x19, 0xB3, 0x64, 
	0x56, 0x02, 0x62, 0x41, 0x3C, 0x8A, 0x0A, 0x1A, 0xF0, 0xD5, 
	0x98, 0xB6, 0x71, 0x5D, 0x13, 0x85, 0x7B, 0xCA, 0x41, 0x04, 
	0x2C, 0x53, 0x16, 0x55, 0xD8, 0xD5, 0x05, 0x9A, 0x64, 0x35, 
	0x7F, 0x58, 0x82, 0x1E, 0xC0, 0xF3, 0x73, 0xCC, 0xD4, 0x99, 
	0x06, 0xE4, 0x1E, 0x8C, 0x87, 0x39, 0x2A, 0xE8, 0x15, 0x89, 
	0x08, 0xA6, 0xCF, 0xB2, 0x1F, 0x79, 0x59, 0x06, 0x48, 0x49, 
	0x90, 0x53, 0x5D, 0x3C, 0x83, 0xC6, 0x5F, 0x3E, 0x6C, 0x89, 
	0xE7, 0xF4, 0xB2, 0x44, 0x74, 0x9A, 0x2C, 0x1F, 0x7E, 0x0E, 
	0x4D, 0x18, 0x67, 0x5B, 0xA2, 0x39, 0x7F, 0x37, 0x29, 0xF1, 
	0x9C, 0xC7, 0x19, 0xE6, 0x96, 0x15, 0x26, 0x00, 0x23, 0x71, 
	0x6C, 0x4E, 0x11, 0x19, 0x53, 0x57, 0x53, 0x43, 0x30, 0xF2, 
	0xF0, 0x60, 0xF2, 0xC7, 0x97, 0x8B, 0xE3, 0xBF, 0x8E, 0x4F, 
	0x3F, 0x9E, 0xBF, 0x7F, 0x37, 0x71, 0x42, 0xB0, 0xF7, 0x70, 
	0xDE, 0xA1, 0xA2, 0xA6, 0x44, 0x65, 0x4B, 0x2F, 0xE6, 0xB6, 
	0x3E, 0x8F, 0x7D, 0x4A, 0x4B, 0x8F, 0xD2, 0x02, 0xBF, 0x21, 
	0xA7, 0x7F, 0x7D, 0x29, 0xD6, 0x7F, 0xD6, 0x97, 0x82, 0x76, 
	0xC3, 0x9D, 0x1D, 0xD4, 0xF1, 0xF7, 0xEF, 0x67, 0x9F, 0xEF, 
	0xA6, 0x64, 0xB6, 0xB3, 0xC3, 0x5A, 0xD0, 0xBD, 0xF0, 0x38, 
	0x0D, 0xA1, 0xA7, 0xBD, 0x70, 0x3B, 0xBA, 0x5D, 0x1B, 0x9C, 
	0x6A, 0x33, 0x45, 0x09, 0xD2, 0x37, 0xF1, 0x04, 0xCD, 0x5A, 
	0x0D, 0x15, 0x87, 0x44, 0x19, 0x91, 0x80, 0xDE, 0x17, 0x29, 
	0x38, 0x85, 0xAB, 0x53, 0x8B, 0xF4, 0xDC, 0x22, 0x48, 0x37, 
	0xC9, 0x55, 0x1C, 0x20, 0xD6, 0xDB, 0x64, 0x3A, 0x14, 0xAE, 
	0x20, 0x6C, 0xF8, 0x0D, 0x9F, 0x11, 0x79, 0x17, 0xE5, 0xF9, 
	0x24, 0xC4, 0x3D, 0x6A, 0x13, 0xF5, 0xE3, 0xC7, 0x2D, 0xC3, 
	0xDE, 0xFF, 0xAD, 0x48, 0xFA, 0x30, 0x01, 0x53, 0xF3, 0x21, 
	0x61, 0x38, 0x8E, 0xA2, 0x8E, 0x0C, 0x9E, 0x91, 0x81, 0x51, 
	0x83, 0x22, 0x9C, 0xF4, 0x20, 0xE6, 0x6E, 0xE1, 0xA4, 0x20, 
	0xFF, 0x78, 0x9A, 0xCE, 0xB8, 0x2F, 0xDE, 0x85, 0x59, 0x78, 
	0x15, 0x46, 0x61, 0xFE, 0xE0, 0xCA, 0xF4, 0x19, 0x8E, 0x50, 
	0x27, 0xCC, 0x52, 0xDF, 0x25, 0xEA, 0x57, 0x6C, 0xF2, 0x8A, 
	0x00, 0x66, 0x2D, 0x94, 0x00, 0x26, 0xB4, 0xEF, 0xDF, 0x3B, 
	0xEC, 0xC1, 0x9D, 0xCE, 0x14, 0xB5, 0x14, 0xA4, 0x8B, 0x4F, 
	0x08, 0x83, 0x8B, 0x9C, 0x3E, 0x4E, 0x11, 0xDA, 0xEC, 0xA8, 
	0xD1, 0x1F, 0x4F, 0x67, 0x6A, 0x19, 0x45, 0x9C, 0xFF, 0x1F, 
	0xB6, 0x16, 0x61, 0x10, 0x90, 0x58, 0xAE, 0xF8, 0xA0, 0x3E, 
	0x2C, 0xB0, 0x01, 0x61, 0xA4, 0xA2, 0x1D, 0x39, 0x29, 0x29, 
	0x12, 0x79, 0x0F, 0xF3, 0x8E, 0xF2, 0x78, 0x9F, 0x86, 0x39, 
	0x39, 0x9D, 0x4C, 0x3A, 0x15, 0xB1, 0xA4, 0xB0, 0x06, 0x58, 
	0x0A, 0x74, 0xE5, 0x40, 0x57, 0x7E, 0x70, 0xF6, 0xD9, 0x2F, 
	0x28, 0xCB, 0x81, 0xB2, 0x47, 0xC6, 0xD5, 0xA3, 0x3E, 0x9E, 
	0x62, 0x1D, 0x53, 0xC7, 0x4B, 0x94, 0x01, 0xCF, 0x36, 0x3C, 
	0xDB, 0xF0, 0x6C, 0xC2, 0xF3, 0x10, 0x12, 0xC5, 0xA1, 0x35, 
	0x53, 0x2D, 0x61, 0x8D, 0x3D, 0x9E, 0x8E, 0x34, 0x75, 0x04, 
	0x4F, 0x83, 0xF1, 0x74, 0x00, 0xD7, 0x3D, 0x78, 0x1A, 0xC2, 
	0x3C, 0x3C, 0xEA, 0x16, 0x3C, 0xEB, 0xDA, 0x78, 0x0A, 0x91, 
	0x1F, 0xB2, 0x4A, 0xEC, 0x20, 0xF4, 0x7D, 0xB8, 0xA1, 0xE2, 
	0x7D, 0x49, 0xB7, 0xE9, 0x32, 0x78, 0x80, 0x9D, 0x06, 0x5D, 
	0x0B, 0x1B, 0x2D, 0x3A, 0xB5, 0xCF, 0xA7, 0x0C, 0xDC, 0x0D, 
	0x68, 0x4D, 0x7C, 0x86, 0xCD, 0x26, 0xEC, 0x45, 0x0A, 0x0C, 
	0x20, 0xCD, 0x06, 0x12, 0xE8, 0xB8, 0x49, 0xC7, 0x6D, 0x4A, 
	0x31, 0x90, 0x36, 0x18, 0xDA, 0x6C, 0xDC, 0xA6, 0xE3, 0xD0, 
	0x85, 0x67, 0x4A, 0x1C, 0x2C, 0x1A, 0xC1, 0x33, 0x60, 0xB1, 
	0x47, 0x40, 0x28, 0xAE, 0x19, 0x01, 0x7C, 0xBA, 0x11, 0x30, 
	0xDA, 0xA6, 0x09, 0x7C, 0x22, 0x46, 0x0B, 0xD2, 0x64, 0x58, 
	0x69, 0x02, 0x46, 0x03, 0xD2, 0xE4, 0xE1, 0x68, 0x08, 0x1D, 
	0x40, 0x09, 0x0F, 0x40, 0x86, 0x0E, 0x1D, 0x14, 0x87, 0x05, 
	0xD9, 0xB3, 0x81, 0x5B, 0x00, 0xA9, 0xAD, 0x41, 0xE2, 0x6C, 
	0x19, 0xD0, 0x19, 0xE1, 0x0C, 0x50, 0x86, 0x0C, 0x99, 0xFB, 
	0xC8, 0x3C, 0x08, 0x0C, 0x81, 0x82, 0x24, 0x71, 0xCC, 0x86, 
	0x67, 0x0B, 0xF9, 0x40, 0x1A, 0x6D, 0xC4, 0x00, 0x1D, 0x8B, 
	0x76, 0x00, 0x8E, 0x39, 0x1C, 0xC2, 0x20, 0x76, 0x80, 0xE2, 
	0x91, 0xAD, 0xAB, 0xE6, 0x00, 0xD0, 0x0D, 0x60, 0x0F, 0x00, 
	0x04, 0x0C, 0xC0, 0xFB, 0x40, 0x67, 0x1D, 0xC3, 0x00, 0x74, 
	0x43, 0x98, 0xD9, 0xE7, 0x52, 0xC7, 0x71, 0x10, 0x3B, 0x0A, 
	0x7A, 0x88, 0xAA, 0x33, 0x80, 0x0B, 0x78, 0x1E, 0x21, 0x42, 
	0xC8, 0xEE, 0x0D, 0xA4, 0x75, 0x04, 0x8B, 0x46, 0x43, 0x43, 
	0xB5, 0x46, 0x83, 0xD9, 0x93, 0x93, 0xDD, 0x87, 0xB9, 0xBF, 
	0x00, 0xD3, 0xF2, 0x31, 0xB8, 0x58, 0x33, 0xE5, 0x31, 0x20, 
	0x73, 0x6F, 0x15, 0xE5, 0x63, 0x88, 0x27, 0xF1, 0xB4, 0x1C, 
	0x9F, 0x4D, 0xF5, 0x99, 0xC2, 0x42, 0x26, 0x4D, 0x6D, 0xE4, 
	0x14, 0xAF, 0xCA, 0xEA, 0xE3, 0xB7, 0x31, 0x5F, 0xA2, 0xCF, 
	0x7A, 0xB5, 0xE5, 0xDA, 0x6C, 0xCF, 0x50, 0x1F, 0x8A, 0x59, 
	0xA3, 0x31, 0xAB, 0xE3, 0x6C, 0xFA, 0x6D, 0x0C, 0x97, 0x90, 
	0xF4, 0x01, 0x7F, 0x59, 0x82, 0xD0, 0x80, 0xA0, 0x2E, 0x68, 
	0xF6, 0x3E, 0x6E, 0x6C, 0x7D, 0xE2, 0x11, 0x4F, 0x24, 0xC7, 
	0x0F, 0x53, 0x9A, 0x58, 0x3F, 0xFA, 0x02, 0x45, 0xAA, 0x2F, 
	0x10, 0xA0, 0xA6, 0x4D, 0xF0, 0x7B, 0x06, 0x24, 0x7B, 0x5C, 
	0x00, 0x98, 0x54, 0xD1, 0xBC, 0x97, 0xE7, 0xA6, 0x29, 0xE6, 
	0x5C, 0x18, 0x2E, 0x4A, 0xB9, 0xF8, 0x1E, 0xA0, 0x04, 0x5B, 
	0xAE, 0xAF, 0x9C, 0x74, 0x36, 0x8A, 0xA3, 0xD3, 0x40, 0xD7, 
	0x33, 0x35, 0xA5, 0x21, 0x93, 0xA6, 0x84, 0x7B, 0x36, 0x5D, 
	0xF2, 0x43, 0xC1, 0x00, 0xA8, 0x0D, 0xB2, 0x01, 0x08, 0x78, 
	0xC6, 0x00, 0xED, 0xCE, 0x15, 0xE4, 0x98, 0x37, 0x0E, 0x25, 
	0x1B, 0x9C, 0x88, 0xB5, 0x06, 0x6F, 0xAD, 0xED, 0xD9, 0x68, 
	0x0A, 0xCD, 0xAC, 0x71, 0x30, 0x30, 0xFA, 0x36, 0xA7, 0x11, 
	0x12, 0xA4, 0x82, 0x28, 0xDD, 0xB0, 0xDB, 0xA8, 0xD0, 0x39, 
	0x76, 0x93, 0xB7, 0xF6, 0xF6, 0x54, 0x50, 0x3C, 0x02, 0xE2, 
	0x6E, 0xD3, 0x9C, 0x4C, 0xE0, 0xBC, 0x20, 0xC4, 0xB0, 0x4B, 
	0x42, 0xB4, 0x56, 0x71, 0x0C, 0xB7, 0x47, 0x6C, 0x80, 0x0E, 
	0x9E, 0xC3, 0x6B, 0xF5, 0x86, 0xA3, 0x52, 0x04, 0x96, 0x51, 
	0x89, 0xC0, 0x1E, 0xB6, 0x61, 0xDE, 0xDF, 0x80, 0x79, 0x2B, 
	0xFB, 0xD5, 0x87, 0x23, 0x0E, 0x53, 0xFD, 0x3B, 0x50, 0xB4, 
	0xC1, 0x3F, 0x00, 0xC5, 0xB4, 0xDA, 0xD8, 0x1B, 0xFD, 0x1D, 
	0xF6, 0xF6, 0x47, 0x2D, 0x20, 0xCD, 0x4D, 0x20, 0x5B, 0x74, 
	0x65, 0xD7, 0x54, 0xD5, 0xD3, 0x4B, 0x8B, 0xA8, 0xDC, 0xC5, 
	0x2C, 0x0D, 0x62, 0x03, 0xF3, 0xEB, 0x60, 0xBB, 0xB6, 0x86, 
	0xFE, 0xB6, 0x3D, 0x64, 0x91, 0x7C, 0x7B, 0x53, 0xC0, 0x68, 
	0x95, 0x48, 0x57, 0x07, 0x6B, 0x6B, 0x48, 0x65, 0xF4, 0xD3, 
	0x04, 0x63, 0xC9, 0xBD, 0x46, 0xEE, 0xBE, 0xDD, 0x12, 0x52, 
	0x0C, 0xC1, 0x5D, 0xF7, 0x7F, 0x09, 0x47, 0x57, 0xAF, 0xB9, 
	0x64, 0x6F, 0xA8, 0xB5, 0xA0, 0xD1, 0x87, 0x15, 0x1A, 0xAB, 
	0x55, 0x42, 0xFA, 0x2F, 0xDB, 0x0C, 0x15, 0xD7, 0x2F, 0x49, 
	0x48, 0x6F, 0x48, 0x08, 0x85, 0xF1, 0x8F, 0x8B, 0x68, 0x54, 
	0x8F, 0x58, 0x86, 0xBD, 0x01, 0xCD, 0x8F, 0x45, 0xF4, 0x13, 
	0xE1, 0x5A, 0x6F, 0x3A, 0xC1, 0x3E, 0x3D, 0x4F, 0x6C, 0xC4, 
	0x68, 0x97, 0x46, 0x5B, 0x59, 0xED, 0xC8, 0xFA, 0x79, 0xE1, 
	0xD5, 0x43, 0x62, 0x6F, 0x38, 0xE8, 0xDB, 0x6B, 0x38, 0x0C, 
	0x31, 0x14, 0x9A, 0x6D, 0x4C, 0x0D, 0xB6, 0x67, 0xCA, 0x6A, 
	0xA8, 0x6B, 0xA8, 0xAF, 0xE1, 0xC3, 0xF4, 0xAB, 0x14, 0xA2, 
	0xF1, 0x0B, 0x01, 0xAE, 0x6B, 0x1A, 0x75, 0xDF, 0xEB, 0x8D, 
	0x8C, 0x2D, 0x8C, 0x6B, 0x3B, 0x58, 0xDD, 0x3A, 0xAC, 0xA7, 
	0x22, 0x2F, 0xF7, 0x5D, 0xBE, 0xC4, 0x84, 0x4B, 0xC1, 0x12, 
	0xAE, 0x02, 0x58, 0xC3, 0x50, 0xF8, 0x9D, 0xB4, 0xCC, 0xCE, 
	0xC3, 0x22, 0x3B, 0x2F, 0xB2, 0x9D, 0x9C, 0x7C, 0x6B, 0x88, 
	0xA8, 0x66, 0x69, 0x96, 0xD9, 0x1D, 0x68, 0xFF, 0x15, 0xF6, 
	0xE0, 0xA7, 0x80, 0x01, 0x59, 0x05, 0xDD, 0xD5, 0xF3, 0x62, 
	0x7F, 0x91, 0xA4, 0x70, 0x1F, 0xBE, 0x85, 0x1B, 0x07, 0x12, 
	0xCE, 0xEB, 0x63, 0xAC, 0xC4, 0x36, 0x4F, 0xE2, 0xBC, 0x77, 
	0xCF, 0x6A, 0xA6, 0x70, 0xD7, 0x4B, 0xA2, 0xA0, 0x18, 0xC4, 
	0xE2, 0x24, 0x0C, 0x99, 0x36, 0x5C, 0xF8, 0x9C, 0xB4, 0x8F, 
	0xB0, 0xF0, 0xB5, 0x2A, 0x5C, 0x7F, 0x5C, 0x1F, 0x2E, 0xA5, 
	0x95, 0x74, 0x52, 0xCA, 0xE0, 0xF3, 0xD4, 0xAE, 0xA7, 0x8A, 
	0x5D, 0xEB, 0xD9, 0xC4, 0xE8, 0xA8, 0xD1, 0x6F, 0x26, 0x44, 
	0x90, 0x35, 0x75, 0x41, 0xE4, 0xEB, 0xBC, 0x70, 0xB2, 0xF1, 
	0x85, 0x7A, 0x59, 0xF9, 0x2B, 0xCA, 0x8B, 0xCD, 0xE2, 0xDF, 
	0x60, 0x89, 0x75, 0x74, 0xAA, 0xDD, 0x5E, 0x92, 0x06, 0x04, 
	0xA5, 0xC4, 0x96, 0xAC, 0xF3, 0x9C, 0x77, 0xF5, 0x06, 0xCB, 
	0x4E, 0xC1, 0x32, 0x70, 0x1C, 0x84, 0x77, 0x65, 0xB5, 0x00, 
	0x6E, 0xD1, 0x4F, 0xF4, 0xCA, 0x4D, 0xD4, 0x54, 0xE1, 0x57, 
	0x73, 0x56, 0x2C, 0x32, 0xE1, 0x5A, 0x8D, 0x55, 0x06, 0xA1, 
	0x3A, 0xB4, 0x7B, 0x80, 0xE5, 0x03, 0x89, 0xDE, 0x0F, 0xDD, 
	0x8A, 0x03, 0x48, 0x69, 0x96, 0xDF, 0x1C, 0x41, 0x39, 0xE3, 
	0x98, 0x16, 0x87, 0x1C, 0x7C, 0x7F, 0x16, 0xFA, 0x5E, 0xD4, 
	0xF3, 0xA2, 0xF0, 0x3A, 0x1E, 0xE7, 0xC9, 0xD2, 0x91, 0x0F, 
	0x5F, 0xEE, 0x76, 0x3B, 0x40, 0x9F, 0xD2, 0xDD, 0x95, 0x76, 
	0xE2, 0xAB, 0x6C, 0xE9, 0x48, 0x07, 0x7B, 0x08, 0xF6, 0x50, 
	0x3A, 0x00, 0xC2, 0xA4, 0x30, 0x70, 0xE5, 0xE8, 0x2A, 0x0A, 
	0xBE, 0xB0, 0xEA, 0xAD, 0x44, 0x0B, 0x24, 0x38, 0x24, 0x1F, 
	0xEE, 0x76, 0x69, 0x6D, 0xAD, 0xB4, 0x49, 0xA5, 0x2B, 0x1F, 
	0xEC, 0xC1, 0x9E, 0x43, 0x59, 0x4D, 0xE2, 0x28, 0x8C, 0x09, 
	0x33, 0xC3, 0xCC, 0x5D, 0xAB, 0x00, 0x02, 0x40, 0x2C, 0xA7, 
	0xF1, 0xFA, 0x5F, 0xD1, 0x63, 0x25, 0x03, 0xA6, 0x7F, 0x56, 
	0x30, 0x28, 0x41, 0x17, 0x95, 0xC1, 0x79, 0x94, 0x78, 0xF9, 
	0x98, 0xBE, 0x63, 0x93, 0x9F, 0x78, 0x69, 0x22, 0x53, 0xD4, 
	0xAC, 0x5E, 0xAC, 0x96, 0x93, 0xF8, 0x86, 0x3C, 0xAC, 0xF0, 
	0x45, 0x01, 0xBD, 0xC8, 0xEE, 0x52, 0x06, 0x68, 0x81, 0x62, 
	0x57, 0x11, 0xE4, 0x47, 0xC9, 0xCF, 0x17, 0x61, 0xD6, 0xA7, 
	0xE8, 0x14, 0x47, 0x56, 0x9E, 0x00, 0x64, 0xAA, 0x7A, 0xD5, 
	0x5D, 0x38, 0x02, 0xE7, 0x8A, 0x0E, 0x6A, 0x75, 0x38, 0x27, 
	0x2A, 0x3C, 0xCC, 0x13, 0x15, 0x58, 0xD6, 0x8E, 0xE6, 0xA7, 
	0xB2, 0x4A, 0xEB, 0x9C, 0x58, 0x39, 0xCC, 0x69, 0xE5, 0x30, 
	0x62, 0xC4, 0x22, 0x64, 0x76, 0x15, 0xCF, 0xD5, 0x88, 0xE3, 
	0xA2, 0x10, 0xAE, 0x52, 0x11, 0x80, 0x1F, 0xA5, 0xB4, 0x50, 
	0x22, 0xDE, 0xC5, 0x29, 0x05, 0xE0, 0xEC, 0x01, 0x43, 0x99, 
	0xD1, 0xFA, 0x41, 0x55, 0x50, 0x5D, 0xDD, 0xCA, 0x55, 0x35, 
	0x15, 0x3A, 0x4F, 0x8A, 0x9A, 0x34, 0xAD, 0x2B, 0xCB, 0x5F, 
	0xA1, 0xD0, 0x90, 0x33, 0xE4, 0x4A, 0xD7, 0x0E, 0x23, 0xCA, 
	0x0A, 0x90, 0x11, 0xA8, 0x31, 0xB9, 0x97, 0xDE, 0x2F, 0xB1, 
	0x30, 0xD0, 0x61, 0x25, 0xC4, 0x6C, 0x2C, 0x01, 0xDD, 0x6A, 
	0xA4, 0x6A, 0x6A, 0x8D, 0x7B, 0xD7, 0x8D, 0x8E, 0xF4, 0xB1, 
	0xA6, 0xB4, 0x94, 0x2E, 0xAB, 0x1A, 0x71, 0x52, 0xDF, 0x43, 
	0x2B, 0x5E, 0x44, 0x0D, 0x78, 0x9B, 0x00, 0x1B, 0x6B, 0x1A, 
	0xF3, 0x17, 0xF8, 0x0E, 0x94, 0xFA, 0x59, 0x01, 0x85, 0x29, 
	0x0F, 0xC8, 0xDE, 0x85, 0x38, 0x58, 0x53, 0x93, 0x23, 0x8A, 
	0x26, 0x5C, 0x02, 0x2C, 0xAC, 0x75, 0x96, 0x9E, 0x22, 0xCA, 
	0x32, 0x4F, 0xA3, 0x82, 0x6B, 0xD1, 0x77, 0x64, 0xFE, 0x4D, 
	0x5B, 0x44, 0x52, 0xE9, 0xFC, 0xB2, 0xFC, 0xD6, 0x41, 0x66, 
	0x14, 0x7A, 0xEB, 0x65, 0xE5, 0xC3, 0xF3, 0xCB, 0x31, 0xB8, 
	0xC6, 0xD5, 0x21, 0xAB, 0x30, 0xAB, 0x28, 0x42, 0xAB, 0x92, 
	0x60, 0x4B, 0x9D, 0x1B, 0x51, 0x9F, 0x5F, 0xA2, 0xF6, 0xB9, 
	0x6A, 0x84, 0x81, 0x5A, 0xA5, 0xDB, 0x16, 0x0B, 0xDD, 0xB8, 
	0xE8, 0x74, 0x7E, 0x0D, 0x61, 0x6A, 0x1A, 0xCD, 0xD6, 0xEA, 
	0xDB, 0xE6, 0x61, 0x74, 0x24, 0x4B, 0x7D, 0x09, 0x38, 0x93, 
	0x9D, 0x46, 0x11, 0xBE, 0xA8, 0x7E, 0xF3, 0x9F, 0xC3, 0xC9, 
	0xEA, 0x2A, 0x26, 0xB9, 0x74, 0xE1, 0x65, 0x37, 0xE3, 0x9F, 
	0x22, 0x3C, 0xA3, 0x1B, 0x05, 0xC2, 0x85, 0x81, 0x1F, 0x13, 
	0xAE, 0x6F, 0x47, 0x38, 0x6A, 0x90, 0x55, 0x96, 0xD8, 0x97, 
	0xB1, 0x62, 0x71, 0x09, 0xE2, 0x1C, 0x1B, 0x44, 0xEF, 0xD7, 
	0x66, 0x87, 0x2E, 0x18, 0x97, 0x38, 0x70, 0xE0, 0xEA, 0x56, 
	0xCD, 0x03, 0x69, 0x74, 0x14, 0xD5, 0x5B, 0xAD, 0x86, 0xD3, 
	0x8E, 0xAB, 0x54, 0x0C, 0xA7, 0x22, 0xBB, 0xB0, 0xF6, 0x75, 
	0x2C, 0xC4, 0xA3, 0xAA, 0xCF, 0x22, 0x92, 0xBF, 0x20, 0xFE, 
	0xCD, 0x55, 0xF2, 0x0D, 0xC3, 0x1A, 0x2F, 0x7C, 0x32, 0xCB, 
	0x84, 0x85, 0xE7, 0x97, 0x57, 0x65, 0x60, 0x59, 0xAB, 0xD3, 
	0xB1, 0xD8, 0x42, 0xB7, 0x93, 0xE0, 0x68, 0x97, 0x17, 0x23, 
	0x77, 0xC7, 0xBB, 0xAC, 0x7E, 0xB7, 0x0B, 0x96, 0x8C, 0x71, 
	0xA1, 0x58, 0x81, 0x44, 0xA3, 0x00, 0xB1, 0xAE, 0x5B, 0x3E, 
	0x62, 0x61, 0x43, 0xA4, 0xFF, 0xAE, 0xE9, 0xD5, 0x15, 0x11, 
	0x85, 0x6E, 0x82, 0x10, 0x92, 0x03, 0xEF, 0x61, 0x2C, 0x85, 
	0x34, 0x0A, 0xF7, 0xAE, 0xA2, 0xC4, 0xBF, 0x71, 0xA4, 0x8A, 
	0x30, 0xF4, 0xEC, 0xCE, 0x06, 0x64, 0x47, 0x72, 0xB6, 0x48, 
	0xEE, 0x41, 0x4B, 0xBC, 0xC6, 0x08, 0x41, 0x9D, 0x52, 0xC9, 
	0x54, 0xC2, 0x96, 0xA1, 0x7E, 0x74, 0x57, 0x90, 0xB1, 0x31, 
	0x53, 0xA8, 0x4A, 0x6B, 0xB6, 0x28, 0xAD, 0x99, 0xDA, 0xDD, 
	0xBA, 0xA9, 0x51, 0xEA, 0xBF, 0x14, 0xD5, 0xE6, 0xA8, 0xD2, 
	0x40, 0x6D, 0x74, 0xB3, 0xD1, 0x55, 0xA4, 0x47, 0x5D, 0x9D, 
	0x5A, 0xDD, 0xDD, 0x46, 0xAB, 0x63, 0x65, 0xA0, 0x3A, 0x8D, 
	0x9D, 0x09, 0x49, 0x43, 0x2F, 0x52, 0x64, 0x76, 0xE6, 0xDE, 
	0x89, 0xD5, 0xE9, 0xAA, 0x6A, 0x1E, 0x17, 0x09, 0xD5, 0x86, 
	0x2A, 0x79, 0x4C, 0xE5, 0x93, 0xD6, 0xDF, 0x0D, 0x69, 0x2F, 
	0x5C, 0xD8, 0x97, 0xD6, 0xFD, 0x73, 0x81, 0x2E, 0xE8, 0xB0, 
	0x64, 0xAE, 0x25, 0x90, 0x93, 0x28, 0xBA, 0x0E, 0xFD, 0x2F, 
	0xE5, 0x0B, 0x27, 0xFA, 0x1B, 0x17, 0x5E, 0xB8, 0x61, 0xB6, 
	0x88, 0x9D, 0x63, 0x19, 0x6B, 0xBE, 0x74, 0x76, 0x36, 0xA5, 
	0xD3, 0xD8, 0xC4, 0xD8, 0x68, 0x33, 0xB7, 0xF3, 0xCC, 0xE4, 
	0x8E, 0x6E, 0x2B, 0xDF, 0x85, 0x93, 0xF0, 0x50, 0x3B, 0xD2, 
	0x07, 0x10, 0xE3, 0x1D, 0xB9, 0x38, 0xB7, 0xFC, 0xE2, 0x55, 
	0x92, 0x70, 0x4C, 0x78, 0xF8, 0xF1, 0x8C, 0x06, 0x7F, 0x9F, 
	0x7D, 0x2F, 0x11, 0x43, 0x4F, 0x1F, 0xD4, 0x06, 0xD0, 0xCC, 
	0xB4, 0xB1, 0xAE, 0xB4, 0xC0, 0x4C, 0x52, 0xA9, 0x93, 0xE1, 
	0xF7, 0x5E, 0xF8, 0x1D, 0xCC, 0x2F, 0x82, 0xA6, 0xA7, 0x13, 
	0x3D, 0x3C, 0xC3, 0x76, 0x19, 0x83, 0xFE, 0x36, 0x8B, 0xB8, 
	0x65, 0xB2, 0x10, 0x42, 0xA8, 0x38, 0x14, 0x5E, 0x42, 0x89, 
	0xC5, 0x7C, 0xAC, 0xEF, 0x05, 0x41, 0x47, 0xA4, 0x1F, 0xCE, 
	0x2F, 0x59, 0x78, 0x65, 0xE4, 0xB9, 0x53, 0x10, 0x10, 0xA4, 
	0x2F, 0xE0, 0x08, 0x59, 0x23, 0xD0, 0x65, 0xE0, 0x14, 0xF5, 
	0x2C, 0x83, 0x7F, 0xF9, 0x3F, 0xCD, 0x66, 0x62, 0xA6, 0xC1, 
	0x3C, 0x8F, 0x4F, 0x40, 0x68, 0x45, 0x7D, 0x61, 0x62, 0x44, 
	0xF0, 0xE9, 0xFB, 0x77, 0x8D, 0x3A, 0x62, 0x6D, 0x9A, 0x59, 
	0x6B, 0xE0, 0xFE, 0x50, 0x78, 0xF5, 0x97, 0x45, 0x54, 0x7A, 
	0x4A, 0xE9, 0xD7, 0x19, 0xC5, 0x54, 0x9F, 0xD7, 0x67, 0xFC, 
	0xF8, 0x77, 0x02, 0x7C, 0xBD, 0xEB, 0x4E, 0xC5, 0xB5, 0x6A, 
	0x34, 0xA3, 0x1A, 0x0D, 0x45, 0x8D, 0x56, 0x0B, 0xE0, 0xA2, 
	0x23, 0x63, 0xE4, 0xA9, 0x53, 0x0B, 0xE1, 0x59, 0x84, 0xC1, 
	0xB2, 0x25, 0x50, 0x7C, 0x00, 0x2A, 0x0C, 0xD2, 0x4F, 0xD1, 
	0xE4, 0x33, 0xF3, 0x40, 0xD5, 0xA3, 0x91, 0x10, 0x0B, 0xCB, 
	0x6A, 0xB8, 0x39, 0x79, 0xA0, 0x5B, 0x1A, 0x6F, 0xA4, 0x62, 
	0xFA, 0x46, 0x4A, 0x11, 0x1D, 0x1B, 0x17, 0xB5, 0x38, 0x76, 
	0xBB, 0xFA, 0x15, 0xD5, 0x77, 0xD3, 0x3E, 0x53, 0x7A, 0x36, 
	0x4D, 0xFB, 0xCC, 0x9C, 0x48, 0x70, 0x1E, 0x07, 0xE4, 0xDB, 
	0x8C, 0x79, 0x4C, 0x71, 0x1F, 0xFB, 0x02, 0xA8, 0x9E, 0x7D, 
	0x93, 0x54, 0x0E, 0x17, 0x6F, 0x66, 0x44, 0xF9, 0x8A, 0x93, 
	0xD0, 0x5D, 0x9B, 0x47, 0x3F, 0x06, 0x95, 0xF9, 0xA8, 0xF8, 
	0x4E, 0x49, 0x72, 0x5B, 0x50, 0x50, 0x76, 0x76, 0x9E, 0x9F, 
	0xAF, 0x3B, 0xBA, 0xDA, 0xD4, 0xB2, 0x0F, 0x3F, 0x0E, 0x73, 
	0xA1, 0x0D, 0x31, 0xAF, 0x13, 0xC3, 0xA5, 0x01, 0x5C, 0x60, 
	0x67, 0xE7, 0x45, 0x58, 0xC5, 0xB8, 0x9D, 0x1D, 0x6A, 0x00, 
	0xDB, 0xBF, 0x2E, 0xA4, 0x60, 0x7E, 0xF4, 0xCA, 0x50, 0xAD, 
	0x5E, 0x14, 0xAA, 0x35, 0xA3, 0x40, 0x49, 0xA8, 0x48, 0x6B, 
	0x53, 0xBB, 0x6C, 0x01, 0xC4, 0x2D, 0x70, 0xDA, 0x47, 0xF1, 
	0x0D, 0xE7, 0xDA, 0x5B, 0xD6, 0xB4, 0x9E, 0x38, 0x08, 0xD9, 
	0xC9, 0x26, 0xA7, 0x05, 0x87, 0xF4, 0xEB, 0x5E, 0xC2, 0x5E, 
	0x5F, 0xC6, 0xAE, 0xE1, 0xC4, 0x82, 0x13, 0xC3, 0x45, 0xB7, 
	0xD8, 0x16, 0xAF, 0xF9, 0x71, 0x88, 0x92, 0x66, 0xA4, 0x45, 
	0xED, 0x51, 0x0A, 0x28, 0x6D, 0x68, 0x2D, 0x6D, 0xC6, 0xAA, 
	0xCD, 0x4B, 0x9E, 0x3F, 0x13, 0xD2, 0x2A, 0xFA, 0xBB, 0x55, 
	0xD4, 0x77, 0xDA, 0x5E, 0xD1, 0x17, 0xB7, 0xAC, 0x88, 0xA5, 
	0x1F, 0x81, 0x7B, 0x9C, 0xA6, 0xDE, 0x43, 0x3F, 0xCC, 0x68, 
	0xBB, 0xCE, 0x11, 0x5C, 0x3B, 0x82, 0xA3, 0xE6, 0x28, 0x88, 
	0x68, 0xDC, 0x1C, 0x53, 0xEF, 0xDC, 0x5E, 0xD2, 0xD3, 0xF1, 
	0xE0, 0xC4, 0x7B, 0x33, 0x7E, 0x08, 0xEC, 0xBA, 0x68, 0x02, 
	0xC9, 0x5C, 0x4A, 0xCA, 0xC0, 0x78, 0x06, 0x3A, 0x38, 0x3B, 
	0x68, 0xEE, 0x2D, 0xC4, 0x7A, 0xC6, 0xF2, 0x8A, 0xA8, 0x11, 
	0x70, 0xEA, 0xB8, 0xCF, 0x66, 0xEA, 0xD9, 0x8F, 0x4E, 0x92, 
	0xB4, 0xD1, 0x43, 0xE7, 0x73, 0xCF, 0xF8, 0x3D, 0x07, 0xF3, 
	0x06, 0xAA, 0xA8, 0xCF, 0x2E, 0x44, 0xBD, 0x35, 0x62, 0xD7, 
	0x10, 0x6E, 0xA0, 0xB6, 0xA7, 0xB3, 0x54, 0x6B, 0xDB, 0xC5, 
	0xEB, 0x52, 0xDC, 0xBC, 0x96, 0x46, 0x56, 0xC8, 0x71, 0xD4, 
	0x25, 0xD6, 0x82, 0xE6, 0x1D, 0xED, 0x30, 0xD9, 0xD9, 0xE1, 
	0xDF, 0x8E, 0x4E, 0xEF, 0x66, 0x0D, 0x71, 0x56, 0x13, 0xCF, 
	0x09, 0xF2, 0x73, 0xB7, 0x5A, 0xF7, 0xB7, 0x85, 0x08, 0x84, 
	0x9D, 0x75, 0xA9, 0xB2, 0x93, 0x43, 0xED, 0xFB, 0xF7, 0xA0, 
	0x45, 0x12, 0x90, 0xD6, 0xAF, 0x8D, 0xE9, 0x22, 0xE9, 0xED, 
	0x76, 0x85, 0x0C, 0xB9, 0x9D, 0x96, 0x39, 0x7D, 0x36, 0x4E, 
	0x94, 0x0D, 0x9C, 0x9D, 0xFD, 0x53, 0xDC, 0x04, 0x02, 0x7D, 
	0xC9, 0xA1, 0xAB, 0x1D, 0x19, 0x63, 0x7D, 0xB3, 0xC1, 0x82, 
	0xB9, 0x6F, 0x6B, 0xB2, 0xCB, 0x5F, 0xA2, 0x6F, 0x59, 0xD0, 
	0xD7, 0xED, 0x3E, 0x3D, 0xD1, 0xF2, 0xE9, 0x93, 0xF8, 0x6D, 
	0x53, 0xF1, 0xA6, 0xFF, 0xB1, 0xA8, 0x29, 0xD0, 0x0F, 0x90, 
	0xC4, 0xE8, 0x77, 0x95, 0x04, 0x0F, 0x8F, 0xB4, 0x74, 0x34, 
	0xF7, 0x6E, 0xC3, 0xE8, 0x61, 0x7C, 0x8C, 0xE9, 0xB1, 0x7A, 
	0x06, 0xB1, 0x86, 0x60, 0xED, 0x48, 0xCD, 0xBC, 0x38, 0xEB, 
	0x65, 0x90, 0x34, 0xCF, 0x9D, 0xDE, 0x3D, 0xB9, 0xBA, 0x09, 
	0xF3, 0xDE, 0x32, 0xC5, 0x1A, 0x98, 0x8F, 0x5F, 0x10, 0xF7, 
	0xBC, 0xE0, 0xEB, 0x2A, 0xCB, 0xC7, 0xE4, 0x9B, 0xE7, 0xE7, 
	0xCE, 0x13, 0x96, 0xD1, 0x6A, 0xF9, 0xEF, 0xC2, 0x94, 0x1E, 
	0xA5, 0x2B, 0x5A, 0x2E, 0x1B, 0x4B, 0x2F, 0x4D, 0xFA, 0x47, 
	0xCA, 0x92, 0x28, 0x0C, 0x24, 0x1D, 0xB2, 0x7A, 0x69, 0x09, 
	0xF9, 0x14, 0x38, 0xD7, 0xD8, 0xC6, 0xCE, 0xAD, 0x97, 0x5E, 
	0x87, 0xF1, 0x58, 0x32, 0x6C, 0x49, 0x93, 0xE0, 0x9F, 0x23, 
	0xE1, 0x37, 0xE1, 0xD7, 0x69, 0xB2, 0x8A, 0x03, 0x86, 0x6E, 
	0xFC, 0xF2, 0x6A, 0x1F, 0xFF, 0x3A, 0x1C, 0x66, 0x2F, 0xF5, 
	0x82, 0x70, 0x95, 0xB1, 0xED, 0xEB, 0xD8, 0xFB, 0xD1, 0x95, 
	0xF4, 0x58, 0x60, 0x07, 0x7C, 0x1C, 0x33, 0x7E, 0xDC, 0x07, 
	0x7F, 0x9A, 0x40, 0x4C, 0x04, 0xB2, 0x86, 0x51, 0x7A, 0x49, 
	0xE8, 0x9F, 0x8A, 0x56, 0x20, 0x8D, 0xFE, 0xAD, 0x08, 0x2E, 
	0x06, 0x36, 0x5C, 0xC4, 0x58, 0x65, 0x95, 0x96, 0xE0, 0x7C, 
	0x82, 0x9F, 0x3B, 0xC2, 0xCE, 0x30, 0x66, 0x85, 0x45, 0xD8, 
	0x8C, 0xD7, 0x9B, 0x16, 0xDA, 0xF1, 0x7A, 0x8D, 0xC2, 0x5B, 
	0x13, 0x81, 0x17, 0xF8, 0xF3, 0x60, 0xD4, 0xCA, 0xEF, 0xFC, 
	0x14, 0x76, 0xB0, 0x9A, 0x59, 0x44, 0xE6, 0xB9, 0x53, 0x89, 
	0x7E, 0x9F, 0xFE, 0x69, 0x13, 0xBD, 0xD1, 0xCA, 0x76, 0xC9, 
	0x75, 0x8B, 0x8C, 0xDA, 0x88, 0x8D, 0x52, 0xC0, 0xEC, 0x47, 
	0xC4, 0x4B, 0x39, 0xE6, 0x27, 0xA9, 0x95, 0xBC, 0x85, 0x05, 
	0xEB, 0x4A, 0x45, 0x53, 0x68, 0xEB, 0x0B, 0x5F, 0xA2, 0x09, 
	0x97, 0xEB, 0x7A, 0x79, 0xB2, 0x04, 0xF5, 0xD1, 0xAF, 0x03, 
	0x5B, 0x16, 0x2F, 0x0C, 0xE4, 0xB9, 0xAC, 0x85, 0x4A, 0x16, 
	0xAE, 0x13, 0x65, 0x2E, 0x95, 0x42, 0x2F, 0xD0, 0x6A, 0x60, 
	0x5F, 0x00, 0x0F, 0x2D, 0xAC, 0x90, 0x82, 0x6E, 0xB7, 0x8B, 
	0x41, 0x23, 0x56, 0x70, 0x65, 0x39, 0x12, 0xEB, 0xDE, 0xE3, 
	0x7F, 0x92, 0xDA, 0xD6, 0xF8, 0xB2, 0x93, 0x55, 0x2E, 0x3D, 
	0x2E, 0xF9, 0xFF, 0x7F, 0x19, 0x4B, 0xF3, 0xF0, 0x1B, 0x09, 
	0x70, 0x33, 0x7E, 0x95, 0x3C, 0x96, 0x28, 0x99, 0xB4, 0xB2, 
	0xC9, 0x9F, 0x5B, 0x4C, 0xCF, 0x3A, 0x3D, 0x7E, 0x63, 0x6B, 
	0x05, 0x76, 0x89, 0xA3, 0x2F, 0x0D, 0x51, 0x87, 0x7D, 0x12, 
	0xA3, 0xBC, 0x8D, 0x5F, 0x3A, 0x16, 0xE0, 0x7F, 0x7F, 0xF4, 
	0x18, 0x05, 0x71, 0x12, 0xC3, 0xF6, 0x0D, 0x56, 0x5A, 0x48, 
	0xC7, 0x02, 0x98, 0x54, 0x31, 0xFC, 0x1B, 0x5D, 0x89, 0x7F, 
	0xA3, 0xDB, 0x64, 0x1B, 0x17, 0xB6, 0xD9, 0x2D, 0x7E, 0x49, 
	0xF7, 0x28, 0xD4, 0x1E, 0x58, 0x5D, 0x01, 0x34, 0xD7, 0x27, 
	0x41, 0xFE, 0x28, 0x14, 0x74, 0x9D, 0x8A, 0x61, 0x60, 0x75, 
	0x3E, 0x9F, 0x3B, 0x05, 0x63, 0x9A, 0x64, 0x80, 0x86, 0x0C, 
	0x87, 0x93, 0x54, 0x74, 0xDB, 0xDC, 0x95, 0xD9, 0xB7, 0xE0, 
	0xDB, 0xCC, 0xD0, 0xDB, 0x54, 0xC9, 0xFD, 0xA6, 0xCD, 0x6D, 
	0x96, 0xD2, 0x63, 0x21, 0xF2, 0x62, 0xBF, 0x60, 0x51, 0x7A, 
	0xBB, 0x87, 0xFE, 0xF7, 0x2D, 0x09, 0x42, 0x4F, 0xA2, 0xD1, 
	0x10, 0x4C, 0x90, 0xEB, 0xBB, 0x94, 0x2E, 0x0A, 0x5B, 0x7A, 
	0x11, 0xDE, 0x2E, 0x93, 0x34, 0xF7, 0x62, 0x08, 0x8E, 0x4F, 
	0x32, 0xBB, 0xA3, 0xE2, 0x27, 0x69, 0x3D, 0x9D, 0x7D, 0x9A, 
	0x86, 0xF9, 0x10, 0xFD, 0x2C, 0xCB, 0xF9, 0x0F, 0xA7, 0x03, 
	0x24, 0xFF, 0x92, 0x3E, 0x00, 0x00, 
};

	// Default Controller Configuration (len=45)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x00, 0x1B, 0x04, 0x03, 0x21, 0x18, 0x00, 0x06, 0x05, 0x61, 
	0x16, 0x00, 0x00, 0x02, 0x06, 0x05, 0x61, 0x16, 0x00, 0x01, 
	0x02, 0x06, 0x05, 0x61, 0x00, 0x00, 0x01, 0x00, 0xFF, 0xC0, 
	0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 0xC0, 
	0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


SkaarhojAudioControl audio_a;
SkaarhojAnalog audioPot_a1;