/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, PSSpecifier, UITableView, CNFRegLearnMoreButton, NSString, NSURL;

@interface CNFRegTableLabel : UIView <PSHeaderFooterView> {

	UILabel* _label;
	PSSpecifier* _specifier;
	UITableView* _cnfreg_tableView;
	BOOL _isTopmostHeader;
	CNFRegLearnMoreButton* _urlButton;
	NSString* _URLText;
	NSURL* _URLTarget;

}

@property (nonatomic,copy) NSString * URLText;                            //@synthesize URLText=_URLText - In the implementation block
@property (nonatomic,copy) NSURL * URLTarget;                             //@synthesize URLTarget=_URLTarget - In the implementation block
@property (assign,nonatomic) UITableView * cnfreg_tableView;              //@synthesize cnfreg_tableView=_cnfreg_tableView - In the implementation block
@property (assign,nonatomic) BOOL isTopmostHeader;                        //@synthesize isTopmostHeader=_isTopmostHeader - In the implementation block
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(double)_topPadding;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)arg1 ;
-(NSString *)URLText;
-(id)_labelText;
-(double)_bottomPadding;
-(NSURL *)URLTarget;
-(void)clearSpecifier;
-(void)updateLabelText;
-(void)setCnfreg_tableView:(UITableView *)arg1 ;
-(void)setIsTopmostHeader:(BOOL)arg1 ;
-(BOOL)isTopmostHeader;
-(double)_labelInset;
-(long long)_labelTextAlignment;
-(id)_URLTarget;
-(void)_urlTapped:(id)arg1 ;
-(id)_URLText;
-(void)setURLText:(NSString *)arg1 ;
-(void)setURLTarget:(NSURL *)arg1 ;
-(UITableView *)cnfreg_tableView;
@end
