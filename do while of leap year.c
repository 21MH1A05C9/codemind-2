//output-->1600 1604 1608 1612 1616 1620 1624 1628 1632 1636 1640 1644 1648 1652 1656 1660 
//1664 1668 1672 1676 1680 1684 1688 1692 1696 1700 1704 1708 1712 1716 1720 1724 
//1728 1732 1736 1740 1744 1748 1752 1756 1760 1764 1768 1772 1776 1780 1784 1788 
//1792 1796 1800 1804 1808 1812 1816 1820 1824 1828 1832 1836 1840 1844 1848 1852 
//1856 1860 1864 1868 1872 1876 1880 1884 1888 1892 1896 1900 1904 1908 1912 1916 
//1920 1924 1928 1932 1936 1940 1944 1948 1952 1956 1960 1964 1968 1972 1976 1980 1984 1988 1992 1996 2000
#include<stdio.h>
void main ()
{
	int start=1600,end=2000;
	do
	{
		if (start%4==0)
		{
			printf("%d ",start);
		}
		start=start+1;
		}
		while (start<=end);
	}
		
