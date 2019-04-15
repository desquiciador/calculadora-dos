#include<iostream>
int main(){
    int opcion=0,n1=0,n2=0;
    // acentos: std::cout<<"\240\202\241\242\243";
    system("cls");
    std::cout<<"Bienvenido a la aplicaci\242n de operadores l\242gicos.";std::cout<<std::endl;std::cout<<"Indique qu\202 opci\242n quiere realizar:";std::cout<<std::endl;std::cout<<"1. Suma.\n2. Resta.\n3. Multiplicaci\242n.\n4. Divisi\242n.\n0. Salir.\n\nOpci\242n: ";std::cin>>opcion;
    system("pause");
    if(opcion==0){return 0;}
    else if(opcion==1){system("cls");std::cout<<"Suma\n\n1er n\243mero: ";std::cin>>n1;std::cout<<"2do n\243mero: ";std::cin>>n2;std::cout<<"\nEl resultado de la suma es: ";int n3=n1+n2;std::cout<<n3;std::cout<<"\n";system("pause");main();}
    else if(opcion==2){system("cls");std::cout<<"Resta\n\n1er n\243mero: ";std::cin>>n1;std::cout<<"2do n\243mero: ";std::cin>>n2;std::cout<<"\nEl resultado de la resta es: "; int n3=n1-n2;std::cout<<n3;std::cout<<"\n";system("pause");main();}
    else if(opcion==3){system("cls");std::cout<<"Multiplicaci\242n\n\n1er n\243mero: ";std::cin>>n1;std::cout<<"2do n\243mero: ";std::cin>>n2;std::cout<<"\nEl resultado de la multiplicaci\242 es: "; int n3=n1*n2;std::cout<<n3;std::cout<<"\n";system("pause");main();}
    else if(opcion==4){system("cls");std::cout<<"Divisi\242n\n\n1er n\243mero: ";std::cin>>n1;std::cout<<"2do n\243mero: ";std::cin>>n2;std::cout<<"\nEl resultado de la divisi\242n es: "; int n3=n1/n2;std::cout<<n3;std::cout<<"\n";system("pause");main();}
    else {std::cout<<"Introduzca una opci\242n correcta.";main();}
    return 0;
}