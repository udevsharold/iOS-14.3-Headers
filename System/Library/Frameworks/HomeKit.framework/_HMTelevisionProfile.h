/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMAccessoryProfile.h>

@protocol _HMTelevisionProfileDelegate;
@class NSArray;

@interface _HMTelevisionProfile : _HMAccessoryProfile {

	BOOL _mediaSourceDisplayOrderModifiable;
	NSArray* _mediaSourceDisplayOrder;
	id<_HMTelevisionProfileDelegate> _delegate;

}

@property (retain) NSArray * mediaSourceDisplayOrder;                      //@synthesize mediaSourceDisplayOrder=_mediaSourceDisplayOrder - In the implementation block
@property (readonly) BOOL mediaSourceDisplayOrderModifiable;               //@synthesize mediaSourceDisplayOrderModifiable=_mediaSourceDisplayOrderModifiable - In the implementation block
@property (__weak) id<_HMTelevisionProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)messageTargetUUID;
-(void)_registerNotificationHandlers;
-(NSArray *)mediaSourceDisplayOrder;
-(BOOL)mediaSourceDisplayOrderModifiable;
-(void)_handleSourceDisplayOrderUpdated:(id)arg1 ;
-(void)setMediaSourceDisplayOrder:(NSArray *)arg1 ;
-(void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg1 ;
-(BOOL)isMediaSourceDisplayOrderModifiable;
-(void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<_HMTelevisionProfileDelegate>)arg1 ;
-(id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2 ;
-(id)messageReceiveQueue;
-(id<_HMTelevisionProfileDelegate>)delegate;
-(id)messageDestination;
@end

