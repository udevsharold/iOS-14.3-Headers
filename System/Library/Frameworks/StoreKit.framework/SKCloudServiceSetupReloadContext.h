/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSURL, NSString, NSArray;

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _userInfo;
	NSURL* _cloudServiceSetupURL;
	NSString* _action;
	NSArray* _queryItems;
	NSString* _sourceApplicationBundleIdentifier;
	NSURL* _referrerURL;
	NSString* _serializedUserInfo;

}

@property (nonatomic,copy,readonly) NSString * serializedUserInfo;                    //@synthesize serializedUserInfo=_serializedUserInfo - In the implementation block
@property (nonatomic,retain) NSURL * cloudServiceSetupURL;                            //@synthesize cloudServiceSetupURL=_cloudServiceSetupURL - In the implementation block
@property (nonatomic,copy) NSString * action;                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSArray * queryItems;                                      //@synthesize queryItems=_queryItems - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;              //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * referrerURL;                                     //@synthesize referrerURL=_referrerURL - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQueryItems:(NSArray *)arg1 ;
-(void)setReferrerURL:(NSURL *)arg1 ;
-(NSArray *)queryItems;
-(NSDictionary *)userInfo;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setAction:(NSString *)arg1 ;
-(id)description;
-(NSURL *)referrerURL;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)action;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)cloudServiceSetupURL;
-(void)setCloudServiceSetupURL:(NSURL *)arg1 ;
-(NSString *)serializedUserInfo;
@end
