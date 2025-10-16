#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
 float tax,total;
 int j=0,n=0,quantity,sub=0,qt;
 char c[5]="y",p[10];

typedef struct
{	char name[40];
    int price,q;}menu;

menu dishes[5]={          
        {"Sandwich",120},
        {"Italian",180},
        {"Burger n' Fries",140},
        {"Bevrages",110},
        {"Dessert",150},
};

menu sandwich[10]={          
    {"Grilled Cheese",120},
    {"Chicken Club*",150},
    {"Veggie Delight",130},
    {"BLT Sandwich*",160},
    {"Cheese Melt",170},
    {"Paneer Tikka",140},
    {"Mushroom Mayo",155},
    {"Cheese Corn",135},
    {"BBQ Chicken*",165},
    {"Italian Herb",145}
};

menu italian[20]={          
    {"Alfredo Pasta",200},
{"Penne Arrabiata",190},
{"Mac and Cheese",220},
{"Spaghetti Bolognese*",230},
{"Vegetable Pasta",180},
{"Chicken Pasta*",210},
{"Four Cheese Pasta",240},
{"Pesto Pasta",200},
{"Creamy Garlic Pasta",210},
{"Tomato Basil Pasta",185},
{"Margherita Pizza",220},
{"Pepperoni Pizza*",280},
{"Veggie Supreme",260},
{"Cheese Burst",300},
{"BBQ Chicken Pizza*",290},
{"Paneer Makhani Pizza",270},
{"Farmhouse Pizza",260},
{"Mexican Delight Pizza",275},
{"Chicken Tandoori Pizza*",295},
{"Classic Cheese Pizza",230},
};

menu Burger[15]={          
{"Classic Veg Burger",120},
{"Cheese Burger",140},
{"Chicken Burger*",160},
{"Double Patty Burger",190}, // veg or contains meat? Need confirmation
{"Crispy Paneer Burger",150},
{"BBQ Paneer Burger",200},
{"Spicy Bean Burger",145},
{"Peri Peri Burger",155}, // default veg unless specified chicken
{"Mushroom Melt Burger",165},
{"Veggie Stack Burger",175},
{"Classic Fries",80},
{"Peri Peri Fries",95},
{"Cheese Fries",110},
{"Masala Fries",90},
{"Curly Fries",105},

};

menu Bevrages[10]={          
    {"Classic Cold Coffee",130},
    {"Iced Americano",120},
    {"Mocha Frappe",150},
    {"Chocolate Milkshake",160},
    {"Strawberry Milkshake",160},
    {"Mango Smoothie",150},
    {"Banana Smoothie",140},
    {"Coca Cola",50},
    {"Lemon Iced Tea",90},
    {"Virgin Mojito",120}
};

menu dessert[20]={          
    {"Chocolate Brownie",120},
    {"Red Velvet Pastry",150},
    {"Cheesecake Slice",180},
    {"Gulab Jamun",90},
    {"Rasgulla",80},
    {"Tiramisu Cup",170},
    {"Choco Lava Cake",160},
    {"Ice Cream Sundae",140},
    {"Caramel Custard",130},
    {"Hot Jalebi",100},
    {"Classic Maple Waffle",150},
    {"Nutella Waffle",180},
    {"Blueberry Waffle",170},
    {"Belgian Chocolate Waffle",190},
    {"Strawberry Cream Waffle",175},
    {"Oreo Crunch Waffle",185},
    {"Caramel Drizzle Waffle",180},
    {"Peanut Butter Waffle",175},
    {"Honey Butter Waffle",160},
    {"Banana Walnut Waffle",170}
};

menu bill[20]={};

menu serial[5]={{"A"},{"B"},{"C"},{"D"},{"E"},};

void clean(){
    #if _WIN32 || _WIN64
        system("cls");
    #elif __linux__ || __unix__
        system("clear");
    #endif 
}

void PrintBill()
{   int k;
     printf("\n\t\t\t\t\tCubes n' Dices Cafe\n\n"); 
    printf("========================================================================================\n");
    printf("  Sr. No.    Dish                             Rate       Quantity      Price\n");
    printf("========================================================================================\n");

    for(k = 0; k < n; k++) {
        printf("  %-10d %-32s Rs.%3d     %8d      Rs.%4d\n",
               k+1,
               bill[k].name,
               bill[k].price,
               bill[k].q,
               bill[k].q * bill[k].price);
    }

    printf("----------------------------------------------------------------------------------------\n");
    printf("%55s  %8d      Rs.%4d\n", "Sub Total", qt, sub);
    printf("%55s \t       Rs.  %4.1f\n", "CGST @2.5%", sub * 0.025);
    printf("%55s \t       Rs.  %4.1f\n", "SGST @2.5%", sub * 0.025);
    printf("----------------------------------------------------------------------------------------\n");
    printf("%55s \t       Rs.%6.1f\n", "Grand Total", total);
    printf("----------------------------------------------------------------------------------------\n");
    
    printf("\n\n\n\n\n\n");
}

int clear(int n)
{   int i;
    
    for(i=n;i>0;i--)
    {printf("\033[A"); 
    printf("\033[2K");}

    return 0;
}

int calc()
{   int i;

    for(i=0;i<n;i++)
    {
        sub=sub+bill[i].q*bill[i].price;
        qt=qt+bill[i].q;
    }
    total=1.05*sub;
    

}

int main()
{   clean();

    char choice[5];
    int sandno=10,itano=20,burno=15,bevno=10,desno=20,i;

    printf("\t\t\t\t\t\t\t\t\t\t\tCubes n' Dices Cafe\n\n\n");
    
    printf("\t\t\t\t\t\t\t\t\t\t\t  Main Menu\n\n ");

    
        printf(" %-1S. %-21s  %4s",serial[0],dishes[0].name,"Rs. "); 
        printf("  %-1S. %-27s%2s",serial[1],dishes[1].name,"Rs. ");
        printf("  %-1S. %-23s  %2s",serial[2],dishes[2].name,"Rs. ");
        printf("  %-1S. %-23s  %2s",serial[3],dishes[3].name,"Rs. ");
        printf("  %-1S. %-24s  %2s\n\n",serial[4],dishes[4].name,"Rs. ");
    
    
     
     for (i=0;i<25;i++)
    {  
       
        if(i<sandno) {printf(" %2d. %-22s %3d ",i+1,sandwich[i].name,sandwich[i].price);}
        else{   printf("%-33c")," ";}

        if(i<itano) {printf(" %2d. %-26s %3d ",i+1,italian[i].name,italian[i].price);}
        else{   printf("%-33c")," ";}

        if(i<burno) {printf(" %2d. %-24s %3d ",i+1,Burger[i].name,Burger[i].price);}
        else{   printf("%-35c")," ";}

        if(i<bevno) {printf(" %2d. %-24s %3d ",i+1,Bevrages[i].name,Bevrages[i].price);}
        else{   printf("%-35c")," ";}

        if(i<desno) {printf(" %2d. %-25s %3d ",i+1,dessert[i].name,dessert[i].price);}
        else{   printf("%-33c")," ";}

        printf("\n");
    };

   while  (strcmp(c,"y")==0||strcmp(c,"Y")==0)                        
                          
   {    printf("\nEnter your choice like A3 B4 etc\n");
        printf("\nEnter your choice  : ");
        scanf("%s",choice);
        printf("\nEnter the quantity : ");
        scanf("%d", &quantity);

        n++;

        i=atoi(&choice[1]);

        switch (choice[0])
        {
        case 'a':
        case 'A':
            bill[j]=sandwich[i-1];
            bill[j].q=quantity;
            break;
        case 'b':
        case 'B':
            bill[j]=italian[i-1];
            bill[j].q=quantity;
            break;
        case 'c':
        case 'C':
            bill[j]=Burger[i-1];
            bill[j].q=quantity;
            break;
        case 'd':
        case 'D':
            bill[j]=Bevrages[i-1];
            bill[j].q=quantity;
            break;
        case 'e':
        case 'E':
            bill[j]=dessert[i-1];
            bill[j].q=quantity;
            break;
        default:
            printf("Invalid Choice");
            break;

        };
        
        printf("You Chose %s\n",bill[j].name);
        j++;
        printf("Enter Y To Select More Dishes And N To Checkout :");
        scanf("%s", &c);
        clear(8);

   }

    printf("Enter P For Parcel And D For Dine-In :");
    scanf("%s", &p);

    if(strcmp(p,"p")==0||strcmp(p,"P")==0)      {strcpy(p,"Parcel");}

    else if(strcmp(p,"d")==0||strcmp(p,"D")==0) {strcpy(p,"Parcel");}

    else                                        {printf("Invalid Choice");}

    getchar();
    clean();
    calc();
    PrintBill();
   
   return 0;

}
