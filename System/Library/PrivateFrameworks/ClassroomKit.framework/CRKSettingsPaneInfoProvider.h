/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSSet, NSDictionary;


@protocol CRKSettingsPaneInfoProvider <NSObject>
@property (nonatomic,copy,readonly) NSArray * courses; 
@property (nonatomic,copy,readonly) NSArray * courseInvitations; 
@property (nonatomic,copy,readonly) NSSet * acceptedInvitationIdentifiers; 
@property (nonatomic,readonly) NSDictionary * observingInstructorIdentifiersByCourseIdentifiers; 
@required
-(NSArray *)courses;
-(NSArray *)courseInvitations;
-(NSSet *)acceptedInvitationIdentifiers;
-(NSDictionary *)observingInstructorIdentifiersByCourseIdentifiers;

@end
