  /* Processes pending input events and returns whether the module
     function should quit.  */
  enum emacs_process_input_result (*process_input) (emacs_env *env)
    EMACS_ATTRIBUTE_NONNULL (1);

  struct timespec (*extract_time) (emacs_env *env, emacs_value value)
    EMACS_ATTRIBUTE_NONNULL (1);

  emacs_value (*make_time) (emacs_env *env, struct timespec time)
    EMACS_ATTRIBUTE_NONNULL (1);

  bool (*extract_big_integer) (emacs_env *env, emacs_value arg, int *sign,
                               ptrdiff_t *count, unsigned long *magnitude)
    EMACS_ATTRIBUTE_NONNULL (1);

  emacs_value (*make_big_integer) (emacs_env *env, int sign, ptrdiff_t count,
                                   const unsigned long *magnitude)
    EMACS_ATTRIBUTE_NONNULL (1);
