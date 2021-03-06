/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/_SFSettingsAlertControl.h>
#import <libobjc.A.dylib/_SFSettingsAlertOptionsGroupItemConfiguration.h>

@class UIView, NSAttributedString, NSString, NSArray, UILabel, UILayoutGuide, UIImage, UIImageView;

@interface _SFSettingsAlertButton : _SFSettingsAlertControl <_SFSettingsAlertOptionsGroupItemConfiguration> {

	NSString* _text;
	NSAttributedString* _attributedText;
	NSArray* _contentConstraints;
	NSArray* _componentsArrangement;
	UILabel* _detailTextLabel;
	UILayoutGuide* _textGuide;
	NSString* _detailText;
	NSString* _textStyle;
	UIImage* _image;
	UIImageView* _imageView;
	UIView* _accessoryView;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) UILabel * textLabel;                          //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,copy) NSString * detailText;                            //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                             //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                      //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                         //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,readonly) UIView * trailingView; 
@property (nonatomic,copy) NSArray * componentsArrangement; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)accessoryView;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UILabel *)textLabel;
-(UIView *)trailingView;
-(void)setImage:(UIImage *)arg1 ;
-(void)setComponentsArrangement:(NSArray *)arg1 ;
-(NSString *)detailText;
-(void)setTextStyle:(NSString *)arg1 ;
-(UIImageView *)imageView;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)textStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_hover:(id)arg1 ;
-(void)_updateTintColor;
-(void)_didChangeContents;
-(NSArray *)componentsArrangement;
-(void)setEnabled:(BOOL)arg1 ;
-(id)_arrangedSubviews;
@end

