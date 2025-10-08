#include<cstdio>
#include<algorithm>

int main(int argc, char** argv) 
{
    int A1 = 0;
    int A2 = 0;
    int B1 = 0;
    int B2 = 0;
    int C1 = 0;
    int C2 = 0;

    scanf_s("%d %d %d", &A1, &B1, &C1);
    scanf_s("%d %d %d", &A2, &B2, &C2);

    int box1[3] = { A1, B1, C1 };
    int box2[3] = { A2, B2, C2 };

    std::sort(box1, box1 + 3);
    std::sort(box2, box2 + 3);
    if (box1[0] == box2[0] && box1[1] == box2[1] && box1[2] == box2[2]) {
        printf("Boxes are equal\n");
        return 0;
    }

    bool first_in_second = (box1[0] <= box2[0] && box1[1] <= box2[1] && box1[2] <= box2[2]) &&
        (box1[0] < box2[0] || box1[1] < box2[1] || box1[2] < box2[2]);

    bool second_in_first = (box2[0] <= box1[0] && box2[1] <= box1[1] && box2[2] <= box1[2]) &&
        (box2[0] < box1[0] || box2[1] < box1[1] || box2[2] < box1[2]);

    if (first_in_second) {
        printf("The first box is smaller than the second one\n");
    }
    else if (second_in_first) {
        printf("The first box is larger than the second one\n");
    }
    else {
        printf("Boxes are incomparable\n");
    }

    return 0;
}