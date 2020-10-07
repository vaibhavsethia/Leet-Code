class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string,int> Temp;
        
        for(int i=0; i<cpdomains.size(); i++)
        {
            string number = "";
            int j = 0;
            
            while(j<cpdomains[i].length() && cpdomains[i][j]!=' ')
            {
                number += (cpdomains[i][j]);
                j++;
            }
            
            j++;
            string s = cpdomains[i].substr(j);
            
            if(Temp.find(s) != Temp.end())
            {
                Temp[s] += stoi(number);
            } else{
                Temp[s] = stoi(number);
            }
            
            for(int k=j; k<cpdomains[i].length(); k++)
            {
                while(k<cpdomains[i].length() && cpdomains[i][k]!='.')
                {
                    k++;
                }
                
                if(k == cpdomains[i].length())
                    break;
                
                k++;
                
                string p = cpdomains[i].substr(k);
                if(Temp.find(s) != Temp.end())
                {
                    Temp[p] += stoi(number);
                }
                else
                {
                    Temp[p] = stoi(number);
                }
            }
        }
        
        vector<string> Sol;
        for(auto i=Temp.begin(); i!=Temp.end(); i++)
        {
            string s = to_string(i->second)+" " +(i->first);
            Sol.push_back(s);
        }
        
        return Sol;
    }
};