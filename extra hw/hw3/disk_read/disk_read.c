#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    srand((unsigned)time(NULL));
    int pos[20],flag[20];
    int i,j;
    for(i=0;i<20;i++)
    {
        pos[i]=rand()%128;/*����20�����ʵĴŵ���*/
    }
    printf("�ŵ�����:\n");
    for(i=0;i<20;i++)
    {
        printf("%d ",pos[i]);
    }
    int temp;
    for(i=0;i<20;i++)
    {
        for(j=0;j<20-i-1;j++)
        {
            if(pos[j]>pos[j+1])
            {
                temp=pos[j];pos[j]=pos[j+1];pos[j+1]=temp;/*���ŵ�������*/
            }
        }
        flag[i]=0;
    }
    printf("\n");for(i=0;i<20;i++)
    {
        printf("%d ",pos[i]);
    }
    printf("\n�����ͷλ��:\n");
    int init;
    scanf("%d",&init);
    int nearest;
    int left_all=0,right_all=0,next1,next2;/*��Ǵ�ͷ�Ƿ��ѵ�������˻����Ҷ�*/
    if(pos[0]>init)
    {
        for(i=0;i<20;i++)
            printf("%d ",pos[i]);/*����ͷ�ѵ�������ˣ���ֱ������ɨ�����*/
        return 0;
    }
    else if(pos[19]<init)
    {
        for(i=19;i>-1;i++)
            printf("%d ",pos[i]);/*����ͷ�ѵ������Ҷˣ���ֱ������ɨ�����*/
        return 0;
    }
    else
    {
        for(i=0;i<20;i++)/*����������Ƚϵ�ǰ��ͷλ�����������δɨ����Ĵŵ���Զ����ѡ�����*/
        {
            if(pos[i]<init && (init<pos[i+1] || init==pos[i+1]))
                break;
        }
        nearest=((init-pos[i])>(pos[i+1]-init))?(i+1):i;
        flag[nearest]=1;printf("%d ",pos[nearest]);/*�ҵ����ʼ��ͷ����Ĵŵ��������ǲ��Ӵ˿�ʼ*/
        for(j=0;j<20;j++)
        {
            if(left_all)
            {
                for(i=nearest+1;i<20;i++)
                {
                    if(!flag[i])
                        printf("%d ",pos[i]);/*��ͷ��˴ŵ����ѱ����ʣ�ֱ�����ұ���ɨ�貢�������*/
                }
                return 0;
            }
            else if(right_all)
            {
                for(i=nearest-1;i>-1;i--)
                {
                    if(!flag[i])
                        printf("%d ",pos[i]);/*��ͷ�Ҷ˴ŵ����ѱ����ʣ�ֱ���������ɨ�貢�������*/
                }
                return 0;
            }
            else
            {
                next1=nearest-1;next2=nearest+1;
                while(next1 && flag[next1])/*�Ҿ������������δ���ʴŵ�*/
                    next1--;
                while(next2 && flag[next2])/*�Ҿ���������Ҳ��δ���ʴŵ�**/
                    next2++;
                if(next1<0)
                {
                    left_all=1;/*��˴ŵ����ѱ����ʣ����*/
                }
                else if(next2>19)
                {
                    right_all=1;/*�Ҷ˴ŵ����ѱ����ʣ����*/
                }
                else
                {
                    nearest=((pos[nearest]-pos[next1])>(pos[next2]-pos[nearest]))?next2:next1;/*�ҵ���һ�����ʴŵ�λ�ã���������*/
                    printf("%d ",pos[nearest]);flag[nearest]=1;
                }
            }
        }
    }
    return 0;
}
