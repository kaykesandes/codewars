#include <string>
#include <vector>

std::string encode_rail_fence_cipher(const std::string &str, int numRails) {
    if (str.empty()) return ""; 
    
    std::vector<std::string> rails(numRails); 
    
    int row = 0; 
    
    bool down = false;
    
 
    for (char c : str) {
        rails[row] += c;
        
        
        if (row == 0 || row == numRails - 1) down = !down;
        
        
        row += (down) ? 1 : -1;
    }
    
    
    std::string encoded;
    for (const std::string& rail : rails) {
        encoded += rail;
    }
    
    return encoded;
}


std::string decode_rail_fence_cipher(const std::string &str, int numRails) {
    if (str.empty()) return "";
    
    std::vector<std::string> rails(numRails);
    int railLength = str.size(); 
    
    std::vector<int> railLengths(numRails);
    int row = 0;
    bool down = false;
    for (int i = 0; i < railLength; ++i) {
        railLengths[row]++;
        
        if (row == 0 || row == numRails - 1) down = !down;
        
        row += (down) ? 1 : -1;
    }
    

    int index = 0;
    for (int i = 0; i < numRails; ++i) {
        for (int j = 0; j < railLengths[i]; ++j) {
            rails[i] += str[index++];
        }
    }
    

    std::string decoded;
    row = 0;
    down = false;
    for (int i = 0; i < railLength; ++i) {
        decoded += rails[row][0];
        rails[row].erase(0, 1);
        
        if (row == 0 || row == numRails - 1) down = !down;
        
        row += (down) ? 1 : -1;
    }
    
    return decoded;
}