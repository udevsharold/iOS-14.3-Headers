/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCDeviceUploadUser : NSObject <NSSecureCoding> {

	NSString* _dsid;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * dsid;              //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)dsid;
-(id)initWithDsid:(id)arg1 name:(id)arg2 ;
-(id)initWithApproverDict:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
@end

