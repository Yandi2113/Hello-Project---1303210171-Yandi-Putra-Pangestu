#include "pembimbing.h"

int main()
{
    listDosen LD;
    listMahasiswa LM;
    listRelasi LR;

    createListDosen(LD);
    createListMahasiswa(LM);
    createListRelasi(LR);

    int pilihan = 1009;
    string namaDosen, namaMahasiswa, YN;
    adrD pD;
    adrM pM;
    adrR pR;

    while(pilihan!=0){
        pilihan = menu();
        switch(pilihan)
        {
        case 0:
            cout<<"Program berhenti"<<endl;
            break;
        case 1:
            cout<<"Masukkan nama mahasiswa : ";
            cin>>namaMahasiswa;
            pM = alokasiMahasiswa(namaMahasiswa, 0);
            insertFirstMahasiswa(LM, pM);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 2:
            cout<<"Masukkan nama dosen : ";
            cin>>namaDosen;
            pD = alokasiDosen(namaDosen, 0);
            insertFirstDosen(LD, pD);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 3:
            if(first(LD)==nil){
                cout<<"List Dosen Kosong!"<<endl;
                break;
            }
            if(first(LM)==nil){
                cout<<"List Mahasiswa Kosong!"<<endl;
                break;
            }
            cout<<"Masukkan nama mahasiswa : ";
            cin>>namaMahasiswa;
            cout<<"Masukkan nama dosen : ";
            cin>>namaDosen;
            pM = findMahasiswa(LM, namaMahasiswa);
            pD = findDosen(LD, namaDosen);
            pR = alokasiRelasi(pM, pD);
            insertFirstRelasi(LR, pR);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 4:
            if(first(LD)==nil){
                cout<<"List Dosen Kosong!"<<endl;
                break;
            }
            if(first(LM)==nil){
                cout<<"List Mahasiswa Kosong!"<<endl;
                break;
            }
            cout<<"Masukkan nama dosen : ";
            cin>>namaDosen;
            showBimbinganDosen(LD, LM, LR, namaDosen);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 5:
            if(first(LD)==nil){
                cout<<"List Dosen Kosong!"<<endl;
                break;
            }
            if(first(LM)==nil){
                cout<<"List Mahasiswa Kosong!"<<endl;
                break;
            }
            cout<<"Masukkan nama dosen : ";
            cin>>namaDosen;
            deleteDosenandRelasi(LD, LR, namaDosen, pD);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 6:
            if(first(LD)==nil){
                cout<<"List Dosen Kosong!"<<endl;
                break;
            }
            if(first(LM)==nil){
                cout<<"List Mahasiswa Kosong!"<<endl;
                break;
            }
            cout<<"Masukkan nama dosen : ";
            cin>>namaDosen;
            cout<<"Masukkan nama mahasiswa : ";
            cin>>namaMahasiswa;
            disconnectRelasi(LR, LD, LM, namaDosen, namaMahasiswa);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 7:
            if(first(LD)==nil){
                cout<<"List Dosen Kosong!"<<endl;
                break;
            }
            if(first(LM)==nil){
                cout<<"List Mahasiswa Kosong!"<<endl;
                break;
            }
            showAll(LD,LM,LR);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 8:
            if(first(LD)==nil){
                cout<<"List Dosen Kosong!"<<endl;
                break;
            }
            if(first(LM)==nil){
                cout<<"List Mahasiswa Kosong!"<<endl;
                break;
            }
            showMostBimbingan(LD, LM, LR);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        case 9:
            if(first(LD)==nil){
                cout<<"List Dosen Kosong!"<<endl;
                break;
            }
            if(first(LM)==nil){
                cout<<"List Mahasiswa Kosong!"<<endl;
                break;
            }
            showBimbinganTunggal(LD, LM, LR);
            cout<<"Kembali ke menu? (Y/N) : ";
            cin>>YN;
            if(YN=="Y"||YN=="y"){
                break;
            }else{
                return 0;
            }
        default:
            cout<<"Pilihan tidak tersedia"<<endl;
            break;
        }
    }
    return 0;
}
