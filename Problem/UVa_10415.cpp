#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char,vector<int>> m;
    m['c']={1,2,3,6,7,8,9};
    m['d']={1,2,3,6,7,8};
    m['e']={1,2,3,6,7};
    m['f']={1,2,3,6};
    m['g']={1,2,3};
    m['a']={1,2};
    m['b']={1};
    m['C']={2};
    m['D']={0,1,2,3,6,7,8};
    m['E']={0,1,2,3,6,7};
    m['F']={0,1,2,3,6};
    m['G']={0,1,2,3};
    m['A']={0,1,2};
    m['B']={0,1};

    int n;
    cin >> n;
    cin.ignore(1024, '\n');
    while(n--){
        vector<int> v;
        for(int i=0;i<10;i++){
            v.push_back(0);
        }
      
        string l;
        getline(cin,l);
        for(int i=0;i<l.length();i++){
            for(int j=0;j<m[l[i]].size();j++){
                int check=0;
                if(i>0){
                    for(int k=0;k<m[l[i-1]].size();k++){
                        if(m[l[i-1]][k]==m[l[i]][j]){check++;}
                    }
                }
                if(check==0){v[m[l[i]][j]]++;}
            }
        }
        for(int i=0;i<10;i++){
            cout << v.at(i) << (i==9? "":" ");
        }
        cout << (n==0? "":"\n");
    }
}

/*
• c: finger 2∼4, 7∼10
• d: finger 2∼4, 7∼9
• e: finger 2∼4, 7, 8
• f: finger 2∼4, 7
• g: finger 2∼4
• a: finger 2, 3
• b: finger 2
• C: finger 3
• D: finger 1∼4, 7∼9
• E: finger 1∼4, 7, 8
• F: finger 1∼4, 7
• G: finger 1∼4
• A: finger 1∼3
• B: finger 1∼2
*/


/*
0 1 1 1 0 0 1 1 1 1
1 1 1 1 0 0 1 1 1 0
1 8 10 2 0 0 2 2 1 0
*/