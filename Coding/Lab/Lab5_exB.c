#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define PIXEL_COUNT 256  // Pixel value range 00-FF (256 possible values)
#define PIXEL_STR_LEN 3  // Pixel string length (2 hex chars + '\0')


int hex2dec(const char *hex_str) {// 00-FF -> 0-255
    
    int dec = 0;

    for (int i = 0; i < 2; i++) {//pixel is 2 digits
        
        char c = hex_str[i];
        dec *= 16;//hex
        
        if (isdigit(c)) {
           
            dec += (c - '0');
        
        } else {
            
            dec += (tolower(c) - 'a' + 10);
        
        }
    
    }
    
    return dec;

}


void dec2hex(int dec, char *hex_str) {// 0-255 → 00-FF, uppercase
    
    sprintf(hex_str, "%02X", dec);  // 2 digit output, put 0 in front if too short

}



int main() {

    char filename[20];
    scanf("%s", filename);  

  
    int freq[PIXEL_COUNT] = {0}; //initialize(0-255 00-FF,occur count)

    
    FILE *in_file = fopen(filename, "r");//read oly

    if (in_file == NULL) {

        perror("Failed to open input file");
        return 1;

    }

    
    char pixel_str[PIXEL_STR_LEN];  // single pixel string
    
    while (fscanf(in_file, "%2s", pixel_str) == 1) {  // read 2 chars "2s"(that is 1 pixel/1 format term"%");if read 0, return EOF
        
        int pixel_dec = hex2dec(pixel_str);
        freq[pixel_dec]++;
    
    }

    fclose(in_file);

    
    int max_freq = 0;
    int best_pixel_dec = 0;  // default to smallest pixel 00 (decimal 0)

    for (int i = 0; i < PIXEL_COUNT; i++) {
        
        if (freq[i] > max_freq) {
            
            max_freq = freq[i];//fre
            best_pixel_dec = i;//pixel value
        
        } else if (freq[i] == max_freq) {
            
            if (i < best_pixel_dec) {
                best_pixel_dec = i;
            
            }
        
        }
    
    }

    char best_pixel_hex[PIXEL_STR_LEN];
    dec2hex(best_pixel_dec, best_pixel_hex);


    FILE *out_file = fopen("output.txt", "a");//append

    if (out_file == NULL) {

        perror("Failed to open output file");
        return 1;
        
    }

    fprintf(out_file, "%s %d\n", best_pixel_hex, max_freq);

    fclose(out_file);

    return 0;

}