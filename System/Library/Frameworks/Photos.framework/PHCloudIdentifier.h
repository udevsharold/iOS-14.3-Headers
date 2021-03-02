/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PHCloudIdentifier : NSObject <NSSecureCoding> {

	NSString* _localCloudIdentifier;
	NSString* _identifierCode;

}

@property (nonatomic,readonly) NSString * localCloudIdentifier;              //@synthesize localCloudIdentifier=_localCloudIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * identifierCode;                    //@synthesize identifierCode=_identifierCode - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
+(BOOL)supportsSecureCoding;
+(id)notFoundIdentifier;
-(NSString *)stringValue;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithStringValue:(id)arg1 ;
-(id)initWithLocalCloudIdentifier:(id)arg1 identifierCode:(id)arg2 ;
-(id)initAsNotFoundIdentifier;
-(NSString *)localCloudIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)identifierCode;
-(void)encodeWithCoder:(id)arg1 ;
@end
