/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, NSSet, PKImage;

@interface PKPhysicalCard : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	unsigned long long _state;
	NSString* _FPANSuffix;
	NSURL* _frontFaceImageURL;
	NSString* _nameOnCard;
	NSDate* _lastUpdated;
	NSString* _trackingNumber;
	NSString* _shippingCompany;
	NSSet* _orderActivity;
	NSSet* _shippingActivity;
	PKImage* _frontFaceImage;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSURL * frontFaceImageURL;               //@synthesize frontFaceImageURL=_frontFaceImageURL - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                   //@synthesize nameOnCard=_nameOnCard - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                    //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSString * FPANSuffix;                   //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
@property (nonatomic,copy) NSString * trackingNumber;               //@synthesize trackingNumber=_trackingNumber - In the implementation block
@property (nonatomic,copy) NSString * shippingCompany;              //@synthesize shippingCompany=_shippingCompany - In the implementation block
@property (nonatomic,copy) NSSet * orderActivity;                   //@synthesize orderActivity=_orderActivity - In the implementation block
@property (nonatomic,copy) NSSet * shippingActivity;                //@synthesize shippingActivity=_shippingActivity - In the implementation block
@property (nonatomic,retain) PKImage * frontFaceImage;              //@synthesize frontFaceImage=_frontFaceImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)state;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)lastUpdated;
-(unsigned long long)hash;
-(id)jsonDictionaryRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(void)setNameOnCard:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)FPANSuffix;
-(NSString *)nameOnCard;
-(NSSet *)orderActivity;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(NSString *)trackingNumber;
-(id)latestOrderActivity;
-(id)latestShippingActivity;
-(id)shipmentTrackingURL;
-(NSURL *)frontFaceImageURL;
-(NSString *)shippingCompany;
-(void)setFrontFaceImageURL:(NSURL *)arg1 ;
-(void)setTrackingNumber:(NSString *)arg1 ;
-(void)setShippingCompany:(NSString *)arg1 ;
-(void)setOrderActivity:(NSSet *)arg1 ;
-(NSSet *)shippingActivity;
-(void)setShippingActivity:(NSSet *)arg1 ;
-(PKImage *)frontFaceImage;
-(void)setFrontFaceImage:(PKImage *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
