/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface MREResult : NSObject {

	unsigned long long _trackID;
	double _offset;
	NSNumber* _timeSkew;
	NSNumber* _freqSkew;
	NSNumber* _score;

}

@property (nonatomic,readonly) unsigned long long trackID;              //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) double offset;                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * timeSkew;              //@synthesize timeSkew=_timeSkew - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * freqSkew;              //@synthesize freqSkew=_freqSkew - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * score;                 //@synthesize score=_score - In the implementation block
-(unsigned long long)trackID;
-(double)offset;
-(void)dealloc;
-(NSNumber *)score;
-(NSNumber *)timeSkew;
-(NSNumber *)freqSkew;
-(id)initWithTrackId:(unsigned long long)arg1 offset:(double)arg2 timeSkew:(id)arg3 freqSkew:(id)arg4 score:(id)arg5 ;
@end
