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
        printf("上楼选择1、下楼选择2\n");
        printf("请选择:");
         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯可服务全部楼层\n");
             printf("此电梯最大乘客数量10人，最大载重量800KG\n");
             printf("此时电梯正在%d层,稍作等待\n",x);
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重(kg)依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                        if(sum>800)
                           {
                         printf("电梯超重请下去一个人\n");
                         sum=sum-weight[i];
                         p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",sum);
                printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                          printf("第%d个人: ",i+1);
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
                     printf("将依次到达下列楼层:\n");

                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);
                      switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("超重，请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",sum);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                           continue;
                         }
                           break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }break;
                 
case 2:
              printf("此电梯可服务全部楼层\n");
              printf("此电梯最大乘客数量10人，最大载重量800KG\n");
              printf("此时电梯正在%d层,稍作等待\n",x);
              printf("请输入进入电梯的人数:\n");
              scanf("%d",&p);
              printf("他们的体重依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                       if(sum>800)
                           {
                         printf("超重，请下去一个人\n");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",sum);
                printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                           printf("第%d个人: ",i+1);
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
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层\n",floor[j]);
                      printf("此层有没有人进电梯?请选择：1-2\n");
                      printf("1.有人\n");
                      printf("2.无人\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("超重，请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }
                          }
                          printf("载重量为%dkg,未超重\n",sum);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
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
         printf("上楼选择1 下楼选择2\n");
         printf("请选择:");
         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯只服务单号楼层\n");
             printf("此电梯最大乘客数量10人，最大载重量800KG\n");
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重（kg）依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                            if(sum>800)
                           {
                         printf("电梯超重请下去一个人");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",sum);
                      printf("请输入你想去的单号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("第%d个人: ",i+1);
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
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层\n",floor[j]);
                      printf("此层有是否有人进电梯？有人选择1无人选择2\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("电梯已超重请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",s);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;

         case 2:

             printf("此电梯只服务单号楼层\n");
             printf("此电梯最大乘客数量10人，最大载重量800KG\n");
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重（kg）依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                             if(sum>800)
                           {
                         printf("电梯超重请下去一个人");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",sum);

                      printf("请输入你想去的单号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                               printf("第%d个人: ",i+1);
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
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层\n",floor[j]);
                      printf("此层有是否有人进电梯？有人选择1无人选择2\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重(kg):\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("电梯超重请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",sum);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
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
        printf("上楼选择1  下楼选择2\n");
        printf("请选择:");
         scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯只服务双号楼层\n");
             printf("此电梯最大乘客数量20人，最大载重量1600KG\n");
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重(kg)依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                         if(sum>1600)
                           {
                         printf("电梯超重请下去一个人");
                         sum=sum-weight[i];
                    p=p-1;
                           }
             }
                printf("载重量为%dkg,未超重\n",sum);
                      printf("请输入你想去的双号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("第%d个人: ",i+1);
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
                  printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层\n",floor[j]);
                      printf("此层有是否有人进电梯？有人选择1无人选择2\n");
                      scanf("%d",&h);
                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("电梯超重请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",sum);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;
         case 2:
                printf("此电梯只服务双号楼层\n");
                printf("此电梯最大乘客数量20人，最大载重量1600KG\n");
                printf("请输入进入电梯的人数:\n");
                scanf("%d",&p);
                printf("他们的体重(kg)依次是:\n");
                  for(i=0;i<p;i++)
                  {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                           if(sum>1600)
                           {
                         printf("电梯超重请下去一个人");
                         sum=sum-weight[i];
                    p=p-1;
                           }
                  }
                printf("载重量为%dkg,未超重\n",sum);

                      printf("请输入你想去的双号楼层:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("第%d个人: ",i+1);
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
                  printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层\n",floor[j]);
                      printf("此层有是否有人进电梯？有人选择1无人选择2\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                          printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("电梯超重请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",sum);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
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
          printf("上楼选择1  下楼选择2\n");
          printf("请选择:");
          scanf("%d",&c);
         switch(c)
         {
         case 1:
             printf("此电梯可服务全部楼层\n");
             printf("此电梯最大乘客数量20人，最大载重量2000KG\n");
             printf("此时电梯正在%d层,稍作等待\n",x);
            printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重(kg)依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                    if(sum>2000)
                    {
                         printf("电梯超重请下去一个人");
                         sum=sum-weight[p];
                    p=p-1;
                    }
             }
                printf("载重量为%dkg,未超重\n",sum);


                      printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                             printf("第%d个人: ",i+1);
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
                      printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层\n",floor[j]);
                     printf("此层有是否有人进电梯？有人选择1无人选择2\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                           printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("超重，请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",sum);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
                          break;
                      }
                  }
                  break;


         case 2:
              printf("此电梯服务全部楼层\n");
             printf("此电梯最大乘客数量20人，最大载重量2000KG\n");
             printf("此时电梯正在%d层,稍作等待\n",x);
             printf("请输入进入电梯的人数:\n");
             scanf("%d",&p);
             printf("他们的体重(kg)依次是:\n");
             for(i=0;i<p;i++)
             {
                printf("第%d个人: ",i+1);
                scanf("%d",&weight[i]);
                sum=sum+weight[i];
                   if(sum>2000)
                   {
                    printf("电梯超重请下去一个人");
                    sum=sum-weight[i];
                p=p-1;
                   }

             }
             printf("载重量为%dkg,未超重\n",sum);

                      printf("请输入你想去的楼层:\n");
                         for(i=0;i<p;i++)
                         {
                            printf("第%d个人: ",i+1);
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
                     printf("将依次到达下列楼层:\n");
                  for(j=0;j<p;j++)
                  {
                      printf("%d\n",floor[j]);
                      printf("已到达%d层，走好\n",floor[j]);
                       printf("此层有是否有人进电梯？有人选择1无人选择2\n");
                      scanf("%d",&h);

                     switch(h)
                      {
                      case 1:
                          printf("请进电梯\n");
                           printf("进入电梯人数:\n");
                          scanf("%d",&p1);
                          printf("依次的体重:\n");
                          for(l=0;l<p1;l++)
                          {
                              scanf("%d",&weight[l]);
                               sum=sum+weight[l];
                        if(sum>800)
                           {
                         printf("电梯超重请下去一个人\n");
                         sum=sum-weight[l];
                         p1=p1-1;
                           }

                          }
                          printf("载重量为%dkg,未超重\n",sum);
                          printf("请输入想去的楼层:\n");
                           for(m=0;m<p1;m++)
                         {
                           scanf("%d",&floor[m]);
                           printf("已到达%d层\n",floor[m]);
                           continue;

                         }
                          break;
                      case 2:
                          printf("关闭电梯门\n");
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
        printf("欢迎乘坐电梯，请选择您乘坐的电梯(1-4号),退出选择5号:");
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
