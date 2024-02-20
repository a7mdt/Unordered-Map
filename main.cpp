#include "bits/stdc++.h"
using namespace std;

int main()
{
    unordered_map<string,int>um = { {"Menna",2019},{"Ahmed",2020},{"Nour",2021},{"Mohamed",2022}};
    cout<<"um.at(\"Ahmed\") : "<<um.at("Ahmed")<<endl;
    cout<<"um[\"Ahmed\"] : "<<um["Ahmed"]<<endl;
//    cout<<"um.at(\"Toyota\") : "<<um.at("Toyota"); => This is error.
    cout<<"um[\"Toyota\"] : "<<um["Toyota"]<<endl;
    um["Ahmed"] = 2023;
    um.insert({"Ahmed",2024});
    cout<<"um[\"Ahmed\"] : "<<um["Ahmed"]<<endl; // => 2020 or 2023 or 2024 ? ==> 2023
    cout<<"um.begin()->second : "<<um.begin()->second<<endl;
    cout<<"um.begin()->first : "<<um.begin()->first<<endl;
    um.insert_or_assign("Tarek",2025);
    cout<<"um[\"Tarek\"] : "<<um["Tarek"]<<endl;
    cout<<"um[\"Nour\"] (Before) : "<<um["Nour"]<<endl;
    um.insert_or_assign("Nour",2026);
    cout<<"um[\"Nour\"] (After) : "<<um["Nour"]<<endl;

    /*
     There are the same Built_in functions :
     * clear
     * insert
     * emplace
     * emplace_hint
     * try_emplace => The Best way because if this element exist it won't add new space
     * erase
     * swap
     * ------------------ *
     * bucket_count
     * max_bucket_count
     * bucket_size
     * bucket
     * load_factor
     * max_load_factor
     * rehash
     * reverse
     */

    return 0;
}
