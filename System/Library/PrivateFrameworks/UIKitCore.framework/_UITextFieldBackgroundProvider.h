/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITextField;

@interface _UITextFieldBackgroundProvider : NSObject {

	UITextField* _textField;

}

@property (nonatomic,__weak,readonly) UITextField * textField; 
@property (nonatomic,readonly) long long associatedBorderStyle; 
@property (nonatomic,readonly) BOOL drawsContent; 
-(void)layoutIfNeeded;
-(BOOL)_isTV;
-(void)setNeedsDisplay;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)enabledDidChangeAnimated:(BOOL)arg1 ;
-(id)preferredMetricsProvider;
-(BOOL)drawsContent;
-(long long)associatedBorderStyle;
-(BOOL)hitTestView:(id)arg1 ;
-(UITextField *)textField;
-(id)focusRingPathForBounds:(CGRect)arg1 ;
-(void)decodeWithCoder:(id)arg1 ;
-(void)highlightedDidChangeAnimated:(BOOL)arg1 ;
-(void)selectedDidChangeAnimated:(BOOL)arg1 ;
-(void)borderStyleDidChange:(BOOL)arg1 ;
-(void)controlSizeDidChange:(BOOL)arg1 ;
-(void)addToTextField:(id)arg1 ;
-(void)_buildDescription:(id)arg1 ;
-(void)removeFromTextField;
-(id)overridingSetBackgroundColor:(id)arg1 ;
-(id)overridingGetBackgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didChangeFirstResponder;
-(void)populateArchivedSubviews:(id)arg1 ;
@end
