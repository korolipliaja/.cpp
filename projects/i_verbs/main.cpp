#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <random>

struct Verb {
    std::string base;
    std::string past;
    std::string participle;
    std::string russian;
};

std::vector<Verb> verbs = {
    {"arise", "arose", "arisen", "подниматься"},
    {"awake", "awoke", "awoken", "пробуждать"},
    {"be", "was/where","been", "быть"},
    {"bear", "bore", "born", "рожать, переносить"},
    {"beat", "beat", "beaten", "бить"},
    {"become", "became", "become", "становиться"},
    {"begin", "began", "begun", "начинать"},
    {"bend", "bent", "bent", "наклонять"},
    {"bet", "bet", "bet", "заключать пари"},
    {"bind", "bound", "bound", "связывать"},
    {"bite", "bit", "bitten", "кусать"},
    {"bleed", "bled", "bled", "кровоточить"},
    {"blow", "blew", "blown", "дуть"},
    {"break", "broke", "broken", "ломать"},
    {"breed", "bred", "bred", "разводить животных"},
    {"bring", "brought", "brought", "приносить"},
    {"build", "built", "built", "строить"},
    {"buy", "bought", "bought", "покупать"},
    {"catch", "caught", "caught", "ловить"},
    {"choose", "chose", "chosen", "выбирать"},
    {"cling", "clung", "clung", "цепляться"},
    {"come", "came", "come", "приходить"},
    {"cost", "cost", "cost", "стоить"},
    {"cut", "cut", "cut", "резать"},
    {"deal", "dealt", "dealt", "вести дела"},
    {"dig", "dug", "dug", "копать"},
    {"do", "did", "done", "делать"},
    {"draw", "drew", "drawn", "рисовать, тянуть"},
    {"drink", "drank", "drunk", "пить"},
    {"drive", "drove", "driven", "водить автомобиль"},
    {"eat", "ate", "eaten", "кушать"},
    {"fall", "fell", "fallen", "падать"},
    {"feed", "fed", "fed", "кормить"},
    {"feel", "felt", "felt", "чувствовать"},
    {"fight", "fought", "fought", "бороться"},
    {"find", "found", "found", "находить"},
    {"flee", "fled", "fled", "сбегать"},
    {"fly", "flew", "flown", "летать"},
    {"forbid", "forbade", "forbidden", "запрещать"},
    {"forget", "forgot", "forgotten", "забывать"},
    {"forgive", "forgave", "forgiven", "прощать"},
    {"freeze", "froze", "frozen", "замораживать"},
    {"get", "got", "got/gotten", "получать"},
    {"give", "gave", "given", "давать"},
    {"go", "went", "gone", "идти"},
    {"grow", "grew", "grown", "расти"},
    {"hang", "hung", "hung", "висеть"},
    {"have", "had", "had", "иметь"},
    {"hear", "heard", "heard", "слышать"},
    {"hide", "hid", "hidden", "прятать"},
    {"hit", "hit", "hit", "ударять, попадать"},
    {"hold", "held", "held", "держать"},
    {"hurt", "hurt", "hurt", "причинять боль"},
    {"keep", "kept", "kept", "сохранять, соблюдать"},
    {"know", "knew", "known", "знать"},
    {"lay", "laid", "laid", "класть"},
    {"lead", "led", "led", "вести, лидировать"},
    {"learn", "learnt/learned", "learnt/learned" "учиться, узнавать"},
    {"leave", "left", "left", "покидать, оставлять"},
    {"lend", "lent", "lent", "давать взаймы"},
    {"let", "let", "let", "позволять"},
    {"lie", "lay", "lain", "лежать"},
    {"light", "lit", "lit", "зажигать, освещать"},
    {"lose", "lost", "lost", "терять"},
    {"make", "made", "made", "делать, мастерить"},
    {"mean", "meant", "meant", "значить"},
    {"meet", "met", "met", "встречать, знакомиться"},
    {"pay", "paid", "paid", "платить"},
    {"put", "put", "put", "класть, ставить"},
    {"read", "read", "read", "читать"},
    {"ride", "rode", "ridden", "ездить верхом"},
    {"ring", "rang", "rung", "звонить"},
    {"rise", "rose", "risen", "возрастать, подниматься"},
    {"run", "ran", "run", "бежать"},
    {"say", "said", "said", "сказать"},
    {"see", "saw", "seen", "видеть"},
    {"seek", "sought", "sought", "искать"},
    {"sell", "sold", "sold", "продавать"},
    {"send", "sent", "sent", "посылать"},
    {"set", "set", "set", "устанавливать"},
    {"shake", "shook", "shaken", "трясти"},
    {"shine", "shone", "shone", "светить, сиять"},
    {"shoot", "shot", "shot", "стрелять"},
    {"show", "showed", "shown", "показывать"},
    {"shrink", "shrank", "shrunk", "сжиматься"},
    {"shut", "shut", "shut", "закрывать, затворять"},
    {"sing", "sang", "sung", "петь"},
    {"sit", "sat", "sat", "сидеть"},
    {"sleep", "slept", "slept", "спать"},
    {"slide", "slid", "slid", "скользить"},
    {"smell", "smelt", "smelt", "пахнуть, нюхать"},
    {"speak", "spoke", "spoken", "говорить"},
    {"spell", "spelt/spelled", "spelt/spelled", "произносить или писать по буквам"},
    {"spend", "spent", "spent", "тратить, проводить время"},
    {"spill", "spilt/spilled", "spilt/spilled", "разлить"},
    {"spin", "spun", "spun", "крутить"},
    {"split", "split", "split", "разделять, раскалывать"},
    {"spoil", "spoilt/spoiled", "spoilt/spoiled", "портить"},
    {"spread", "spread", "spread", "разворачивать, распространять"},
    {"stand", "stood", "stood", "стоять"},
    {"steal", "stole", "stolen", "воровать"},
    {"sting", "stung", "stung", "жалить"},
    {"stink", "stank", "stunk", "вонять"},
    {"strike", "struck", "struck", "бастовать, ударять"},
    {"swear", "swore", "sworn", "клясться, ругаться"},
    {"sweep", "swept", "swept", "подметать"},
    {"swell", "swelled", "swollen", "(swelled) опухать"},
    {"swim", "swam", "swum", "плавать"},
    {"take", "took", "taken", "брать"},
    {"teach", "taught", "taught", "обучать"},
    {"tear", "tore", "torn", "рвать"},
    {"tell", "told", "told", "рассказывать"},
    {"think", "thought", "thought", "думать"},
    {"throw", "threw", "thrown", "бросать"},
    {"understand", "understood", "understood", "понимать"},
    {"wake", "woke", "woken", "будить"},
    {"wear", "wore", "worn", "носить (одежду)"},
    {"win", "won", "won", "побеждать"},
    {"wind", "wound", "wound", "обматывать, изгибаться"},
    {"write", "wrote", "written", "писать"},
};

void shuffle_verbs() {
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(verbs.begin(), verbs.end(), g);
}

void print_progress_bar(int current, int total) {
    float progress = static_cast<float>(current) / total;
}

int main() {
    shuffle_verbs();
    int correct = 0, total = verbs.size();
    std::string past, participle;
    
    for (size_t i = 0; i < verbs.size(); ++i) {
        const auto& verb = verbs[i];
        std::cout << "(" << (i + 1) << "/" << total << ") " << verb.base << ":\n";
        std::cout << "Past Simple: ";
        std::cin >> past;
        std::cout << "Past Participle: ";
        std::cin >> participle;

        std::transform(past.begin(), past.end(), past.begin(), ::tolower);
        std::transform(participle.begin(), participle.end(), participle.begin(), ::tolower);
        std::string correct_past = verb.past, correct_participle = verb.participle;
        std::transform(correct_past.begin(), correct_past.end(), correct_past.begin(), ::tolower);
        std::transform(correct_participle.begin(), correct_participle.end(), correct_participle.begin(), ::tolower);

        if (past == correct_past && participle == correct_participle) {
            std::cout << "--------------------" << '\n';
            std::cout << "Correct! Translate: " << verb.russian << '\n';
            std::cout << "--------------------" << '\n';
            correct++;
        } else {
            std::cout << "++++++++++++++++++" << '\n';
            std::cout << "Wrong, Answer is: " << verb.past << " - " << verb.participle << " - " << verb.russian << "\n";
            std::cout << "++++++++++++++++++" << '\n';
        }

        print_progress_bar(i + 1, total);
    }

    std::cout << "Result: " << correct << " from " << total << " Correct answers.\n";
    return 0;
}
