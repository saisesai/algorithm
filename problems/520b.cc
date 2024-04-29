#include <queue>
#include <memory>
#include <iostream>

using namespace std;

struct Node : public enable_shared_from_this<Node> {
    int step;
    int value;
    shared_ptr<Node> childDiv2 = nullptr;
    shared_ptr<Node> childPlus1 = nullptr;

    Node(int value, int step) {
        this->step = step;
        this->value = value;
    }

    int find(int target) const {
        if (value == target) return step;
        queue<shared_ptr<const Node>> q;
        q.push(shared_from_this());
        while (!q.empty()) {
            auto &f = q.front();
            if (f->value == target) return value;
            if (f->childDiv2 != nullptr) q.push(f->childDiv2);
            if (f->childPlus1 != nullptr) q.push(f->childPlus1);
            q.pop();
        }
        return -1;
    }
};


int main() {
    int n, m;
    cin >> n >> m;

    int ans(0);
    queue<shared_ptr<Node>> q;
    shared_ptr<Node> root = make_shared<Node>(m, 0);
    q.push(root);
    while (!q.empty()) {
        if (q.front()->value == n) {
            ans = q.front()->step;
            break;
        }
        if (q.front()->value % 2 == 0) {
            int div2 = q.front()->value / 2;
            if (root->find(div2) == -1) {
                auto node = make_shared<Node>(div2, q.front()->step + 1);
                q.front()->childDiv2 = node;
                q.push(node);
            }
        }
        int plus1 = q.front()->value + 1;
        if (root->find(plus1) == -1) {
            auto node = make_shared<Node>(plus1, q.front()->step + 1);
            q.front()->childPlus1 = node;
            q.push(node);
        }
        q.pop();
    }

    cout << ans << endl;

    return 0;
}
