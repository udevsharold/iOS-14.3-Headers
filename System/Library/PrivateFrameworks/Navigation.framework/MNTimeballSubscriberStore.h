/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock, NSArray;

@interface MNTimeballSubscriberStore : NSObject {

	NSMutableArray* _subscriptions;
	NSLock* _subscriptionsLock;

}

@property (nonatomic,readonly) NSArray * subscriptions; 
-(NSArray *)subscriptions;
-(void)subscribe:(id)arg1 ;
-(id)init;
-(void)unsubscribe:(id)arg1 ;
-(void)unsubscribeFromDestination:(id)arg1 ;
@end

