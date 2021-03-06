/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PMObjectCacheEntry : NSObject {

	NSString* _cacheKey;
	unsigned _hashValue;
	id _item;
	unsigned long long _size;
	unsigned long long _lastAccess;
	float _freq;
	float _value;
	double _cost;

}
-(void)setCacheKey:(id)arg1 ;
-(id)cacheKey;
-(void)dealloc;
-(unsigned long long)lastAccess;
-(void)setLastAccess:(unsigned long long)arg1 ;
-(double)cost;
-(unsigned)hashValue;
-(unsigned long long)getSize;
-(id)getItem;
-(id)initWithKey:(id)arg1 cacheItem:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 forCache:(id)arg5 ;
-(void)setValue:(unsigned long long)arg1 cost:(double)arg2 maxCacheSize:(unsigned long long)arg3 ;
-(void)resetValue:(unsigned long long)arg1 responseRate:(float)arg2 penalty:(float)arg3 ;
-(float)getValue:(unsigned long long)arg1 decayRate:(float)arg2 ;
-(BOOL)canBePurgedFromCache;
@end

