/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKNavigationController.h>
#import <libobjc.A.dylib/PKAddPassesCardStackViewControllerDelegate.h>
#import <libobjc.A.dylib/PKServiceAddPassesViewControllerProtocol.h>

@class PKAddPassesCardStackViewController, NSString;

@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {

	CGSize _screenSize;
	double _screenScale;
	BOOL _placeholderViewControllerDidCancel;
	PKAddPassesCardStackViewController* _cardStackViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_preventsAppearanceProxyCustomization;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(long long)preferredStatusBarStyle;
-(BOOL)shouldAutorotate;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDisplayPropertiesWithScreenSize:(CGSize)arg1 scale:(double)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(void)resetBrightness;
-(void)evaluateBrightness;
-(void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2 ;
-(void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2 ;
-(void)ingestPassesWithData:(id)arg1 fromPresentationSource:(unsigned long long)arg2 ;
@end
