#include <stdio.h>
 
 struct date
    {
        int day;
        int month;
        int year;
    };
    struct details
    {
        char name[20];
        int price;
        int code;
        int qty;
        int total;
        struct date mfg;
    }b;
    struct details item[50];
    int n, i;
 
 FILE *fp;

int main(){

    int ch;

    while(1){
        system("cls");
        printf("<== Welcome Our Grocery Shop ==>\n");
        printf("1.Create Invoice \n");
        printf("2.Already sell products\n");
        printf("3.Serch Invoice\n");
        printf("0.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
        case 0:
            exit(0);

        case 1:
            add_data();
            break;

        case 2:
            all_list();
            break;
        case 3:
         find();
         break;

        default:
            printf("Invalid Choice...\n\n");

        }
        printf("Press Any Key To Continue...\n");
        getch();
    }

    return 0;
}
int add_data()
{
    int sum=0;
    fp = fopen("ShopData.txt", "w");
    printf("Enter number of items:");
    scanf("%d", &n);
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Item name: ");
        scanf("%s", item[i].name);
        fflush(stdin);
        printf("Item code: ");
        scanf("%d", & item[i].code);
        fflush(stdin);
        printf("Quantity: ");
        scanf("%d", & item[i].qty);
        fflush(stdin);
        printf("price: ");
        scanf("%d",  & item[i].price);
        fflush(stdin);
        printf("Manufacturing date(dd-mm-yyyy): ");
        scanf("%d-%d-%d", & item[i].mfg.day, & item[i].mfg.month, & item[i].mfg.year);
        sum = sum+item[i].price;
        b.total = sum;
    }
    
    printf("Ivoice Add Succefully\n");
    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);
}

void all_list(){

    system("cls");
     fp = fopen("ShopData.txt", "r");
    printf("             *****  INVOICE ***** \n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE| MFG.DATE \n");
    printf("------------------------------------------------------------------\n");
    for (i = 0; i < n; i++)
        printf("%d     %-15s        %-d          %-5d     %-5d %d/%d/%d \n", i + 1, item[i].name,
item[i].code, item[i].qty, item[i].price, item[i].mfg.day, item[i].mfg.month, item[i].mfg.year);
    printf("-----------------------------------------------------------------\n");
    printf("All Products of price ============================ %d taka\n\n",b.total);
    fclose(fp);
}

void find()
{
    system("cls");
	int code=0, f=0;
    system("cls");
    printf("Finding........\n\n");
    printf("Enter product code to find: ");
    scanf("%d", & item[i].code);
    fp = fopen("ShopData.txt", "r");
    printf("             *****  INVOICE ***** \n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|    NAME           |   CODE   |  QUANTITY |  PRICE| MFG.DATE \n");
    printf("------------------------------------------------------------------\n");
    while(fread(&b, sizeof(b), 1, fp) == 1){
        if(code == item[i].code){
            f=1;
            printf("%d     %-15s        %-d          %-5d     %-5d %d/%d/%d \n", i + 1, item[i].name,
 item[i].code, item[i].qty, item[i].price, item[i].mfg.day, item[i].mfg.month, item[i].mfg.year);
    printf("-----------------------------------------------------------------\n");
        }
    }
   fclose(fp);
  if(f==0){
  printf("Invoice is not found\n");
  }
  else{
   printf("Invoice found successfully.\n");
  }
  
}