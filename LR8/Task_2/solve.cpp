#include "functions.h"

void solve() {
    std::map<std::string, int> mp;
    std::map<std::string, int> kol;
    std::set<std::string> se;

    for (int i = 0; i < n; i++) {
        mp[a[i].team] += a[i].age;
        kol[a[i].team]++;
        se.insert(a[i].team);
    }

    double minn = 1e9;
    for (auto u : se) {
        double x = mp[u];
        x /= kol[u];
        minn = std::min(x, minn);
    }

    std::vector<std::string> ans;
    for (auto u : se) {
        double x = mp[u];
        x /= kol[u];
        if (x == minn) ans.push_back(u);
    }

    if (ans.size() == 1) {
        std::cout << "\nСамая молодая команда : " << ans[0];
        std::cout << std::fixed << std::setprecision(3) << "\nСредний возраст ее спортсменов : " << minn << "\n\n";
    } else {
        std::cout << "Самые молодые команды : ";
        for (auto u : ans) std::cout << u << ' ';
        std::cout << std::fixed << std::setprecision(3) << "\nСредний возраст их спортсменов : " << minn << "\n\n";
    }
}