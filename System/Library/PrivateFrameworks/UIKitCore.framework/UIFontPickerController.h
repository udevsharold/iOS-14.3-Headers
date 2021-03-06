/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIFontPickerDelegate.h>
#import <UIKit/UIFontPicker.h>

@protocol UIFontPickerDelegate;
@class UIFontPickerViewController, UIFontDescriptor, NSString;

@interface UIFontPickerController : NSObject <UIFontPickerDelegate, UIFontPicker> {

	UIFontPickerController* _strongSelf;
	UIFontPickerViewController* _pickerController;
	id<UIFontPickerDelegate> _delegate;
	unsigned long long _mode;
	UIFontDescriptor* _selectedFontDescriptor;

}

@property (assign,nonatomic) unsigned long long mode;                                //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIFontDescriptor * selectedFont; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIFontDescriptor * selectedFontDescriptor;              //@synthesize selectedFontDescriptor=_selectedFontDescriptor - In the implementation block
@property (assign,nonatomic,__weak) id<UIFontPickerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)setMode:(unsigned long long)arg1 ;
-(id)init;
-(id)remoteViewController;
-(unsigned long long)mode;
-(UIFontDescriptor *)selectedFontDescriptor;
-(UIFontDescriptor *)selectedFont;
-(void)setSelectedFontDescriptor:(UIFontDescriptor *)arg1 ;
-(void)fontPickerDidPickFont:(id)arg1 ;
-(void)fontPickerWasCancelled:(id)arg1 ;
-(void)setSelectedFont:(UIFontDescriptor *)arg1 ;
-(BOOL)presentFontPickerFromRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)presentFontPickerFromBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDelegate:(id<UIFontPickerDelegate>)arg1 ;
-(id<UIFontPickerDelegate>)delegate;
@end

