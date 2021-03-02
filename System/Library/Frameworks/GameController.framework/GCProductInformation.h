/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GCControllerProductInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class NSString, NSNumber;

@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding> {

	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	NSString* _productCategory;
	NSString* _detailedProductCategory;
	NSString* _vendorName;
	NSNumber* _attachedToDevice;

}

@property (nonatomic,copy) NSString * productCategory;                                         //@synthesize productCategory=_productCategory - In the implementation block
@property (nonatomic,copy) NSString * detailedProductCategory;                                 //@synthesize detailedProductCategory=_detailedProductCategory - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                              //@synthesize vendorName=_vendorName - In the implementation block
@property (getter=isAttachedToDevice,nonatomic,copy) NSNumber * attachedToDevice;              //@synthesize attachedToDevice=_attachedToDevice - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)vendorName;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setController:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)productCategory;
-(void)setProductCategory:(NSString *)arg1 ;
-(NSString *)detailedProductCategory;
-(id)isAttachedToDevice;
-(void)setDetailedProductCategory:(NSString *)arg1 ;
-(void)setAttachedToDevice:(NSNumber *)arg1 ;
@end
