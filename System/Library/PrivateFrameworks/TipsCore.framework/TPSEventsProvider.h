/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPSEventsProviderDelegate;
@interface TPSEventsProvider : NSObject {

	id<TPSEventsProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TPSEventsProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)queryEvents:(id)arg1 ;
-(void)deregisterEventsForCallback:(id)arg1 ;
-(void)registerEventsForCallback:(id)arg1 ;
-(void)setDelegate:(id<TPSEventsProviderDelegate>)arg1 ;
-(id<TPSEventsProviderDelegate>)delegate;
-(void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2 ;
@end
