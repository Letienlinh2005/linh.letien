#include <bits/stdc++.h>
using namespace std;
// Hàm tạo constructor : Hàm khởi tạo
class SinhVien{
    private:
        string id, name, old;
        double gpa;
    public:
        SinhVien();
        SinhVien(string, string, string, double);
        void nhap();
        void in();
        ~SinhVien(); // Hàm hủy
};
// Khai báo sinh viên không có tham số (Bắt buộc)
SinhVien::SinhVien(){
    id = name = old = "";
    gpa = 0;
}
//Khai báo sinh viên có tham số id, name, old, gpa
SinhVien::SinhVien(string id, string name, string old, double gpa){
    // cout << "hàm khởi tạo có tham số được gọi";
    this -> id = id;
    this -> name = name;
    this -> old = old;
    this -> gpa = gpa;
}
SinhVien::~SinhVien(){

}
void SinhVien::nhap(){
    cout << "Nhập id: ";
    cin >> this -> id;
    cin.ignore();
    cout << "Nhập tên: ";
    getline(cin, this -> name);
    cout << "Nhập tuổi: ";
    cin >> this -> old;
    cout << "Nhập điểm: ";
    cin >> this -> gpa;

}
void SinhVien::in(){
    cout << this -> id << " " << this -> name << " " << this -> old << " " << this -> gpa;
}
int main(){
    cout << "Nhập số sinh viên: ";
    int n;
    cin >> n;
    SinhVien a[100];
    
    for(int i=0; i<n; i++){
        cout << "Nhập thông tin cho sinh viên thứ " << i+1 << endl;
        a[i].nhap();
    }
    cout << "MSV" << "  " << "Tên" << " " << "Tuổi" << " " << "Điểm" << endl;
    for(int i=0; i<n; i++){
        a[i].in(); cout << "\n";
    }
    return 0;
}