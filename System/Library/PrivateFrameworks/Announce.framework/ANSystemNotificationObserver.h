/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ANSystemNotificationObserver : NSObject {

	/*^block*/id _observerHandler;

}

@property (copy) id observerHandler;              //@synthesize observerHandler=_observerHandler - In the implementation block
+(id)observer:(/*^block*/id)arg1 ;
-(id)init;
-(void)startObservingNotifications;
-(void)dealloc;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)removeNotificationObservers;
-(id)observerHandler;
-(void)_languageDidChange;
-(void)setObserverHandler:(id)arg1 ;
@end

