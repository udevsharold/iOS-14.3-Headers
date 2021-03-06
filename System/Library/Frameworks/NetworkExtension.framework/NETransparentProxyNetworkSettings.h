/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NETunnelNetworkSettings.h>

@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings {

	BOOL _isFullyTransparent;
	NSArray* _includedNetworkRules;
	NSArray* _excludedNetworkRules;

}

@property (assign) BOOL isFullyTransparent;                   //@synthesize isFullyTransparent=_isFullyTransparent - In the implementation block
@property (copy) NSArray * includedNetworkRules;              //@synthesize includedNetworkRules=_includedNetworkRules - In the implementation block
@property (copy) NSArray * excludedNetworkRules;              //@synthesize excludedNetworkRules=_excludedNetworkRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)includedNetworkRules;
-(NSArray *)excludedNetworkRules;
-(BOOL)isFullyTransparent;
-(void)setIncludedNetworkRules:(NSArray *)arg1 ;
-(void)setExcludedNetworkRules:(NSArray *)arg1 ;
-(void)setIsFullyTransparent:(BOOL)arg1 ;
-(BOOL)validateNetworkRule:(id)arg1 collectErrors:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

