class Solution {
public:
    string addBinary(string a, string b) {
        string Sol = "";
        
        int A = a.length();
        int B = b.length();
        
        if(A>B){
            for(int i=0; i<A-B; i++){
                b.insert(0, "0");
            }
        } else if(B>A){
            for(int i=0; i<B-A; i++){
                a.insert(0, "0");
            }
        }
        
        cout<<a<<endl<<b<<endl;
        int Carry = 0;
        
        for(int i=a.length()-1; i>=0; i--){
            if((a[i] - 47) + (b[i] - 47) + Carry == 0){
                Sol.insert(0, "0");
            }
            if((a[i] - 47) + (b[i] - 47) + Carry == 1 && Carry == 1){
                Sol.insert(0, "1");
                Carry = 0;
            }
            if((a[i] - 47) + (b[i] - 47) + Carry == 2){
                Sol.insert(0, "0");
                Carry = 1;
            }
            if((a[i] - 47) + (b[i] - 47) + Carry == 3){
                Sol.insert(0, "1");
                Carry = 1;
            }
        }
        
        if(Carry){
            Sol.insert(0, "1");
        }
        
        return Sol;
        
    }
};