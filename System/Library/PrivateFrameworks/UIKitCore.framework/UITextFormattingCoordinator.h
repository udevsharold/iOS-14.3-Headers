/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFontPickerViewControllerDelegate.h>

@protocol UITextFormattingCoordinatorDelegate;
@class NSString;

@interface UITextFormattingCoordinator : NSObject <UIFontPickerViewControllerDelegate> {

	id<UITextFormattingCoordinatorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UITextFormattingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)textFormattingCoordinatorForWindowScene:(id)arg1 ;
+(BOOL)isFontPanelVisible;
+(void)toggleFontPanel:(id)arg1 ;
-(void)updateTextAttributesWithConversionHandler:(/*^block*/id)arg1 ;
-(void)fontPickerViewControllerDidPickFont:(id)arg1 ;
-(void)setSelectedAttributes:(id)arg1 isMultiple:(BOOL)arg2 ;
-(void)setDelegate:(id<UITextFormattingCoordinatorDelegate>)arg1 ;
-(id)initWithWindowScene:(id)arg1 ;
-(id<UITextFormattingCoordinatorDelegate>)delegate;
@end

