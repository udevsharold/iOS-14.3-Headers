/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface FMDFMIPSharedStateManager : NSObject {

	NSURL* _fmipSharedFileStaticURL;
	NSObject*<OS_dispatch_queue> _stateManagerQueue;

}

@property (retain) NSURL * fmipSharedFileStaticURL;                                       //@synthesize fmipSharedFileStaticURL=_fmipSharedFileStaticURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> stateManagerQueue;              //@synthesize stateManagerQueue=_stateManagerQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)recalculateLostMode;
-(id)_readSharedInfo;
-(id)_fmipSharedFileURL;
-(BOOL)_removeSharedInfo;
-(BOOL)fmipActive;
-(void)setStateManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)lostModeType;
-(void)setFmipSharedFileStaticURL:(NSURL *)arg1 ;
-(NSObject*<OS_dispatch_queue>)stateManagerQueue;
-(BOOL)_writeSharedInfo:(id)arg1 ;
-(NSURL *)fmipSharedFileStaticURL;
-(void)setFMiPActive:(BOOL)arg1 ;
@end
