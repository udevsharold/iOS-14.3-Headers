/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCPurchaseOfferableConfiguration : NSObject {

	BOOL _allowsPublisherPhoneApp;
	BOOL _allowsPublisherPadApp;
	BOOL _allowsPublisherWebsite;
	BOOL _preferredOffer;
	NSString* _purchaseID;

}

@property (nonatomic,copy) NSString * purchaseID;                       //@synthesize purchaseID=_purchaseID - In the implementation block
@property (assign,nonatomic) BOOL allowsPublisherPhoneApp;              //@synthesize allowsPublisherPhoneApp=_allowsPublisherPhoneApp - In the implementation block
@property (assign,nonatomic) BOOL allowsPublisherPadApp;                //@synthesize allowsPublisherPadApp=_allowsPublisherPadApp - In the implementation block
@property (assign,nonatomic) BOOL allowsPublisherWebsite;               //@synthesize allowsPublisherWebsite=_allowsPublisherWebsite - In the implementation block
@property (assign,nonatomic) BOOL preferredOffer;                       //@synthesize preferredOffer=_preferredOffer - In the implementation block
-(void)setPreferredOffer:(BOOL)arg1 ;
-(BOOL)preferredOffer;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSString *)purchaseID;
-(id)initWithPurchaseID:(id)arg1 allowsPublisherPhoneApp:(BOOL)arg2 allowsPublisherPadApp:(BOOL)arg3 allowsPublisherWebsite:(BOOL)arg4 preferredOffer:(BOOL)arg5 ;
-(void)setAllowsPublisherWebsite:(BOOL)arg1 ;
-(BOOL)allowsPublisherPadApp;
-(BOOL)allowsPublisherWebsite;
-(void)setAllowsPublisherPhoneApp:(BOOL)arg1 ;
-(BOOL)allowsPublisherPhoneApp;
-(void)setAllowsPublisherPadApp:(BOOL)arg1 ;
@end

