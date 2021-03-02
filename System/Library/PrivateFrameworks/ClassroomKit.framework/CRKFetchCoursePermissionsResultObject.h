/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject {

	NSDictionary* _permissionsByFeature;

}

@property (nonatomic,copy) NSDictionary * permissionsByFeature;              //@synthesize permissionsByFeature=_permissionsByFeature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)permissionsByFeature;
-(void)setPermissionsByFeature:(NSDictionary *)arg1 ;
@end
