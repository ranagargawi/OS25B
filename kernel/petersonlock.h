struct petersonlock {
  int flag[2]; // Flags for each role (0 or 1)
  int turn;    // Whose turn it is
  int active;  // 1 = active, 0 = destroyed
};

int             peterson_create(void);
int             peterson_acquire(int,int);
int             peterson_release(int,int);
int             peterson_destroy(int);