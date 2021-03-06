/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeProvider;
@class MNObserverHashTable;

@interface MNTimeManager : NSObject {

	MNObserverHashTable* _timeManagerObservers;
	id<MNTimeProvider> _provider;

}

@property (nonatomic,retain) id<MNTimeProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)currentDate;
+(double)currentTime;
+(id)sharedManager;
-(void)setProvider:(id<MNTimeProvider>)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id<MNTimeProvider>)provider;
-(void)_resetToDefaultProvider;
@end

