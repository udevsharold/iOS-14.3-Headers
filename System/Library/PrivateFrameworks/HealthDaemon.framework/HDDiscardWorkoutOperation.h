/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSUUID;

@interface HDDiscardWorkoutOperation : HDJournalableOperation {

	NSUUID* _builderIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * builderIdentifier;              //@synthesize builderIdentifier=_builderIdentifier - In the implementation block
-(NSUUID *)builderIdentifier;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)initWithBuilderIdentifier:(id)arg1 ;
@end
