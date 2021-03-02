/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchCoursesResultObject : CATTaskResultObject {

	NSArray* _courses;

}

@property (nonatomic,copy) NSArray * courses;              //@synthesize courses=_courses - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)courses;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCourses:(NSArray *)arg1 ;
@end
