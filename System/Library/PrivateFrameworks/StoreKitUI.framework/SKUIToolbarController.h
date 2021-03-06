/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIToolbarControllerDelegate;
@class SKUIToolbarButtonsController, SKUIToolbarViewElement, NSArray;

@interface SKUIToolbarController : NSObject {

	SKUIToolbarButtonsController* _buttonsController;
	SKUIToolbarViewElement* _viewElement;
	NSArray* _toolbarItems;
	id<SKUIToolbarControllerDelegate> _delegate;

}

@property (nonatomic,readonly) SKUIToolbarViewElement * toolbarViewElement;                  //@synthesize viewElement=_viewElement - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIToolbarControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * toolbarItems;                                       //@synthesize toolbarItems=_toolbarItems - In the implementation block
-(void)dealloc;
-(NSArray *)toolbarItems;
-(void)setDelegate:(id<SKUIToolbarControllerDelegate>)arg1 ;
-(id<SKUIToolbarControllerDelegate>)delegate;
-(id)initWithToolbarViewElement:(id)arg1 ;
-(void)detachFromNavigationController:(id)arg1 ;
-(SKUIToolbarViewElement *)toolbarViewElement;
-(void)updateToolbarForNavigationController:(id)arg1 ;
-(id)_barButtonItemWithElement:(id)arg1 ;
-(id)_barButtonItemWithButtonElement:(id)arg1 ;
-(BOOL)toolbarButtonsController:(id)arg1 shouldDispatchEventForButton:(id)arg2 ;
@end

