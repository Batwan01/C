#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void delay(unsigned int milliseconds) {
    Sleep(milliseconds);
}

void drawHeartFrame(int frame) {
    switch (frame) {
    case 0:
        printf("      **         **      \n");
        printf("   **    **   **    **   \n");
        printf(" **        **        ** \n");
        printf("**                      **\n");
        printf("**                      **\n");
        printf(" **                    ** \n");
        printf("   **                **   \n");
        printf("      **            **    \n");
        printf("         **      **       \n");
        printf("            ****          \n");
        printf("              **           \n");
        break;
    case 1:
        printf("      **         **      \n");
        printf("   **                  **\n");
        printf(" **                      ** \n");
        printf("**                        **\n");
        printf("**                        **\n");
        printf(" **                      ** \n");
        printf("   **                  **   \n");
        printf("      **            **      \n");
        printf("         **      **         \n");
        printf("            ****            \n");
        printf("              **             \n");
        break;
    case 2:
        printf("      **                  \n");
        printf("   **    **                \n");
        printf(" **        **                \n");
        printf("**          **                \n");
        printf("**          **                \n");
        printf(" **        **                \n");
        printf("   **    **                \n");
        printf("      **                  \n");
        printf("         **                \n");
        printf("            ****            \n");
        printf("              **             \n");
        break;
    case 3:
        printf("                         \n");
        printf("   **    **                \n");
        printf(" **        **                \n");
        printf("**          **                \n");
        printf("**          **                \n");
        printf(" **        **                \n");
        printf("   **    **                \n");
        printf("                         \n");
        printf("         **                \n");
        printf("            ****            \n");
        printf("              **             \n");
        break;
    case 4:
        printf("                         \n");
        printf("                         \n");
        printf(" **        **                \n");
        printf("**          **                \n");
        printf("**          **                \n");
        printf(" **        **                \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("            ****            \n");
        printf("              **             \n");
        break;
    case 5:
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("**          **                \n");
        printf("**          **                \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("            ****            \n");
        printf("              **             \n");
        break;
    case 6:
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("                         \n");
        printf("            ****            \n");
        printf("              **             \n");
        break;
    }
}

int main() {
    int i, frame;
    for (i = 0; i < 5; i++) {
        for (frame = 0; frame < 7; frame++) {
            system("cls"); // Clear console

            // Draw heart frame
            drawHeartFrame(frame);

            delay(200); // Delay in milliseconds
        }
    }

    return 0;
}
