/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADJingleRequestManager : ADSingleton {

	BOOL _jingleRequestInProgress;
	NSMutableDictionary* _pendingJingleRequests;

}

@property (assign) BOOL jingleRequestInProgress;                                       //@synthesize jingleRequestInProgress=_jingleRequestInProgress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingJingleRequests;              //@synthesize pendingJingleRequests=_pendingJingleRequests - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)authenticateUser:(/*^block*/id)arg1 ;
-(id)makeSegmentRequest:(id)arg1 forceSegments:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)canMakeJingleRequest;
-(void)jingleRequestCompleted:(id)arg1 ;
-(void)startJingleRequest:(id)arg1 ;
-(BOOL)jingleRequestInProgress;
-(void)setJingleRequestInProgress:(BOOL)arg1 ;
-(NSMutableDictionary *)pendingJingleRequests;
-(void)setPendingJingleRequests:(NSMutableDictionary *)arg1 ;
@end
