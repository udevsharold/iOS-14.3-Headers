/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _websheetURL;
	NSString* _planPurchaseEndpointType;
	NSString* _warningText;
	BOOL _applePaySupported;

}

@property (assign,nonatomic) BOOL applePaySupported;                             //@synthesize applePaySupported=_applePaySupported - In the implementation block
@property (nonatomic,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * websheetURL;                           //@synthesize websheetURL=_websheetURL - In the implementation block
@property (nonatomic,readonly) NSString * planPurchaseEndpointType;              //@synthesize planPurchaseEndpointType=_planPurchaseEndpointType - In the implementation block
@property (nonatomic,readonly) NSString * warningText;                           //@synthesize warningText=_warningText - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(NSString *)warningText;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithName:(id)arg1 url:(id)arg2 applePaySupported:(BOOL)arg3 responseType:(id)arg4 warningText:(id)arg5 ;
-(NSString *)websheetURL;
-(BOOL)applePaySupported;
-(void)setApplePaySupported:(BOOL)arg1 ;
-(NSString *)planPurchaseEndpointType;
@end
