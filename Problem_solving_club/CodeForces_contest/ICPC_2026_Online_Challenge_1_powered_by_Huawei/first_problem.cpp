// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll K, bytes_per_token, num_layers;
    double S, lat, bw;
    cin >> K >> S >> lat >> bw >> bytes_per_token >> num_layers;
    double slo1, slo2, tpub, tpbase, distbase, wtp, wc;
    cin >> slo1 >> slo2 >> tpub >> tpbase >> distbase >> wtp >> wc;
    int N;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            double x;
            cin >> x;
        }
    }

    const int NEED_PPRE = 0, WAITING = 1, NEED_PPROC = 2, NEED_PPOST = 3;
    const int NEED_DPRE = 4, NEED_DPROC = 5, NEED_DPOST = 6, DONE = 7;

    vector<int> st, rem;
    vector<ll> load(K, 0);
    bool busyE = false;
    vector<char> busyC(K, 0);

    auto ensure = [&](int rid)
    {
        if((int)st.size() <= rid)
        {
            st.resize(rid + 1, DONE);
            rem.resize(rid + 1, -1);
        }
    };

    string tok;
    while(cin >> tok)
    {
        if(tok == "END") break;
        int ec;
        cin >> ec;
        vector<int> fins;
        for(int i = 0; i < ec; i++)
        {
            string type;
            cin >> type;
            if(type == "ARR")
            {
                int rid;
                ll lin;
                cin >> rid >> lin;
                ensure(rid);
                st[rid] = NEED_PPRE;
                rem[rid] = -1;
            }
            else if(type == "FIN")
            {
                int rid;
                cin >> rid;
                ensure(rid);
                fins.push_back(rid);
            }
            else if(type == "TDN")
            {
                string server, w1, w2;
                cin >> server >> w1 >> w2;
                if(server == "E") busyE = false;
                else busyC[stoi(server.substr(1))] = 0;
                double dur;
                if(w1 == "P")
                {
                    if(w2 == "PROC")
                    {
                        ll ls, le;
                        int r, rid;
                        cin >> ls >> le >> r >> rid >> dur;
                        ensure(rid);
                        st[rid] = WAITING;
                    }
                    else
                    {
                        int r, rid;
                        cin >> r >> rid >> dur;
                        ensure(rid);
                        st[rid] = (w2 == "POST") ? NEED_DPRE : WAITING;
                    }
                }
                else
                {
                    int r, m;
                    cin >> r >> m;
                    vector<int> ids(m);
                    for(int j = 0; j < m; j++) cin >> ids[j];
                    cin >> dur;
                    for(int j = 0; j < m; j++)
                    {
                        ensure(ids[j]);
                        st[ids[j]] = (w2 == "POST") ? NEED_DPRE : WAITING;
                    }
                }
            }
            else
            {
                string dir, kind;
                int r, m;
                ll sz;
                cin >> dir >> r >> sz >> kind >> m;
                vector<int> ids(m);
                for(int j = 0; j < m; j++) cin >> ids[j];
                int ns;
                if(kind == "PRE") ns = (dir == "UP") ? NEED_PPROC : NEED_PPOST;
                else ns = (dir == "UP") ? NEED_DPROC : NEED_DPOST;
                for(int j = 0; j < m; j++)
                {
                    ensure(ids[j]);
                    st[ids[j]] = ns;
                }
            }
        }
        for(int rid : fins)
        {
            if(st[rid] != DONE && rem[rid] >= 0) load[rem[rid]]--;
            st[rid] = DONE;
        }

        vector<string> out;
        int n = (int)st.size();

        if(!busyE)
        {
            vector<int> dpost, dpre;
            int ppost = -1, ppre = -1;
            for(int i = 0; i < n; i++)
            {
                if(st[i] == NEED_DPOST) dpost.push_back(i);
                else if(st[i] == NEED_DPRE) dpre.push_back(i);
                else if(st[i] == NEED_PPOST && ppost < 0) ppost = i;
                else if(st[i] == NEED_PPRE && ppre < 0) ppre = i;
            }
            string line;
            if(!dpost.empty())
            {
                line = "E D POST -1 " + to_string(dpost.size());
                for(int id : dpost)
                {
                    line += " " + to_string(id);
                    st[id] = WAITING;
                }
            }
            else if(ppost >= 0)
            {
                line = "E P POST " + to_string(rem[ppost]) + " " + to_string(ppost);
                st[ppost] = WAITING;
            }
            else if(!dpre.empty())
            {
                line = "E D PRE -1 " + to_string(dpre.size());
                for(int id : dpre)
                {
                    line += " " + to_string(id);
                    st[id] = WAITING;
                }
            }
            else if(ppre >= 0)
            {
                int best = 0;
                for(int k = 1; k < K; k++) if(load[k] < load[best]) best = k;
                rem[ppre] = best;
                load[best]++;
                line = "E P PRE " + to_string(best) + " " + to_string(ppre);
                st[ppre] = WAITING;
            }
            if(!line.empty())
            {
                out.push_back(line);
                busyE = true;
            }
        }
        for(int k = 0; k < K; k++)
        {
            if(busyC[k]) continue;
            vector<int> dproc;
            int pproc = -1;
            for(int i = 0; i < n; i++)
            {
                if(rem[i] != k) continue;
                if(st[i] == NEED_DPROC) dproc.push_back(i);
                else if(st[i] == NEED_PPROC && pproc < 0) pproc = i;
            }
            string line;
            if(!dproc.empty())
            {
                line = "C" + to_string(k) + " D PROC " + to_string(k) + " " + to_string(dproc.size());
                for(int id : dproc)
                {
                    line += " " + to_string(id);
                    st[id] = WAITING;
                }
            }
            else if(pproc >= 0)
            {
                line = "C" + to_string(k) + " P PROC 0 " + to_string(num_layers) + " " + to_string(k) + " " + to_string(pproc);
                st[pproc] = WAITING;
            }
            if(!line.empty())
            {
                out.push_back(line);
                busyC[k] = 1;
            }
        }

        string res = to_string(out.size());
        res += "\n";

        for(auto &s : out)
        {
            res += s;
            res += "\n";
        }

        cout << res << flush;
    }
    
    return 0;
}