/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CKInteractionNotificationViewDelegate;
@interface CKInteractionNotificationView : UIView {

	id<CKInteractionNotificationViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKInteractionNotificationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<CKInteractionNotificationViewDelegate>)arg1 ;
-(id<CKInteractionNotificationViewDelegate>)delegate;
@end

