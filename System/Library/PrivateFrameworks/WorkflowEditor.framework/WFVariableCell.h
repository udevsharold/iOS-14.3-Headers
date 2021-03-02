/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class WFVariable, UIImageView;

@interface WFVariableCell : UICollectionViewCell {

	WFVariable* _variable;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) WFVariable * variable;                  //@synthesize variable=_variable - In the implementation block
+(id)titleFont;
+(double)widthWithVariable:(id)arg1 height:(double)arg2 ;
-(void)tintColorDidChange;
-(unsigned long long)accessibilityTraits;
-(UIImageView *)imageView;
-(WFVariable *)variable;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setVariable:(WFVariable *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)updateVariableImage;
@end
