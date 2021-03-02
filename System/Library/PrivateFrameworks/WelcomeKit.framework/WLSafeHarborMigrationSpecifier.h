/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLSafeHarborMigrationSpecifier : NSObject <NSSecureCoding> {

	NSString* _bundleID;
	NSString* _contentType;
	NSString* _dataType;

}

@property (nonatomic,copy) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,copy) NSString * dataType;                 //@synthesize dataType=_dataType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)dataType;
-(void)setDataType:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)contentType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 contentType:(id)arg2 dataType:(id)arg3 ;
@end
