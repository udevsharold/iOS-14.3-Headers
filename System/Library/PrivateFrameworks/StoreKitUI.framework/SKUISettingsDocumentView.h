/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol SKUISettingsDocumentViewDelegate;
@interface SKUISettingsDocumentView : UIView {

	id<SKUISettingsDocumentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsDocumentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)tintColorDidChange;
-(void)setDelegate:(id<SKUISettingsDocumentViewDelegate>)arg1 ;
-(id<SKUISettingsDocumentViewDelegate>)delegate;
@end
