/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol WFRemoteFileStatusViewDelegate;
@class UIView, UIActivityIndicatorView, UILabel, UIButton, NSArray;

@interface WFRemoteFileStatusView : UIView {

	id<WFRemoteFileStatusViewDelegate> _delegate;
	UIView* _containerView;
	UIActivityIndicatorView* _indicatorView;
	UILabel* _statusLabel;
	UIButton* _recoveryButton;
	NSArray* _emptyConstraints;
	NSArray* _loadingContraints;
	NSArray* _errorConstraints;

}

@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * indicatorView;                       //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,readonly) UILabel * statusLabel;                                         //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,readonly) UIButton * recoveryButton;                                     //@synthesize recoveryButton=_recoveryButton - In the implementation block
@property (nonatomic,readonly) NSArray * emptyConstraints;                                    //@synthesize emptyConstraints=_emptyConstraints - In the implementation block
@property (nonatomic,readonly) NSArray * loadingContraints;                                   //@synthesize loadingContraints=_loadingContraints - In the implementation block
@property (nonatomic,readonly) NSArray * errorConstraints;                                    //@synthesize errorConstraints=_errorConstraints - In the implementation block
@property (assign,nonatomic,__weak) id<WFRemoteFileStatusViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIActivityIndicatorView *)indicatorView;
-(UIView *)containerView;
-(void)setEmpty;
-(void)setError:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WFRemoteFileStatusViewDelegate>)arg1 ;
-(UILabel *)statusLabel;
-(id<WFRemoteFileStatusViewDelegate>)delegate;
-(void)recoveryButtonTapped;
-(void)setLoading;
-(UIButton *)recoveryButton;
-(NSArray *)emptyConstraints;
-(NSArray *)loadingContraints;
-(NSArray *)errorConstraints;
@end
