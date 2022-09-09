int main(void)

{

		char low, up;



			low = 'a';

				up = 'A';

					while (low <= 'z')

							{

										putchar(low);

												low++;

													}

						while (up <= 'Z')

								{

											putchar(up);

													if (up == 'Z')

																	putchar('\n');

															up++;

																}

							return (0);

}
