/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class AMSPurchaseInfo, NSObject;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {

	id<AMSBagProtocol> _bag;
	AMSPurchaseInfo* _purchaseInfo;
	NSObject*<OS_dispatch_queue> _purchaseRequestQueue;

}

@property (nonatomic,readonly) AMSPurchaseInfo * purchaseInfo;                               //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> purchaseRequestQueue;              //@synthesize purchaseRequestQueue=_purchaseRequestQueue - In the implementation block
+(id)_parametersFromPurchaseInfo:(id)arg1 error:(id*)arg2 ;
+(void)configureRequest:(id)arg1 purchaseInfo:(id)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(long long)_anisetteTypeFromAccount:(id)arg1 ;
-(id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2 ;
-(AMSPurchaseInfo *)purchaseInfo;
-(id)bag;
-(id)_bagURL;
-(void)setBag:(id)arg1 ;
-(id)initWithPurchaseInfo:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)purchaseRequestQueue;
-(void)setPurchaseRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)encodeRequest;
@end
