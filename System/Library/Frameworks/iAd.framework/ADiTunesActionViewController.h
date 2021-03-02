/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/ADActionViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class SKStoreProductViewController, ADHomeButtonHandler, NSString;

@interface ADiTunesActionViewController : ADActionViewController <SKStoreProductViewControllerDelegate> {

	int _defaultResult;
	SKStoreProductViewController* _storeProductViewController;
	ADHomeButtonHandler* _homeButtonHandler;

}

@property (nonatomic,retain) SKStoreProductViewController * storeProductViewController;              //@synthesize storeProductViewController=_storeProductViewController - In the implementation block
@property (assign,nonatomic) int defaultResult;                                                      //@synthesize defaultResult=_defaultResult - In the implementation block
@property (nonatomic,retain) ADHomeButtonHandler * homeButtonHandler;                                //@synthesize homeButtonHandler=_homeButtonHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)dismiss;
-(void)viewDidLoad;
-(void)setHomeButtonHandler:(ADHomeButtonHandler *)arg1 ;
-(ADHomeButtonHandler *)homeButtonHandler;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpace;
-(void)setStoreProductViewController:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)storeProductViewController;
-(void)setDefaultResult:(int)arg1 ;
-(int)defaultResult;
@end
