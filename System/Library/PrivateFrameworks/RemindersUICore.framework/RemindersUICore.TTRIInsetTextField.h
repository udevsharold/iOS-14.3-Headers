/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersUICore/RemindersUICore-Structs.h>
#import <UIKitCore/UITextField.h>

@interface RemindersUICore.TTRIInsetTextField : UITextField {

	 horizontalInset;
	 verticalInset;

}

@property (assign,nonatomic) double horizontalInset; 
@property (assign,nonatomic) double verticalInset; 
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(CGRect)clearButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(double)horizontalInset;
-(void)setHorizontalInset:(double)arg1 ;
-(double)verticalInset;
-(void)setVerticalInset:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

