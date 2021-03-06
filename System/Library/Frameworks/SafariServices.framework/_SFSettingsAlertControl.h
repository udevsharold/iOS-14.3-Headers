/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/SFSettingsAlertItemView.h>

@protocol SFSettingsAlertItemViewDelegate;
@class _SFSettingsAlertItem, _SFSettingsAlertItemBackgroundView, NSString;

@interface _SFSettingsAlertControl : UIControl <SFSettingsAlertItemView> {

	BOOL _hidesSeparator;
	id<SFSettingsAlertItemViewDelegate> _delegate;
	_SFSettingsAlertItem* _item;
	_SFSettingsAlertItemBackgroundView* _backgroundView;
	long long _defaultBackgroundMode;

}

@property (assign,nonatomic,__weak) _SFSettingsAlertItem * item;                                 //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL hidesSeparator;                                                //@synthesize hidesSeparator=_hidesSeparator - In the implementation block
@property (nonatomic,readonly) _SFSettingsAlertItemBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) long long defaultBackgroundMode;                                    //@synthesize defaultBackgroundMode=_defaultBackgroundMode - In the implementation block
@property (nonatomic,readonly) long long backgroundMode; 
@property (assign,nonatomic,__weak) id<SFSettingsAlertItemViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_SFSettingsAlertItem *)item;
-(void)_updateBackgroundView;
-(void)setItem:(_SFSettingsAlertItem *)arg1 ;
-(_SFSettingsAlertItemBackgroundView *)backgroundView;
-(void)setHidesSeparator:(BOOL)arg1 ;
-(long long)backgroundMode;
-(void)setDefaultBackgroundMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)hidesSeparator;
-(void)setDelegate:(id<SFSettingsAlertItemViewDelegate>)arg1 ;
-(long long)defaultBackgroundMode;
-(void)setHighlighted:(BOOL)arg1 ;
-(id<SFSettingsAlertItemViewDelegate>)delegate;
@end

