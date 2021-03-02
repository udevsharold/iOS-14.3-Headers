/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface _UIKeyboardArbiterDebug : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _importantCount;
	NSMutableArray* _entries;
	BOOL _disable;
	BOOL _pause;

}

@property (assign,nonatomic) BOOL pause;              //@synthesize pause=_pause - In the implementation block
+(id)sharedInstance;
-(void)getDebugInfoDictionariesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)pause;
-(id)init;
-(void)addAsynchronousData:(/*^block*/id)arg1 ;
-(void)debugWithFormat:(const char*)arg1 ;
-(void)setPause:(BOOL)arg1 ;
-(void)errorWithFormat:(const char*)arg1 ;
-(void)addEntry:(id)arg1 ;
-(void)infoWithFormat:(const char*)arg1 ;
@end
