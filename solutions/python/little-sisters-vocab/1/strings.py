"""Functions for creating, transforming, and adding prefixes to strings."""


def add_prefix_un(word):
    return 'un' + word


def make_word_groups(vocab_words):
    new = (' :: ' + vocab_words[0]).join(vocab_words)
    return new


def remove_suffix_ness(word):
    base = word[:-4]
    if base.endswith('i'):
        return base[:-1] + 'y'
    return base


def adjective_to_verb(sentence, index):
    base = sentence.split()
    adj = base[index]
    if adj.endswith('.'):
        return adj[:-1] + "en"
    return adj + "en"
