#include<stdio.h>
#include<stdlib.h>
#include <time.h>
//int One();
//int Two();
//int Three();
//int Four();

int One()
{
    int floor[20],weight[10];
    int i,j,t,p,p1,sum=0,h,l,m,c;
    srand(time(NULL));
    int x=rand()%21;
    while(1)
    {
        printf("��¥ѡ��1����¥ѡ��2\n");
        printf("��ѡ��:");
         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵��ݿɷ���ȫ��¥��\n");
             printf("�˵������˿�����10�ˣ����������800KG\n");
             printf("��ʱ��������%d��,�����ȴ�\n",x);
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����(kg)������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                        if(sum>800)
                           {
                         printf("���ݳ�������ȥһ����\n");
                         sum=sum-weight[i];
                         p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",sum);
                printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                          printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                     printf("�����ε�������¥��:\n");

                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d��\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);
                      switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",sum);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                           continue;
                         }
                           break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }break;
                 
case 2:
              printf("�˵��ݿɷ���ȫ��¥��\n");
              printf("�˵������˿�����10�ˣ����������800KG\n");
              printf("��ʱ��������%d��,�����ȴ�\n",x);
              printf("�����������ݵ�����:\n");
              scanf("%d",&p);
              printf("���ǵ�����������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                       if(sum>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",sum);
                printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                           printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                       t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d��\n",floor[j]);
                      printf("�˲���û���˽�����?��ѡ��1-2\n");
                      printf("1.����\n");
                      printf("2.����\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }
                          }
                          printf("������Ϊ%dkg,δ����\n",sum);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
         }
    }
}


int Two()
    {
    int floor[20],weight[10];
    int i,j,t,p,p1,sum=0,h,l,m,c;
    while(1)
    {
         printf("��¥ѡ��1 ��¥ѡ��2\n");
         printf("��ѡ��:");
         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵���ֻ���񵥺�¥��\n");
             printf("�˵������˿�����10�ˣ����������800KG\n");
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ����أ�kg��������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                            if(sum>800)
                           {
                         printf("���ݳ�������ȥһ����");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",sum);
                      printf("����������ȥ�ĵ���¥��:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d��\n",floor[j]);
                      printf("�˲����Ƿ����˽����ݣ�����ѡ��1����ѡ��2\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("�����ѳ�������ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",s);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;

         case 2:

             printf("�˵���ֻ���񵥺�¥��\n");
             printf("�˵������˿�����10�ˣ����������800KG\n");
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ����أ�kg��������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                             if(sum>800)
                           {
                         printf("���ݳ�������ȥһ����");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",sum);

                      printf("����������ȥ�ĵ���¥��:\n");
                         for(i=0;i<p;i++)
                         {
                               printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d��\n",floor[j]);
                      printf("�˲����Ƿ����˽����ݣ�����ѡ��1����ѡ��2\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����(kg):\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("���ݳ�������ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",sum);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
         }
    }
    }



    int Three()
    {
     int floor[20],weight[10];
     int i,j,h,l,m,c,t,p,p1,sum=0;
    while(1)
    {
        printf("��¥ѡ��1  ��¥ѡ��2\n");
        printf("��ѡ��:");
         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵���ֻ����˫��¥��\n");
             printf("�˵������˿�����20�ˣ����������1600KG\n");
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����(kg)������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                         if(sum>1600)
                           {
                         printf("���ݳ�������ȥһ����");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("������Ϊ%dkg,δ����\n",sum);
                      printf("����������ȥ��˫��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                  printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d��\n",floor[j]);
                      printf("�˲����Ƿ����˽����ݣ�����ѡ��1����ѡ��2\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("���ݳ�������ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",sum);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
         case 2:
                printf("�˵���ֻ����˫��¥��\n");
                printf("�˵������˿�����20�ˣ����������1600KG\n");
                printf("�����������ݵ�����:\n");
                scanf("%d",&p);
                printf("���ǵ�����(kg)������:\n");
                  for(i=0;i<p;i++)
                  {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                           if(sum>1600)
                           {
                         printf("���ݳ�������ȥһ����");
                         sum=sum-weight[i];
                    p=p-1;
                           }
                  }
                printf("������Ϊ%dkg,δ����\n",sum);

                      printf("����������ȥ��˫��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                  printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d��\n",floor[j]);
                      printf("�˲����Ƿ����˽����ݣ�����ѡ��1����ѡ��2\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                          printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("���ݳ�������ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",sum);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
         }
    }
    }
    int Four()
    {
     int floor[20],weight[10];
    int i,j,t,p,p1,sum=0,h,l,m,c;
    int x;
    srand(time(NULL));
    x=rand()%21;
    while(1)
    {
          printf("��¥ѡ��1  ��¥ѡ��2\n");
          printf("��ѡ��:");
          scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("�˵��ݿɷ���ȫ��¥��\n");
             printf("�˵������˿�����20�ˣ����������2000KG\n");
             printf("��ʱ��������%d��,�����ȴ�\n",x);
            printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����(kg)������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                    if(sum>2000)
                    {
                         printf("���ݳ�������ȥһ����");
                         sum=sum-weight[p];
                    p=p-1;
                    }
             }
                printf("������Ϊ%dkg,δ����\n",sum);


                      printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]>floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                      printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d��\n",floor[j]);
                     printf("�˲����Ƿ����˽����ݣ�����ѡ��1����ѡ��2\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                           printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("���أ�����ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",sum);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;


         case 2:
              printf("�˵��ݷ���ȫ��¥��\n");
             printf("�˵������˿�����20�ˣ����������2000KG\n");
             printf("��ʱ��������%d��,�����ȴ�\n",x);
             printf("�����������ݵ�����:\n");
             scanf("%d",&p);
             printf("���ǵ�����(kg)������:\n");
             for(i=0;i<p;i++)
             {
                printf("��%d����: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                   if(sum>2000)
                   {
                    printf("���ݳ�������ȥһ����");
                    sum=sum-weight[i];
                p=p-1;
                   }

             }
             printf("������Ϊ%dkg,δ����\n",sum);

                      printf("����������ȥ��¥��:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("��%d����: ",i+1);
                           scanf("%d",&floor[i]);
                         }
              for(j=0;j<p-1;j++)
                  for(i=0;i<p-1-j;i++)
                  {
                      if(floor[i]<floor[i+1])
                      {
                      t=floor[i];
                       floor[i]=floor[i+1];
                       floor[i+1]=t;
                      }
                  }
                     printf("�����ε�������¥��:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("�ѵ���%d�㣬�ߺ�\n",floor[j]);
                       printf("�˲����Ƿ����˽����ݣ�����ѡ��1����ѡ��2\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("�������\n");
                           printf("�����������:\n");
                          scanf("%d",&p1);
                          printf("���ε�����:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("���ݳ�������ȥһ����\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("������Ϊ%dkg,δ����\n",sum);
                          printf("��������ȥ��¥��:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("�ѵ���%d��\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("�رյ�����\n");
                          break;
                      }
                  }
                  break;
         }
    }
    }
int main()
    {
        int a;
        while(1)
        {
        printf("��ӭ�������ݣ���ѡ���������ĵ���(1-4��),�˳�ѡ��5��:");
		scanf("%d",&a);
         switch(a)
         {
         case 1:
             One();break;
         case 2:
             Two();break;
         case 3:
              Three(); break;
         case 4:
              Four();break;     
         case 5:
            exit(0);break;
         }
    }
	return 0;
   }
