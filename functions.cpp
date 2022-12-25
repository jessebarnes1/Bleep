#include <string>
using namespace std;

void a(string word, string& text, int i)
{
  // loop 
  for(int k = 0; k < word.size(); ++i)
  {
    text[k+i] = '*';
  }

}

void(string word, std:: string& text)
{
  // loop through the text
  for(int i = 0; i < text.size(); ++i)
  {
  // create a match variable 
      int match  = 0;
  //loop through the each word 
      for(int j = 0; j < word.size(); ++j)
      {
    // if the text matches with the word 
        if(text[i+j] = word[j])
        {
        // increase the match variable 
        ++match;
        }
      }
  }
  // if the match equals the word size
  if(match == words.size())
  {
  // pass the word/text/ and the index
    a(word, text, i) 
  }
  
}
