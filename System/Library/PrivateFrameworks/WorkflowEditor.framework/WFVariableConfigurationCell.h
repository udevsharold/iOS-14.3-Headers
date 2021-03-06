/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol WFVariableConfigurationCellSizingDelegate;
@class NSString, UIImageView, CAShapeLayer, UIView;

@interface WFVariableConfigurationCell : UITableViewCell {

	BOOL _showsSeparator;
	BOOL _roundsCorners;
	NSString* _titleText;
	NSString* _valueText;
	unsigned long long _roundedCorners;
	unsigned long long _accessory;
	id<WFVariableConfigurationCellSizingDelegate> _sizingDelegate;
	UIImageView* _disclosureImageView;
	CAShapeLayer* _maskLayer;
	UIView* _separatorView;

}

@property (nonatomic,readonly) UIImageView * disclosureImageView;                                              //@synthesize disclosureImageView=_disclosureImageView - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * maskLayer;                                                       //@synthesize maskLayer=_maskLayer - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                                                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * valueText;                                                               //@synthesize valueText=_valueText - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                                                              //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,nonatomic) BOOL roundsCorners;                                                               //@synthesize roundsCorners=_roundsCorners - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;                                                //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) unsigned long long accessory;                                                     //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableConfigurationCellSizingDelegate> sizingDelegate;              //@synthesize sizingDelegate=_sizingDelegate - In the implementation block
+(long long)cellStyle;
-(UIView *)separatorView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<WFVariableConfigurationCellSizingDelegate>)sizingDelegate;
-(void)setSizingDelegate:(id<WFVariableConfigurationCellSizingDelegate>)arg1 ;
-(unsigned long long)accessory;
-(void)setRoundsCorners:(BOOL)arg1 ;
-(CAShapeLayer *)maskLayer;
-(void)updateMask;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)valueText;
-(BOOL)roundsCorners;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(unsigned long long)roundedCorners;
-(void)layoutSubviews;
-(void)setValueText:(NSString *)arg1 ;
-(void)setAccessory:(unsigned long long)arg1 ;
-(NSString *)titleText;
-(BOOL)showsSeparator;
-(void)setFrame:(CGRect)arg1 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(UIImageView *)disclosureImageView;
@end

