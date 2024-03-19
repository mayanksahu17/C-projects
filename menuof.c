#include <stdio.h>
int Bill, op1;
int v;
void f1_20(){
 int q;
  printf("\n\t\t\t\t\t\tEnter the Quantityof item:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour order is selected");
        Bill += (q * 20);
}
void f1_120(){
 int q;
  printf("\n\t\t\t\t\t\tEnter the Quantity of item:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour order is selected");
        Bill += (q * 120);
}
void f1_100(){
 int q;
  printf("\n\t\t\t\t\t\tEnter the Quantity of item:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour order is selected");
        Bill += (q * 100);
}
void Snacks()
{
    int q;

  //  printf("\n\n\t\t\t\t\t\t.Appetizers/Snacks:\n\n");
    printf("\t\t\t\t\t\t1.Samosa: Deep-fried pastry filled with spiced potatoes and peas.\n\n");
    printf("\t\t\t\t\t\t2.Pakora/Bhajji: Fritters made from various vegetables, such as onion, potato, or spinach, \n\n");
    printf("\t\t\t\t\t\t3.Papadum: Thin, crispy lentil wafers served with chutneys or as an accompaniment to a meal.\n\n");
    printf("\t\t\t\t\t\t4.Tikki: Pan-fried potato patties served with chutneys and yogurt..\n\n");
    printf("\t\t\t\t\t\tenter your choice: ");
    scanf("%d", &op1);
    switch (op1)
    {
    case 1:
        printf("\n\t\t\t\t\t\tEnter the Quantity of item:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour Samosa is coming in 5 minuts");
        Bill += (q * 20);
        break;
    case 2:
        printf("\n\t\t\t\t\t\tEnter the Quantity of item:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour Pakora/Bhajji is coming in 5 minuts");
        Bill += (q * 20);

        break;
    case 3:
        printf("\n\t\t\t\t\t\tEnter the Quantity of item:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour Papadum is coming in 5 minuts");
        Bill += (q * 20);

        break;
    case 4:
        printf("\n\t\t\t\t\t\tEnter the Quantity of item:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour Tikki is coming in 5 minuts");
        Bill += (q * 20);
        break;

    default:
        printf("\n\t\t\t\t\t\tyou entered wrong option");
        break;
    }
    printf("\n\t\t\t\t\t\tDO you want more these items[0\\1]");
    scanf("%d", &v);
    if (v == 1)
    {
        Snacks();
    }
    return;
}
int showmenu()
{
    printf("\n\n\t\t\t\t\t\t****************WELCOME TO OUR RESTURANT**************** ");
    printf("\n\n\t\t\t\t\t\tENJOY OUR MENU :\n\n");
    printf("\t\t\t\t\t\t1.Appetizers/Snacks:\n\n");
    printf("\t\t\t\t\t\t2.Main Course:\n\n");
    printf("\t\t\t\t\t\t3.Breads:\n\n");
    printf("\t\t\t\t\t\t4.Rice:\n\n");
    printf("\t\t\t\t\t\t5.Desserts:\n\n");
    return 0;
}

void maincourse()
{
    int q;
    printf("\n\n\t\t\t\t\t\t.MAIN COURSE :\n\n");
    printf("\t\t\t\t\t\t1.Butter Chicken/Murgh Makhani: Tender chicken cooked in a creamy tomato-based sauce, often with a touch of butter.\n\n");
    printf("\t\t\t\t\t\t2.Chicken Tikka Masala: Grilled chicken tikka pieces in a flavorful and creamy tomato-based sauce. \n\n");
    printf("\t\t\t\t\t\t3.Palak Paneer: Cottage cheese cubes cooked in a creamy spinach gravy.\n\n");
    printf("\t\t\t\t\t\t4.Biryani: Fragrant rice dish cooked with spices, meat (such as chicken, lamb, or shrimp), and sometimes vegetables.\n\n");
    printf("\t\t\t\t\t\tenter your choice: ");
    scanf("%d", &op1);
    switch (op1)
    {
    case 1:
        printf("\n\t\t\t\t\t\tEnter the Quantity:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour order is selected");
        Bill += (q * 200);
        break;
    case 2:
        printf("\n\t\t\t\t\t\tEnter the Quantity:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour order is selected");
        Bill += (q * 200);

        break;
    case 3:
        printf("\n\t\t\t\t\t\tEnter the Quantity:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour order is selected");
        Bill += (q * 200);

        break;
    case 4:
        printf("\n\t\t\t\t\t\tEnter the Quantity:");
        scanf("%d", &q);
        printf("\n\t\t\t\t\t\tyour order is coming in 5 minuts");
        Bill += (q * 200);
        break;

    default:
        printf("\n\t\t\t\t\t\tyou entered wrong option");
        break;
    }

    printf("\n\t\t\t\t\t\tDO you want more these items[0\\1]");
    scanf("%d", &v);
    if (v == 1)
    {
        maincourse();
    }
    return;
}
void Breads()
{
    int q;

    printf("\n\n\t\t\t\t\t\t.Breads:\n\n");
    printf("\t\t\t\t\t\t1.Naan: Soft and fluffy oven-baked bread made with refined flour.\n\n");
    printf("\t\t\t\t\t\t2.Roti/Chapati: Whole wheat bread cooked on a griddle. \n\n");
    printf("\t\t\t\t\t\t3.Paratha: Flaky, layered bread made with whole wheat flour and often stuffed with various fillings like potato\n\n");
    printf("\t\t\t\t\t\tenter your choice: ");
    scanf("%d", &op1);
    switch (op1)
    {
    case 1:
      f1_20();
        break;
    case 2:
      f1_20();
        break;
    case 3:
       f1_20();
        break;
    default:
        printf("\n\t\t\t\t\t\tyou entered wrong option");
        break;
    }

    printf("\n\t\t\t\t\t\tDO you want more these items[0\\1]");
    scanf("%d", &v);
    if (v == 1)
    {
        Breads();
    }
}
void rice()
{
    int q;

    printf("\n\n\t\t\t\t\t\t.Rice:\n\n");
    printf("\t\t\t\t\t\t1.Plain Basmati Rice: Fragrant long-grain rice..\n\n");
    printf("\t\t\t\t\t\t2.Pulao: Rice dish cooked with vegetables, meat, or aromatic spices.. \n\n");
    printf("\t\t\t\t\t\tenter your choice: ");
    scanf("%d", &op1);
    switch (op1)
    {
    case 1:
      f1_120();
        break;
    case 2:
        f1_120();
        break;

    default:
        printf("\n\t\t\t\t\t\tyou entered wrong option");
        break;
    }

    printf("\n\t\t\t\t\t\tDO you want more these items[0\\1]");
    scanf("%d", &v);
   
    if (v == 1)
    {
        rice();
    }
}
void Desserts()
{
    int q;

    printf("\n\n\t\t\t\t\t\t.Desserts:\n\n");
    printf("\t\t\t\t\t\t1.Gulab Jamun: Deep-fried milk dumplings soaked in a sweet syrup.\n\n");
    printf("\t\t\t\t\t\t2.Rasgulla: Soft and spongy cottage cheese balls soaked in a light sugar syrup. \n\n");
    printf("\t\t\t\t\t\t3.Kheer/Payasam: Rice or vermicelli pudding cooked in milk, flavored with cardamom, saffron, and nuts.\n\n");
    printf("\t\t\t\t\t\t4.Jalebi: Crispy and syrupy spiral-shaped sweet.\n\n");
    printf("\t\t\t\t\t\tenter your choice: ");
    scanf("%d", &op1);
    switch (op1)
    {
    case 1:
        f1_100();
        break;
    case 2:
        f1_100();

        break;
    case 3:
        f1_100();

        break;
    case 4:
         f1_100();
        break;

    default:
        printf("\n\t\t\t\t\t\tyou entered wrong option");
        break;
    }

    printf("\n\t\t\t\t\t\tDO you want more these items[0\\1]");
    scanf("%d", &v);
    // printf("%c", v);

    if (v == 1)
    {
        Desserts();
    }
}

int main()
{
    int option;

    showmenu();
    printf("\t\t\t\t\t\tenter your choice: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        Snacks();
        break;
    case 2:
        maincourse();

        break;
    case 3:
        Breads();
        break;
    case 4:
        rice();
        break;
    case 5:
        Desserts();
    default:
        printf("\n\t\t\t\t\t\tDO you want more above items[0\\1]");
        scanf("%d", &v);
        if (v == 1)
        {
            main();
        }
        break;
    }
    printf("\n\t\t\t\t\t\tyour bill : %d RS", Bill);

    // Snacks();
    return 0;
}
