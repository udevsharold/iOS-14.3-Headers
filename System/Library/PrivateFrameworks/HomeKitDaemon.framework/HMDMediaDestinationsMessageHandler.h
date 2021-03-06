/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaDestinationMessageHandler.h>

@protocol HMDMediaDestinationsMessageHandlerDataSource, HMDMediaDestinationsMessageHandlerDelegate;
@interface HMDMediaDestinationsMessageHandler : HMDMediaDestinationMessageHandler {

	id<HMDMediaDestinationsMessageHandlerDataSource> _dataSource;
	id<HMDMediaDestinationsMessageHandlerDelegate> _delegate;

}

@property (__weak) id<HMDMediaDestinationsMessageHandlerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (__weak) id<HMDMediaDestinationsMessageHandlerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
-(void)setDataSource:(id<HMDMediaDestinationsMessageHandlerDataSource>)arg1 ;
-(id<HMDMediaDestinationsMessageHandlerDataSource>)dataSource;
-(void)setDelegate:(id<HMDMediaDestinationsMessageHandlerDelegate>)arg1 ;
-(id<HMDMediaDestinationsMessageHandlerDelegate>)delegate;
-(id)initWithDestination:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 ;
-(void)handleUpdatedDestination:(id)arg1 ;
-(void)handleMediaDestinationUpdatedNotification:(id)arg1 ;
@end

