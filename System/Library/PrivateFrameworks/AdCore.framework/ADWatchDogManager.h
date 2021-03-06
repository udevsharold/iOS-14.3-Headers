/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSMutableDictionary;

@interface ADWatchDogManager : ADSingleton {

	NSObject*<OS_dispatch_queue> _watchdogQueue;
	NSNumber* _currentToken;
	NSMutableDictionary* _tokenCollection;

}

@property (nonatomic,retain) NSNumber * currentToken;                              //@synthesize currentToken=_currentToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokenCollection;              //@synthesize tokenCollection=_tokenCollection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSNumber *)currentToken;
-(id)getNextToken;
-(NSMutableDictionary *)tokenCollection;
-(void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3 ;
-(void)incrementToken;
-(id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2 ;
-(BOOL)removeWatchdogWithToken:(id)arg1 ;
-(BOOL)updateReason:(id)arg1 forToken:(id)arg2 ;
-(void)setCurrentToken:(NSNumber *)arg1 ;
@end

