/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextPasteConfigurationSupporting_Internal <UITextPasteConfigurationSupporting,UITextInput>
@property (assign,nonatomic) BOOL usesStandardTextScaling; 
@optional
+(Class)_textPasteItemClass;
-(void)_pasteSessionDidFinish:(id)arg1;
-(void)setUsesStandardTextScaling:(BOOL)arg1;
-(BOOL)usesStandardTextScaling;

@required
-(void)layoutIfNeeded;
-(id)_inputController;
-(void)addInvisibleRange:(id)arg1;
-(void)removeInvisibleRange:(id)arg1;
-(id)_implicitPasteConfigurationClasses;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg1;
-(BOOL)allowsEditingTextAttributes;

@end

