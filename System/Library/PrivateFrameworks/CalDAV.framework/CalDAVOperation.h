/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@protocol CalDAVPrincipal;
@class NSMutableSet;

@interface CalDAVOperation : CoreDAVTaskGroup {

	BOOL _isCancellingTaskGroups;
	id<CalDAVPrincipal> _principal;
	NSMutableSet* _outstandingTaskGroups;

}

@property (nonatomic,retain) id<CalDAVPrincipal> principal;                     //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) NSMutableSet * outstandingTaskGroups;              //@synthesize outstandingTaskGroups=_outstandingTaskGroups - In the implementation block
-(id)init;
-(void)setOutstandingTaskGroups:(NSMutableSet *)arg1 ;
-(NSMutableSet *)outstandingTaskGroups;
-(id)initWithPrincipal:(id)arg1 ;
-(void)dealloc;
-(void)setPrincipal:(id<CalDAVPrincipal>)arg1 ;
-(id<CalDAVPrincipal>)principal;
-(void)cancelTaskGroup;
-(void)bailWithError:(id)arg1 ;
-(void)_tearDownAllTaskGroupsWithBlock:(/*^block*/id)arg1 ;
@end
