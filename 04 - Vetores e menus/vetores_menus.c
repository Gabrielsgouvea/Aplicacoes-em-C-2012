#include<stdio.h>
struct caddata {int dia, mes, ano;};
main()
{
      struct caddata data[10];
      int i = 0, opcao = 0, cont;
      while(opcao != 3)
      {
            puts ("Menu de selecao");
            puts(" 1 - cadastrar data");  
            puts(" 2 - Exebir datas");
            puts(" 3 - Sair do programa");   
            puts(" Escolha uma opcao:");
            scanf ("%d", &opcao);
            switch (opcao)
            {
                   case 1:
                        puts ("informe o dia:");
                        scanf ("%d", &data[i].dia);
                        puts ("informe o mes:");
                        scanf ("%d", &data[i].mes);
                        puts ("informe o ano:");
                        scanf ("%d", &data[i].ano);
                        i++;
                   break;
                   case 2:
                        puts ("As datas cadastradas sao: ");
                        for (cont = 0; cont< i;cont++)
                        {
                            printf ("%d/%d/%d\n", data[cont].dia, data[cont].mes, data[cont].ano);
                        }
                   break;
                   case 3:
                        puts ("voce saio do sistema!\n");
                   break;     
                   default:
                           puts ("opcao invalida!\n");     
            }
      }
      system ("pause");
}
