#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void	*ft_play(void *s)
{
	system("omxplayer -o local /home/pi/Bureau/V.mp3");
	printf("Bye\n");
	return NULL;
}

int		main(void)
{
	while (1)
	{
		printf("Hello\n");
		pthread_t tid;
		pthread_create(&tid, NULL, ft_play, NULL);
		sleep (1);
	}
}
