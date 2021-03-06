/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCBackgroundTaskable;
@class FCThreadSafeMutableDictionary;

@interface FCRemoteDefaults : NSObject {

	id<FCBackgroundTaskable> _backgroundTaskable;
	FCThreadSafeMutableDictionary* _remoteDefaults;

}

@property (nonatomic,__weak,readonly) id<FCBackgroundTaskable> backgroundTaskable;              //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * remoteDefaults;                  //@synthesize remoteDefaults=_remoteDefaults - In the implementation block
-(id)objectForKey:(id)arg1 ;
-(id)URLRequest;
-(id)init;
-(id)stringForKey:(id)arg1 ;
-(BOOL)isAvailable;
-(id)dictionaryForKey:(id)arg1 ;
-(id)initWithBackgroundTaskable:(id)arg1 ;
-(FCThreadSafeMutableDictionary *)remoteDefaults;
-(id)URLForKey:(id)arg1 ;
-(void)checkForUpdate;
-(void)updateRemoteDefaults;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
@end

