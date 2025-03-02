#include <stdio.h>

int main() {

     int path,choice,inside,room,middlechoice,vault;
    scanf("%d",&path);
    
  
        if(path==1)
        {
            printf("Player chooses the Left path.\n");
            int choice;
            scanf("%d",&choice);
            if(choice==1)
            {
                printf("Poor choice, Game Over!\n");
            }
              else if(choice==2)
                  
            {   
                  printf("Player found a bridge.\n");
                  int inside;
                  scanf("%d",&inside);
                    
                    if(inside==1)
                    {
                        int room;
                        scanf("%d",&room);
                        
                       printf("Player crosses the bridge safely.\n"); 
                            if(room==1)
                            {
                                printf("All that glitters is not gold, Game Over!\n");
                            }
                            else if(room==2)
                            {
                                printf("All your efforts were for nothing, Game Over!\n");
                            }
                            else
                            {
                                printf("Congratulations!! You won the treasure.\n");   
                            }
                    }
                    else if (inside==2)
                    {
                        printf("Poor luck, Game Over!\n");
                    }
            }
        }
        
        else if(path==2)
        {
            printf("Player chooses the Middle path.\n");
            
             int middlechoice;
            scanf("%d",&middlechoice);
            
             if(middlechoice==582)
             {
                 int room;
                 scanf("%d",&room);
                 
                 printf("Player solved the puzzle.\n");
                 
                            if(room==1)
                            {
                                printf("All that glitters is not gold, Game Over!\n");
                            }
                            else if(room==2)
                            {
                                printf("All your efforts were for nothing, Game Over!\n");
                            }
                            else
                            {
                                printf("Congratulations!! You won the treasure.\n");   
                            }
             }
                 
            else
            {
                printf("Foolish player, Game Over!\n");
            }
        }
        
        else if (path==3)
        {
          printf("Player chooses the Right path.\n"); 
            
            int vault;
            scanf("%d",&vault);
            if(vault==30)
            {
                printf("Player solved the puzzle.\n");
                
                 int room;
                 scanf("%d",&room);
                
                            if(room==1)
                            {
                                printf("All that glitters is not gold, Game Over!\n");
                            }
                            else if(room==2)
                            {
                                printf("All your efforts were for nothing, Game Over!\n");
                            }
                            else
                            {
                                printf("Congratulations!! You won the treasure.\n");   
                            }
                
            }
            
            else
            {
                printf("Foolish player, Game Over!\n");
            }
        }
   
    
}
