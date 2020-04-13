#include <iostream>

#define SIZE 6

using namespace std;
struct queue
{
	private:

		int* arr;
		bool empty()
		{
			if (pointerBot == pointerTop)
				return 1;
			else
				return 0;
		}
	public:
		int pointerTop, pointerBot;
		bool start;
		bool end;
		bool a;
		int size;
		queue(int size = SIZE)
		{
			start = 0;
			a = 0;
			end = 0;
			arr = new int[size];
			pointerTop = -1;
			pointerBot = 0;
			size = 0;
		}
		~queue()
		{
			delete[] arr;
		}
		bool push(int x)
		{
			if (pointerTop == SIZE-1)
			{
				pointerTop = -1;
				end = 1;

			}
			if ((pointerTop+1 == pointerBot) && start != 0 && a != 1)
			{

				return 0;
			}
			else
			{
				arr[++pointerTop] = x;
				start = 1;
				size++;
				a = 0;
			}
		}

		int pop()
		{

			if ((pointerBot-1 == pointerTop) && end != 1)
			{
				a = 1;
				return 0;
			}
			else
			{
				if ((pointerBot == pointerTop) && end != 1)
				{
					a = 1;
									}
				size--;
				if (pointerBot+1 == SIZE)
				{
					int tmp = arr[pointerBot];
					pointerBot = 0;
					end = 0;
					if ((pointerBot-1 == pointerTop))
					{
						a = 1;
					}
					return tmp;
				}
				return arr[pointerBot++];
			}
		}
		int getSize()
		{
			return size;
		}
		int front()
		{
			if (!empty())
			{
				if (pointerTop != -1)
					return arr[pointerTop];
				else
				{
					return arr[SIZE - 1];
				}
			}
			else
			{
				return 0;
			}
		}
		int back()
		{
			if (!empty())
			{
				if (pointerBot != -1)
				{
					return arr[pointerBot];
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
};
int main()
{
	queue ochered;
	ochered.push(1);
	ochered.push(2);
	cout << ochered.getSize() << endl;
	cout << ochered.front() << endl;
	cout << ochered.back() << endl;
	cout << ochered.pop() << endl;
	cout << ochered.pop() << endl;
	return 0;
