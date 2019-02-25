#include <iostream>

using namespace std;

int main()
{
    int num = 0, i;
    int res = 0, n = 0;
    float sum, result;
    cout<<"enter size:"<<"\n";
    cin>>num;

    float *arrayA = new float[num];

    for(i = 0;i<num;i++){
        cout<<"arr"<<"["<<i<<"]: ";
        cin>>arrayA[i];
    }

    cout<<"enter n:"<<"\n";
    cin>>n;

    for(i = 0;i<num;i++){
        sum = arrayA[i];
        while(res<n){
            if(i>0&&(i-res)>0){
                sum+=arrayA[i-res];
                res++;

            }else if(i<num&&(i+res)<num){
                sum+=arrayA[i+res];
                res++;

            }else if(i<0&&(i-res)<0){
                sum+=arrayA[i+n];
                res++;

            }else if(i>num&&(i+res)>num){

                sum+=arrayA[i-res];
                res++;
            }

        }
        result = sum/res;
        cout<<result<<"\n";
    }

    for(i = 0;i<num;i++){
        cout<<arrayA[i];
    }
    return 0;
}
