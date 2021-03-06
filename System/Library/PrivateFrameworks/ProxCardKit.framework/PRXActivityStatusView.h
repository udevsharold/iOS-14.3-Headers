/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProxCardKit/ProxCardKit-Structs.h>
#import <UIKitCore/UIView.h>

@class PRXLabel, UIActivityIndicatorView, NSLayoutConstraint;

@interface PRXActivityStatusView : UIView {

	PRXLabel* _statusLabel;
	UIActivityIndicatorView* _activityIndicator;
	NSLayoutConstraint* _activityIndicatorVerticalConstraint;

}

@property (nonatomic,readonly) NSLayoutConstraint * activityIndicatorVerticalConstraint;              //@synthesize activityIndicatorVerticalConstraint=_activityIndicatorVerticalConstraint - In the implementation block
@property (nonatomic,readonly) PRXLabel * statusLabel;                                                //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;                           //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(UIActivityIndicatorView *)activityIndicator;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(PRXLabel *)statusLabel;
-(NSLayoutConstraint *)activityIndicatorVerticalConstraint;
@end

