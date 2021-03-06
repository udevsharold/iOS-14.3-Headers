/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKFetchBooksRequest : CATTaskRequest {

	BOOL _includeImages;

}

@property (assign,nonatomic) BOOL includeImages;              //@synthesize includeImages=_includeImages - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(BOOL)isValidWithError:(id*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)includeImages;
-(void)setIncludeImages:(BOOL)arg1 ;
@end

