/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface GEOCacheUsageMonitor_TileCacheData : NSObject {

	unsigned _count;
	unsigned _byteCount;
	NSMutableDictionary* _errorsDict;

}

@property (assign,nonatomic) unsigned count;                  //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned byteCount;              //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,readonly) NSArray * errors; 
-(id)init;
-(void)setCount:(unsigned)arg1 ;
-(unsigned)byteCount;
-(unsigned)count;
-(NSArray *)errors;
-(void)setByteCount:(unsigned)arg1 ;
-(BOOL)wouldWrapWithByteCount:(unsigned)arg1 ;
-(void)addErrorWithDomain:(id)arg1 code:(long long)arg2 ;
@end
