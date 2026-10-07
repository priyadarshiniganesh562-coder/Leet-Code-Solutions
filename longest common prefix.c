char* longestCommonPrefix(char** strs, int strsSize) {
    // Return an empty string if the input array is empty
    if (strsSize == 0 || strs == NULL) {
        char* empty = (char*)malloc(sizeof(char));
        empty[0] = '\0';
        return empty;
    }

    // Scan character by character using the first string as a reference
    int i = 0;
    while (strs[0][i] != '\0') {
        char c = strs[0][i];
        
        // Check this character against all other strings
        for (int j = 1; j < strsSize; j++) {
            // If we reach the end of any string or find a mismatch
            if (strs[j][i] == '\0' || strs[j][i] != c) {
                goto done; 
            }
        }
        i++;
    }

done:
    // Allocate memory for the prefix and copy it
    char* result = (char*)malloc((i + 1) * sizeof(char));
    strncpy(result, strs[0], i);
    result[i] = '\0'; // Null-terminate the string
    
    return result;
}
