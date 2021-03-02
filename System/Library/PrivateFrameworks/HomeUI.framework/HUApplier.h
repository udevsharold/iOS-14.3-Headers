/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface HUApplier : NSObject {

	NSMutableArray* _applierBlocks;
	NSMutableArray* _completionBlocks;
	unsigned long long _state;
	double _progress;

}

@property (nonatomic,readonly) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive; 
+(void)registerStandaloneApplier:(id)arg1 ;
+(void)unregisterStandaloneApplier:(id)arg1 ;
-(BOOL)isInteractive;
-(id)init;
-(unsigned long long)state;
-(BOOL)cancel;
-(BOOL)start;
-(double)progress;
-(BOOL)complete:(BOOL)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)updateProgress:(double)arg1 ;
-(void)addApplierBlock:(/*^block*/id)arg1 ;
-(BOOL)_hasCompleted;
@end
