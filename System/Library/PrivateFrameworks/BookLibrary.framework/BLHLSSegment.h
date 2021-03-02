/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BLHLSMap, NSURL, BLHLSKey;

@interface BLHLSSegment : NSObject {

	BLHLSMap* _map;
	NSURL* _url;
	double _duration;
	BLHLSKey* _key;

}

@property (nonatomic,readonly) BLHLSMap * map;               //@synthesize map=_map - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) double duration;              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BLHLSKey * key;               //@synthesize key=_key - In the implementation block
-(BLHLSKey *)key;
-(BLHLSMap *)map;
-(id)initWithURL:(id)arg1 duration:(double)arg2 map:(id)arg3 key:(id)arg4 ;
-(id)description;
-(double)duration;
-(NSURL *)url;
@end
