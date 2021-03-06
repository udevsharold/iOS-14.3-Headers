/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface FCOngoingPurchaseEntry : NSObject {

	BOOL _webAccessOptIn;
	NSString* _identifier;
	NSString* _tagID;
	NSString* _purchaseID;
	NSString* _productID;
	NSNumber* _appAdamID;
	NSNumber* _storeExternalVersion;
	NSString* _vendorIdentifier;
	NSDate* _purchaseInitiatedTime;
	NSNumber* _price;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * tagID;                             //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                        //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * productID;                         //@synthesize productID=_productID - In the implementation block
@property (assign,nonatomic) BOOL webAccessOptIn;                        //@synthesize webAccessOptIn=_webAccessOptIn - In the implementation block
@property (nonatomic,copy) NSNumber * appAdamID;                         //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSNumber * storeExternalVersion;              //@synthesize storeExternalVersion=_storeExternalVersion - In the implementation block
@property (nonatomic,copy) NSString * vendorIdentifier;                  //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * purchaseInitiatedTime;               //@synthesize purchaseInitiatedTime=_purchaseInitiatedTime - In the implementation block
@property (nonatomic,copy) NSNumber * price;                             //@synthesize price=_price - In the implementation block
+(id)dummyOngoingPurchaseEntryWithTagID:(id)arg1 ;
-(NSString *)productID;
-(NSNumber *)price;
-(void)setPurchaseID:(NSString *)arg1 ;
-(void)setStoreExternalVersion:(NSNumber *)arg1 ;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productID:(id)arg4 webAccessOptIn:(BOOL)arg5 appAdamID:(id)arg6 storeExternalVersion:(id)arg7 vendorIdentifier:(id)arg8 purchaseInitiatedTime:(id)arg9 price:(id)arg10 ;
-(NSString *)purchaseID;
-(void)setProductID:(NSString *)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)webAccessOptIn;
-(void)setPrice:(NSNumber *)arg1 ;
-(id)dictionaryRepresentation;
-(NSNumber *)appAdamID;
-(void)setWebAccessOptIn:(BOOL)arg1 ;
-(void)setPurchaseInitiatedTime:(NSDate *)arg1 ;
-(NSString *)tagID;
-(void)setVendorIdentifier:(NSString *)arg1 ;
-(NSString *)vendorIdentifier;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(void)setAppAdamID:(NSNumber *)arg1 ;
-(NSNumber *)storeExternalVersion;
-(NSDate *)purchaseInitiatedTime;
@end

