/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKDumpIDSInfoResultObject : CATTaskResultObject {

	NSDictionary* _info;

}

@property (nonatomic,copy,readonly) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)info;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

