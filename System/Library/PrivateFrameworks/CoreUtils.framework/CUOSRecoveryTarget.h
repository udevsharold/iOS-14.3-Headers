/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CUBLEAdvertiser, NSObject;

@interface CUOSRecoveryTarget : NSObject {

	BOOL _activateCalled;
	CUBLEAdvertiser* _bleAdvertiser;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(void)_activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProgressHandler:(id)arg1 ;
-(void)_invalidate;
-(id)progressHandler;
-(void)_reportProgressType:(int)arg1 ;
-(void)_invalidated;
-(void)invalidate;
@end
