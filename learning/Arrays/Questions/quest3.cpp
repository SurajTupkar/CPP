 #include "iostream"
 using namespace std;


 int main()
 {
 
 char ch[] ={'z','z','a','a','d','h','h','h','i','l','j','l','m','n','o','z','h'};
    char ch1 = 'z';
    for(int i = 0; i < std::size(ch); i++)
    {
        int count = 0;

        for(int j = 0; j < std::size(ch); j++)
        {
            if(ch[i] == ch[j])
            {
                count++;
            }
        }
       
        cout<<ch[i]<<":"<<count<<endl;
    }

    return 0;
}
