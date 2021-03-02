/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKTransactionalComponentDataSourceStateModifying.h>

@protocol CKComponentStateListener;
@class NSDictionary, CKTransactionalComponentDataSourceChangeset, NSString;

@interface CKTransactionalComponentDataSourceChangesetModification : NSObject <CKTransactionalComponentDataSourceStateModifying> {

	id<CKComponentStateListener> _stateListener;
	NSDictionary* _userInfo;
	CKTransactionalComponentDataSourceChangeset* _changeset;

}

@property (nonatomic,readonly) CKTransactionalComponentDataSourceChangeset * changeset;              //@synthesize changeset=_changeset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)changeFromState:(id)arg1 ;
-(id)initWithChangeset:(id)arg1 stateListener:(id)arg2 userInfo:(id)arg3 ;
-(CKTransactionalComponentDataSourceChangeset *)changeset;
@end
