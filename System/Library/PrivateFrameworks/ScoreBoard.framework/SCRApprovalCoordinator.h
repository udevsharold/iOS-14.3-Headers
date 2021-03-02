/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScoreBoard/ScoreBoard-Structs.h>
@class SCRTaskAdministrator, SCRCompositeGovernor;

@interface SCRApprovalCoordinator : NSObject {

	os_unfair_lock_s _lock;
	SCRTaskAdministrator* _administrator;
	SCRCompositeGovernor* _compositeGovernor;

}
-(BOOL)getApprovalForTask:(id)arg1 error:(id*)arg2 ;
-(void)addGovernor:(id)arg1 ;
-(void)didCompleteTask:(id)arg1 withError:(id)arg2 ;
-(void)removeGovernor:(id)arg1 ;
-(id)initWithAdministrator:(id)arg1 ;
@end
