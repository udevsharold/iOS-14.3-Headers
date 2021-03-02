/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMDAChangedIdentifierResult.h>

@class NSUUID, NSString;

@interface REMDAAssignmentTombstone : NSObject <REMDAChangedIdentifierResult> {

	NSUUID* _objectIdentifier;
	NSUUID* _owningReminderIdentifier;

}

@property (nonatomic,retain) NSUUID * objectIdentifier;                      //@synthesize objectIdentifier=_objectIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * owningReminderIdentifier;              //@synthesize owningReminderIdentifier=_owningReminderIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObjectIdentifier:(NSUUID *)arg1 ;
-(NSString *)description;
-(NSUUID *)objectIdentifier;
-(NSUUID *)owningReminderIdentifier;
-(void)setOwningReminderIdentifier:(NSUUID *)arg1 ;
@end
