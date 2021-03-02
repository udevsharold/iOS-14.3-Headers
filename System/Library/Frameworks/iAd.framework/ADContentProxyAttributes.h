/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface ADContentProxyAttributes : NSObject {

	NSURL* _contentProxyURL;
	NSURL* _contentProxyURLConnect;
	long long _proxyType;
	NSString* _configVersion;

}

@property (nonatomic,copy) NSURL * contentProxyURL;                     //@synthesize contentProxyURL=_contentProxyURL - In the implementation block
@property (nonatomic,copy) NSURL * contentProxyURLConnect;              //@synthesize contentProxyURLConnect=_contentProxyURLConnect - In the implementation block
@property (nonatomic,copy) NSString * configVersion;                    //@synthesize configVersion=_configVersion - In the implementation block
@property (assign,nonatomic) long long proxyType;                       //@synthesize proxyType=_proxyType - In the implementation block
+(id)sharedInstance;
-(NSURL *)contentProxyURL;
-(void)setConfigVersion:(NSString *)arg1 ;
-(void)contentProxyURLConnectDidChange:(id)arg1 ;
-(void)setProxyType:(long long)arg1 ;
-(void)setContentProxyURLConnect:(NSURL *)arg1 ;
-(NSURL *)contentProxyURLConnect;
-(void)proxyTypeDidChange:(long long)arg1 ;
-(void)configVersionDidChange:(id)arg1 ;
-(void)contentProxyURLDidChange:(id)arg1 ;
-(NSString *)configVersion;
-(long long)proxyType;
-(void)setContentProxyURL:(NSURL *)arg1 ;
@end
