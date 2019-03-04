#include <iostream>
#include <stack>


using namespace std;

int main()
{
    string str = ")(";
    stack<char> stk;

    stk.push(str[0]);

    for(int i = 1;i<str.length();i++){
        if(str[i] == '('){
            stk.push(str[i]);
        }else if(str[i] == ')'){
           stk.pop();
        }

         if(str[i] == '<'){
            stk.push(str[i]);
        }else if(str[i] == '>'){
           stk.pop();
        }

         if(str[i] == '{'){
            stk.push(str[i]);
        }else if(str[i] == '}'){
           stk.pop();
        }

         if(str[i] == '['){
            stk.push(str[i]);
        }else if(str[i] == ']'){
           stk.pop();
        }
    }

    if(stk.empty()){
        cout<<"bracket all right";
    }else{
        cout<<"bracket no right";
    }
    return 0;
}
