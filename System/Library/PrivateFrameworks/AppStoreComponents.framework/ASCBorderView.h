/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSString;

@interface ASCBorderView : UIView {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) NSString * cornerCurve; 
@property (assign,nonatomic) unsigned long long cornerMask; 
-(void)setColor:(UIColor *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(double)width;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIColor *)color;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)cornerCurve;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerCurve:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)cornerMask;
-(void)setCornerMask:(unsigned long long)arg1 ;
-(void)updateBorderColor;
@end

