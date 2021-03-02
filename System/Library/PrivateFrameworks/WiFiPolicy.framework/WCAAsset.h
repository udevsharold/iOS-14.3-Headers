/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ASAsset;

@interface WCAAsset : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _extension;
	unsigned long long _latestInstalledVersion;
	ASAsset* _latestInstalledAsset;
	unsigned long long _installedAssetVersion;
	unsigned long long _latestNotInstalledVersion;
	ASAsset* _latestNotInstalledAsset;

}

@property (assign) unsigned long long latestInstalledVersion;                 //@synthesize latestInstalledVersion=_latestInstalledVersion - In the implementation block
@property (nonatomic,retain) ASAsset * latestInstalledAsset;                  //@synthesize latestInstalledAsset=_latestInstalledAsset - In the implementation block
@property (assign) unsigned long long installedAssetVersion;                  //@synthesize installedAssetVersion=_installedAssetVersion - In the implementation block
@property (assign) unsigned long long latestNotInstalledVersion;              //@synthesize latestNotInstalledVersion=_latestNotInstalledVersion - In the implementation block
@property (nonatomic,retain) ASAsset * latestNotInstalledAsset;               //@synthesize latestNotInstalledAsset=_latestNotInstalledAsset - In the implementation block
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * extension;                            //@synthesize extension=_extension - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)assetWithName:(id)arg1 andExtension:(id)arg2 ;
+(id)wifiBehaviorPlistAsset;
+(id)beaconsDataAsset;
-(NSString *)extension;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(ASAsset *)latestInstalledAsset;
-(id)localInstalledURL;
-(unsigned long long)latestInstalledVersion;
-(void)setLatestInstalledVersion:(unsigned long long)arg1 ;
-(void)setLatestInstalledAsset:(ASAsset *)arg1 ;
-(unsigned long long)installedAssetVersion;
-(void)setInstalledAssetVersion:(unsigned long long)arg1 ;
-(unsigned long long)latestNotInstalledVersion;
-(void)setLatestNotInstalledVersion:(unsigned long long)arg1 ;
-(ASAsset *)latestNotInstalledAsset;
-(void)setLatestNotInstalledAsset:(ASAsset *)arg1 ;
@end
