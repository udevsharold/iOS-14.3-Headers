/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding> {

	NSString* _uniqueIdentifier;
	NSString* _domainGroupName;
	NSString* _domainName;
	NSString* _settingsClassName;
	NSString* _settingsFrameworkBundlePath;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSString * domainGroupName;                          //@synthesize domainGroupName=_domainGroupName - In the implementation block
@property (nonatomic,readonly) NSString * domainName;                               //@synthesize domainName=_domainName - In the implementation block
@property (nonatomic,readonly) NSString * settingsClassName;                        //@synthesize settingsClassName=_settingsClassName - In the implementation block
@property (nonatomic,readonly) NSString * settingsFrameworkBundlePath;              //@synthesize settingsFrameworkBundlePath=_settingsFrameworkBundlePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)domainName;
-(NSString *)settingsFrameworkBundlePath;
-(id)initWithDomain:(id)arg1 ;
-(NSString *)settingsClassName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)domainGroupName;
@end
