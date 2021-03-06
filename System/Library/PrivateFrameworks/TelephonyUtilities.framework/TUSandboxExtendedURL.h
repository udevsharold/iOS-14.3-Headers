/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding> {

	NSString* _sandboxExtensionClass;
	NSURL* _URL;
	NSString* _sandboxExtensionToken;
	long long _sandboxExtensionHandle;

}

@property (nonatomic,retain) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionToken;                //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (assign,nonatomic) long long sandboxExtensionHandle;              //@synthesize sandboxExtensionHandle=_sandboxExtensionHandle - In the implementation block
@property (nonatomic,copy) NSString * sandboxExtensionClass;                //@synthesize sandboxExtensionClass=_sandboxExtensionClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)sandboxExtensionHandle;
-(id)init;
-(void)setSandboxExtensionToken:(NSString *)arg1 ;
-(NSString *)sandboxExtensionToken;
-(void)setURL:(NSURL *)arg1 ;
-(void)dealloc;
-(NSString *)sandboxExtensionClass;
-(BOOL)isEqualToSandboxExtendedURL:(id)arg1 ;
-(void)setSandboxExtensionClass:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSURL *)URL;
-(void)setSandboxExtensionHandle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

