all :
	gcc -c ./srcs/*.c -Iinclude
	ar -rcvs libft.a *.o

clean:
		rm -rf *.o

fclean: clean
		rm -rf *.a

re:	fclean all
