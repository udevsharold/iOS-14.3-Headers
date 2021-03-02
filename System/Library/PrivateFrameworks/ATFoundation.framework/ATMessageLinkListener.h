/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATMessageLinkListenerDelegate;
@interface ATMessageLinkListener : NSObject {

	id<ATMessageLinkListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATMessageLinkListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)start;
-(void)setDelegate:(id<ATMessageLinkListenerDelegate>)arg1 ;
-(void)stop;
-(id<ATMessageLinkListenerDelegate>)delegate;
@end
