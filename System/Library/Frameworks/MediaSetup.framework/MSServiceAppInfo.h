/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface MSServiceAppInfo : NSObject <NSSecureCoding> {

	NSString* _serviceName;
	NSString* _serviceBundleID;
	NSArray* _alternateBundleIDS;

}

@property (nonatomic,copy,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceBundleID;              //@synthesize serviceBundleID=_serviceBundleID - In the implementation block
@property (nonatomic,retain) NSArray * alternateBundleIDS;                   //@synthesize alternateBundleIDS=_alternateBundleIDS - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 serviceBundleID:(id)arg2 ;
-(NSString *)serviceBundleID;
-(NSArray *)alternateBundleIDS;
-(void)setAlternateBundleIDS:(NSArray *)arg1 ;
@end

