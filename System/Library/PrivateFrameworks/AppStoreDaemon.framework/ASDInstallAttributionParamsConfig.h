/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface ASDInstallAttributionParamsConfig : NSObject <NSSecureCoding> {

	BOOL _overrideCampaignLimit;
	NSNumber* _appAdamId;
	NSString* _adNetworkId;
	NSNumber* _campaignId;
	NSString* _impressionId;
	NSNumber* _sourceAppAdamId;
	NSNumber* _timestamp;
	NSString* _attributionSignature;
	NSString* _version;
	NSString* _sourceAppBundleId;

}

@property (nonatomic,retain) NSNumber * appAdamId;                         //@synthesize appAdamId=_appAdamId - In the implementation block
@property (nonatomic,retain) NSString * adNetworkId;                       //@synthesize adNetworkId=_adNetworkId - In the implementation block
@property (nonatomic,retain) NSNumber * campaignId;                        //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,retain) NSString * impressionId;                      //@synthesize impressionId=_impressionId - In the implementation block
@property (nonatomic,retain) NSNumber * sourceAppAdamId;                   //@synthesize sourceAppAdamId=_sourceAppAdamId - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * attributionSignature;              //@synthesize attributionSignature=_attributionSignature - In the implementation block
@property (nonatomic,retain) NSString * version;                           //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSString * sourceAppBundleId;                 //@synthesize sourceAppBundleId=_sourceAppBundleId - In the implementation block
@property (assign,nonatomic) BOOL overrideCampaignLimit;                   //@synthesize overrideCampaignLimit=_overrideCampaignLimit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)campaignId;
-(void)setCampaignId:(NSNumber *)arg1 ;
-(NSNumber *)timestamp;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(void)setAdNetworkId:(NSString *)arg1 ;
-(void)setImpressionId:(NSString *)arg1 ;
-(NSNumber *)sourceAppAdamId;
-(void)setSourceAppAdamId:(NSNumber *)arg1 ;
-(void)setAttributionSignature:(NSString *)arg1 ;
-(void)setOverrideCampaignLimit:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)adNetworkId;
-(NSString *)impressionId;
-(NSString *)attributionSignature;
-(BOOL)overrideCampaignLimit;
-(NSNumber *)appAdamId;
-(NSString *)sourceAppBundleId;
-(void)setSourceAppBundleId:(NSString *)arg1 ;
-(void)setAppAdamId:(NSNumber *)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
