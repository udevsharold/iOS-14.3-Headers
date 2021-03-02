/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class CRKCourseInvitation;

@interface CRKJoinControlGroupRequest : CATTaskRequest {

	CRKCourseInvitation* _invitation;

}

@property (nonatomic,retain) CRKCourseInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvitation:(CRKCourseInvitation *)arg1 ;
-(CRKCourseInvitation *)invitation;
-(void)encodeWithCoder:(id)arg1 ;
@end
