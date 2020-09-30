#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    int n=0;
    char a='A';
    int ch[26];
string str="FCHJTIPK ZWZIPHZ BEAA GDIC PZZPDIGEAAW ILC ZPJEKEIP FEIPQCKGPZ. IUP BGKZI, EDS HCZI CXVGCTZ, GZ IUEI CB IUP SPZNICJ FCHJTIPK. LUPD WCT ZEW “FCHJTIPK” IC ZCHPCDP, IUGZ GZ IUP HEFUGDP IUEI TZTEAAW FCHPZ IC UPK HGDS. IUP ZPFCDS IWJP CB FCHJTIPK GZ IUP PHXPSSPS FCHJTIPK, E FCHJTIPK IUEI GZ GDIPQKEIPS GDIC EDCIUPK ZWZIPH BCK IUP JTKJCZPZ CB FCDIKCA EDS/CK HCDGICKGDQ. PHXPSSPS FCHJTIPKZ EKP BEK HCKP DTHPKCTZ IUED SPZNICJ ZWZIPHZ, XTI BEK APZZ CXVGCTZ. EZN IUP EVPKEQP JPKZCD UCL HEDW FCHJTIPKZ UP UEZ GD UGZ UCHP, EDS UP HGQUI KPJAW IUEI UP UEZ CDP CK ILC. GD BEFI, UP HEW UEVP 30 CK HCKP, UGSSPD GDZGSP UGZ IVZ, VFKZ, SVS JAEWPKZ, KPHCIP FCDIKCAZ, LEZUGDQ HEFUGDPZ, FPAA JUCDPZ, EGK FCDSGIGCDPKZ, QEHP FCDZCAPZ, CVPDZ, ICWZ, EDS E UCZI CB CIUPK SPVGFPZ. GD IUGZ FUEJIPK, LP’AA ACCN EI FCHJTIPK EKFUGIPFITKP GD QPDPKEA. IUGZ GZ EJJAGFEXAP IC XCIU PHXPSSPS EDS SPZNICJ FCHJTIPKZ, XPFETZP IUP JKGHEKW SGBBPKPDFP XPILPPD ED PHXPSSPS HEFUGDP EDS E QPDPKEA-JTKJCZP FCHJTIPK GZ GIZ EJJAGFEIGCD. IUP XEZGF JKGDFGJAPZ CB CJPKEIGCD EDS IUP TDSPKAWGDQ EKFUGIPFITKPZ EKP BTDSEHPDIEAAW IUP ZEHP. XCIU UEVP E JKCFPZZCK, HPHCKW, EDS CBIPD ZPVPKEA BCKHZ CB GDJTI EDS CTIJTI. IUP JKGHEKW SGBBPKPDFP AGPZ GD IUPGK GDIPDSPS TZP, EDS IUGZ GZ KPBAPFIPS GD IUP ZWZIPH SPZGQD EDS IUPGK ZCBILEKP. SPZNICJ FCHJTIPKZ FED KTD E VEKGPIW CB EJJAGFEIGCD JKCQKEHZ, LGIU ZWZIPH KPZCTKFPZ CKFUPZIKEIPS XW ED CJPKEIGDQ ZWZIPH. XW KTDDGDQ SGBBPKPDI EJJAGFEIGCD JKCQKEHZ, IUP BTDFIGCDEAGIW CB IUP SPZNICJ FCHJTIPK GZ FUEDQPS. CDP HCHPDI, GI HEW XP TZPS EZ E LCKS JKCFPZZCK; IUP DPYI GI GZ ED HJ3 JAEWPK CK E SEIEXEZP FAGPDI. LUGFU ZCBILEKP GZ ACESPS EDS KTD GZ TDSPK TZPK FCDIKCA.";
//    cout<<str.size()<<endl;
//    for (int i=0;i<str.size();i++){
//        if (str[i]=='.') n++;
    for (int q=0;q<26;q++){
        for (int i=0;i<str.size();i++)  //-308 (" " "," ".")
            {
            if (str[i]==a) n++;
            }
        ch[q]=n;
    cout<<a<<" "<<(n*1.0/(str.size()-308))*100<<" "<<n<<endl;
        n=0;
    a++;
    }
    for (int i=0;i<26;i++){
        cout<<ch[i]<<"\t";
    }
    cout<<endl;
    for (int i=0;i<str.size();i++)
        {
        if      (str[i]=='P') str[i]='E';//Часто встречается P
        else if (str[i]=='I') str[i]='T';//Тоже самое с I
        else if (str[i]=='E') str[i]='A';//Искал подходящую шифровку ARE
        else if (str[i]=='K') str[i]='R';
        else if (str[i]=='D') str[i]='N';
        else if (str[i]=='S') str[i]='D';
        else if (str[i]=='U') str[i]='H';
        else if (str[i]=='J') str[i]='P';
        else if (str[i]=='H') str[i]='M';
        else if (str[i]=='F') str[i]='C';
        else if (str[i]=='C') str[i]='O';
        else if (str[i]=='Z') str[i]='S';
        else if (str[i]=='A') str[i]='L';
        else if (str[i]=='W') str[i]='Y';
        else if (str[i]=='G') str[i]='I';
        else if (str[i]=='B') str[i]='F';
        else if (str[i]=='L') str[i]='W';
        else if (str[i]=='Q') str[i]='G';
        else if (str[i]=='T') str[i]='U';
        else if (str[i]=='W') str[i]='A';
        else if (str[i]=='Y') str[i]='X';
        else if (str[i]=='N') str[i]='K';
        else if (str[i]=='T') str[i]='W';
        }
    cout<<str<<endl;
        return 0;
    }
