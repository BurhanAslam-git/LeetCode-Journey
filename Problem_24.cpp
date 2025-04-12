#include <iostream>
#include <string>
using namespace std;

int findFirstOccurence(string haystack, string needle)
{
    int index = -1;
    if(haystack == needle) return 0;
    for (int i = 0; i < haystack.size(); ++i)
    {
        char elem = haystack[i];
        if (elem == needle[0])
        {
            index = i;
            int j = 0;
            while (j < needle.size())
            {
                if (haystack[j+index] != needle[j])
                {
                    index = -1;
                }
                ++j;
            }
            if(index != -1) return index;
        }
      
        
    }
    return index;
}

int main()
{
    string haystack, needle;
    cout << "Enter the haystack string : ";
    cin >> haystack;
    cout << "Enter the needle string : ";
    cin >> needle;
    int res = findFirstOccurence(haystack, needle);
    if(res != -1){
        cout << "Index : " << res << endl;
    }
    else{
        cout << needle << " NOT FOUND in " << haystack << endl;
    }
    return 0;
}