/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSMutableDictionary;

@interface BRCLazyXattrsCollection : NSObject {

	NSMutableData* _xattrNamesList;
	NSMutableData* _xattrNamesData;
	unsigned _xattrCount;
	unsigned _contentXattrCount;
	int _fd;
	long long _sizeLimit;
	long long _cacheSize;
	NSMutableDictionary* _cachedXattrs;

}
-(void)clearCache;
-(id)initWithFD:(int)arg1 sizeLimit:(long long)arg2 syncable:(BOOL)arg3 error:(id*)arg4 ;
-(unsigned)xattrNamesCount;
-(const char**)xattrNamesBegin;
-(unsigned)structuralXattrNamesCount;
-(const char**)structuralXattrNamesBegin;
-(unsigned)contentXattrNamesCount;
-(const char**)contentXattrNamesBegin;
-(const char*)xattrNamesListBegin;
-(const char*)xattrNamesListEnd;
-(const char**)xattrNamesEnd;
-(const char**)structuralXattrNamesEnd;
-(const char**)contentXattrNamesEnd;
-(id)getXattrValue:(id)arg1 error:(id*)arg2 ;
@end
