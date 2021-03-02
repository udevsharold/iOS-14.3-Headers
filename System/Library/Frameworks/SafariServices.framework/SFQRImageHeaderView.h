/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol BCSAction;
@class UIImageView;

@interface SFQRImageHeaderView : UIView {

	UIImageView* _iconView;
	id<BCSAction> _action;

}

@property (assign,nonatomic,__weak) id<BCSAction> action;              //@synthesize action=_action - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAction:(id<BCSAction>)arg1 ;
-(id)_title;
-(id<BCSAction>)action;
-(id)_actionTypeString;
@end
