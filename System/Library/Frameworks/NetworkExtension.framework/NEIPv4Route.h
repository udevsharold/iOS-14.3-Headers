/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NSString* _destinationAddress;
	NSString* _destinationSubnetMask;
	NSString* _gatewayAddress;

}

@property (readonly) NSString * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (readonly) NSString * destinationSubnetMask;              //@synthesize destinationSubnetMask=_destinationSubnetMask - In the implementation block
@property (copy) NSString * gatewayAddress;                         //@synthesize gatewayAddress=_gatewayAddress - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)initGlobals;
+(id)defaultRoute;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isDefaultRoute;
-(id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2 ;
-(void)setGatewayAddress:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)destinationSubnetMask;
-(NSString *)gatewayAddress;
-(NSString *)destinationAddress;
-(void)encodeWithCoder:(id)arg1 ;
@end
