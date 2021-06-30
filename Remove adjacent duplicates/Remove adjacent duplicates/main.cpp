#include <iostream>
#include<vector>
using namespace std;
//  main.cpp
//  Remove adjacent duplicates
//
//  Created by Rhulani Hlungwani on 2021/06/30.
//
string removeDuplicates(string s) {
    int size = s.length();
    char prev;
    string sol;
    vector <char> arr (s.begin(), s.end());
    prev = *arr.begin();
    int i =0;

    while(i <size-1)
       {
           if(arr[i] == arr[i+1] )
           {
            arr.erase(arr.begin() + (i+1));
           arr.erase(arr.begin() + i);
              size-=2;
               i=0;
           }
           else
           {
               i++;
           }

       }
    for(auto j = arr.begin(); j!=arr.end(); ++j)
    {
        sol+=*j;
    }
       return sol;
   }

int main() {

    string v = "oojlllktntdleoocjfmaqpiblcopebqccdriflcretcnrmsjemomapdgtmkenaklrjsqaasbtrabtbgkakialdmdccdnkpcctanjfhnqojafqpmtrtaqgoleoehqiogoilrnhdqnacseeakehsqeqqdlmgiekoteqaosgmprdrtjgdnefqtqsjjnqqfjnsaqonegptnibcjsojiejfbqhkrqsbokiktrqtdajphfaboknnelnbcfiggqogtnesftafldfaragkirklfohatfebneddabdlnttrqfsoooiijdohoqbjofldkrtekoqafjgbpbrcthkqqqegqsmbbjkfitmapqqnkadktpqlmsqcftekspimloqkqamjjhrkhiliihsjmtcrfcpocqnkmkjpohrjpthiogktsmmiqpidseatgqdlmkognkqrbeboegmgbmbfhkccgbmdcikkmtcncjkqhotrqhqgosolkdlhekojqekmotkhebjesjophgeppgjdjpjsabojftoreqrbekcpefrkjkdngifdmfssohfmajeiimqsglfgdoacfmqpkadfochfcegaddohmnoooaficqabetatlkceeofrneoetrfaqbpnhgaljinrkiihnstnndgtftebeccmokaekjfjiejfkhsqienchapdmgajbllhdhiksaddmntnjdtfrbiktpmmjhdpptjemlqtaehbhtiohmditdjgiefpqpelbhenaqdlaqotdlghhtkdrddheebajsmjqsemsnnhonkqpheaciqdjbtcqlchbbscifasrfdcjkqroihjeceakcqclileosgfrtogokqmbeiottgtabarfmoqottokprhkrrsoljkagsllskfhkpeaigdrjekispcqsqqgmnhmboqdpgdfjadrhdllgmeergekpbjebqhsramiekkjjepplomrnemgkafnecjgotsbjlqndpnelmlffcoldoojlllktntdleoocjfmaqpiblcopebqccdriflcretcnrmsjemomapdgtmkenaklrjsqaasbtrabtbgkakialdmdccdnkpcctanjfhnqojafqpmtrtaqgoleoehqiogoilrnhdqnacseeakehsqeqqdlmgiekoteqaosgmprdrtjgdnefqtqsjjnqqfjnsaqonegptnibcjsojiejfbqhkrqsbokiktrqtdajphfaboknnelnbcfiggqogtnesftafldfaragkirklfohatfebneddabdlnttrqfsoooiijdohoqbjofldkrtekoqafjgbpbrcthkqqqegqsmbbjkfitmapqqnkadktpqlmsqcftekspimloqkqamjjhrkhiliihsjmtcrfcpocqnkmkjpohrjpthiogktsmmiqpidseatgqdlmkognkqrbeboegmgbmbfhkccgbmdcikkmtcncjkqhotrqhqgosolkdlhekojqekmotkhebjesjophgeppgjdjpjsabojftoreqrbekcpefrkjkdngifdmfssohfmajeiimqsglfgdoacfmqpkadfochfcegaddohmnoooaficqabetatlkceeofrneoetrfaqbpnhgaljinrkiihnstnndgtftebeccmokaekjfjiejfkhsqienchapdmgajbllhdhiksaddmntnjdtfrbiktpmmjhdpptjemlqtaehbhtiohmditdjgiefpqpelbhenaqdlaqotdlghhtkdrddheebajsmjqsemsnnhonkqpheaciqdjbtcqlchbbscifasrfdcjkqroihjeceakcqclileosgfrtogokqmbeiottgtabarfmoqottokprhkrrsoljkagsllskfhkpeaigdrjekispcqsqqgmnhmboqdpgdfjadrhdllgmeergekpbjebqhsramiekkjjepplomrnemgkafnecjgotsbjlqndpnelmlffcold";
   cout<<removeDuplicates(v)<<endl;
    return 0;
}
