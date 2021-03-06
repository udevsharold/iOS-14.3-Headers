/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRKCertificatesRequestResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _validRequest;
	NSArray* _certificateDataCollection;

}

@property (getter=isValidRequest,nonatomic,readonly) BOOL validRequest;               //@synthesize validRequest=_validRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * certificateDataCollection;              //@synthesize certificateDataCollection=_certificateDataCollection - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)invalidResult;
+(id)resultWithCertificateDataCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToResult:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValidRequest;
-(NSArray *)certificateDataCollection;
-(id)initWithIsValidRequest:(BOOL)arg1 certificateDataCollection:(id)arg2 ;
@end

