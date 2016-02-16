while(wp<k && bp<m && w[wp]>ab[i] && b[bp]>ab[i])
			{
				wp++;	bp++;
			}
			if(wp<k && bp<m && w[wp]>=b[bp] || wp<k && ab[i]>=w[wp])//both wp & bp are valid pointers & w[wp]>=b[bp] || wp is a valid pointer
			{
				cout<<"w selected ="<<w[wp]<<endl;
				ans += ab[i] - w[wp];
				wp++;
			}
			else if(bp<m && ab[i]>=b[bp])
			{
				cout<<"b selected ="<<b[bp]<<endl;
				ans += ab[i] - b[bp];
				bp++;
			}