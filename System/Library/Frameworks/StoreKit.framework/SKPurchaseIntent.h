/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKPurchaseIntent : NSObject {

	NSString* _bundleId;
	NSString* _productIdentifer;
	NSString* _appName;
	NSString* _productName;

}
-(void)send:(/*^block*/id)arg1 ;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4 ;
-(id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 ;
@end
