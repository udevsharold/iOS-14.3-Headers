/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITextPosition.h>

@class WebVisiblePosition;

@interface UITextPositionImpl : UITextPosition {

	WebVisiblePosition* _webVisiblePosition;

}

@property (nonatomic,retain) WebVisiblePosition * webVisiblePosition;              //@synthesize webVisiblePosition=_webVisiblePosition - In the implementation block
+(id)wrapWebVisiblePosition:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(WebVisiblePosition *)webVisiblePosition;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWebVisiblePosition:(WebVisiblePosition *)arg1 ;
@end
