/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol SKUISwooshViewControllerDelegate;
@class SKUIClientContext, SKUIColorScheme;

@interface SKUISwooshViewController : UIViewController {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	id<SKUISwooshViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                       //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISwooshViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(CGRect)frameForItemAtIndex:(long long)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setImage:(id)arg1 forItemAtIndex:(long long)arg2 ;
-(void)setDelegate:(id<SKUISwooshViewControllerDelegate>)arg1 ;
-(id)indexPathsForVisibleItems;
-(void)deselectAllItems;
-(id<SKUISwooshViewControllerDelegate>)delegate;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)popImageViewForItemAtIndex:(long long)arg1 ;
-(void)unhideImages;
@end

