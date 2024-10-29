#include <graphics.h>
#include <conio.h> 

// Function to draw a cloud using 4 overlapping ellipses
void drawCloud(int x, int y) {
    setcolor(WHITE); // Set color for clouds
    setfillstyle(SOLID_FILL, WHITE); 

    fillellipse(x, y, 40, 20);        // Main 
    fillellipse(x - 30, y + 10, 30, 15); // Left 
    fillellipse(x + 30, y + 10, 30, 15); // Right
    fillellipse(x, y + 20, 35, 15);      // Bottom 
}

int main() {
    initwindow(850, 600, "RAINBOW", 150, 50);
    
    setbkcolor(COLOR(173, 216, 230)); // Light blue RGB
    cleardevice(); 

    int textX = 350; // X position for text
    int textY = 5;  // Y position for text

    // Display the title at the top
    setcolor(BLACK); // Set color for the text
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3); // Set text style
    outtextxy(textX, textY, "Rainbow Animation");

    // Draw clouds in the background
    drawCloud(50, 80);
	drawCloud(100, 100); 
    drawCloud(230, 50);
	drawCloud(300, 150); 
    drawCloud(600, 80);  
    drawCloud(800, 120); 
    drawCloud(500, 50);  
    drawCloud(800, 120);
	drawCloud(750, 180); 

    for (int i = 1; i < 180; i++) {
        for (int j = 1; j <= 48; j++) {
            setcolor(COLOR(148, 0, 211)); // Color for the first arc
            arc(400, 450, 0, 1 + i, 50 + j);
            outtextxy(350, 370, "VIOLET");
            
            setcolor(3); // Color for the second arc (Orange)
            arc(400, 450, 0, 1 + i, 100 + j);
            outtextxy(390, 320, "INDIGO");
            
            setcolor(BLUE); // Color for the third arc
            arc(400, 450, 0, 1 + i, 150 + j);
            outtextxy(430, 280, "BLUE");
            
            setcolor(GREEN); // Color for the fourth arc
            arc(400, 450, 0, 1 + i, 200 + j);
            outtextxy(470, 240, "GREEN");
            
            setcolor(YELLOW); // Color for the fifth arc
            arc(400, 450, 0, 1 + i, 250 + j);
            outtextxy(510, 210, "YELLOW");
            
            setcolor(COLOR(255, 165, 0)); // Set color to Orange
            arc(400, 450, 0, 1 + i, 300 + j);
            outtextxy(550, 170, "ORANGE");
            
            setcolor(RED); // Color for the last arc
            arc(400, 450, 0, 1 + i, 350 + j);
            outtextxy(580, 120, "RED");
        }
        delay(10); 
    }

    getch();
    closegraph();
    return 0;
}

