#include <iostream>
using namespace std;

struct node {
    int data;
    node *next; // Con trỏ để liên kết tới node tiếp theo
};

// Hàm tạo một node mới
node* makeNode(int x) {
    node *newNode = new node(); // Cấp phát bộ nhớ cho một node mới
    newNode->data = x;          // Gán giá trị x cho data của node mới
    newNode->next = NULL;       // Đặt con trỏ next là NULL (vì hiện tại nó là node cuối)
    return newNode;             // Trả về node mới được tạo
}

// Hàm duyệt qua danh sách liên kết và in ra các phần tử
void duyet(node *head) {
    while (head != NULL) {
        cout << head->data << " "; // In ra dữ liệu của node hiện tại
        head = head->next;         // Chuyển đến node tiếp theo
    }
    cout << endl;
}

// Hàm đếm số lượng node trong danh sách liên kết
int count(node *head) {
    int dem = 0;
    while (head != NULL) {
        ++dem;             // Tăng biến đếm khi duyệt qua mỗi node
        head = head->next; // Chuyển đến node tiếp theo
    }
    return dem;
}

int main() {
    // Tạo các node thủ công cho ví dụ
    node *head = makeNode(1);     // Node đầu tiên với dữ liệu là 1
    head->next = makeNode(2);     // Node thứ hai với dữ liệu là 2
    head->next->next = makeNode(3); // Node thứ ba với dữ liệu là 3

    // Duyệt danh sách liên kết và in ra các phần tử
    cout << "Linked list elements: ";
    duyet(head);

    // Đếm số lượng node trong danh sách liên kết
    cout << "Number of nodes: " << count(head) << endl;

    return 0;
}
