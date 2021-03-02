/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSDictionary;

@interface VCEmulatedNetworkElement : NSObject {

	NSDictionary* _policies;
	opaqueCMSimpleQueueRef _networkElementQueue;
	/*^block*/id _processCompleteHandler;

}

@property (nonatomic,copy) id processCompleteHandler;              //@synthesize processCompleteHandler=_processCompleteHandler - In the implementation block
-(void)dealloc;
-(int)write:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)runUntilTime:(double)arg1 ;
-(void)connectTo:(id)arg1 ;
-(void)setProcessCompleteHandler:(id)arg1 ;
-(void)drainAndReleasePackets;
-(void)connectFrom:(id)arg1 ;
-(id)processCompleteHandler;
@end
