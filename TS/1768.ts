function mergeAlternately(word1: string, word2: string): string {
    let stringFinal = "";
    const minLength = Math.min(word1.length, word2.length);
    let i = 0;
    for (i = 0; i < minLength; i++) {
        stringFinal += word1[i];
        stringFinal += word2[i];
    }
    if (word1.length > minLength) stringFinal += word1.substring(i);
    if (word2.length > minLength) stringFinal += word2.substring(i);
    return stringFinal;
};