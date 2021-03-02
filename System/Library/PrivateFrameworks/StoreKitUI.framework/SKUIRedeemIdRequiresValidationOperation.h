/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <libobjc.A.dylib/ISDialogOperationDelegate.h>

@class SKUIRedeemViewControllerLegacy, NSString;

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate> {

	/*^block*/id _resultBlock;
	SKUIRedeemViewControllerLegacy* _redeemViewController;

}

@property (copy) id resultBlock;                                                                        //@synthesize resultBlock=_resultBlock - In the implementation block
@property (assign,nonatomic,__weak) SKUIRedeemViewControllerLegacy * redeemViewController;              //@synthesize redeemViewController=_redeemViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(id)resultBlock;
-(BOOL)_performAuthentication;
-(id)_authenticationContext;
-(void)setResultBlock:(id)arg1 ;
-(void)setRedeemViewController:(SKUIRedeemViewControllerLegacy *)arg1 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(SKUIRedeemViewControllerLegacy *)redeemViewController;
-(id)_subOperationWithBagKey:(id)arg1 ;
-(void)_logResultsForSuccess:(BOOL)arg1 shouldVerify:(BOOL)arg2 failureReason:(id)arg3 error:(id)arg4 ;
@end
